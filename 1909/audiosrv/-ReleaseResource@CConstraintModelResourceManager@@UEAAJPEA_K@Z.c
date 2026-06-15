/*
 * XREFs of ?ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z @ 0x1801015F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180058C3C (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?GetAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAEAUResourceHandleInfo@@PEAU__POSITION@@@Z @ 0x1800BED98 (-GetAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAAE.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x1800BF09C (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     WPP_SF_d @ 0x1800C2194 (WPP_SF_d.c)
 *     ?RemoveAt@?$CAtlList@UResourceHandleInfo@@V?$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800CC2C8 (-RemoveAt@-$CAtlList@UResourceHandleInfo@@V-$CElementTraits@UResourceHandleInfo@@@ATL@@@ATL@@QEA.c)
 *     WPP_SF_I @ 0x1801020F0 (WPP_SF_I.c)
 */

__int64 __fastcall CConstraintModelResourceManager::ReleaseResource(
        CConstraintModelResourceManager *this,
        unsigned __int64 *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  _QWORD *i; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  __int128 *v11; // rax
  __int64 *v12; // rcx
  __int64 v13; // rdx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v28; // [rsp+30h] [rbp-D8h]
  LPCRITICAL_SECTION v29; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+40h] [rbp-C8h]
  __int64 v31; // [rsp+48h] [rbp-C0h] BYREF
  int v32; // [rsp+50h] [rbp-B8h]
  _QWORD *v33; // [rsp+528h] [rbp+420h] BYREF

  v4 = 0;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&v29,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 64));
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 232));
  for ( i = (_QWORD *)*((_QWORD *)this + 34); i; i = (_QWORD *)*i )
  {
    v8 = i[2];
    if ( a2 == *(unsigned __int64 **)(v8 + 8) )
      *(_DWORD *)(v8 + 16) = 1;
  }
  if ( (_BYTE)v28 )
    LeaveCriticalSection(lpCriticalSection);
  if ( !*a2 )
    goto LABEL_27;
  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)this + 3);
LABEL_10:
  v10 = (_QWORD *)*((_QWORD *)this + 20);
  v33 = v10;
  while ( v10 )
  {
    v11 = (__int128 *)ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::GetAt(v9, (__int64)v10);
    v12 = &v31;
    v13 = 9LL;
    do
    {
      v14 = *v11;
      v15 = v11[1];
      v11 += 8;
      *(_OWORD *)v12 = v14;
      v16 = *(v11 - 6);
      *((_OWORD *)v12 + 1) = v15;
      v17 = *(v11 - 5);
      *((_OWORD *)v12 + 2) = v16;
      v18 = *(v11 - 4);
      *((_OWORD *)v12 + 3) = v17;
      v19 = *(v11 - 3);
      *((_OWORD *)v12 + 4) = v18;
      v20 = *(v11 - 2);
      *((_OWORD *)v12 + 5) = v19;
      v21 = *(v11 - 1);
      *((_OWORD *)v12 + 6) = v20;
      v12 += 16;
      *((_OWORD *)v12 - 1) = v21;
      --v13;
    }
    while ( v13 );
    v22 = v11[1];
    *(_OWORD *)v12 = *v11;
    v23 = v11[2];
    *((_OWORD *)v12 + 1) = v22;
    v24 = v11[3];
    *((_OWORD *)v12 + 2) = v23;
    v25 = v11[4];
    *((_OWORD *)v12 + 3) = v24;
    *((_OWORD *)v12 + 4) = v25;
    if ( *a2 == v31 )
    {
      ATL::CAtlList<ResourceHandleInfo,ATL::CElementTraits<ResourceHandleInfo>>::RemoveAt((__int64 *)this + 20, v10);
      if ( v32 != 1 )
        break;
      goto LABEL_10;
    }
    ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext((__int64)v12, &v33);
    v10 = v33;
  }
  v4 = RmReleaseResources(*a2);
  if ( (_BYTE)v28 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v4 < 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x19u,
        (__int64)&WPP_0f7e38c9827a35e9d5a2ad6ce79f9155_Traceguids,
        v4);
    }
  }
  else
  {
LABEL_27:
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_I(*((_QWORD *)WPP_GLOBAL_Control + 2), v5, v6, *a2);
    }
  }
  if ( (_BYTE)v30 )
    LeaveCriticalSection(v29);
  return (unsigned int)v4;
}
