/*
 * XREFs of ndisAllocateEventLog @ 0x1C00CB02C
 * Callers:
 *     ndisAddDevice @ 0x1C010DDE4 (ndisAddDevice.c)
 *     DriverEntry @ 0x1C0127870 (DriverEntry.c)
 * Callees:
 *     memset @ 0x1C0027180 (memset.c)
 *     ndisEventEntryCount @ 0x1C00CB198 (ndisEventEntryCount.c)
 */

_QWORD *__fastcall ndisAllocateEventLog(unsigned int a1, __int16 a2)
{
  __int16 v3; // cx
  unsigned __int16 v4; // di
  __int16 v5; // dx
  __int16 v6; // ax
  __int16 v7; // bx
  int v8; // r14d
  __int16 v9; // si
  __int64 v10; // rdx
  size_t v11; // rbp
  _QWORD *PoolWithTag; // rax
  _QWORD *v13; // rbx

  if ( (a2 & 0xFFF8) != 0 || !ndisDebugLoggingMode )
    return 0LL;
  if ( ndisDebugLoggingMode == 2 )
    a2 |= 2u;
  v3 = a2 | 0x100;
  v4 = 4;
  if ( (a2 & 1) == 0 )
    v3 = a2;
  v5 = v3 | 0x500;
  if ( (v3 & 2) == 0 )
    v5 = v3;
  v6 = v5 | 0x700;
  if ( (v5 & 4) == 0 )
    v6 = v5;
  v7 = v6;
  if ( (v6 & 0x200) != 0 )
  {
    v4 = 16;
  }
  else if ( (v6 & 0x400) != 0 )
  {
    v4 = 8;
  }
  else if ( (v6 & 0x100) == 0 )
  {
    v4 = 2;
  }
  v8 = ndisEventEntryCount(a1);
  v9 = v7 | 0x1000;
  if ( (v7 & 2) == 0 )
    v9 = v7;
  v10 = v8 * (unsigned int)v4;
  v11 = (unsigned int)v10;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v10 + 32, 0x6C65444Eu);
  v13 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  *((_DWORD *)PoolWithTag + 2) = -1;
  *((_WORD *)PoolWithTag + 12) = v9;
  *((_WORD *)PoolWithTag + 13) = v4;
  *((_DWORD *)PoolWithTag + 3) = v8;
  KeInitializeSpinLock(PoolWithTag + 2);
  *v13 = MEMORY[0xFFFFF78000000014];
  if ( (v9 & 2) != 0 )
    memset(v13 + 4, 0, v11);
  return v13;
}
