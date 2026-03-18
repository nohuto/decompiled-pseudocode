/*
 * XREFs of ?vFreePql@PFEOBJ@@QEAAXXZ @ 0x1C0049CF8
 * Callers:
 *     bUnloadEudcFont @ 0x1C0049C14 (bUnloadEudcFont.c)
 * Callees:
 *     <none>
 */

void __fastcall PFEOBJ::vFreePql(PFEOBJ *this)
{
  __int64 v2; // rcx

  *(_DWORD *)(*(_QWORD *)this + 12LL) &= ~0x200u;
  v2 = *(_QWORD *)(*(_QWORD *)this + 112LL);
  if ( v2 )
  {
    Win32FreePool(v2);
    *(_QWORD *)(*(_QWORD *)this + 112LL) = 0LL;
  }
}
