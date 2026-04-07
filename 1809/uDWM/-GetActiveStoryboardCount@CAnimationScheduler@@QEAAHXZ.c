/*
 * XREFs of ?GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ @ 0x18000EA78
 * Callers:
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x18000F09C (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18002D284 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18003E6B0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationScheduler::GetActiveStoryboardCount(CAnimationScheduler *this)
{
  unsigned int v1; // edx
  __int64 *v3; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  unsigned int v6; // ecx

  v1 = 0;
  if ( *((_DWORD *)this + 10) )
  {
    v3 = (__int64 *)*((_QWORD *)this + 2);
    v4 = *((unsigned int *)this + 10);
    do
    {
      v5 = *v3;
      v6 = v1 + 1;
      ++v3;
      if ( *(_DWORD *)(v5 + 24) == 4 )
        v6 = v1;
      v1 = v6;
      --v4;
    }
    while ( v4 );
  }
  return v1;
}
