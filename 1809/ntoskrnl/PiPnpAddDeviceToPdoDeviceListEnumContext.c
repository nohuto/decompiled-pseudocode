/*
 * XREFs of PiPnpAddDeviceToPdoDeviceListEnumContext @ 0x1406CC840
 * Callers:
 *     PiPnpPdoDeviceListEnumCallback @ 0x1406CC800 (PiPnpPdoDeviceListEnumCallback.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiPnpAddDeviceToPdoDeviceListEnumContext(unsigned int *a1, __int64 a2)
{
  unsigned int *v2; // rdi
  __int64 v5; // rax
  __int64 v7; // rsi
  unsigned int *PoolWithTag; // rax
  const void *v9; // rdx

  v2 = (unsigned int *)*((_QWORD *)a1 + 1);
  if ( v2 )
  {
    v5 = *v2;
    if ( (_DWORD)v5 != *a1 )
    {
LABEL_3:
      *(_QWORD *)&v2[2 * v5 + 2] = a2;
      ++**((_DWORD **)a1 + 1);
      return 0LL;
    }
  }
  v7 = *a1 + 256;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 8 * v7 + 8, 0x20207050u);
  v2 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0;
    memset(&PoolWithTag[2 * *a1 + 2], 0, 0x800uLL);
    v9 = (const void *)*((_QWORD *)a1 + 1);
    if ( v9 )
    {
      memmove(v2, v9, 8LL * *a1 + 8);
      ExFreePoolWithTag(*((PVOID *)a1 + 1), 0);
    }
    *a1 = v7;
    *((_QWORD *)a1 + 1) = v2;
    v5 = *v2;
    goto LABEL_3;
  }
  return 3221225626LL;
}
