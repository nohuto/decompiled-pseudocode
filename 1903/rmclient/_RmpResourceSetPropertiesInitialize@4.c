/*
 * XREFs of _RmpResourceSetPropertiesInitialize@4 @ 0x100154CC
 * Callers:
 *     _RmResourceSetPropertiesInitialize@4 @ 0x10011470 (_RmResourceSetPropertiesInitialize@4.c)
 * Callees:
 *     _memset @ 0x1000D154 (_memset.c)
 */

int __thiscall RmpResourceSetPropertiesInitialize(void *this)
{
  memset(this, 0, 0x68u);
  return RmpResourceLimitsInitialize((_DWORD *)this + 10);
}
