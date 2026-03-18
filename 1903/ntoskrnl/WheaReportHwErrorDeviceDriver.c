/*
 * XREFs of WheaReportHwErrorDeviceDriver @ 0x140340A70
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeHeapPool @ 0x140064DB0 (ExFreeHeapPool.c)
 *     RtlStringCchCopyA @ 0x14012B250 (RtlStringCchCopyA.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     WheaReportHwError @ 0x14033FCD0 (WheaReportHwError.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WheaReportHwErrorDeviceDriver(
        int a1,
        __int64 a2,
        const void *a3,
        unsigned int a4,
        __int128 *a5,
        int a6,
        const char *pszSrc)
{
  size_t v7; // rsi
  unsigned int v10; // edi
  SIZE_T v11; // rbp
  PVOID PoolWithTag; // rax
  ULONG_PTR v13; // rbx
  unsigned int v14; // edi
  unsigned int v15; // eax
  __int128 v16; // xmm0

  v7 = a4;
  v10 = a4 + 172;
  v11 = a4 + 172;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x41454857u);
  v13 = (ULONG_PTR)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v11);
    *(_DWORD *)v13 = 1095059543;
    *(_DWORD *)(v13 + 4) = 3;
    *(_DWORD *)(v13 + 8) = v10;
    *(_DWORD *)(v13 + 16) = 6;
    *(_DWORD *)(v13 + 20) = a6;
    *(_DWORD *)(v13 + 24) = a1;
    *(_DWORD *)(v13 + 28) = 12;
    *(_DWORD *)(v13 + 56) = 7;
    *(_DWORD *)(v13 + 64) = 80;
    *(_DWORD *)(v13 + 68) = v10 - 80;
    *(_OWORD *)(v13 + 32) = DEVICE_DRIVER_NOTIFY_TYPE_GUID;
    if ( !a6 )
      *(_QWORD *)(v13 + 48) = v13;
    v15 = *(_DWORD *)(v13 + 80) & 0xFFFFC01F;
    *(_DWORD *)(v13 + 96) = a6;
    *(_DWORD *)(v13 + 80) = v15 | 0x10;
    *(_DWORD *)(v13 + 92) = v10 - 100;
    v16 = *a5;
    *(_DWORD *)(v13 + 116) = a6 | 0x80000000;
    *(_WORD *)(v13 + 120) = 768;
    *(_BYTE *)(v13 + 123) = 1;
    *(_DWORD *)(v13 + 124) = v7;
    *(_OWORD *)(v13 + 100) = v16;
    if ( pszSrc )
    {
      *(_BYTE *)(v13 + 122) |= 2u;
      RtlStringCchCopyA((NTSTRSAFE_PSTR)(v13 + 144), 0x14uLL, pszSrc);
    }
    memmove((void *)(v13 + 172), a3, v7);
    v14 = WheaReportHwError(v13);
    ExFreeHeapPool(v13);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v14;
}
