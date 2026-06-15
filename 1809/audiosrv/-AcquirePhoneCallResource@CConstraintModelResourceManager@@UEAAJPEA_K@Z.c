/*
 * XREFs of ?AcquirePhoneCallResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z @ 0x1800F35C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800095D0 (--3@YAXPEAX@Z.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180058D1C (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     ?AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z @ 0x1800F37A4 (-AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z.c)
 *     ?AddHead@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBUResourceHandleInfo@@@Z @ 0x1800F3A10 (-AddHead@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAA.c)
 *     WPP_SF_dI @ 0x1800F694C (WPP_SF_dI.c)
 *     ?GetPhoneCallResourceConsumption@CConstraintModel@@QEAAJW4ConsumerState@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x18013E984 (-GetPhoneCallResourceConsumption@CConstraintModel@@QEAAJW4ConsumerState@@PEAKPEAPEAU_ResourceInf.c)
 */

__int64 __fastcall CConstraintModelResourceManager::AcquirePhoneCallResource(
        CConstraintModelResourceManager *this,
        unsigned __int64 *a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  int v6; // esi
  __int64 v7; // r8
  unsigned int v8; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-D0h] BYREF
  char v11; // [rsp+38h] [rbp-C8h]
  LPCRITICAL_SECTION v12; // [rsp+40h] [rbp-C0h] BYREF
  char v13; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v14; // [rsp+50h] [rbp-B0h] BYREF
  int v15; // [rsp+58h] [rbp-A8h]
  int v16; // [rsp+16Ch] [rbp+6Ch]
  int v17; // [rsp+518h] [rbp+418h]
  unsigned int v18; // [rsp+550h] [rbp+450h] BYREF
  struct _ResourceInfo *v19; // [rsp+558h] [rbp+458h] BYREF
  unsigned __int64 v20; // [rsp+560h] [rbp+460h] BYREF

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&v12,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 24));
  *a2 = 0LL;
  v4 = *((_QWORD *)this + 2);
  v5 = 0LL;
  v18 = 0;
  v19 = 0LL;
  v20 = 0LL;
  v6 = CConstraintModel::GetPhoneCallResourceConsumption(v4, 0LL, &v18, &v19);
  if ( v6 >= 0 )
  {
    v8 = v18;
    if ( !v18 )
    {
LABEL_6:
      *a2 = v5;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_dI(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, v7, 1LL, v5);
      }
      goto LABEL_14;
    }
    memset_0(&v14, 0, 0x4D0uLL);
    v6 = CConstraintModelResourceManager::AcquireResourceHandle(this, v19, v8, 1u, 0, &v20);
    if ( v6 >= 0 )
    {
      ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
        (__int64)&lpCriticalSection,
        (struct _RTL_CRITICAL_SECTION *)this + 3);
      v16 = 0;
      v15 = 1;
      v17 = 1;
      v5 = v20;
      v14 = v20;
      ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::AddHead((char *)this + 160, &v14);
      v16 = 1;
      ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::AddHead((char *)this + 160, &v14);
      if ( v11 )
        LeaveCriticalSection(lpCriticalSection);
      goto LABEL_6;
    }
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, (__int64)&WPP_0f7e38c9827a35e9d5a2ad6ce79f9155_Traceguids, v6);
  }
LABEL_14:
  if ( v19 )
    operator delete(v19);
  if ( v13 )
    LeaveCriticalSection(v12);
  return (unsigned int)v6;
}
