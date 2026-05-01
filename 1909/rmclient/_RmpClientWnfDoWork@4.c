/*
 * XREFs of _RmpClientWnfDoWork@4 @ 0x10007EF8
 * Callers:
 *     _HamIpcChannelObjectMakeZombie@8 @ 0x10007E30 (_HamIpcChannelObjectMakeZombie@8.c)
 *     _HampIpcChannelObjectMakeZombieUnsafe@8 @ 0x100135F1 (_HampIpcChannelObjectMakeZombieUnsafe@8.c)
 * Callees:
 *     <none>
 */

int __thiscall RmpClientWnfDoWork(_DWORD *this)
{
  _DWORD *v2; // edi
  int v3; // eax
  int v5; // [esp-4h] [ebp-Ch]

  v2 = this + 4;
  RtlAcquireSRWLockExclusive(this + 4);
  this[9] |= 2u;
  v3 = this[9];
  if ( (v3 & 1) == 0 )
  {
    v5 = this[8];
    this[9] = v3 | 1;
    TpPostWork(v5);
  }
  return RtlReleaseSRWLockExclusive(v2);
}
