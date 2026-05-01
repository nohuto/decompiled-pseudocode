/*
 * XREFs of _RmpResourceLimitsInitialize@4 @ 0x10015499
 * Callers:
 *     _RmResourceLimitsInitialize@4 @ 0x10011450 (_RmResourceLimitsInitialize@4.c)
 *     _RmpResourceSetPropertiesInitialize@4 @ 0x100154CC (_RmpResourceSetPropertiesInitialize@4.c)
 * Callees:
 *     <none>
 */

int __thiscall RmpResourceLimitsInitialize(_DWORD *this)
{
  int result; // eax

  *this = 0;
  this[1] = 0;
  this[10] = 0;
  this[11] = 0;
  this[13] = 0;
  result = -1;
  this[12] = 1;
  this[8] = -1;
  this[9] = -1;
  this[6] = -1;
  this[7] = -1;
  this[4] = -1;
  this[5] = -1;
  this[2] = -1;
  this[3] = -1;
  return result;
}
