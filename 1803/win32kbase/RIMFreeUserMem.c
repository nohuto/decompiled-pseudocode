/*
 * XREFs of RIMFreeUserMem @ 0x1C00E8510
 * Callers:
 *     RIMFreeInputBuffer @ 0x1C00E1D00 (RIMFreeInputBuffer.c)
 *     rimProcessInput @ 0x1C00FF314 (rimProcessInput.c)
 * Callees:
 *     <none>
 */

void __fastcall RIMFreeUserMem(struct _RTL_AVL_TABLE *a1, void *a2)
{
  struct _RTL_AVL_TABLE *v2; // rbx
  _QWORD *v3; // rax
  void *v4; // rcx
  _QWORD Buffer[5]; // [rsp+20h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp+10h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+18h] BYREF

  if ( a2 )
  {
    BaseAddress = a2;
    v2 = a1 + 7;
    Buffer[0] = a2;
    v3 = RtlLookupElementGenericTableAvl(a1 + 7, Buffer);
    if ( v3 )
    {
      v4 = (void *)v3[2];
      RegionSize = v3[1];
      MmUnsecureVirtualMemory(v4);
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
      Buffer[0] = BaseAddress;
      RtlDeleteElementGenericTableAvl(v2, Buffer);
    }
  }
}
