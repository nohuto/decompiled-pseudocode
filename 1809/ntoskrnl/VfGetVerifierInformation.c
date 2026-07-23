/*
 * XREFs of VfGetVerifierInformation @ 0x14094B8E4
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x140938524 (VfSuspectDriversGetVerifierInformation.c)
 */

__int64 __fastcall VfGetVerifierInformation(void *a1, SIZE_T NumberOfBytes, unsigned int *a3, int a4)
{
  unsigned int v7; // eax
  unsigned __int64 v8; // rbx
  PVOID PoolWithTag; // rsi
  unsigned int VerifierInformation; // edi

  *a3 = 0;
  v7 = 10485760;
  if ( (unsigned int)NumberOfBytes <= 0xA00000 )
    v7 = NumberOfBytes;
  v8 = v7;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x706D5456u);
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v8);
    VerifierInformation = VfSuspectDriversGetVerifierInformation((__int64)PoolWithTag, v8, a3, (__int64)a1, a4);
    if ( *a3 <= (unsigned int)v8 )
      LODWORD(v8) = *a3;
    memmove(a1, PoolWithTag, (unsigned int)v8);
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return VerifierInformation;
}
