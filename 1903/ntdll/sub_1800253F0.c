/*
 * XREFs of sub_1800253F0 @ 0x1800253F0
 * Callers:
 *     sub_180025240 @ 0x180025240 (sub_180025240.c)
 * Callees:
 *     sub_1800255A8 @ 0x1800255A8 (sub_1800255A8.c)
 *     sub_180025600 @ 0x180025600 (sub_180025600.c)
 *     sub_180025714 @ 0x180025714 (sub_180025714.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800263C0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sub_180029974 @ 0x180029974 (sub_180029974.c)
 *     sub_18002E1A4 @ 0x18002E1A4 (sub_18002E1A4.c)
 */

__int64 __fastcall sub_1800253F0(__int64 a1, _UNICODE_STRING *a2, __int64 a3, _UNICODE_STRING *a4, _BYTE *a5)
{
  struct _PEB *v5; // r13
  _BYTE *v7; // r12
  _UNICODE_STRING *v9; // rbp
  PAPI_SET_NAMESPACE ApiSetMap; // rdi
  char v11; // si
  int v12; // eax
  __int16 v13; // di
  int v14; // ebx
  char v15; // r15
  unsigned __int16 v16; // ax
  NTSTATUS v17; // edi
  PRTL_USER_PROCESS_PARAMETERS ProcessParameters; // rax
  _WORD v20[8]; // [rsp+50h] [rbp-48h] BYREF
  _UNICODE_STRING DynamicString; // [rsp+60h] [rbp-38h] BYREF
  __int64 v22; // [rsp+B0h] [rbp+18h] BYREF

  v22 = a3;
  v5 = NtCurrentPeb();
  v7 = a5;
  v9 = a2;
  ApiSetMap = v5->ApiSetMap;
  v11 = 1;
  *a5 = 0;
  sub_1800255A8(0LL, a2, 5328LL);
  v12 = sub_180025600((_DWORD)ApiSetMap, (_DWORD)v9, a1 != 0 ? a1 + 88 : 0, (unsigned int)&v22, (__int64)v20);
  v13 = v20[0];
  v14 = v12;
  v15 = v22;
  if ( v12 >= 0 && (_BYTE)v22 )
  {
    if ( v20[0] )
      v16 = 5329;
    else
      v16 = 5330;
  }
  else
  {
    v16 = 5331;
  }
  sub_1800255A8(0LL, v9, v16);
  if ( v15 )
  {
    if ( !v13 )
      return (unsigned int)-1073740671;
    v14 = sub_180025714(a4, v20);
    if ( v14 >= 0 )
    {
      ProcessParameters = v5->ProcessParameters;
      if ( !ProcessParameters || (v11 = 1, (ProcessParameters->Flags & 0x1000) == 0) )
        v11 = 0;
      v9 = a4;
    }
  }
  if ( v14 >= 0 && v11 && !byte_180165430 )
  {
    v17 = RtlDosApplyFileIsolationRedirection_Ustr(
            1u,
            v9,
            (PUNICODE_STRING)&Extension,
            0LL,
            &DynamicString,
            0LL,
            0LL,
            0LL,
            0LL);
    if ( v17 >= 0 )
    {
      *v7 = 1;
      sub_180029974(&DynamicString, a4);
      sub_18002E1A4(&DynamicString);
    }
    if ( v17 != -1072365560 )
      return (unsigned int)v17;
  }
  return (unsigned int)v14;
}
