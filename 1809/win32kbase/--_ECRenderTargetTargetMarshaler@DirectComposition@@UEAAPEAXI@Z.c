/*
 * XREFs of ??_ECRenderTargetTargetMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C0094AA0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 */

DirectComposition::CRenderTargetTargetMarshaler *__fastcall DirectComposition::CRenderTargetTargetMarshaler::`vector deleting destructor'(
        DirectComposition::CRenderTargetTargetMarshaler *this,
        char a2)
{
  *(_QWORD *)this = &DirectComposition::CRenderTargetTargetMarshaler::`vftable';
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
