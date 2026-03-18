/*
 * XREFs of ??_ECBaseExpressionMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C008D5E0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ??1CBaseExpressionMarshaler@DirectComposition@@UEAA@XZ @ 0x1C008D618 (--1CBaseExpressionMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CBaseExpressionMarshaler *__fastcall DirectComposition::CBaseExpressionMarshaler::`vector deleting destructor'(
        DirectComposition::CBaseExpressionMarshaler *this,
        char a2)
{
  DirectComposition::CBaseExpressionMarshaler::~CBaseExpressionMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
