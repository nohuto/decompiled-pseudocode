/*
 * XREFs of ___abi_translateCurrentException_::_1_::catch$0 @ 0x1800E9674
 * Callers:
 *     <none>
 * Callees:
 *     ?ReCreateFromException@Details@Platform@@YAJPE$AAVException@2@@Z_0 @ 0x18008DE5F (-ReCreateFromException@Details@Platform@@YAJPE$AAVException@2@@Z_0.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall __abi_translateCurrentException_::_1_::catch_0(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a2 + 72) = Platform::Details::ReCreateFromException(*(_QWORD *)(a2 + 40));
  return &loc_18008DDFF;
}
