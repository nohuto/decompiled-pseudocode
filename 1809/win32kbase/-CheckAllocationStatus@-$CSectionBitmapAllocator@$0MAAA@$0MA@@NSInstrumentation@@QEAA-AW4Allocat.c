/*
 * XREFs of ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0MAAA@$0MA@@NSInstrumentation@@QEAA?AW4AllocationStatus@2@PEBX@Z @ 0x1C00755EC
 * Callers:
 *     ?Free@?$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C007545C (-Free@-$CTypeIsolation@$0MAAA@$0MA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<49152,192>::CheckAllocationStatus(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r10
  unsigned __int64 v4; // rax

  v2 = a1[1];
  v3 = a1[2];
  v4 = v3 ^ v2;
  if ( !a2 || a2 < v4 || a2 >= v4 + 49152 )
    return 0LL;
  if ( (a2 & 0xFFF) % 0xC0 )
    return 3LL;
  return 2
       - (unsigned int)(RtlTestBit(
                          (PRTL_BITMAP)(v3 ^ a1[3]),
                          (a2 & 0xFFF) / 0xC0 + 21 * (((unsigned int)a2 - ((unsigned int)v2 ^ (unsigned int)v3)) >> 12)) != 0);
}
