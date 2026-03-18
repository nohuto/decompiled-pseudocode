/*
 * XREFs of KiAbTryIncrementIoWaiterCounts @ 0x14009F388
 * Callers:
 *     KiAbProcessContextSwitch @ 0x140042670 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x14009E090 (KiAbProcessThreadLocks.c)
 *     KiAbForceProcessLockEntry @ 0x14016B534 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x14005A520 (PsGetIoPriorityThread.c)
 */

__int64 __fastcall KiAbTryIncrementIoWaiterCounts(unsigned __int8 *a1, __int64 a2)
{
  _BYTE *v4; // r11
  unsigned __int8 v5; // cl
  unsigned int v7; // r10d
  unsigned __int8 *v8; // r8
  int IoPriorityThread; // eax

  if ( (a1[25] & 1) == 0 )
    return 0LL;
  v4 = a1 + 27;
  v5 = a1[27];
  if ( (v5 & 6) == 6 )
    return 0LL;
  v7 = 0;
  v8 = &a1[-16 * a1[24]];
  if ( (v5 & 2) == 0 )
  {
    IoPriorityThread = PsGetIoPriorityThread((__int64)v8);
    if ( IoPriorityThread >= 2 )
      goto LABEL_6;
    if ( *((_DWORD *)v8 + 454) != v7 )
      IoPriorityThread = 2;
    if ( IoPriorityThread >= 2 )
    {
LABEL_6:
      *(_WORD *)(a2 + 90) ^= (*(_WORD *)(a2 + 90) ^ (*(_WORD *)(a2 + 90) + 2)) & 0x1FE;
      *v4 |= 2u;
      if ( (*(_WORD *)(a2 + 90) & 0x1FE) == 2 )
        v7 = 1;
    }
  }
  if ( (*v4 & 4) == 0 && (!*((_DWORD *)v8 + 456) || *((_DWORD *)v8 + 455)) )
  {
    *(_WORD *)(a2 + 90) += 512;
    *v4 |= 4u;
    if ( (*(_WORD *)(a2 + 90) & 0xFE00) == 0x200 )
      v7 |= 2u;
  }
  return v7;
}
