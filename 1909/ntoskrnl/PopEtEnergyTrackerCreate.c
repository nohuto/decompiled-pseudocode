/*
 * XREFs of PopEtEnergyTrackerCreate @ 0x140785B30
 * Callers:
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140082D98 (KiQueryUnbiasedInterruptTime.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObInsertObject @ 0x1405D9D30 (ObInsertObject.c)
 *     NtClose @ 0x1405FBB70 (NtClose.c)
 *     ObCreateObject @ 0x140681580 (ObCreateObject.c)
 *     PopEtEnergyTrackerSnapshotProcesses @ 0x1408B4624 (PopEtEnergyTrackerSnapshotProcesses.c)
 */

__int64 __fastcall PopEtEnergyTrackerCreate(_DWORD *a1, HANDLE *a2)
{
  bool v4; // cf
  int inserted; // edi
  _QWORD *v6; // rsi
  _DWORD *v7; // rbx
  unsigned __int64 UnbiasedInterruptTime; // rax
  ULONG_PTR v9; // rcx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  int v12; // edi
  HANDLE v13; // rcx
  _QWORD v15[4]; // [rsp+50h] [rbp-19h] BYREF
  _DWORD v16[2]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v17; // [rsp+78h] [rbp+Fh]
  __int64 v18; // [rsp+80h] [rbp+17h]
  int v19; // [rsp+88h] [rbp+1Fh]
  int v20; // [rsp+8Ch] [rbp+23h]
  __int128 v21; // [rsp+90h] [rbp+27h]
  PVOID Object; // [rsp+D0h] [rbp+67h] BYREF
  HANDLE Handle; // [rsp+E0h] [rbp+77h] BYREF

  Object = 0LL;
  Handle = 0LL;
  v16[1] = 0;
  v20 = 0;
  memset(v15, 0, sizeof(v15));
  if ( (unsigned int)(*a1 - 1) > 0x3FFFF )
    *a1 = 0x40000;
  if ( PopEtGlobals )
  {
    v16[0] = 48;
    v17 = 0LL;
    v18 = 0LL;
    v4 = KeGetCurrentThread()->PreviousMode != 0;
    v21 = 0LL;
    v19 = v4 ? 0 : 0x200;
    inserted = ObCreateObject(
                 0,
                 *(_DWORD **)(PopEtGlobals + 32),
                 (int)v16,
                 KeGetCurrentThread()->$24A664F1AFBF48775CBEA2BECCC9B900::gap0[10],
                 0,
                 640,
                 0,
                 0,
                 &Object);
    if ( inserted < 0 )
    {
      v7 = Object;
    }
    else
    {
      v6 = Object;
      memset(Object, 0, 0x280uLL);
      v6[3] = 0LL;
      v6[2] = 0LL;
      v6[8] = 0LL;
      v6[9] = 0LL;
      v6[6] = 0LL;
      v6[7] = 0LL;
      memset(v6 + 10, 0, 0x200uLL);
      v6[12] = PopEtGlobals + 848;
      v6[4] = *(_QWORD *)a1;
      *((_DWORD *)v6 + 10) = a1[2];
      *((_DWORD *)v6 + 159) |= 1u;
      v7 = Object;
      *((_DWORD *)Object + 148) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
      v9 = PopEtGlobals + 16;
      v7[149] = UnbiasedInterruptTime / 0x2710;
      v7[150] = 1;
      PopAcquireRwLockExclusive(v9);
      v10 = PopEtGlobals;
      v11 = *(_QWORD **)(PopEtGlobals + 8);
      if ( *v11 != PopEtGlobals )
        __fastfail(3u);
      *(_QWORD *)v7 = PopEtGlobals;
      *((_QWORD *)v7 + 1) = v11;
      *v11 = v7;
      *(_QWORD *)(v10 + 8) = v7;
      PopReleaseRwLock(v10 + 16);
      *(_QWORD *)((char *)v15 + 4) = 0LL;
      HIDWORD(v15[1]) = 0;
      v15[3] = 0LL;
      LODWORD(v15[0]) = 1;
      v15[2] = v7;
      inserted = PopEtEnergyTrackerSnapshotProcesses(v15);
      if ( inserted >= 0 )
      {
        PopAcquireRwLockExclusive((ULONG_PTR)(v6 + 2));
        v12 = v7[153];
        if ( !v12 )
          *((_DWORD *)v6 + 159) &= ~1u;
        PopReleaseRwLock((ULONG_PTR)(v6 + 2));
        if ( v12 )
        {
          inserted = -1073741670;
        }
        else
        {
          inserted = ObInsertObject(v7, 0LL, 1u, 1u, 0LL, &Handle);
          if ( inserted < 0 )
          {
            v13 = Handle;
            v7 = 0LL;
          }
          else
          {
            v13 = 0LL;
            *a2 = Handle;
            inserted = 0;
          }
          if ( v13 )
            NtClose(v13);
        }
      }
    }
    if ( v7 )
      ObfDereferenceObject(v7);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)inserted;
}
