/*
 * XREFs of ?ReacquirePhoneCallResource@CConstraintModelResourceManager@@UEAAJHPEA_K@Z @ 0x180101460
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180019940 (--3@YAXPEAX@Z.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x1800522DC (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?GetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@PEAU__POSITION@@@Z @ 0x1800BF258 (-GetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAE.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x1800BF55C (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     ?RemoveAll@?$CAtlList@PEAUIPolicyRule@@V?$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAXXZ @ 0x1800C3348 (-RemoveAll@-$CAtlList@PEAUIPolicyRule@@V-$CElementTraits@PEAUIPolicyRule@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?RemoveAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800CC758 (-RemoveAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEA.c)
 *     ?AddHead@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBUResourceHandleInfo@@@Z @ 0x1800FF8D0 (-AddHead@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAA.c)
 *     ?ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEA_K@Z @ 0x180101834 (-ReacquireResourceHandle@CConstraintModelResourceManager@@AEAAJ_KPEAU_ResourceInfo@@KKPEA_K@Z.c)
 *     WPP_SF_dI @ 0x18010280C (WPP_SF_dI.c)
 *     WPP_SF_dID @ 0x180102860 (WPP_SF_dID.c)
 *     ?GetPhoneCallResourceConsumption@CConstraintModel@@QEAAJW4ConsumerState@@PEAKPEAPEAU_ResourceInfo@@@Z @ 0x180142A14 (-GetPhoneCallResourceConsumption@CConstraintModel@@QEAAJW4ConsumerState@@PEAKPEAPEAU_ResourceInf.c)
 */

__int64 __fastcall CConstraintModelResourceManager::ReacquirePhoneCallResource(
        CConstraintModelResourceManager *this,
        __int64 a2,
        unsigned __int64 *a3)
{
  int v4; // ebx
  unsigned int v5; // r14d
  CAudioSessionManager *v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // r14d
  struct _RTL_CRITICAL_SECTION *v10; // r13
  __int64 v11; // rcx
  __int64 *v12; // r12
  __int64 *v13; // rbx
  _OWORD *v14; // rax
  __int64 v15; // rdx
  _OWORD *v16; // rcx
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  unsigned __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 *v30; // rax
  _OWORD *v31; // rax
  __int64 v32; // rdx
  _OWORD *v33; // rcx
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int64 v45; // rcx
  unsigned __int64 v47; // [rsp+30h] [rbp-D0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-C8h] BYREF
  char v49; // [rsp+40h] [rbp-C0h]
  LPCRITICAL_SECTION v50; // [rsp+48h] [rbp-B8h] BYREF
  char v51; // [rsp+50h] [rbp-B0h]
  LPCRITICAL_SECTION v52; // [rsp+58h] [rbp-A8h] BYREF
  char v53; // [rsp+60h] [rbp-A0h]
  __int128 v54; // [rsp+68h] [rbp-98h] BYREF
  __int64 v55; // [rsp+78h] [rbp-88h]
  __int128 v56; // [rsp+80h] [rbp-80h]
  int v57; // [rsp+90h] [rbp-70h]
  _QWORD v58[160]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v59; // [rsp+5B8h] [rbp+4B8h]
  __int64 *v60; // [rsp+5C0h] [rbp+4C0h] BYREF
  struct _ResourceInfo *v61; // [rsp+5C8h] [rbp+4C8h] BYREF

  v59 = a2;
  v4 = 0;
  v5 = a2;
  v7 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dI(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, a3, (unsigned int)a2, *a3);
    v7 = WPP_GLOBAL_Control;
  }
  if ( *a3 )
  {
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&v52,
      (struct _RTL_CRITICAL_SECTION *)((char *)this + 24));
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&v50,
      (struct _RTL_CRITICAL_SECTION *)((char *)this + 64));
    v8 = *((_QWORD *)this + 2);
    v47 = 0LL;
    LODWORD(v60) = 0;
    v61 = 0LL;
    if ( (int)CConstraintModel::GetPhoneCallResourceConsumption(v8, v5 != 0, &v60, &v61) >= 0
      && (v9 = (unsigned int)v60) != 0 )
    {
      v55 = 0LL;
      v57 = 10;
      v10 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 120);
      v54 = 0LL;
      v56 = 0LL;
      ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
        (__int64)&lpCriticalSection,
        (struct _RTL_CRITICAL_SECTION *)this + 3);
      v12 = (__int64 *)((char *)this + 160);
