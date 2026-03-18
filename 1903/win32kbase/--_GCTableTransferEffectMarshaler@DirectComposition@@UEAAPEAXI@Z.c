/*
 * XREFs of ??_GCTableTransferEffectMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01A54E0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ??1CTableTransferEffectMarshaler@DirectComposition@@UEAA@XZ @ 0x1C01B1BF0 (--1CTableTransferEffectMarshaler@DirectComposition@@UEAA@XZ.c)
 */

DirectComposition::CTableTransferEffectMarshaler *__fastcall DirectComposition::CTableTransferEffectMarshaler::`scalar deleting destructor'(
        DirectComposition::CTableTransferEffectMarshaler *this,
        char a2)
{
  DirectComposition::CTableTransferEffectMarshaler::~CTableTransferEffectMarshaler(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
