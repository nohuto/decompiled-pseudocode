/*
 * XREFs of ?HampHostShouldDplPolicyApply@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006A014
 * Callers:
 *     ?HampActCanBeStartedInSystemState@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@PEAU_HAM_ACT_START_SYSTEM_STATE@@@Z @ 0x18002D458 (-HampActCanBeStartedInSystemState@@YA-AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@PEA.c)
 *     ?HampHostNotifyDplKeysLocked@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180069E78 (-HampHostNotifyDplKeysLocked@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     ?HampSystemEdpIsManaged@@YAKXZ @ 0x18003F4DC (-HampSystemEdpIsManaged@@YAKXZ.c)
 *     ?HampSystemCdplIsManaged@@YAKXZ @ 0x18003F4FC (-HampSystemCdplIsManaged@@YAKXZ.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?HampSystemEdpGetEnterpriseContext@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAUEDP_ENTERPRISE_CONTEXT@@@Z @ 0x180065C90 (-HampSystemEdpGetEnterpriseContext@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAUEDP_ENTERPRISE_CONTEXT@.c)
 *     ?HampSystemEdpQueryDplEnforcedPolicyOwnerIds@@YAJPEAT_RM_SID@@PEAPEAG@Z @ 0x180065CFC (-HampSystemEdpQueryDplEnforcedPolicyOwnerIds@@YAJPEAT_RM_SID@@PEAPEAG@Z.c)
 *     ?HampSystemImpersonateUserForHost@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180065D9C (-HampSystemImpersonateUserForHost@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampHostShouldDplPolicyApply(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  int v2; // r15d
  char v3; // si
  int IsManaged; // edi
  BOOL v5; // eax
  BOOL v6; // ebx
  char v7; // bl
  unsigned __int16 *v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // r8
  wchar_t *v11; // rdi
  __int64 v12; // r9
  unsigned __int8 v14; // [rsp+38h] [rbp-79h] BYREF
  char v15; // [rsp+39h] [rbp-78h] BYREF
  char v16; // [rsp+3Ah] [rbp-77h] BYREF
  __int64 v17; // [rsp+40h] [rbp-71h] BYREF
  struct EDP_ENTERPRISE_CONTEXT *v18; // [rsp+48h] [rbp-69h] BYREF
  unsigned __int16 *v19; // [rsp+50h] [rbp-61h] BYREF
  wchar_t *Context; // [rsp+58h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-29h] BYREF
  __int64 *v23; // [rsp+98h] [rbp-19h]
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
  if ( IsManaged || v5 )
  {
    if ( (int)HampSystemImpersonateUserForHost(a1) < 0 )
    {
      v7 = 0;
      goto LABEL_33;
    }
    v2 = 1;
    if ( IsManaged )
    {
      if ( (int)CdplIsAppAllowedToRun(*(_QWORD *)(*((_QWORD *)a1 + 94) + 88LL) + 96LL, &v17) < 0 )
      {
        v3 = 1;
        goto LABEL_12;
      }
      if ( !(_DWORD)v17 )
      {
        v7 = 8;
        v14 = 1;
        v3 = 2;
        goto LABEL_34;
      }
    }
    else
    {
      v3 = 0;
      v14 = 0;
    }
    if ( !v6 )
      goto LABEL_4;
    if ( (int)HampSystemEdpGetEnterpriseContext(a1, &v18) < 0 )
    {
      v7 = 2;
      goto LABEL_33;
    }
    if ( (int)EdpUtilIsAppEnlightened(v18, &v17) < 0 )
    {
      v7 = 3;
      goto LABEL_33;
    }
    if ( (_DWORD)v17 )
    {
      v7 = 4;
      goto LABEL_33;
    }
    if ( (int)HampSystemEdpQueryDplEnforcedPolicyOwnerIds((char *)a1 + 488, &v19) < 0 )
    {
      v7 = 5;
      goto LABEL_33;
    }
    v8 = v19;
    if ( !v19 || !*v19 )
    {
      v7 = 6;
      goto LABEL_33;
    }
    while ( 1 )
    {
      v11 = wcstok_s(v8, L"|", &Context);
      if ( !v11 )
        break;
      v9 = 0;
      v10 = *(_QWORD *)v18;
      if ( *(_DWORD *)(*(_QWORD *)v18 + 4LL) )
      {
        while ( _wcsicmp(v11, *(const wchar_t **)(v10 + 16LL * v9 + 24)) )
        {
          ++v9;
          v10 = *(_QWORD *)v18;
          if ( v9 >= *(_DWORD *)(*(_QWORD *)v18 + 4LL) )
            goto LABEL_27;
        }
        v14 = 1;
        v7 = 7;
        goto LABEL_34;
      }
LABEL_27:
      v8 = 0LL;
    }
LABEL_12:
    v7 = 8;
    goto LABEL_33;
  }
  v3 = 0;
LABEL_4:
  v7 = 1;
LABEL_33:
  v14 = 0;
LABEL_34:
  if ( v19 )
    EdpFree();
  if ( v18 )
    EdpUtilFreeEnterpriseContext();
  if ( v2 )
    RevertToSelf();
  if ( hProvider > 5u )
  {
    TlgCreateWsz(&pDesc, (LPCWSTR)a1 + 12);
    v12 = *((_QWORD *)a1 - 4);
    v23 = &v17;
    v25 = &v14;
    v27 = &v15;
    v29 = &v16;
    v17 = v12;
    v24 = 8LL;
    v26 = 1LL;
    v15 = v7;
    v28 = 1LL;
    v16 = v3;
    v30 = 1LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008AC45, 0LL, 0LL, 7u, &pData);
  }
  return v14;
}
