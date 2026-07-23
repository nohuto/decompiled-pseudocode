/*
 * XREFs of EtwpTraceRegistry @ 0x1408BA110
 * Callers:
 *     <none>
 * Callees:
 *     EtwpLogRegistryEvent @ 0x1408B9794 (EtwpLogRegistryEvent.c)
 */

_QWORD *__fastcall EtwpTraceRegistry(unsigned __int8 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6)
{
  _QWORD *result; // rax
  unsigned int v11; // ebx
  bool i; // zf
  __int64 v13; // r10
  _DWORD *v14; // rcx

  result = (_QWORD *)EtwpHostSiloState;
  v11 = *(_DWORD *)(EtwpHostSiloState + 4224);
  for ( i = !_BitScanForward((unsigned int *)&v13, v11); !i; i = !_BitScanForward((unsigned int *)&v13, v11) )
  {
    v11 &= v11 - 1;
    result = (_QWORD *)(32LL * (unsigned int)v13);
    v14 = (_DWORD *)((char *)result + EtwpHostSiloState + 4260);
    if ( v14 )
    {
      if ( (*v14 & 0x20000) != 0 )
        result = EtwpLogRegistryEvent(
                   *(unsigned __int8 *)(EtwpHostSiloState + 2 * v13 + 4208),
                   a1,
                   a3,
                   a4,
                   a5,
                   (__int64 *)(a2 + 8 * (*(unsigned __int8 *)(EtwpHostSiloState + 2 * v13 + 4209) - 1LL)),
                   a6);
    }
  }
  return result;
}
