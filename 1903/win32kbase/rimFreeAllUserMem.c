/*
 * XREFs of rimFreeAllUserMem @ 0x1C006CEEC
 * Callers:
 *     RIMUnregisterForInput @ 0x1C006A630 (RIMUnregisterForInput.c)
 *     RawInputManagerObjectDelete @ 0x1C006D06C (RawInputManagerObjectDelete.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall rimFreeAllUserMem(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  struct _RTL_AVL_TABLE *i; // rdi
  void *v5; // rbx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp+10h] BYREF

  result = (_QWORD *)PsGetCurrentProcess(a1, a2);
  if ( *(_QWORD **)(a1 + 32) == result )
  {
    for ( i = (struct _RTL_AVL_TABLE *)(a1 + 744); ; RtlDeleteElementGenericTableAvl(i, v5) )
    {
      result = RtlEnumerateGenericTableAvl(i, 1u);
      v5 = result;
      if ( !result )
        break;
      RegionSize = result[1];
      BaseAddress = (PVOID)*result;
      MmUnsecureVirtualMemory((HANDLE)result[2]);
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    }
  }
  return result;
}
