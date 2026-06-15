/*
 * XREFs of ?ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x180100DC8
 * Callers:
 *     ?AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z @ 0x1800FF664 (-AcquireResourceHandle@CConstraintModelResourceManager@@AEAAJPEAU_ResourceInfo@@KKHPEA_K@Z.c)
 *     ?RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@@Z @ 0x180101DF8 (-RevokeEndpointResources@CConstraintModelResourceManager@@AEAAJPEAVExclusiveEndpointInfo@@@Z.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x1800522DC (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?GetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@PEAU__POSITION@@@Z @ 0x1800BF258 (-GetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAE.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x1800BF55C (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     ?AddTail@?$CAtlList@_KV?$CElementTraits@_K@ATL@@@ATL@@QEAAPEAU__POSITION@@_K@Z @ 0x1800FF904 (-AddTail@-$CAtlList@_KV-$CElementTraits@_K@ATL@@@ATL@@QEAAPEAU__POSITION@@_K@Z.c)
 *     ?RemoveAll@?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ @ 0x180101D24 (-RemoveAll@-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAXXZ.c)
 *     ?SetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@AEBUResourceHandleInfo@@@Z @ 0x180101FFC (-SetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXP.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CConstraintModelResourceManager::ProcessRevokedResources(struct _RTL_CRITICAL_SECTION *this)
{
  __int64 v2; // rcx
  _QWORD *p_Type; // rbx
  _OWORD *v4; // rax
  __int64 *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rcx
  char v10; // di
  _QWORD *v11; // rbx
  __int64 v12; // rdx
  _QWORD *v13; // [rsp+28h] [rbp-E0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-D8h] BYREF
  char v15; // [rsp+38h] [rbp-D0h]
  __int64 v16[5]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+68h] [rbp-A0h]
  __int64 v18; // [rsp+70h] [rbp-98h]
  __int64 v19[36]; // [rsp+78h] [rbp-90h] BYREF
  int v20; // [rsp+19Ch] [rbp+94h]
  _QWORD v21[2]; // [rsp+548h] [rbp+440h] BYREF

  v18 = -2LL;
  do
  {
    memset(v16, 0, sizeof(v16));
    LODWORD(v17) = 10;
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&lpCriticalSection,
      this + 3);
    p_Type = &this[4].DebugInfo->Type;
    v13 = p_Type;
    while ( p_Type )
    {
      v4 = (_OWORD *)ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(
                       v2,
                       (__int64)p_Type);
      v5 = v19;
      v6 = 9LL;
      do
      {
        *(_OWORD *)v5 = *v4;
        *((_OWORD *)v5 + 1) = v4[1];
        *((_OWORD *)v5 + 2) = v4[2];
        *((_OWORD *)v5 + 3) = v4[3];
        *((_OWORD *)v5 + 4) = v4[4];
        *((_OWORD *)v5 + 5) = v4[5];
        *((_OWORD *)v5 + 6) = v4[6];
        v5 += 16;
        *((_OWORD *)v5 - 1) = v4[7];
        v4 += 8;
        --v6;
      }
      while ( v6 );
      *(_OWORD *)v5 = *v4;
      *((_OWORD *)v5 + 1) = v4[1];
      *((_OWORD *)v5 + 2) = v4[2];
      *((_OWORD *)v5 + 3) = v4[3];
      *((_OWORD *)v5 + 4) = v4[4];
      v21[0] = 0LL;
      v21[1] = 0LL;
      if ( v20 == 1 )
      {
        ATL::CAtlList<unsigned __int64,ATL::CElementTraits<unsigned __int64>>::AddTail(v16, v19[0]);
      }
      else
      {
        v8 = v19[0];
        while ( (int)RmGetNotification(v8, v21) >= 0 )
        {
          if ( LODWORD(v21[0]) == 1 )
          {
            ATL::CAtlList<unsigned __int64,ATL::CElementTraits<unsigned __int64>>::AddTail(v16, v8);
            v20 = 1;
            ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::SetAt(v9, p_Type, v19);
          }
        }
      }
      ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext(v7, &v13);
      p_Type = v13;
    }
    if ( v15 )
    {
      LeaveCriticalSection(lpCriticalSection);
      v15 = 0;
    }
    if ( v16[2] )
    {
      v10 = 0;
      v11 = (_QWORD *)v16[0];
      while ( v11 )
      {
        v12 = v11[2];
        v11 = (_QWORD *)*v11;
        (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)&this[5].LockCount + 24LL))(
          *(_QWORD *)&this[5].LockCount,
          v12);
      }
    }
    else
    {
      v10 = 1;
    }
    ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::RemoveAll(v16);
  }
  while ( !v10 );
}
