/*
 * XREFs of ?SetCachedDpiScaleValue@DC@@QEAAXJ@Z @ 0x1C023FD60
 * Callers:
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C023FF0C (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DC::SetCachedDpiScaleValue(DC *this, int a2)
{
  *(_DWORD *)(*((_QWORD *)this + 10) + 412LL) = a2;
}
