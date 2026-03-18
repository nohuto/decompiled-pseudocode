/*
 * XREFs of AdminQueuesFreeResources @ 0x1C0008928
 * Callers:
 *     NVMeControllerRemove @ 0x1C000B4D4 (NVMeControllerRemove.c)
 *     NVMeControllerStop @ 0x1C000B894 (NVMeControllerStop.c)
 * Callees:
 *     memset @ 0x1C0005980 (memset.c)
 */

void *__fastcall AdminQueuesFreeResources(__int64 a1)
{
  __int64 v2; // r8
  void *result; // rax
  __int64 v4; // r8
  void *v5; // rcx
  void **v6; // rbx
  __int64 v7; // rdi

  if ( !*(_BYTE *)(a1 + 16) )
  {
    v2 = *(_QWORD *)(a1 + 304);
    if ( v2 )
      result = (void *)StorPortExtendedFunction(1LL, a1, v2);
    *(_QWORD *)(a1 + 304) = 0LL;
    v4 = *(_QWORD *)(a1 + 312);
    if ( v4 )
      result = (void *)StorPortExtendedFunction(1LL, a1, v4);
    *(_QWORD *)(a1 + 312) = 0LL;
    *(_DWORD *)(a1 + 808) = 0;
    v5 = *(void **)(a1 + 904);
    if ( v5 )
      result = memset(v5, 0, 0x10A0uLL);
    v6 = (void **)(a1 + 1008);
    v7 = 6LL;
    do
    {
      *((_DWORD *)v6 - 24) = 0;
      if ( *v6 )
        result = memset(*v6, 0, 0x10A0uLL);
      v6 += 13;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
