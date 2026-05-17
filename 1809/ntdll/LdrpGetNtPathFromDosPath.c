/*
 * XREFs of LdrpGetNtPathFromDosPath @ 0x180029D7C
 * Callers:
 *     LdrpResolveDllName @ 0x180029BD8 (LdrpResolveDllName.c)
 *     LdrpMapDllRetry @ 0x180071958 (LdrpMapDllRetry.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800178B0 (NtdllpFreeStringRoutine.c)
 *     RtlDosPathNameToRelativeNtPathName @ 0x18002A538 (RtlDosPathNameToRelativeNtPathName.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x1800A0A80 (ZwQueryAttributesFile.c)
 */

__int64 __fastcall LdrpGetNtPathFromDosPath(int a1, __int64 a2)
{
  int v2; // r8d
  __int64 result; // rax
  int v5; // eax
  __int64 v6; // rcx
  __int128 v7; // xmm0
  __int128 *v8; // [rsp+40h] [rbp-39h] BYREF
  __int128 v9; // [rsp+48h] [rbp-31h] BYREF
  int v10; // [rsp+58h] [rbp-21h] BYREF
  __int64 v11; // [rsp+60h] [rbp-19h]
  __int64 v12; // [rsp+68h] [rbp-11h]
  int v13; // [rsp+70h] [rbp-9h]
  __int128 v14; // [rsp+78h] [rbp-1h]
  _BYTE v15[40]; // [rsp+88h] [rbp+Fh] BYREF

  v2 = a1;
  LOBYTE(a1) = 1;
  result = RtlDosPathNameToRelativeNtPathName(a1, a2, v2, a2, (__int64)&v9, (__int64)&v8);
  if ( (int)result >= 0 )
  {
    if ( v8 == &v9 )
    {
      v6 = *(_QWORD *)(a2 + 8);
      if ( a2 + 16 != v6 )
        NtdllpFreeStringRoutine(v6);
      v7 = v9;
      *(_DWORD *)a2 = 0x1000000;
      *(_WORD *)(a2 + 16) = 0;
      *(_OWORD *)a2 = v7;
    }
    v5 = 64;
    v10 = 48;
    v11 = 0LL;
    if ( !LdrpUseImpersonatedDeviceMap )
      v5 = 2112;
    v12 = a2;
    v13 = v5;
    v14 = 0LL;
    return ZwQueryAttributesFile(&v10, v15);
  }
  return result;
}
