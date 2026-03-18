/*
 * XREFs of ?Initialize@CScrollAnimation@@IEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1801D61A4
 * Callers:
 *     ?Initialize@CInteractionTrackerPositionAnimation@@QEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z @ 0x1801D7E34 (-Initialize@CInteractionTrackerPositionAnimation@@QEAAJPEAVCInteractionTracker@@W4ScrollAxis@@@Z.c)
 *     ?Initialize@CInteractionTrackerScaleAnimation@@QEAAJPEAVCInteractionTracker@@@Z @ 0x1801D84B0 (-Initialize@CInteractionTrackerScaleAnimation@@QEAAJPEAVCInteractionTracker@@@Z.c)
 * Callees:
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x1800BD464 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMa.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@?$CWeakReference@VCInteractionTracker@@@@SAJPEAVCInteractionTracker@@PEAPEAV1@@Z @ 0x1801A56D0 (-Create@-$CWeakReference@VCInteractionTracker@@@@SAJPEAVCInteractionTracker@@PEAPEAV1@@Z.c)
 *     ?Stop@CScrollAnimation@@QEAAJXZ @ 0x1801D66DC (-Stop@CScrollAnimation@@QEAAJXZ.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 *     ?InsertMaskElement@VectorSubchannelMaskInfo@@QEAAJE@Z @ 0x18021BC9C (-InsertMaskElement@VectorSubchannelMaskInfo@@QEAAJE@Z.c)
 */

__int64 __fastcall CScrollAnimation::Initialize(__int64 a1, unsigned int *a2, int a3)
{
  int v3; // ebp
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi
  int v10; // ebx
  int v11; // r9d
  int v12; // eax
  __int64 v13; // rcx
  int inserted; // eax
  int v15; // eax
  int v17; // [rsp+40h] [rbp-28h] BYREF
  char v18; // [rsp+44h] [rbp-24h]
  unsigned __int8 v19; // [rsp+48h] [rbp-20h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  v3 = 0;
  v18 = 0;
  v19 = 0;
  v17 = 1;
  v7 = CWeakReference<CInteractionTracker>::Create((struct CResource *)a2, (struct CWeakResourceReference **)(a1 + 304));
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x3Fu);
    goto LABEL_15;
  }
  *(_DWORD *)(a1 + 292) = a3;
  if ( a3 )
  {
    v10 = a3 - 1;
    if ( v10 )
    {
      if ( v10 != 1 )
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      v11 = 2;
    }
    else
    {
      v3 = 1;
      inserted = VectorSubchannelMaskInfo::InsertMaskElement((VectorSubchannelMaskInfo *)&v17, 1u);
      if ( inserted < 0 )
        ModuleFailFastForHRESULT((unsigned int)inserted, retaddr);
    }
  }
  else
  {
    v3 = 1;
    v15 = VectorSubchannelMaskInfo::InsertMaskElement((VectorSubchannelMaskInfo *)&v17, 0);
    if ( v15 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v15, retaddr);
  }
  v12 = CBaseExpression::SetTarget(a1, a2[46], (struct CResource *)a2, v11, 0x12u, v3, v18, v19);
  v9 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x6Cu);
LABEL_15:
    CScrollAnimation::Stop((CScrollAnimation *)a1);
    return v9;
  }
  *(_BYTE *)(a1 + 320) |= 1u;
  *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 224LL) + 416LL) |= 2u;
  return 0;
}
