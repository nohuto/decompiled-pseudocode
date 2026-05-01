/*
 * XREFs of ?HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000BA74
 * Callers:
 *     ?RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000B78C (-RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampDepGroupInvalidateDependency@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x180007DB0 (-HampDepGroupInvalidateDependency@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     ?HampDepGroupRemoveHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000AB68 (-HampDepGroupRemoveHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CempListEntryIsNull @ 0x18000C754 (CempListEntryIsNull.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180012CCC (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180013024 (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180013534 (-HampAppReleaseLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z @ 0x180013580 (-HampAppAcquireLockExclusive@@YAXPEAU_HAM_APPLICATION@@@Z.c)
 *     _TlgCreateSid @ 0x180017F20 (_TlgCreateSid.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019A68 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180030170 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800370A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

void __fastcall HampHostRundown(struct _RM_HAM_ACTIVITY_HOST *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  int v5; // r9d
  UINT32 cData; // r9d
  unsigned int v7; // edx
  __int64 v8; // rcx
  struct _HAM_HOST_DEPENDENCY *v9; // rcx
  struct _HAM_DEPENDENCY_GROUP *v10; // rcx
  __int64 v11; // rsi
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  char v17; // [rsp+38h] [rbp-49h] BYREF
  int v18; // [rsp+3Ch] [rbp-45h] BYREF
  __int64 v19; // [rsp+40h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+68h] [rbp-19h] BYREF
  __int64 *v22; // [rsp+78h] [rbp-9h]
  int v23; // [rsp+80h] [rbp-1h]
  int v24; // [rsp+84h] [rbp+3h]
  char *v25; // [rsp+88h] [rbp+7h]
  int v26; // [rsp+90h] [rbp+Fh]
  int v27; // [rsp+94h] [rbp+13h]
  int *v28; // [rsp+98h] [rbp+17h]
  int v29; // [rsp+A0h] [rbp+1Fh]
  int v30; // [rsp+A4h] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+A8h] [rbp+27h] BYREF
  char *v32; // [rsp+B8h] [rbp+37h]
  UINT32 v33; // [rsp+C0h] [rbp+3Fh]
  int v34; // [rsp+C4h] [rbp+43h]

  v3 = *((_QWORD *)a1 + 97);
  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
  {
    TlgCreateWsz(&pDesc, (LPCWSTR)a1 + 12);
    v4 = *((_QWORD *)a1 - 4);
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v22 = &v19;
    v17 = *((_BYTE *)a1 + 560);
    v25 = &v17;
    v18 = *((_DWORD *)a1 + 139);
    v19 = v4;
    v28 = &v18;
    v23 = v5;
    v26 = 1;
    v29 = 4;
    TlgCreateSid(&v31, (const SID *)((char *)a1 + 488));
    v34 = 0;
    v32 = (char *)a1 + 800;
    v33 = cData;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_1800985FE, 0LL, 0LL, cData, &pData);
  }
  if ( (*((_BYTE *)a1 + 772) & 1) != 0 )
  {
    HampHostAcquireLockExclusiveEx(a1, 0);
    *((_QWORD *)a1 + 81) |= 0x200000000000000uLL;
    HampHostReleaseLockExclusiveEx(a1, v7);
    v8 = *((_QWORD *)a1 + 103);
    if ( v8 )
      TpWaitForTimer(v8, 1LL);
  }
  v9 = (struct _HAM_HOST_DEPENDENCY *)*((_QWORD *)a1 + 87);
  if ( v9 )
    HampDepGroupInvalidateDependency(v9, a2);
  v10 = (struct _HAM_DEPENDENCY_GROUP *)*((_QWORD *)a1 + 86);
  if ( v10 )
    HampDepGroupRemoveHost(v10, a1);
  if ( v3 )
  {
    v11 = *(_QWORD *)(v3 + 88);
    if ( a1 == *(struct _RM_HAM_ACTIVITY_HOST **)(v11 + 328) )
    {
      HampPkgAcquireLockExclusive(*(struct _HAM_PACKAGE **)(v3 + 88));
      *(_QWORD *)(v11 + 328) = 0LL;
      HampPkgReleaseLockExclusive((struct _HAM_PACKAGE *)v11);
    }
    HampAppAcquireLockExclusive((struct _HAM_APPLICATION *)v3);
    if ( !(unsigned int)CempListEntryIsNull((char *)a1 + 808) )
    {
      v13 = *v12;
      if ( *(_QWORD **)(*v12 + 8LL) != v12 || (v14 = (_QWORD *)v12[1], (_QWORD *)*v14 != v12) )
        __fastfail(3u);
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
    }
    if ( a1 == *(struct _RM_HAM_ACTIVITY_HOST **)(v3 + 568) )
      *(_QWORD *)(v3 + 568) = 0LL;
    HampAppReleaseLockExclusive((struct _HAM_APPLICATION *)v3);
  }
  v15 = *((_QWORD *)a1 + 98);
  if ( v15 )
  {
    if ( (*(_QWORD *)(v15 + 592))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v15 - 64));
  }
}
