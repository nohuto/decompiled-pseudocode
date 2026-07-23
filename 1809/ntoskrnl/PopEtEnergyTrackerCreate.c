/*
 * XREFs of PopEtEnergyTrackerCreate @ 0x14075D570
 * Callers:
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PsEnumProcesses @ 0x1405B2AFC (PsEnumProcesses.c)
 *     ObCreateObjectEx @ 0x1405E15E0 (ObCreateObjectEx.c)
 *     NtClose @ 0x1405E99E0 (NtClose.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 */

__int64 __fastcall PopEtEnergyTrackerCreate(_DWORD *a1, __int64 *a2)
{
  unsigned int v2; // eax
  bool v5; // cf
  int inserted; // edi
  _QWORD *v7; // rsi
  _DWORD *v8; // rbx
  unsigned __int64 UnbiasedInterruptTime; // rax
  ULONG_PTR v10; // rcx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  int v13; // edi
  void *v14; // rcx
  __int64 v16; // [rsp+20h] [rbp-49h]
  _QWORD v17[4]; // [rsp+50h] [rbp-19h] BYREF
  int v18; // [rsp+70h] [rbp+7h] BYREF
  __int64 v19; // [rsp+78h] [rbp+Fh]
  __int64 v20; // [rsp+80h] [rbp+17h]
  int v21; // [rsp+88h] [rbp+1Fh]
  __int128 v22; // [rsp+90h] [rbp+27h]
  PVOID Object; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v24; // [rsp+E0h] [rbp+77h] BYREF

  v2 = *a1 - 1;
  Object = 0LL;
  v24 = 0LL;
  if ( v2 > 0x3FFFF )
    *a1 = 0x40000;
  if ( PopEtGlobals )
  {
    v18 = 48;
    v19 = 0LL;
    v5 = KeGetCurrentThread()->PreviousMode != 0;
    v20 = 0LL;
    v22 = 0LL;
    v21 = v5 ? 0 : 0x200;
    inserted = ObCreateObjectEx(
                 0,
                 *(_DWORD **)(PopEtGlobals + 32),
                 (int)&v18,
                 KeGetCurrentThread()->$86A1A36C0FEBA810544B2F2B35F40C82::gap0[10],
                 v16,
                 640,
                 0,
                 0,
                 &Object,
                 0LL);
    if ( inserted < 0 )
    {
      v8 = Object;
    }
    else
    {
      v7 = Object;
      memset(Object, 0, 0x280uLL);
      v7[3] = 0LL;
      v7[2] = 0LL;
      v7[8] = 0LL;
      v7[9] = 0LL;
      v7[6] = 0LL;
      v7[7] = 0LL;
      memset(v7 + 10, 0, 0x200uLL);
      v7[12] = PopEtGlobals + 848;
      v7[4] = *(_QWORD *)a1;
      *((_DWORD *)v7 + 10) = a1[2];
      *((_DWORD *)v7 + 159) |= 1u;
      v8 = Object;
      *((_DWORD *)Object + 148) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
      v10 = PopEtGlobals + 16;
      v8[149] = UnbiasedInterruptTime / 0x2710;
      v8[150] = 1;
      PopAcquireRwLockExclusive(v10);
      v11 = PopEtGlobals;
      v12 = *(_QWORD **)(PopEtGlobals + 8);
      if ( *v12 != PopEtGlobals )
        __fastfail(3u);
      *(_QWORD *)v8 = PopEtGlobals;
      *((_QWORD *)v8 + 1) = v12;
      *v12 = v8;
      *(_QWORD *)(v11 + 8) = v8;
      PopReleaseRwLock(v11 + 16);
      memset(v17, 0, sizeof(v17));
      LODWORD(v17[0]) = 1;
      v17[2] = v8;
      inserted = PsEnumProcesses(
                   (__int64 (__fastcall *)(__int64, __int64))PopEtProcessEnumSnapshotCallback,
                   (__int64)v17);
      if ( inserted >= 0 )
      {
        PopAcquireRwLockExclusive((ULONG_PTR)(v7 + 2));
        v13 = v8[153];
        if ( !v13 )
          *((_DWORD *)v7 + 159) &= ~1u;
        PopReleaseRwLock((ULONG_PTR)(v7 + 2));
        if ( v13 )
        {
          inserted = -1073741670;
        }
        else
        {
          inserted = ObInsertObjectEx(v8, 0LL, 1LL, 1, 0, 0LL, (unsigned __int64 *)&v24);
          if ( inserted < 0 )
          {
            v14 = (void *)v24;
            v8 = 0LL;
          }
          else
          {
            v14 = 0LL;
            *a2 = v24;
            inserted = 0;
          }
          if ( v14 )
            NtClose(v14);
        }
      }
    }
    if ( v8 )
      ObfDereferenceObject(v8);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)inserted;
}
