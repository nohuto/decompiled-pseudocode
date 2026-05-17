/*
 * XREFs of RtlUnlockMemoryZone @ 0x180073800
 * Callers:
 *     RtlUnlockMemoryBlockLookaside @ 0x1800737A0 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlLockMemoryBlockLookaside @ 0x180073930 (RtlLockMemoryBlockLookaside.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_180073890 @ 0x180073890 (sub_180073890.c)
 *     ZwUnlockVirtualMemory @ 0x18009FF70 (ZwUnlockVirtualMemory.c)
 */

__int64 __fastcall RtlUnlockMemoryZone(__int64 a1)
{
  volatile signed __int64 *v1; // rsi
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  _QWORD *i; // rdi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v9; // [rsp+38h] [rbp+10h] BYREF

  v1 = (volatile signed __int64 *)(a1 + 32);
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
  v3 = *(_DWORD *)(a1 + 40);
  v4 = 0;
  if ( v3 )
  {
    v5 = v3 - 1;
    *(_DWORD *)(a1 + 40) = v5;
    if ( !v5 )
    {
      for ( i = *(_QWORD **)(a1 + 48); i; i = (_QWORD *)*i )
      {
        v9 = i;
        v8 = i[1];
        ZwUnlockVirtualMemory(-1LL, &v9, &v8, 1LL);
      }
      sub_180073890();
    }
  }
  else
  {
    v4 = -1073741823;
  }
  RtlReleaseSRWLockExclusive(v1);
  return v4;
}
