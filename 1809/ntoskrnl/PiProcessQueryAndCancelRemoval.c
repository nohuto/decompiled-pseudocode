/*
 * XREFs of PiProcessQueryAndCancelRemoval @ 0x140841398
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1406F0A30 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PnpAllocateCriticalMemory @ 0x1406EFE04 (PnpAllocateCriticalMemory.c)
 *     PnpNotifyUserModeDeviceRemoval @ 0x1406F1394 (PnpNotifyUserModeDeviceRemoval.c)
 *     PiEventAreDeviceRelationsExcluded @ 0x1406F15A4 (PiEventAreDeviceRelationsExcluded.c)
 *     PnpCancelRemoveOnHungDevices @ 0x1408291EC (PnpCancelRemoveOnHungDevices.c)
 *     PnpFinalizeVetoedRemove @ 0x1408341FC (PnpFinalizeVetoedRemove.c)
 *     PipProcessQueryRemovalInKernelMode @ 0x140841890 (PipProcessQueryRemovalInKernelMode.c)
 */

__int64 __fastcall PiProcessQueryAndCancelRemoval(
        unsigned int a1,
        __int64 a2,
        unsigned int **a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7)
{
  char v10; // al
  int *v11; // rbx
  __int64 *v12; // r14
  _WORD *v13; // rsi
  UNICODE_STRING *v14; // r15
  int RemovalInKernelMode; // ebp
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rbx
  _WORD *CriticalMemory; // rax
  char v22; // [rsp+30h] [rbp-38h]

  v10 = PiEventAreDeviceRelationsExcluded(a1);
  v11 = (int *)a6;
  v12 = a7;
  v22 = v10;
  v13 = 0LL;
  v14 = (UNICODE_STRING *)(a6 + 8);
  RemovalInKernelMode = PnpNotifyUserModeDeviceRemoval(
                          a2,
                          (_WORD *)*a7,
                          (__int128 *)&GUID_TARGET_DEVICE_QUERY_REMOVE,
                          a6,
                          a6 + 8,
                          &a6);
  if ( RemovalInKernelMode >= 0 )
  {
    RemovalInKernelMode = PipProcessQueryRemovalInKernelMode(a1, a2, (_DWORD)a3, a4, a5, (__int64)v11);
    if ( RemovalInKernelMode < 0 )
    {
      PnpFinalizeVetoedRemove(a2, *v11, v14);
      PnpNotifyUserModeDeviceRemoval(a2, (_WORD *)*v12, (__int128 *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED, 0LL, 0LL, 0LL);
      return (unsigned int)RemovalInKernelMode;
    }
    if ( *(_DWORD *)(a2 + 16) != 54 )
      return (unsigned int)RemovalInKernelMode;
    RemovalInKernelMode = PnpCancelRemoveOnHungDevices(a2, a1, v22, a3, v12);
  }
  else
  {
    PnpFinalizeVetoedRemove(a2, *v11, v14);
    if ( !(_DWORD)a6 )
      return (unsigned int)RemovalInKernelMode;
    v16 = (unsigned int)a6;
    v17 = *v12;
    do
    {
      v18 = -1LL;
      do
        ++v18;
      while ( *(_WORD *)(v17 + 2 * v18) );
      v17 += 2 * v18 + 2;
      --v16;
    }
    while ( v16 );
    v19 = (v17 - *v12) >> 1;
    CriticalMemory = PnpAllocateCriticalMemory(a1, PagedPool, 2LL * (unsigned int)(v19 + 1), 0x4B706E50u);
    v13 = CriticalMemory;
    if ( !CriticalMemory )
      return (unsigned int)-1073741670;
    memmove(CriticalMemory, (const void *)*v12, 2LL * (unsigned int)v19);
    v13[(unsigned int)(v19 + 1) - 1] = 0;
    PnpNotifyUserModeDeviceRemoval(a2, v13, (__int128 *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED, 0LL, 0LL, 0LL);
  }
  if ( v13 )
    ExFreePoolWithTag(v13, 0x4B706E50u);
  return (unsigned int)RemovalInKernelMode;
}
