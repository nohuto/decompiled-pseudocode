/*
 * XREFs of ?OnStoryboardTimeout@CStoryboard@@QEAAJXZ @ 0x1800A4874
 * Callers:
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x180026990 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 * Callees:
 *     ?_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z @ 0x180032184 (-_EnumerateWindows@CStoryboard@@IEAAJW4EnumWindowFlags@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x1800A3088 (-Abandon@CStoryboard@@QEAAXXZ.c)
 */

__int64 __fastcall CStoryboard::OnStoryboardTimeout(CStoryboard *this)
{
  int v1; // edi

  v1 = 0;
  if ( !*((_DWORD *)this + 6) )
  {
    *((_BYTE *)this + 76) = 1;
    if ( *((_BYTE *)this + 68) )
    {
      v1 = (*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 96LL))(this);
    }
    else
    {
      CStoryboard::_EnumerateWindows(this, 2u);
      CStoryboard::Abandon(this);
    }
    if ( v1 < 0 )
      CStoryboard::Abandon(this);
  }
  return (unsigned int)v1;
}
