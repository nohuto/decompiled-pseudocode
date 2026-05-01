/*
 * XREFs of ?ArSrvCreateActivity@@YAJPEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@PEAU_ACTIVITY_RESTARTER@@@Z @ 0x18006FF10
 * Callers:
 *     HamRpcSrvCreateAutoRestartActivity @ 0x18006FAD0 (HamRpcSrvCreateAutoRestartActivity.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z @ 0x1800145EC (-HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?ArActClearChangeInProgress@@YAXPEAU_AR_ACTIVITY@@@Z @ 0x18006FC8C (-ArActClearChangeInProgress@@YAXPEAU_AR_ACTIVITY@@@Z.c)
 *     ?ArActCreate@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@PEAU_ACTIVITY_RESTARTER@@PEAPEAU_AR_ACTIVITY@@@Z @ 0x18006FD3C (-ArActCreate@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIE.c)
 *     ?ArActStartAsync@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x18006FE54 (-ArActStartAsync@@YAJPEAU_AR_ACTIVITY@@@Z.c)
 *     ?ArActWaitNoChangeInProgress@@YAXPEAU_AR_ACTIVITY@@@Z @ 0x18006FE90 (-ArActWaitNoChangeInProgress@@YAXPEAU_AR_ACTIVITY@@@Z.c)
 */

__int64 __fastcall ArSrvCreateActivity(
        const unsigned __int16 *a1,
        unsigned __int8 *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        struct _HAM_ACTIVITY_PROPERTIES *a7,
        union _HAM_RESTART_PROPERTIES *a8,
        struct _ACTIVITY_RESTARTER *a9)
{
  struct _HAM_ACTIVITY_PROPERTIES *v10; // rdi
  const wchar_t *v11; // rdx
  struct _ACTIVITY_RESTARTER *v12; // r13
  union _HAM_RESTART_PROPERTIES *v15; // rbx
  unsigned int v16; // r10d
  int v17; // eax
  struct _AR_ACTIVITY *v18; // rbx
  int v19; // r11d
  int v20; // r11d
  int v22; // [rsp+40h] [rbp-C0h] BYREF
  LPCWSTR pwsz; // [rsp+48h] [rbp-B8h] BYREF
  struct _AR_ACTIVITY *v24; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+58h] [rbp-A8h] BYREF
  wchar_t pszDest[280]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR v27; // [rsp+290h] [rbp+190h] BYREF
  int *v28; // [rsp+2B0h] [rbp+1B0h]
  int v29; // [rsp+2B8h] [rbp+1B8h]
  int v30; // [rsp+2BCh] [rbp+1BCh]
  __int64 *v31; // [rsp+2C0h] [rbp+1C0h]
  int v32; // [rsp+2C8h] [rbp+1C8h]
  int v33; // [rsp+2CCh] [rbp+1CCh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+2D0h] [rbp+1D0h] BYREF
  LPCWSTR *p_pwsz; // [rsp+2E0h] [rbp+1E0h]
  int v36; // [rsp+2E8h] [rbp+1E8h]
  int v37; // [rsp+2ECh] [rbp+1ECh]
  unsigned __int64 *v38; // [rsp+2F0h] [rbp+1F0h]
  int v39; // [rsp+2F8h] [rbp+1F8h]
  int v40; // [rsp+2FCh] [rbp+1FCh]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+300h] [rbp+200h] BYREF

  v10 = a7;
  v11 = a1;
  v12 = a9;
  pwsz = a1;
  if ( hProvider > 4u )
  {
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008C44B, 0LL, 0LL, 2u, &pData);
    v11 = pwsz;
  }
  v15 = a8;
  v24 = 0LL;
  v25 = -1LL;
  if ( *(_DWORD *)a8 >= 2u || (*((_BYTE *)v10 + 8) & 4) != 0 && (*(_BYTE *)a8 & 1) == 0 )
  {
    v16 = -1073741811;
    v22 = -1073741811;
  }
  else
  {
    v22 = HampUtilValidateAndCapturePsmInformation(pszDest, v11, a2, a3, a4, a5, a6);
    v16 = v22;
    if ( v22 >= 0 )
    {
      v17 = ArActCreate((struct _RM_PSM_HOST_INFO *)pszDest, v10, v15, v12, &v24);
      v18 = v24;
      v16 = v17;
      v22 = v17;
      if ( v17 >= 0 )
      {
        v25 = *((_QWORD *)v24 + 5);
        ArActWaitNoChangeInProgress(v24);
        ArActStartAsync(v18);
        ArActClearChangeInProgress(v18);
        v16 = 0;
        v22 = 0;
      }
      if ( v18 )
      {
        CemRcObjectDereference(v18);
        v16 = v22;
      }
    }
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
  {
    v30 = 0;
    v33 = 0;
    v28 = &v22;
    v31 = &v25;
    v29 = 4;
    v32 = v19;
    TlgCreateWsz(&pDesc, pwsz);
    v37 = 0;
    v40 = 0;
    p_pwsz = &pwsz;
    v38 = &a6;
    pwsz = (LPCWSTR)a5;
    v36 = v20;
    v39 = v20;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008C3F8, 0LL, 0LL, 7u, &v27);
    return (unsigned int)v22;
  }
  return v16;
}
