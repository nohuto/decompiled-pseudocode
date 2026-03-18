/*
 * XREFs of ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0NPAAA@$0NPA@@NSInstrumentation@@QEAA?AW4AllocationStatus@2@PEBX@Z @ 0x1C009A2E8
 * Callers:
 *     ?Free@?$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C01249C4 (-Free@-$CTypeIsolation@$0NPAAA@$0NPA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<913408,3568>::CheckAllocationStatus(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v2; // r11
  int v3; // r8d
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // r10

  v2 = a1[2];
  v3 = a2;
  v5 = v2 ^ a1[1];
  if ( !a2 || a2 < v5 || a2 >= v5 + 913408 )
    return 0LL;
  v6 = a2 & 0xFFF;
  v7 = ((a2 & 0xFFF) * (unsigned __int128)0x25E22708092F1139uLL) >> 64;
  v8 = (v7 + (((unsigned __int64)(unsigned int)v6 - v7) >> 1)) >> 11;
  if ( v6 == 3568 * v8 )
    return 2
         - (unsigned int)(RtlTestBit(
                            (PRTL_BITMAP)(v2 ^ a1[3]),
                            v8 + ((v3 - ((unsigned int)v2 ^ *((_DWORD *)a1 + 2))) >> 12)) != 0);
  else
    return 3LL;
}
