/*
 * XREFs of rimFreeAllUserMem @ 0x1C00E86E0
 * Callers:
 *     RIMUnregisterForInput @ 0x1C00E5A50 (RIMUnregisterForInput.c)
 *     RawInputManagerObjectDelete @ 0x1C00F2218 (RawInputManagerObjectDelete.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall rimFreeAllUserMem(struct _RTL_AVL_TABLE *a1)
{
  _QWORD *result; // rax
  struct _RTL_AVL_TABLE *i; // rdi
  void *v4; // rbx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp+10h] BYREF

  result = (_QWORD *)PsGetCurrentProcess(a1);
  if ( a1->OrderedPointer == result )
  {
    for ( i = a1 + 7; ; RtlDeleteElementGenericTableAvl(i, v4) )
    {
      result = RtlEnumerateGenericTableAvl(i, 1u);
      v4 = result;
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
