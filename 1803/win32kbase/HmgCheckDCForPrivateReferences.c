/*
 * XREFs of HmgCheckDCForPrivateReferences @ 0x1C005DB80
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C002F158 (-vCleanupDCs@@YAXK@Z.c)
 * Callees:
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C002684C (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     HmgIsObjectOwnedByW32Pid @ 0x1C005DC94 (HmgIsObjectOwnedByW32Pid.c)
 */

__int64 __fastcall HmgCheckDCForPrivateReferences(struct OBJECT **this, unsigned int a2)
{
  struct OBJECT *v4; // rax
  __int64 result; // rax

  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[18], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[19], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[20], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[12], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[190], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[197], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[21], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[196], a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[22], a2) )
    return 1LL;
  v4 = DC::prgnRao((DC *)this);
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(v4, a2) )
    return 1LL;
  if ( (unsigned int)HmgIsObjectOwnedByW32Pid(this[63], a2) )
    return 1LL;
  result = HmgIsObjectOwnedByW32Pid(this[311], a2);
  if ( (_DWORD)result )
    return 1LL;
  return result;
}
