/*
 * XREFs of BgpFwReservePoolSwap @ 0x14098E340
 * Callers:
 *     ResFwFreeContext @ 0x14098E218 (ResFwFreeContext.c)
 *     BgpFwLibraryInitialize @ 0x14098F9A8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     BgpFwInitializeReservePool @ 0x140990558 (BgpFwInitializeReservePool.c)
 */

__int64 __fastcall BgpFwReservePoolSwap(int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      qword_140467E60 = qword_140467DD8;
      dword_140467E80 = dword_140467DD4;
      result = (unsigned int)dword_140467DD0;
      dword_140467E68 = dword_140467DD0;
      stru_140467E70 = (_RTL_BITMAP)xmmword_140467DE0;
    }
  }
  else
  {
    dword_140467DD0 = dword_140467E68;
    qword_140467DD8 = qword_140467E60;
    dword_140467DD4 = dword_140467E80;
    xmmword_140467DE0 = (__int128)stru_140467E70;
    return BgpFwInitializeReservePool(a2, a3, a4);
  }
  return result;
}
