/*
 * XREFs of ExQueryProcessHandleInformation @ 0x1408CF130
 * Callers:
 *     NtQueryInformationProcess @ 0x14066ED30 (NtQueryInformationProcess.c)
 * Callees:
 *     ExLockHandleTableEntry @ 0x140053220 (ExLockHandleTableEntry.c)
 *     ExfUnblockPushLock @ 0x1401B75B0 (ExfUnblockPushLock.c)
 *     ExpGetNextHandleTableEntry @ 0x140690DA0 (ExpGetNextHandleTableEntry.c)
 */

__int64 __fastcall ExQueryProcessHandleInformation(unsigned int *a1, _QWORD *a2, int a3, int *a4)
{
  __int64 v5; // r13
  _QWORD *v6; // rbx
  unsigned int v7; // r12d
  int v8; // edi
  unsigned int v9; // r14d
  __int64 v10; // rdx
  signed __int64 *NextHandleTableEntry; // rax
  unsigned int v12; // r11d
  signed __int64 *v13; // rsi
  __int64 *v14; // rdx
  int v15; // r9d
  int v16; // r8d
  int v17; // r8d
  int v18; // r10d
  __int64 v19; // r11
  __int64 v20; // rdx
  int v21; // r9d
  signed __int32 v23[8]; // [rsp+0h] [rbp-88h] BYREF
  int v24; // [rsp+20h] [rbp-68h]
  int v25; // [rsp+24h] [rbp-64h]
  __int64 v26[2]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v27; // [rsp+38h] [rbp-50h]
  __int64 v28; // [rsp+40h] [rbp-48h]
  int v30; // [rsp+A0h] [rbp+18h]

  v5 = (__int64)a1;
  v6 = a2 + 2;
  v26[1] = (unsigned int)(a3 - 16) / 0x28uLL;
  v7 = 0;
  v8 = 16;
  v9 = 0;
  v10 = 0LL;
  while ( 1 )
  {
    NextHandleTableEntry = (signed __int64 *)ExpGetNextHandleTableEntry(a1, v10, v26);
    v13 = NextHandleTableEntry;
    if ( !NextHandleTableEntry )
      break;
    if ( v7 >= v12 )
    {
      if ( (v26[0] & 0x3FC) != 0 && *NextHandleTableEntry )
      {
        v8 += 40;
        v9 = -1073741820;
      }
    }
    else if ( ExLockHandleTableEntry(v5, NextHandleTableEntry) )
    {
      v14 = (__int64 *)((*v13 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
      v15 = *((_DWORD *)v13 + 2);
      v16 = (*v13 >> 17) & 7 | 8;
      if ( (v15 & 0x2000000) == 0 )
        LOBYTE(v16) = (*v13 >> 17) & 7;
      v17 = v16 & 7;
      v30 = v17;
      v18 = *(unsigned __int8 *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(((*v13 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x18) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(WORD1(*v13) & 0xFFF0) >> 8)]
                               + 40);
      v25 = v18;
      v19 = *v14;
      v27 = *v14;
      v20 = v14[1];
      v28 = v20;
      v21 = v15 & 0x1FFFFFF;
      v24 = v21;
      _InterlockedExchangeAdd64(v13, 1uLL);
      _InterlockedOr(v23, 0);
      if ( *(_QWORD *)(v5 + 48) )
      {
        ExfUnblockPushLock((volatile __int64 *)(v5 + 48), 0LL);
        v17 = v30;
        v21 = v24;
        v18 = v25;
        v19 = v27;
        v20 = v28;
      }
      v8 += 40;
      ++v7;
      *v6 = v26[0];
      v6[1] = v20;
      v6[2] = v19;
      *((_DWORD *)v6 + 6) = v21;
      *((_DWORD *)v6 + 7) = v18;
      *((_DWORD *)v6 + 8) = v17;
      *((_DWORD *)v6 + 9) = 0;
      *a2 = v7;
      v6 += 5;
    }
    v10 = (__int64)v13;
    a1 = (unsigned int *)v5;
  }
  if ( a4 )
    *a4 = v8;
  return v9;
}
