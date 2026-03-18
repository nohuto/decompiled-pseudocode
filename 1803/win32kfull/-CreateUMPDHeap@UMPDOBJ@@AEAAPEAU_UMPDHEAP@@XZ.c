/*
 * XREFs of ?CreateUMPDHeap@UMPDOBJ@@AEAAPEAU_UMPDHEAP@@XZ @ 0x1C01200D8
 * Callers:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C0018B80 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1C00190FC (-bInit@UMPDOBJ@@QEAAHXZ.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 */

struct _UMPDHEAP *__fastcall UMPDOBJ::CreateUMPDHeap(UMPDOBJ *this)
{
  struct _UMPDHEAP *v1; // rbx
  struct _UMPDHEAP *result; // rax
  PVOID BaseAddress; // [rsp+40h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp+10h] BYREF

  BaseAddress = this;
  v1 = (struct _UMPDHEAP *)PALLOCMEM2(0x20uLL, 1886221639LL, 1);
  if ( v1 )
  {
    BaseAddress = 0LL;
    RegionSize = 0x400000LL;
    if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u) >= 0 )
    {
      *(_QWORD *)v1 = BaseAddress;
      result = v1;
      *((_DWORD *)v1 + 6) = 0;
      return result;
    }
    Win32FreePool(v1);
  }
  return 0LL;
}
