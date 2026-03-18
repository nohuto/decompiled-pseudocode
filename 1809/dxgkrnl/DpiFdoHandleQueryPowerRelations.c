/*
 * XREFs of DpiFdoHandleQueryPowerRelations @ 0x1C0265030
 * Callers:
 *     DpiFdoHandleQueryDeviceRelations @ 0x1C01448B0 (DpiFdoHandleQueryDeviceRelations.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000F6E4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiGetFdoFromDevice @ 0x1C001DF58 (DpiGetFdoFromDevice.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 */

__int64 __fastcall DpiFdoHandleQueryPowerRelations(__int64 a1, __int64 a2)
{
  unsigned int *v2; // rdi
  unsigned int v3; // ebx
  void *v5; // rbp
  unsigned int v6; // r14d
  __int64 FdoFromDevice; // rax
  int *PoolWithTag; // rax
  __int64 v9; // rcx
  int *v10; // rsi
  __int64 v11; // rax
  int v12; // eax

  v2 = *(unsigned int **)(a2 + 56);
  v3 = 0;
  v5 = 0LL;
  v6 = 0;
  if ( !*(_BYTE *)(a1 + 1151) )
    return (unsigned int)-1073741637;
  AcquireMiniportListMutex();
  FdoFromDevice = DpiGetFdoFromDevice(qword_1C008E9D8);
  if ( FdoFromDevice )
  {
    v5 = *(void **)(FdoFromDevice + 152);
    ObfReferenceObject(v5);
  }
  _InterlockedExchange64(&qword_1C008E788, 0LL);
  KeReleaseMutex(Mutex, 0);
  if ( v5 )
  {
    if ( v2 )
      v6 = *v2;
    PoolWithTag = (int *)ExAllocatePoolWithTag(PagedPool, 8LL * v6 + 16, 0x74727044u);
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( v2 && v6 )
      {
        memmove(PoolWithTag, v2, 8LL * (v6 - 1) + 16);
        v12 = *v10;
      }
      else
      {
        *PoolWithTag = 0;
        v12 = 0;
      }
      *(_QWORD *)&v10[2 * v12 + 2] = v5;
      ++*v10;
      *(_QWORD *)(a2 + 56) = v10;
      if ( v2 )
        ExFreePoolWithTag(v2, 0);
    }
    else
    {
      v3 = -1073741801;
      v11 = WdLogNewEntry5_WdLowResource(v9);
      *(_QWORD *)(v11 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v11);
      ObfDereferenceObject(v5);
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v3;
}
