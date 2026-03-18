/*
 * XREFs of ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x1801D9A44
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x180099040 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801DAF40 (-OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801DCB1C (-SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x1801D913C (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?HasRunningDefaultPositionAnimation@CInteractionTracker@@QEBA_NXZ @ 0x1801DAC20 (-HasRunningDefaultPositionAnimation@CInteractionTracker@@QEBA_NXZ.c)
 *     ?HasRunningDefaultScaleAnimation@CInteractionTracker@@QEBA_NXZ @ 0x1801DAC40 (-HasRunningDefaultScaleAnimation@CInteractionTracker@@QEBA_NXZ.c)
 *     ?IsOutOfBounds@CInteractionTracker@@QEAA_NXZ @ 0x1801DAE78 (-IsOutOfBounds@CInteractionTracker@@QEAA_NXZ.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x1801DDE88 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 */

void __fastcall CInteractionTracker::CheckForIdle(CInteractionTracker *this)
{
  int v2; // ecx
  int v3; // ecx
  unsigned int v4; // ecx
  char *v5; // rax
  CInteractionTracker *v6; // rcx
  CInteractionTracker *v7; // rcx

  v2 = *((_DWORD *)this + 42) - 1;
  if ( !v2 )
    return;
  v3 = v2 - 1;
  if ( !v3 )
  {
    if ( CInteractionTracker::AreInteractionAnimationsAlive(this)
      && ((*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 40) + 296LL))(*((_QWORD *)this + 40))
       || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 41) + 296LL))(*((_QWORD *)this + 41))
       || (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 42) + 296LL))(*((_QWORD *)this + 42)))
      || CInteractionTracker::HasRunningDefaultPositionAnimation(this)
      || CInteractionTracker::HasRunningDefaultScaleAnimation(v7) )
    {
      return;
    }
LABEL_15:
    if ( CInteractionTracker::IsOutOfBounds(v6) )
    {
      CInteractionTracker::TransitionToInertia(this, 0LL);
      return;
    }
LABEL_17:
    CInteractionTracker::TransitionToIdle(this);
    return;
  }
  if ( v3 != 1 )
    goto LABEL_17;
  v4 = 0;
  v5 = (char *)this + 344;
  while ( !*(_QWORD *)v5 || !*(_QWORD *)(*(_QWORD *)v5 + 16LL) )
  {
    ++v4;
    v5 += 8;
    if ( v4 >= 2 )
    {
      v6 = this;
      goto LABEL_15;
    }
  }
}
