/*
 * XREFs of HvpAddDummyBinToHive @ 0x1407F8900
 * Callers:
 *     HvpPerformLogFileRecovery @ 0x1407F8D60 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     HvpAllocateBin @ 0x1405A3540 (HvpAllocateBin.c)
 *     HvpPointMapEntriesToBuffer @ 0x1405A4F90 (HvpPointMapEntriesToBuffer.c)
 *     HvpFreeBin @ 0x1406D1230 (HvpFreeBin.c)
 */

__int64 __fastcall HvpAddDummyBinToHive(ULONG_PTR BugCheckParameter2, __int64 a2, int a3, _QWORD *a4)
{
  int Bin; // ebx
  _DWORD *v8; // rbx
  bool v9; // zf
  void *v10; // r8
  void *v12; // [rsp+58h] [rbp+10h] BYREF

  v12 = 0LL;
  Bin = HvpAllocateBin(BugCheckParameter2, 4096LL, 0, 0x30334D43u, (__int64 *)&v12);
  if ( Bin < 0 )
  {
    v10 = v12;
  }
  else
  {
    v8 = v12;
    memset(v12, 0, 0x1000uLL);
    v9 = CmpSelfHeal == 0;
    v8[1] = a3;
    v8[2] = 4096;
    if ( v9 && (CmpBootType & 6) == 0 )
    {
      *v8 = 0;
      v8[8] = -4064;
    }
    else
    {
      *v8 = 1852400232;
      v8[8] = 4064;
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
    }
    HvpPointMapEntriesToBuffer(BugCheckParameter2, (__int64)v8, 0x1000u, a3, 1, 0LL);
    v10 = 0LL;
    *a4 = v8;
    Bin = 0;
  }
  if ( v10 )
    HvpFreeBin(BugCheckParameter2, 0x1000u, (unsigned __int64)v10);
  return (unsigned int)Bin;
}
