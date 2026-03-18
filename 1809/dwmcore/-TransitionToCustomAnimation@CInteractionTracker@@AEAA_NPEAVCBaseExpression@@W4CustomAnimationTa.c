/*
 * XREFs of ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801A2E54
 * Callers:
 *     ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801A1ED4 (-SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z @ 0x1800BD9C0 (-Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAXXZ @ 0x18019F2D8 (-DestroyDefaultAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x18019F334 (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x18019FDDC (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z @ 0x1801A285C (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z.c)
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH@Z @ 0x1801A2D2C (-StopCustomAnimation@CInteractionTracker@@AEAAXH@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 *     ?ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x1801E4F50 (-ClearActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 */

char __fastcall CInteractionTracker::TransitionToCustomAnimation(_DWORD *a1, struct CResource *a2, signed int a3)
{
  char v3; // bl
  __int64 v4; // r14
  int v7; // ecx
  int v8; // ecx
  InteractionSourceManager *v9; // r10
  int v10; // eax
  __int64 v11; // rcx
  int v12; // esi
  int v13; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]
  struct CWeakResourceReference *v16; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  v4 = a3;
  if ( a2 )
  {
    v7 = a1[42];
    if ( v7 )
    {
      v8 = v7 - 2;
      if ( v8 )
      {
        if ( v8 != 1 )
        {
          *((_BYTE *)a2 + 208) &= ~1u;
          return v3;
        }
        CInteractionTracker::StopCustomAnimation((CInteractionTracker *)a1, a3);
      }
      else
      {
        CInteractionTracker::DestroyInteractionAnimations((CInteractionTracker *)a1);
        CInteractionTracker::DestroyDefaultAnimations((CInteractionTracker *)a1);
      }
    }
    if ( InteractionSourceManager::HasActiveManipulation((InteractionSourceManager *)(a1 + 48)) )
      InteractionSourceManager::ClearActiveManipulations(v9);
    if ( (unsigned int)v4 < 2 )
    {
      v16 = 0LL;
      v10 = CWeakResourceReference::Get(a2, &v16);
      v12 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x99u);
        if ( v16 )
          (*(void (__fastcall **)(struct CWeakResourceReference *))(*(_QWORD *)v16 + 8LL))(v16);
      }
      else
      {
        *(_QWORD *)&a1[2 * v4 + 86] = v16;
      }
      if ( v12 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v12, retaddr);
      v13 = CResource::RegisterNotifier((CResource *)a1, a2);
      if ( v13 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v13, retaddr);
      CInteractionTracker::SetState((__int64)a1, 3);
    }
    return 1;
  }
  return v3;
}
