/*
 * XREFs of RtlCSparseBitmapStart @ 0x18010BBC0
 * Callers:
 *     RtlHpHeapManagerStart @ 0x18010A654 (RtlHpHeapManagerStart.c)
 *     RtlpHpVaMgrCtxStart @ 0x18010B1CC (RtlpHpVaMgrCtxStart.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x180047BA0 (RtlpHpEnvAllocVA.c)
 */

NTSTATUS __fastcall RtlCSparseBitmapStart(PVOID *BaseAddress, void *a2, __int64 a3, int a4)
{
  unsigned __int64 v5; // rdi
  ULONG_PTR v6; // rdx
  unsigned __int64 v7; // rax
  NTSTATUS result; // eax
  unsigned __int64 v9; // rax
  char *v10; // rcx
  bool v11; // cc
  int v12; // [rsp+28h] [rbp-30h]
  int v13; // [rsp+28h] [rbp-30h]
  int v14; // [rsp+30h] [rbp-28h]
  int v15; // [rsp+30h] [rbp-28h]
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+8h] BYREF
  ULONG_PTR v17; // [rsp+68h] [rbp+10h] BYREF

  BaseAddress[3] = 0LL;
  BaseAddress[5] = 0LL;
  BaseAddress[2] = a2;
  *((_BYTE *)BaseAddress + 49) = 0;
  *((_BYTE *)BaseAddress + 50) = a4;
  *((_BYTE *)BaseAddress + 48) = a4 != 0;
  v5 = ((((unsigned __int64)a2 + 7) >> 3) + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v6 = ((((v5 >> 12) + 7) >> 3) + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v7 = *((unsigned int *)BaseAddress + 13);
  v17 = v6;
  if ( ((v6 >> 12) + 7) >> 3 > v7 )
    return -2147483643;
  RegionSize = v6 + v5;
  result = RtlpHpEnvAllocVA(BaseAddress + 1, &RegionSize, 0LL, 1056768, 4u, v12, v14, 0LL);
  if ( result >= 0 )
  {
    _BitScanForward64(&v9, RegionSize);
    v10 = (char *)BaseAddress[1] + v5;
    *((_BYTE *)BaseAddress + 51) = v9;
    v11 = v17 <= 0x1000;
    *BaseAddress = v10;
    if ( v11 )
    {
      result = RtlpHpEnvAllocVA(BaseAddress, &v17, 0LL, 1073745920, 4u, v13, v15, 0LL);
      if ( result < 0 )
        return result;
      BaseAddress[7] = (PVOID)1;
    }
    return 0;
  }
  return result;
}
