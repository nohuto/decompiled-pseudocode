/*
 * XREFs of ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C0263BE0
 * Callers:
 *     ?BindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE_RETURN@@@Z @ 0x1C02655F4 (-BindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSA.c)
 *     ?VailDRTProcessExtractWorker@@YAXPEAX@Z @ 0x1C0291600 (-VailDRTProcessExtractWorker@@YAXPEAX@Z.c)
 *     ?VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C0291690 (-VailDRTTest@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000C708 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001ADD0 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C025F178 (-ReferenceVailObject@DXGPROCESS@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1C025F1E0 (-ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 *     ?ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C02643B0 (-ExtractBundleObject@DXG_HOST_REMOTEOBJECTCHANNEL@@QEAAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall DxgkExtractRemoteBundleObject(__int64 a1, __int64 a2, void **a3, struct _EPROCESS *a4)
{
  __int64 v5; // r14
  unsigned int v7; // r12d
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct DXGVAILOBJECT *v16; // rsi
  struct DXGGLOBAL *Global; // rax
  unsigned __int8 v18; // dl
  char v19; // cl
  char v20; // dl
  __int64 v21; // rax
  char v22; // cl
  __int64 v23; // rdx
  __int64 v24; // rdx
  char v25; // al
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  int BundleObject; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  _BYTE v45[24]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v46[24]; // [rsp+48h] [rbp-30h] BYREF

  v5 = (unsigned int)a1;
  v7 = a2;
  Current = DXGPROCESS::GetCurrent(a1, a2);
  if ( Current )
  {
    KeEnterCriticalRegion();
    v16 = 0LL;
    if ( (*((_BYTE *)Current + 299) & 4) != 0 )
    {
      Global = DXGGLOBAL::GetGlobal(v15, v14);
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v46,
        (struct _KTHREAD **)Global + 33);
      v18 = *((_BYTE *)Current + 299);
      v19 = v18 >> 2;
      v20 = v18 & 8;
      if ( v20 )
        v21 = *((_QWORD *)Current + 54);
      else
        v21 = (unsigned __int64)Current & -(__int64)((v19 & 1) != 0);
      v22 = v19 & 1;
      if ( *(_QWORD *)(v21 + 432) )
      {
        if ( v20 )
          v23 = *((_QWORD *)Current + 54);
        else
          v23 = (unsigned __int64)Current & -(__int64)(v22 != 0);
        DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
          (DXGAUTOPUSHLOCKEXCLUSIVE *)v45,
          (struct _KTHREAD **)(*(_QWORD *)(v23 + 432) + 64LL));
        v25 = *((_BYTE *)Current + 299);
        if ( (v25 & 8) != 0 )
          v26 = *((_QWORD *)Current + 54);
        else
          v26 = (unsigned __int64)Current & -(__int64)((v25 & 4) != 0);
        v16 = DXGVIRTUALMACHINE::ReferenceVailObject(*(struct _KTHREAD ***)(v26 + 432), v24);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v45);
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v46);
    }
    else
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v45, *((struct DXGFASTMUTEX *const *)Current + 13), 0);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v45);
      if ( *((_QWORD *)Current + 52) )
        v16 = DXGPROCESS::ReferenceVailObject((DxgkCompositionObject **)Current);
      if ( v45[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v45);
    }
    if ( v16 )
    {
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)v16 + 10) )
      {
        if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)v16 + 13) + 64LL)) )
        {
          BundleObject = DXG_HOST_REMOTEOBJECTCHANNEL::ExtractBundleObject(
                           *((DXG_HOST_REMOTEOBJECTCHANNEL **)v16 + 14),
                           v5,
                           v7,
                           a3,
                           a4);
          v13 = BundleObject;
          if ( BundleObject < 0 )
          {
            v41 = WdLogNewEntry5_WdWarning(v39, v38, v40);
            *(_QWORD *)(v41 + 24) = v5;
            *(_QWORD *)(v41 + 32) = v13;
            WdLogEvent5_WdWarning(v41);
          }
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*((_QWORD *)v16 + 13) + 64LL));
        }
        else
        {
          LODWORD(v13) = -2147483611;
          v42 = WdLogNewEntry5_WdWarning(v35, v34, v36);
          *(_QWORD *)(v42 + 24) = 2LL;
          *(_QWORD *)(v42 + 32) = -2147483611LL;
          WdLogEvent5_WdWarning(v42);
        }
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)v16 + 10);
      }
      else
      {
        LODWORD(v13) = -2147483611;
        v43 = WdLogNewEntry5_WdWarning(v32, v31, v33);
        *(_QWORD *)(v43 + 24) = 1LL;
        *(_QWORD *)(v43 + 32) = -2147483611LL;
        WdLogEvent5_WdWarning(v43);
      }
      DxgkCompositionObject::Release(v16);
    }
    else
    {
      LODWORD(v13) = -1073741811;
      v30 = WdLogNewEntry5_WdWarning(v28, v27, v29);
      *(_QWORD *)(v30 + 24) = Current;
      *(_QWORD *)(v30 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v30);
    }
    KeLeaveCriticalRegion();
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v9, v8, v11);
    LODWORD(v13) = -1073741811;
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
  }
  return (unsigned int)v13;
}
