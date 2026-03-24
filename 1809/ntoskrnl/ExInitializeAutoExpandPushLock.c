/*
 * XREFs of ExInitializeAutoExpandPushLock @ 0x140119230
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x1406798B8 (MmInitializeProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess @ 0x14075E86C (MmInitializeHandBuiltProcess.c)
 *     MiAllocateAweInfo @ 0x14084F4DC (MiAllocateAweInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExInitializeAutoExpandPushLock(_QWORD *a1, char a2)
{
  __int64 result; // rax

  result = 0LL;
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( (a2 & 1) == 0 )
    *((_DWORD *)a1 + 2) = 4;
  *a1 = 0LL;
  return result;
}
