/*
 * XREFs of NdisMCreateLog @ 0x1C0091850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NDIS_STATUS __stdcall NdisMCreateLog(NDIS_HANDLE MiniportAdapterHandle, UINT Size, PNDIS_HANDLE LogHandle)
{
  __int64 v4; // rbp
  _QWORD *v6; // rbx
  KIRQL v7; // r12
  NDIS_STATUS v8; // edi
  KSPIN_LOCK *PoolWithTag; // rax

  v4 = Size;
  v6 = 0LL;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
  *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
  if ( *((_QWORD *)MiniportAdapterHandle + 117) || (int)v4 + 48 < (unsigned int)v4 )
  {
    v8 = -1073741823;
  }
  else
  {
    PoolWithTag = (KSPIN_LOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, v4 + 48, 0x6C44444Eu);
    v6 = PoolWithTag;
    if ( PoolWithTag )
    {
      *((_QWORD *)MiniportAdapterHandle + 117) = PoolWithTag;
      v8 = 0;
      KeInitializeSpinLock(PoolWithTag + 1);
      v6[2] = 0LL;
      *((_DWORD *)v6 + 7) = 0;
      *((_DWORD *)v6 + 8) = 0;
      *((_DWORD *)v6 + 9) = 0;
      *v6 = MiniportAdapterHandle;
      *((_DWORD *)v6 + 6) = v4;
    }
    else
    {
      v8 = -1073741670;
    }
  }
  *LogHandle = v6;
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v7);
  return v8;
}
