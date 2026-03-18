/*
 * XREFs of ?GetCachedDpiScaleValue@DC@@QEBAJXZ @ 0x1C000BDA8
 * Callers:
 *     GreGetDCDpiScaleValue @ 0x1C000BD58 (GreGetDCDpiScaleValue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DC::GetCachedDpiScaleValue(DC *this)
{
  return *(unsigned int *)(*((_QWORD *)this + 122) + 136LL);
}
