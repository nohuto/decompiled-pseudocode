/*
 * XREFs of sub_1406254F4 @ 0x1406254F4
 * Callers:
 *     WbHeapExecuteCall @ 0x140625ADC (WbHeapExecuteCall.c)
 * Callees:
 *     RtlUIntAdd @ 0x140001568 (RtlUIntAdd.c)
 *     ?RtlULongMult@@YAJKKPEAK@Z @ 0x140324038 (-RtlULongMult@@YAJKKPEAK@Z.c)
 *     sub_1406255D4 @ 0x1406255D4 (sub_1406255D4.c)
 *     WbReAlloc @ 0x140692A70 (WbReAlloc.c)
 */

NTSTATUS __fastcall sub_1406254F4(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v5; // r10d
  NTSTATUS result; // eax
  UINT v11; // r10d
  unsigned int v12; // r11d
  unsigned int v13; // r10d
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  SIZE_T NumberOfBytes[3]; // [rsp+20h] [rbp-18h] BYREF
  UINT puResult; // [rsp+40h] [rbp+8h] BYREF

  v5 = *(_DWORD *)(a1 + 20);
  NumberOfBytes[0] = 0LL;
  puResult = 0;
  result = RtlULongMult(v5, 0x20u, (unsigned int *)NumberOfBytes + 1);
  if ( result >= 0 )
  {
    result = RtlUIntAdd(v11, *(_DWORD *)(a1 + 32), &puResult);
    if ( result >= 0 )
    {
      result = RtlULongMult(puResult, v12, (unsigned int *)NumberOfBytes);
      if ( result >= 0 )
      {
        v14 = *(unsigned int *)(a1 + 16);
        if ( (int)v14 + 1 >= v13 )
        {
          result = WbReAlloc(*(PVOID *)(a1 + 24), HIDWORD(NumberOfBytes[0]), LODWORD(NumberOfBytes[0]));
          if ( result < 0 )
            return result;
          *(_DWORD *)(a1 + 20) += *(_DWORD *)(a1 + 32);
          v14 = *(unsigned int *)(a1 + 16);
        }
        v15 = a5;
        v16 = *(_QWORD *)(a1 + 24) + 32 * v14;
        *(_QWORD *)v16 = a2;
        *(_QWORD *)(v16 + 8) = a3;
        *(_QWORD *)(v16 + 16) = a4;
        *(_DWORD *)(v16 + 24) = v15;
        ++*(_DWORD *)(a1 + 16);
        return sub_1406255D4(a2);
      }
    }
  }
  return result;
}
