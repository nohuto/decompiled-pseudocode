/*
 * XREFs of ?HampUserTryRefreshContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z @ 0x1800406A4
 * Callers:
 *     ?HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180027B40 (-HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUserTryGetContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z @ 0x18003A940 (-HampUserTryGetContextToken@@YAJPEAU_HAM_USER@@PEA_K@Z.c)
 * Callees:
 *     _TlgCreateSid @ 0x180017F20 (_TlgCreateSid.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?HampUserReleaseLockExclusive@@YAXPEAU_HAM_USER@@@Z @ 0x180040820 (-HampUserReleaseLockExclusive@@YAXPEAU_HAM_USER@@@Z.c)
 *     ?HampUserAcquireLockExclusive@@YAXPEAU_HAM_USER@@@Z @ 0x180040854 (-HampUserAcquireLockExclusive@@YAXPEAU_HAM_USER@@@Z.c)
 *     ?HampSystemQueryUserContextToken@@YAJKPEAXPEA_K@Z @ 0x180040890 (-HampSystemQueryUserContextToken@@YAJKPEAXPEA_K@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall HampUserTryRefreshContextToken(struct _HAM_USER *a1, unsigned __int64 *a2)
{
  unsigned int v4; // r14d
  __int64 v5; // rax
  unsigned int v6; // r9d
  unsigned __int64 v7; // rax
  int v8; // r10d
  int v9; // r11d
  int v11; // [rsp+30h] [rbp-59h] BYREF
  unsigned int v12; // [rsp+34h] [rbp-55h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-51h] BYREF
  __int64 v14; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-39h] BYREF
  int *v16; // [rsp+70h] [rbp-19h]
  int v17; // [rsp+78h] [rbp-11h]
  int v18; // [rsp+7Ch] [rbp-Dh]
  unsigned int *v19; // [rsp+80h] [rbp-9h]
  int v20; // [rsp+88h] [rbp-1h]
  int v21; // [rsp+8Ch] [rbp+3h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp+7h] BYREF
  unsigned __int64 *v23; // [rsp+A0h] [rbp+17h]
  int v24; // [rsp+A8h] [rbp+1Fh]
  int v25; // [rsp+ACh] [rbp+23h]
  __int64 *v26; // [rsp+B0h] [rbp+27h]
  int v27; // [rsp+B8h] [rbp+2Fh]
  int v28; // [rsp+BCh] [rbp+33h]

  v4 = *(_DWORD *)(*((_QWORD *)a1 + 20) + 88LL);
  HampUserAcquireLockExclusive(a1);
  v5 = *((_QWORD *)a1 + 23);
  while ( 1 )
  {
    v14 = v5;
    HampUserReleaseLockExclusive(a1);
    v11 = HampSystemQueryUserContextToken(v4, (char *)a1 + 88, &v13);
    v6 = v11;
    if ( v11 < 0 )
      break;
    HampUserAcquireLockExclusive(a1);
    v5 = *((_QWORD *)a1 + 23);
    if ( v14 == v5 )
    {
      v7 = v13;
      *((_DWORD *)a1 + 48) |= 2u;
      *((_QWORD *)a1 + 23) = v7;
      HampUserReleaseLockExclusive(a1);
      v6 = 0;
      *a2 = v13;
      v11 = 0;
      break;
    }
  }
  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
  {
    v18 = 0;
    v21 = 0;
    v16 = &v11;
    v17 = v8;
    v19 = &v12;
    v12 = v4;
    v20 = v8;
    TlgCreateSid(&pDesc, (const SID *)((char *)a1 + 88));
    v25 = 0;
    v28 = 0;
    v26 = &v14;
    v23 = a2;
    v24 = v9;
    v27 = v9;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180099D0A, 0LL, 0LL, 7u, &pData);
    return (unsigned int)v11;
  }
  return v6;
}
