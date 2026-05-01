/*
 * XREFs of ?HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002DF20
 * Callers:
 *     ?RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002DBF8 (-RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18000A0F8 (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18000A144 (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000CA50 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x18000CB60 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000E910 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180011FDC (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180015E08 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     _TlgCreateSid @ 0x180017BB0 (_TlgCreateSid.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     ?HampDepGroupRemoveHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002E16C (-HampDepGroupRemoveHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupInvalidateDependency@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18002F914 (-HampDepGroupInvalidateDependency@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

void __fastcall HampHostRundown(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r9
  int v4; // r10d
  UINT32 cData; // r10d
  __int64 v6; // rcx
  struct _HAM_HOST_DEPENDENCY *v7; // rcx
  struct _HAM_DEPENDENCY_GROUP *v8; // rcx
  __int64 v9; // rsi
  char *v10; // rcx
  __int64 v11; // rax
  char **v12; // rdx
  __int64 v13; // rcx
  char v15; // [rsp+38h] [rbp-49h] BYREF
  int v16; // [rsp+3Ch] [rbp-45h] BYREF
  __int64 v17; // [rsp+40h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+68h] [rbp-19h] BYREF
  __int64 *v20; // [rsp+78h] [rbp-9h]
  int v21; // [rsp+80h] [rbp-1h]
  int v22; // [rsp+84h] [rbp+3h]
  char *v23; // [rsp+88h] [rbp+7h]
  int v24; // [rsp+90h] [rbp+Fh]
  int v25; // [rsp+94h] [rbp+13h]
  int *v26; // [rsp+98h] [rbp+17h]
  int v27; // [rsp+A0h] [rbp+1Fh]
  int v28; // [rsp+A4h] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+A8h] [rbp+27h] BYREF
  char *v30; // [rsp+B8h] [rbp+37h]
  UINT32 v31; // [rsp+C0h] [rbp+3Fh]
  int v32; // [rsp+C4h] [rbp+43h]

  v2 = *((_QWORD *)a1 + 94);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
  {
    TlgCreateWsz(&pDesc, (LPCWSTR)a1 + 12);
    v3 = *((_QWORD *)a1 - 4);
    v22 = 0;
    v25 = 0;
    v28 = 0;
    v20 = &v17;
    v15 = *((_BYTE *)a1 + 560);
    v23 = &v15;
    v16 = *((_DWORD *)a1 + 139);
    v26 = &v16;
    v17 = v3;
    v21 = v4;
    v24 = 1;
    v27 = 4;
    TlgCreateSid(&v29, (const SID *)((char *)a1 + 488));
    v32 = 0;
    v30 = (char *)a1 + 776;
    v31 = cData;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008A9FF, 0LL, 0LL, cData, &pData);
  }
  if ( (*((_BYTE *)a1 + 748) & 1) != 0 )
  {
    HampHostAcquireLockExclusiveEx(a1, 0);
    *((_QWORD *)a1 + 79) |= 0x200000000000000uLL;
    HampHostReleaseLockExclusiveEx(a1);
    v6 = *((_QWORD *)a1 + 100);
    if ( v6 )
      TpWaitForTimer(v6, 1LL);
  }
  v7 = (struct _HAM_HOST_DEPENDENCY *)*((_QWORD *)a1 + 84);
  if ( v7 )
    HampDepGroupInvalidateDependency(v7);
  v8 = (struct _HAM_DEPENDENCY_GROUP *)*((_QWORD *)a1 + 83);
  if ( v8 )
    HampDepGroupRemoveHost(v8, a1);
  if ( v2 )
  {
    v9 = *(_QWORD *)(v2 + 88);
    if ( a1 == *(struct _RM_HAM_ACTIVITY_HOST **)(v9 + 328) )
    {
      HampPkgAcquireLockExclusive(*(struct _HAM_PACKAGE **)(v2 + 88));
      *(_QWORD *)(v9 + 328) = 0LL;
      HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v9);
    }
    HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)v2);
    v10 = (char *)a1 + 784;
    v11 = *((_QWORD *)a1 + 98);
    if ( v11 )
    {
      if ( *(char **)(v11 + 8) != v10 || (v12 = (char **)*((_QWORD *)a1 + 99), *v12 != v10) )
        __fastfail(3u);
      *v12 = (char *)v11;
      *(_QWORD *)(v11 + 8) = v12;
    }
    if ( a1 == *(struct _RM_HAM_ACTIVITY_HOST **)(v2 + 568) )
      *(_QWORD *)(v2 + 568) = 0LL;
    HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v2);
  }
  v13 = *((_QWORD *)a1 + 95);
  if ( v13 )
  {
    if ( (*(_QWORD *)(v13 + 576))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v13 - 64));
  }
}
