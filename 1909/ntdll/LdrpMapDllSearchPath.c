/*
 * XREFs of LdrpMapDllSearchPath @ 0x18002DEC8
 * Callers:
 *     LdrpProcessWork @ 0x18002E26C (LdrpProcessWork.c)
 *     LdrpLoadEnclaveModule @ 0x1800CE128 (LdrpLoadEnclaveModule.c)
 * Callees:
 *     LdrpInitializeDllPath @ 0x180021798 (LdrpInitializeDllPath.c)
 *     LdrpHashUnicodeString @ 0x18002952C (LdrpHashUnicodeString.c)
 *     LdrpMapDllNtFileName @ 0x18002D3B4 (LdrpMapDllNtFileName.c)
 *     LdrpSearchPath @ 0x18002D8FC (LdrpSearchPath.c)
 *     LdrpIsSecurityEtwLoggingEnabled @ 0x18002DE68 (LdrpIsSecurityEtwLoggingEnabled.c)
 *     LdrpFreeUnicodeString @ 0x18002E1A4 (LdrpFreeUnicodeString.c)
 *     LdrpAppCompatRedirect @ 0x18002E5E8 (LdrpAppCompatRedirect.c)
 *     LdrpFindExistingModule @ 0x18002E6A0 (LdrpFindExistingModule.c)
 *     RtlReleasePath @ 0x180032330 (RtlReleasePath.c)
 *     NtdllpFreeStringRoutine @ 0x18006D930 (NtdllpFreeStringRoutine.c)
 *     LdrpLoadContextReplaceModule @ 0x180070A98 (LdrpLoadContextReplaceModule.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     LdrpLogEtwDllSearchResults @ 0x1800CF854 (LdrpLogEtwDllSearchResults.c)
 */

__int64 __fastcall LdrpMapDllSearchPath(__int64 a1)
{
  __int64 v1; // r9
  __int64 v2; // rsi
  int v4; // r14d
  __int64 v5; // r8
  __int64 *v6; // r15
  int v7; // eax
  __int64 v8; // rcx
  int ExistingModule; // ebx
  int v10; // eax
  __int128 v11; // xmm1
  bool v13; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v14; // [rsp+54h] [rbp-ACh] BYREF
  __int128 v15; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+68h] [rbp-98h] BYREF
  __int128 v17; // [rsp+70h] [rbp-90h] BYREF
  __int16 *v18[2]; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v19; // [rsp+90h] [rbp-70h] BYREF
  _WORD v20[128]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v21[15]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v22; // [rsp+21Ch] [rbp+11Ch]

  v1 = *(_QWORD *)(a1 + 48);
  v2 = *(_QWORD *)(a1 + 56);
  v18[0] = 0LL;
  v18[1] = 0LL;
  v4 = 0;
  v16 = 0LL;
  v19.Buffer = v20;
  v13 = 0;
  *(_DWORD *)&v19.Length = 0x1000000;
  v20[0] = 0;
  v15 = 0uLL;
  v14 = 0;
  if ( v1 && (v5 = *(unsigned int *)(v1 + 280), (((LdrpPolicyBits & 4) != 0 ? 32512 : 31488) & (unsigned int)v5) != 0) )
  {
    LdrpInitializeDllPath(*(_QWORD *)(v1 + 80), v5 & ((-(__int64)((LdrpPolicyBits & 4) != 0) & 0x400) + 31488) | 1, v21);
    v6 = v21;
  }
  else
  {
    LdrpInitializeDllPath(0LL, 0LL, v21);
    v6 = *(__int64 **)(a1 + 16);
  }
  while ( 1 )
  {
    v7 = LdrpSearchPath(
           (__int16 *)a1,
           (__int64)v6,
           (*(_DWORD *)(a1 + 32) & 8) != 0,
           v18,
           &v19,
           (__int64)&v17,
           (unsigned __int16 *)&v15,
           &v13,
           (__int64)&v14);
    ExistingModule = v7;
    if ( v13 )
      *(_DWORD *)(v2 + 104) |= 1u;
    if ( v7 == -1073741515 )
      break;
    if ( v7 < 0 )
      goto LABEL_14;
LABEL_8:
    v4 = 1;
    if ( !*(_QWORD *)(a1 + 168) )
    {
      ExistingModule = LdrpAppCompatRedirect(a1, (unsigned int)&v15, (unsigned int)&v17, (unsigned int)&v19, v7);
      if ( ExistingModule < 0 )
        goto LABEL_14;
      if ( (*(_DWORD *)(a1 + 32) & 0x10000) != 0 )
        v14 |= 1u;
      v10 = LdrpHashUnicodeString((unsigned __int16 *)&v17);
      *(_DWORD *)(v2 + 264) = v10;
      ExistingModule = LdrpFindExistingModule(
                         (unsigned int)&v17,
                         (unsigned int)&v15,
                         *(_DWORD *)(a1 + 32),
                         v10,
                         (__int64)&v16);
      if ( ExistingModule != -1073741515 )
        goto LABEL_14;
    }
    LdrpFreeUnicodeString(v2 + 72);
    v11 = v17;
    *(_OWORD *)(v2 + 72) = v15;
    *(_OWORD *)(v2 + 88) = v11;
    v15 = 0uLL;
    ExistingModule = LdrpMapDllNtFileName(a1, &v19);
    if ( ExistingModule != 1073741838 )
      goto LABEL_14;
    if ( v20 != v19.Buffer )
      NtdllpFreeStringRoutine(v19.Buffer);
    *(_DWORD *)&v19.Length = 0x1000000;
    v19.Buffer = v20;
    v20[0] = 0;
  }
  if ( !v4 )
    goto LABEL_8;
  ExistingModule = -1073741701;
LABEL_14:
  if ( v16 )
  {
    LdrpLoadContextReplaceModule(a1);
  }
  else if ( LdrpIsSecurityEtwLoggingEnabled(v8) )
  {
    LdrpLogEtwDllSearchResults(v14, a1);
  }
  if ( v20 != v19.Buffer )
    NtdllpFreeStringRoutine(v19.Buffer);
  *(_DWORD *)&v19.Length = 0x1000000;
  v19.Buffer = v20;
  v20[0] = 0;
  LdrpFreeUnicodeString(&v15);
  if ( v22 )
    RtlReleasePath(v21[0]);
  return (unsigned int)ExistingModule;
}
