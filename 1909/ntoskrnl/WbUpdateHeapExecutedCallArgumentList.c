/*
 * XREFs of WbUpdateHeapExecutedCallArgumentList @ 0x1405CA204
 * Callers:
 *     WbHeapExecuteCall @ 0x1405CA6C8 (WbHeapExecuteCall.c)
 * Callees:
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 */

__int64 __fastcall WbUpdateHeapExecutedCallArgumentList(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        _QWORD *a4,
        char *a5,
        unsigned int Size)
{
  unsigned int i; // edi
  __int64 v10; // rdx
  _QWORD *v11; // rdx

  if ( *(_QWORD *)(a1 + 296) )
    a4[3] = *(_QWORD *)(a2 + 32);
  for ( i = 0; i < (*(_DWORD *)(a1 + 324) >> 10) + 1; ++i )
    ProbeForWrite((volatile void *)(*a3 - (i << 10)), 8uLL, 1u);
  *a3 -= 32LL;
  v10 = *a3;
  if ( (*a3 & 0xF) != 0 )
    v11 = (_QWORD *)(v10 - 16);
  else
    v11 = (_QWORD *)(v10 - 8);
  *a3 = (__int64)v11;
  *v11 = a5 + 16;
  memmove(a5, a4, Size);
  return 0LL;
}
