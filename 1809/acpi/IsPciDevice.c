/*
 * XREFs of IsPciDevice @ 0x1C0017AD0
 * Callers:
 *     GetOpRegionScopeWorker @ 0x1C00179C0 (GetOpRegionScopeWorker.c)
 *     AcpiDeletePciBusInterface @ 0x1C009F700 (AcpiDeletePciBusInterface.c)
 *     ACPIInternalIsPci @ 0x1C009FC0C (ACPIInternalIsPci.c)
 * Callees:
 *     IsPciDeviceWorker @ 0x1C0016320 (IsPciDeviceWorker.c)
 *     memset @ 0x1C00310C0 (memset.c)
 */

__int64 __fastcall IsPciDevice(volatile signed __int32 *a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v8; // rax
  _DWORD *PoolWithTag; // rax
  _DWORD *v10; // rbx
  char v11; // al

  v8 = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
  if ( !v8 )
    return 3221225473LL;
  if ( (*(_QWORD *)(v8 + 8) & 0x102000000LL) != 0 )
  {
    *a4 = 1;
    return 0LL;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x46706341u);
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x80uLL);
      v11 = gdwfAMLI;
      *(_QWORD *)v10 = a1;
      dword_1C0080868 = 0;
      pszDest = 0;
      if ( (v11 & 4) != 0 )
        _InterlockedIncrement(a1 + 2);
      v10[9] = -1;
      *((_QWORD *)v10 + 5) = a2;
      *((_QWORD *)v10 + 6) = a3;
      *((_QWORD *)v10 + 7) = a4;
      return IsPciDeviceWorker((__int64)a1, 0, 0LL, v10);
    }
    else
    {
      return 3221225626LL;
    }
  }
}
