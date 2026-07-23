/*
 * XREFs of EtwpCovSampModuleGetName @ 0x1408C8014
 * Callers:
 *     EtwpCovSampContextGetModule @ 0x1408C6144 (EtwpCovSampContextGetModule.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     RtlDuplicateUnicodeString @ 0x1406D4EA0 (RtlDuplicateUnicodeString.c)
 */

__int64 __fastcall EtwpCovSampModuleGetName(__int64 a1, __int64 a2, const UNICODE_STRING *a3)
{
  __int64 v4; // rcx
  NTSTATUS v6; // edi
  __int64 v7; // rax
  wchar_t *Buffer; // rcx
  UNICODE_STRING StringOut; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int16 v11; // [rsp+40h] [rbp-10h] BYREF
  __int64 v12; // [rsp+48h] [rbp-8h]
  __int64 v13; // [rsp+68h] [rbp+18h] BYREF

  v13 = 0LL;
  v4 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)&StringOut.Length = 0LL;
  StringOut.Buffer = 0LL;
  if ( v4
    && FltMgrCallbacks
    && (*(int (__fastcall **)(__int64, __int64, unsigned __int16 *, __int64 *))(FltMgrCallbacks + 24))(
         v4,
         512LL,
         &v11,
         &v13) >= 0 )
  {
    v6 = 0;
    *(_QWORD *)(a1 + 112) = v12;
    *(_WORD *)(a1 + 120) = v11 >> 1;
    v7 = v13 | 1;
    v13 = 0LL;
    *(_QWORD *)(a1 + 104) = v7;
  }
  else
  {
    if ( a3 && a3->Length )
    {
      v6 = RtlDuplicateUnicodeString(0, a3, &StringOut);
      if ( v6 >= 0 )
      {
        v6 = 0;
        Buffer = StringOut.Buffer;
        *(_WORD *)(a1 + 120) = StringOut.Length >> 1;
        *(_QWORD *)&StringOut.Length = 0LL;
        StringOut.Buffer = 0LL;
        *(_QWORD *)(a1 + 112) = Buffer;
        *(_QWORD *)(a1 + 104) = Buffer;
      }
    }
    else
    {
      v6 = -1073741275;
    }
    if ( v13 )
      (*(void (**)(void))(FltMgrCallbacks + 32))();
  }
  RtlFreeAnsiString(&StringOut);
  return (unsigned int)v6;
}
