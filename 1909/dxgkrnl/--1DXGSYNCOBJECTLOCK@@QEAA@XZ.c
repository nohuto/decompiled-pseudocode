/*
 * XREFs of ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x1C0036F0C
 * Callers:
 *     DxgkCreateProtectedSession @ 0x1C0261EE0 (DxgkCreateProtectedSession.c)
 * Callees:
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00072E0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 */

void __fastcall DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK(DXGSYNCOBJECTLOCK *this)
{
  if ( *((_BYTE *)this + 8) )
    DXGSYNCOBJECTLOCK::Release(this);
}
