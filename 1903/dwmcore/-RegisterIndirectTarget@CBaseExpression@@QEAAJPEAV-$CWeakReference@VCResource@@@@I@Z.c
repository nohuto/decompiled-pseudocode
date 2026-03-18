/*
 * XREFs of ?RegisterIndirectTarget@CBaseExpression@@QEAAJPEAV?$CWeakReference@VCResource@@@@I@Z @ 0x1801E7EB0
 * Callers:
 *     ?RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCBaseExpression@@W4Enum@InteractionTrackerProperty@@@Z @ 0x1801DFDE8 (-RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractio.c)
 * Callees:
 *     ?InsertExpressionIntoTargetMap@CExpressionManager@@AEAAJAEAVCTargetMapEntry@@PEAVCBaseExpression@@PEAVSubchannelMaskInfo@@@Z @ 0x180085D24 (-InsertExpressionIntoTargetMap@CExpressionManager@@AEAAJAEAVCTargetMapEntry@@PEAVCBaseExpression.c)
 *     ??1CTargetMapEntry@@QEAA@XZ @ 0x180085E3C (--1CTargetMapEntry@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Emplace_reallocate@AEAPEAV?$CWeakReference@VCResource@@@@AEAI@?$vector@U?$pair@PEAV?$CWeakReference@VCResource@@@@I@std@@V?$allocator@U?$pair@PEAV?$CWeakReference@VCResource@@@@I@std@@@2@@std@@QEAAPEAU?$pair@PEAV?$CWeakReference@VCResource@@@@I@1@QEAU21@AEAPEAV?$CWeakReference@VCResource@@@@AEAI@Z @ 0x1801E71C0 (--$_Emplace_reallocate@AEAPEAV-$CWeakReference@VCResource@@@@AEAI@-$vector@U-$pair@PEAV-$CWeakRe.c)
 */

__int64 __fastcall CBaseExpression::RegisterIndirectTarget(struct CBaseExpression *a1, __int64 a2, int a3)
{
  char *v5; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  CExpressionManager *v9; // rdi
  signed int inserted; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v14; // [rsp+30h] [rbp-38h] BYREF
  int v15; // [rsp+38h] [rbp-30h]
  __int64 v16; // [rsp+40h] [rbp-28h]
  __int64 v17; // [rsp+78h] [rbp+10h] BYREF
  int v18; // [rsp+80h] [rbp+18h] BYREF

  v18 = a3;
  v17 = a2;
  v5 = (char *)a1 + 280;
  v7 = *((_QWORD *)v5 + 1);
  if ( *((_QWORD *)v5 + 2) == v7 )
  {
    std::vector<std::pair<CWeakReference<CResource> *,unsigned int>>::_Emplace_reallocate<CWeakReference<CResource> * &,unsigned int &>(
      (__int64)v5,
      (__int128 *)v7,
      &v17,
      &v18);
  }
  else
  {
    *(_QWORD *)v7 = a2;
    *(_DWORD *)(v7 + 8) = a3;
    *((_QWORD *)v5 + 1) += 16LL;
  }
  v8 = *((_QWORD *)a1 + 2);
  v16 = 0LL;
  v14 = a2;
  v15 = a3;
  v9 = *(CExpressionManager **)(v8 + 240);
  inserted = CExpressionManager::InsertExpressionIntoTargetMap(v9, (struct CTargetMapEntry *)&v14, a1, 0LL);
  v12 = inserted;
  if ( inserted < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, inserted, 0xD4u, 0LL);
  }
  else
  {
    *((_BYTE *)v9 + 416) |= 4u;
    v12 = 0;
  }
  CTargetMapEntry::~CTargetMapEntry((CTargetMapEntry *)&v14);
  return v12;
}
