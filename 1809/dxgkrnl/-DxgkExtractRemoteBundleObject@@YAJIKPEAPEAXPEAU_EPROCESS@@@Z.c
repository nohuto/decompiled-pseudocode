/*
 * XREFs of ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C022EF40
 * Callers:
 *     ?BindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE_RETURN@@@Z @ 0x1C0230A6C (-BindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSA.c)
 *     ?VailDRTProcessExtractWorker@@YAXPEAX@Z @ 0x1C025AF10 (-VailDRTProcessExtractWorker@@YAXPEAX@Z.c)
 *     ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C025AFA0 (-VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0011AAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C0019470 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C022A27C (-ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C022A2E4 (-ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C022F710 (-ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall DxgkExtractRemoteBundleObject(unsigned int a1, unsigned int a2, void **a3, struct _EPROCESS *a4)
{
  __int64 v5; // r14
  __int64 v8; // rcx
  unsigned __int64 Current; // rdi
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx
  struct DXGVAILOBJECT *v13; // rsi
  struct DXGGLOBAL *Global; // rax
  unsigned __int8 v15; // dl
  char v16; // cl
  char v17; // dl
  __int64 v18; // rax
  char v19; // cl
  __int64 v20; // rdx
  char v21; // al
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  int BundleObject; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  _BYTE v41[24]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v42[24]; // [rsp+48h] [rbp-30h] BYREF

  v5 = a1;
  Current = (unsigned __int64)DXGPROCESS::GetCurrent();
  if ( Current )
  {
    KeEnterCriticalRegion();
    v13 = 0LL;
    if ( (*(_BYTE *)(Current + 323) & 4) != 0 )
    {
      Global = DXGGLOBAL::GetGlobal(v12);
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v42,
        (struct _KTHREAD **)Global + 33);
      v15 = *(_BYTE *)(Current + 323);
      v16 = v15 >> 2;
      v17 = v15 & 8;
      if ( v17 )
        v18 = *(_QWORD *)(Current + 456);
      else
        v18 = Current & -(__int64)((v16 & 1) != 0);
      v19 = v16 & 1;
      if ( *(_QWORD *)(v18 + 456) )
      {
        if ( v17 )
          v20 = *(_QWORD *)(Current + 456);
        else
          v20 = Current & -(__int64)(v19 != 0);
        DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
          (DXGAUTOPUSHLOCKEXCLUSIVE *)v41,
          (struct _KTHREAD **)(*(_QWORD *)(v20 + 456) + 64LL));
        v21 = *(_BYTE *)(Current + 323);
        if ( (v21 & 8) != 0 )
          v22 = *(_QWORD *)(Current + 456);
        else
          v22 = Current & -(__int64)((v21 & 4) != 0);
        v13 = DXGVIRTUALMACHINE::ReferenceVailObject(*(struct _KTHREAD ***)(v22 + 456));
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v41);
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v42);
    }
    else
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v41, *(struct DXGFASTMUTEX *const *)(Current + 112), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v41);
      if ( *(_QWORD *)(Current + 440) )
        v13 = DXGPROCESS::ReferenceVailObject((DxgkCompositionObject **)Current);
      if ( v41[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v41);
    }
    if ( v13 )
    {
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)v13 + 10) )
      {
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)v13 + 13) + 64LL)) )
        {
          BundleObject = DXG_HOST_REMOTEOBJECTCHANNEL::ExtractBundleObject(
                           *((DXG_HOST_REMOTEOBJECTCHANNEL **)v13 + 14),
                           v5,
                           a2,
                           a3,
                           a4);
          v11 = BundleObject;
          if ( BundleObject < 0 )
          {
            v37 = WdLogNewEntry5_WdWarning(v35, v34, v36);
            *(_QWORD *)(v37 + 24) = v5;
            *(_QWORD *)(v37 + 32) = v11;
            WdLogEvent5_WdWarning(v37);
          }
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)v13 + 13) + 64LL));
        }
        else
        {
          LODWORD(v11) = -2147483611;
          v38 = WdLogNewEntry5_WdWarning(v31, v30, v32);
          *(_QWORD *)(v38 + 24) = 2LL;
          *(_QWORD *)(v38 + 32) = -2147483611LL;
          WdLogEvent5_WdWarning(v38);
        }
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v13 + 10);
      }
      else
      {
        LODWORD(v11) = -2147483611;
        v39 = WdLogNewEntry5_WdWarning(v28, v27, v29);
        *(_QWORD *)(v39 + 24) = 1LL;
        *(_QWORD *)(v39 + 32) = -2147483611LL;
        WdLogEvent5_WdWarning(v39);
      }
      DxgkCompositionObject::Release(v13);
    }
    else
    {
      LODWORD(v11) = -1073741811;
      v26 = WdLogNewEntry5_WdWarning(v24, v23, v25);
      *(_QWORD *)(v26 + 24) = Current;
      *(_QWORD *)(v26 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v26);
    }
    KeLeaveCriticalRegion();
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v8);
    LODWORD(v11) = -1073741811;
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v10);
  }
  return (unsigned int)v11;
}
