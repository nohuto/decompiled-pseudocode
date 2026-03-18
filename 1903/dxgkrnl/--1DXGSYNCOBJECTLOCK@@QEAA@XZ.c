/*
 * XREFs of ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x1C0036DAC
 * Callers:
 *     DxgkCreateProtectedSession @ 0x1C0261850 (DxgkCreateProtectedSession.c)
 * Callees:
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000735C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 */

void __fastcall DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK(DXGSYNCOBJECTLOCK *this)
{
  if ( *((_BYTE *)this + 8) )
    DXGSYNCOBJECTLOCK::Release(this);
}
