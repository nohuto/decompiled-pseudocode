/*
 * XREFs of ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801DDD1C
 * Callers:
 *     ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801DCB1C (-SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180080220 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z @ 0x180082D58 (-Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z @ 0x1800EAFE0 (-StopCustomAnimation@CInteractionTracker@@AEAAXH_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAXXZ @ 0x1801D9F8C (-DestroyDefaultAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x1801D9FE8 (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?RegisterIndirectTargetsForBoundTrackers@CInteractionTracker@@QEAAJPEAVCBaseExpression@@W4Enum@InteractionTrackerProperty@@@Z @ 0x1801DBC38 (-RegisterIndirectTargetsForBoundTrackers@CInteractionTracker@@QEAAJPEAVCBaseExpression@@W4Enum@I.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1801DD744 (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 */

char __fastcall CInteractionTracker::TransitionToCustomAnimation(
        CInteractionTracker *a1,
        struct CResource *a2,
        unsigned int a3)
{
  __int64 v3; // r14
  char v4; // bl
  int v7; // ecx
  int v8; // ecx
  signed int v9; // eax
  __int64 v10; // rcx
  int v11; // ebp
  int v12; // eax
  int v13; // eax
  const void *retaddr; // [rsp+48h] [rbp+0h]
  struct CWeakResourceReference *v16; // [rsp+68h] [rbp+20h] BYREF

  v3 = (int)a3;
  v4 = 0;
  if ( a3 >= 2 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  if ( !a2 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  v7 = *((_DWORD *)a1 + 42);
  if ( v7 )
  {
    v8 = v7 - 2;
    if ( v8 )
    {
      if ( v8 != 1 )
      {
        *((_BYTE *)a2 + 208) &= ~1u;
        return v4;
      }
      CInteractionTracker::StopCustomAnimation(a1, a3, 0);
    }
    else
    {
      CInteractionTracker::DestroyInteractionAnimations(a1);
      CInteractionTracker::DestroyDefaultAnimations(a1);
    }
  }
  v16 = 0LL;
  v9 = CWeakResourceReference::Get(a2, &v16);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x97u, 0LL);
    if ( v16 )
      (*(void (__fastcall **)(struct CWeakResourceReference *))(*(_QWORD *)v16 + 8LL))(v16);
  }
  else
  {
    *((_QWORD *)a1 + v3 + 43) = v16;
  }
  if ( v11 < 0 )
    ModuleFailFastForHRESULT(v11, retaddr);
  v12 = CResource::RegisterNotifier(a1, a2);
  if ( v12 < 0 )
    ModuleFailFastForHRESULT(v12, retaddr);
  CInteractionTracker::SetState((__int64)a1, 3, 0);
  v13 = CInteractionTracker::RegisterIndirectTargetsForBoundTrackers(
          (__int64)a1,
          (__int64)a2,
          (unsigned int)((_DWORD)v3 != 0) + 1);
  if ( v13 < 0 )
    ModuleFailFastForHRESULT(v13, retaddr);
  return 1;
}