LABEL_9:
      v13 = (__int64 *)*v12;
      v60 = (__int64 *)*v12;
      while ( v13 )
      {
        v14 = (_OWORD *)ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(
                          v11,
                          (__int64)v13);
        v15 = 9LL;
        v16 = v58;
        do
        {
          v17 = v14[1];
          *v16 = *v14;
          v18 = v14[2];
          v16[1] = v17;
          v19 = v14[3];
          v16[2] = v18;
          v20 = v14[4];
          v16[3] = v19;
          v21 = v14[5];
          v16[4] = v20;
          v22 = v14[6];
          v16[5] = v21;
          v23 = v14[7];
          v14 += 8;
          v16[6] = v22;
          v16 += 8;
          *(v16 - 1) = v23;
          --v15;
        }
        while ( v15 );
        v24 = v14[1];
        *v16 = *v14;
        v25 = v14[2];
        v16[1] = v24;
        v26 = v14[3];
        v16[2] = v25;
        v27 = v14[4];
        v16[3] = v26;
        v16[4] = v27;
        if ( *a3 == v58[0] )
        {
          ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::AddHead(
            (__int64 *)&v54,
            (__int64)v58,
            128LL);
          ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::RemoveAt((__int64 *)this + 20, v13);
          goto LABEL_9;
        }
        ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext((__int64)v16, &v60);
        v13 = v60;
      }
      if ( v49 )
        LeaveCriticalSection(lpCriticalSection);
      v4 = CConstraintModelResourceManager::ReacquireResourceHandle(this, *a3, v61, v9, 1u, &v47);
      if ( v4 >= 0 )
      {
        v28 = v47;
        *a3 = v47;
        ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
          (__int64)&lpCriticalSection,
          v10);
        v30 = (__int64 *)v54;
        v60 = (__int64 *)v54;
        while ( v30 )
        {
          v31 = (_OWORD *)ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(
                            v29,
                            (__int64)v30);
          v32 = 9LL;
          v33 = v58;
          do
          {
            v34 = v31[1];
            *v33 = *v31;
            v35 = v31[2];
            v33[1] = v34;
            v36 = v31[3];
            v33[2] = v35;
            v37 = v31[4];
            v33[3] = v36;
            v38 = v31[5];
            v33[4] = v37;
            v39 = v31[6];
            v33[5] = v38;
            v40 = v31[7];
            v31 += 8;
            v33[6] = v39;
            v33 += 8;
            *(v33 - 1) = v40;
            --v32;
          }
          while ( v32 );
          v41 = v31[1];
          *v33 = *v31;
          v42 = v31[2];
          v33[1] = v41;
          v43 = v31[3];
          v33[2] = v42;
          v44 = v31[4];
          v33[3] = v43;
          v33[4] = v44;
          v58[0] = v28;
          ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::AddHead(v12, (__int64)v58, 128LL);
          ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext(v45, &v60);
          v30 = v60;
        }
        if ( v49 )
          LeaveCriticalSection(lpCriticalSection);
      }
      ATL::CAtlList<IPolicyRule *,ATL::CElementTraits<IPolicyRule *>>::RemoveAll((__int64 *)&v54);
    }
    else
    {
      v4 = (*(__int64 (__fastcall **)(CConstraintModelResourceManager *, unsigned __int64 *))(*(_QWORD *)this + 80LL))(
             this,
             a3);
    }
    if ( v61 )
      operator delete(v61);
    if ( v51 )
      LeaveCriticalSection(v50);
    if ( v53 )
      LeaveCriticalSection(v52);
    v5 = v59;
    v7 = WPP_GLOBAL_Control;
  }
  if ( v7 != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)v7 + 7) & 0x100) != 0
    && *((_BYTE *)v7 + 25) >= 4u )
  {
    WPP_SF_dID(*((_QWORD *)v7 + 2), a2, a3, v5, *a3, v4);
  }
  return (unsigned int)v4;
}
