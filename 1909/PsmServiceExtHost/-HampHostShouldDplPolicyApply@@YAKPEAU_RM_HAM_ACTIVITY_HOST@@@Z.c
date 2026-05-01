/*
 * XREFs of ?HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180077BDC
 * Callers:
 *     ?HampActCanBeStartedInSystemState@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@PEAU_HAM_ACT_START_SYSTEM_STATE@@@Z @ 0x180033D18 (-HampActCanBeStartedInSystemState@@YA-AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@PEA.c)
 *     ?HampHostNotifyDplKeysLocked@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180077A48 (-HampHostNotifyDplKeysLocked@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     ?HampSystemEdpIsManaged@@YAKXZ @ 0x1800402EC (-HampSystemEdpIsManaged@@YAKXZ.c)
 *     ?HampSystemCdplIsManaged@@YAKXZ @ 0x180040390 (-HampSystemCdplIsManaged@@YAKXZ.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?HampSystemDplIsAppAllowedToRun@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z @ 0x180072CE4 (-HampSystemDplIsAppAllowedToRun@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z.c)
 *     ?HampSystemEdpGetEnterpriseContext@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAUEDP_ENTERPRISE_CONTEXT@@@Z @ 0x180072D6C (-HampSystemEdpGetEnterpriseContext@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAUEDP_ENTERPRISE_CONTEXT@.c)
 *     ?HampSystemEdpQueryDplEnforcedPolicyOwnerIds@@YAJPEAT_RM_SID@@PEAPEAG@Z @ 0x180072DD8 (-HampSystemEdpQueryDplEnforcedPolicyOwnerIds@@YAJPEAT_RM_SID@@PEAPEAG@Z.c)
 *     ?HampSystemImpersonateUserForHost@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180072E98 (-HampSystemImpersonateUserForHost@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampHostShouldDplPolicyApply(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  int v2; // r15d
  char v3; // si
  int IsManaged; // ebx
  int v5; // eax
  int v6; // edi
  char v7; // bl
  unsigned __int16 *v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // r8
  wchar_t *v11; // rdi
  __int64 v12; // rdx
  unsigned __int8 v14; // [rsp+38h] [rbp-79h] BYREF
  char v15; // [rsp+39h] [rbp-78h] BYREF
  char v16; // [rsp+3Ah] [rbp-77h] BYREF
  unsigned int v17[2]; // [rsp+40h] [rbp-71h] BYREF
  struct EDP_ENTERPRISE_CONTEXT *v18; // [rsp+48h] [rbp-69h] BYREF
  unsigned __int16 *v19; // [rsp+50h] [rbp-61h] BYREF
  wchar_t *Context; // [rsp+58h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-29h] BYREF
  unsigned int *v23; // [rsp+98h] [rbp-19h]
  __int64 v24; // [rsp+A0h] [rbp-11h]
  unsigned __int8 *v25; // [rsp+A8h] [rbp-9h]
  __int64 v26; // [rsp+B0h] [rbp-1h]
  char *v27; // [rsp+B8h] [rbp+7h]
  __int64 v28; // [rsp+C0h] [rbp+Fh]
  char *v29; // [rsp+C8h] [rbp+17h]
  __int64 v30; // [rsp+D0h] [rbp+1Fh]

  v18 = 0LL;
  v2 = 0;
  v19 = 0LL;
  v3 = 3;
  IsManaged = HampSystemCdplIsManaged();
  v5 = HampSystemEdpIsManaged();
  v6 = v5;
  if ( !IsManaged )
  {
    v14 = 0;
    v3 = 0;
    if ( !v5 )
    {
      v7 = 1;
      goto LABEL_32;
    }
LABEL_11:
    if ( (int)HampSystemImpersonateUserForHost(a1) < 0 )
    {
      v7 = 0;
      goto LABEL_31;
    }
    v2 = 1;
    if ( (int)HampSystemEdpGetEnterpriseContext(a1, &v18) < 0 )
    {
      v7 = 2;
      goto LABEL_31;
    }
    if ( (int)EdpUtilIsAppEnlightened(v18, v17) < 0 )
    {
      v7 = 3;
      goto LABEL_31;
    }
    if ( v17[0] )
    {
      v7 = 4;
      goto LABEL_31;
    }
    if ( (int)HampSystemEdpQueryDplEnforcedPolicyOwnerIds((char *)a1 + 488, &v19) < 0 )
    {
      v7 = 5;
      goto LABEL_31;
    }
    v8 = v19;
    if ( !v19 || !*v19 )
    {
      v7 = 6;
      goto LABEL_31;
    }
    while ( 1 )
    {
      v11 = wcstok_s(v8, L"|", &Context);
      if ( !v11 )
        goto LABEL_6;
      v9 = 0;
      v10 = *(_QWORD *)v18;
      if ( *(_DWORD *)(*(_QWORD *)v18 + 4LL) )
      {
        while ( _wcsicmp(v11, *(const wchar_t **)(v10 + 16LL * v9 + 24)) )
        {
          ++v9;
          v10 = *(_QWORD *)v18;
          if ( v9 >= *(_DWORD *)(*(_QWORD *)v18 + 4LL) )
            goto LABEL_25;
        }
        v14 = 1;
        v7 = 7;
        goto LABEL_32;
      }
LABEL_25:
      v8 = 0LL;
    }
  }
  if ( (int)HampSystemDplIsAppAllowedToRun(a1, v17) >= 0 )
  {
    if ( !v17[0] )
    {
      v7 = 8;
      v14 = 1;
      v3 = 2;
      goto LABEL_32;
    }
    if ( !v6 )
    {
      v7 = 1;
      goto LABEL_31;
    }
    goto LABEL_11;
  }
  v3 = 1;
LABEL_6:
  v7 = 8;
LABEL_31:
  v14 = 0;
LABEL_32:
  if ( v19 )
    EdpFree();
  if ( v18 )
    EdpUtilFreeEnterpriseContext();
  if ( v2 )
    RevertToSelf();
  if ( dword_1800AB2C0 > 5u )
  {
    TlgCreateWsz(&pDesc, (LPCWSTR)a1 + 12);
    v12 = *((_QWORD *)a1 - 4);
    v23 = v17;
    v25 = &v14;
    v27 = &v15;
    v29 = &v16;
    *(_QWORD *)v17 = v12;
    v24 = 8LL;
    v26 = 1LL;
    v15 = v7;
    v28 = 1LL;
    v16 = v3;
    v30 = 1LL;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180098813, 0LL, 0LL, 7u, &pData);
  }
  return v14;
}
