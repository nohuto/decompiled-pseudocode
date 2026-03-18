/*
 * XREFs of ?SetProperty@CInteractionTracker@@MEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801DBB10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteractionTracker@@PEAV2@W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800ED2F4 (-BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteracti.c)
 *     ?SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1801DB59C (-SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetMaxScale@CInteractionTracker@@AEAAXM@Z @ 0x1801DB6B0 (-SetMaxScale@CInteractionTracker@@AEAAXM@Z.c)
 *     ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1801DB7A8 (-SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetMinScale@CInteractionTracker@@AEAAXM@Z @ 0x1801DB8BC (-SetMinScale@CInteractionTracker@@AEAAXM@Z.c)
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z @ 0x1801DB9B4 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z.c)
 *     ?SetPositionInertiaDecayRate@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x1801DBA58 (-SetPositionInertiaDecayRate@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z @ 0x1801DBE78 (-SetScale@CInteractionTracker@@AEAAXMW4TrackerUpdateType@1@@Z.c)
 *     ?SetScaleInertiaDecayRate@CInteractionTracker@@AEAAXM@Z @ 0x1801DBFE8 (-SetScaleInertiaDecayRate@CInteractionTracker@@AEAAXM@Z.c)
 */

__int64 __fastcall CInteractionTracker::SetProperty(__int64 a1, int a2, int a3, float *a4)
{
  char v4; // bp
  bool v5; // si
  float v6; // xmm6_4
  bool v7; // di
  int v9; // edx
  int v10; // edx
  int v11; // edx
  __int64 v12; // rdx
  int v13; // edx
  int v14; // edx
  bool v15; // al
  __int64 v16; // rcx
  char v17; // al
  char v18; // dl
  char v19; // r9
  unsigned int v20; // ebx
  __int64 v22; // [rsp+30h] [rbp-28h]

  v4 = 0;
  v5 = 0;
  v6 = *(float *)(a1 + 128);
  v7 = 0;
  v22 = *(_QWORD *)(a1 + 72);
  if ( a3 == 18 )
  {
    v12 = (unsigned int)(a2 - 2);
    if ( !(_DWORD)v12 )
    {
      CInteractionTracker::SetScale(a1, v12, 0LL);
      goto LABEL_22;
    }
    v13 = v12 - 26;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 == 34 )
        {
          CInteractionTracker::SetScaleInertiaDecayRate((CInteractionTracker *)a1, *a4);
          goto LABEL_22;
        }
        goto LABEL_3;
      }
      CInteractionTracker::SetMaxScale((CInteractionTracker *)a1, *a4);
    }
    else
    {
      CInteractionTracker::SetMinScale((CInteractionTracker *)a1, *a4);
    }
    v15 = v6 != *(float *)(a1 + 128);
    v5 = *(float *)&v22 != *(float *)(a1 + 72);
    v7 = *((float *)&v22 + 1) != *(float *)(a1 + 76);
    goto LABEL_23;
  }
  if ( a3 == 52 )
  {
    v9 = a2 - 1;
    if ( !v9 )
    {
      CInteractionTracker::SetPosition(a1, (__int64)a4, 0);
      goto LABEL_22;
    }
    v10 = v9 - 21;
    if ( v10 )
    {
      v11 = v10 - 3;
      if ( v11 )
      {
        if ( v11 == 35 )
        {
          CInteractionTracker::SetPositionInertiaDecayRate((CInteractionTracker *)a1, (const struct D2DVector3 *)a4);
          goto LABEL_22;
        }
        goto LABEL_3;
      }
      CInteractionTracker::SetMaxPosition((CInteractionTracker *)a1, (const struct D2DVector3 *)a4);
    }
    else
    {
      CInteractionTracker::SetMinPosition((CInteractionTracker *)a1, (const struct D2DVector3 *)a4);
    }
    v5 = *(float *)&v22 != *(float *)(a1 + 72);
    v7 = *((float *)&v22 + 1) != *(float *)(a1 + 76);
    goto LABEL_22;
  }
LABEL_3:
  v4 = 1;
LABEL_22:
  v15 = 0;
LABEL_23:
  v16 = *(_QWORD *)(a1 + 632);
  if ( v16 )
  {
    v17 = 4 * v15;
    v18 = v17 | 1;
    if ( !v5 )
      v18 = v17;
    v19 = v18 | 2;
    if ( !v7 )
      v19 = v18;
    CInteractionTrackerBindingManager::BringBoundTrackersPositionAndScaleInSync(v16, a1, a1, v19);
  }
  if ( v4 )
  {
    v20 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, 0x80070057, 0x55Du, 0LL);
  }
  else
  {
    return 0;
  }
  return v20;
}
