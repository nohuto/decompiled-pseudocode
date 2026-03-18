/*
 * XREFs of ExInitializeAutoExpandPushLock @ 0x140117730
 * Callers:
 *     MiAllocateAweInfo @ 0x140895678 (MiAllocateAweInfo.c)
 *     MiInitializeProcessAwe @ 0x1408960D4 (MiInitializeProcessAwe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExInitializeAutoExpandPushLock(_QWORD *a1, char a2)
{
  __int64 result; // rax

  result = 0LL;
  a1[1] = 0LL;
  *a1 = 0LL;
  if ( (a2 & 1) == 0 )
    *((_DWORD *)a1 + 2) = 4;
  return result;
}
