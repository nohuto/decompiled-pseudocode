/*
 * XREFs of ?ndisStartMapping@@YAJW4_INTERFACE_TYPE@@KKKKPEAPEAXPEAE@Z @ 0x1C0080AB0
 * Callers:
 *     ?ndisImmediateReadWritePort@@YAXPEAXK0KE@Z @ 0x1C008085C (-ndisImmediateReadWritePort@@YAXPEAXK0KE@Z.c)
 *     ?ndisImmediateReadWriteSharedMemory@@YAXPEAXKPEAEKE@Z @ 0x1C00809C8 (-ndisImmediateReadWriteSharedMemory@@YAXPEAXKPEAEKE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisStartMapping(
        INTERFACE_TYPE a1,
        ULONG a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        void **a6,
        unsigned __int8 *a7)
{
  unsigned __int8 *v7; // rbx
  __int64 v8; // rdi
  unsigned __int8 *QuadPart; // rax
  void *v11; // rax
  LARGE_INTEGER v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v7 = a7;
  v12[0].QuadPart = 0LL;
  HIDWORD(a7) = 0;
  v8 = a4;
  *v7 = 0;
  LODWORD(a7) = a3;
  if ( a1 == InterfaceTypeUndefined )
  {
    QuadPart = a7;
    v12[0].QuadPart = (LONGLONG)a7;
  }
  else
  {
    if ( ((a1 - 1) & 0xFFFFFFFB) != 0 )
      a1 = Isa;
    if ( !HalTranslateBusAddress(a1, a2, (PHYSICAL_ADDRESS)a7, &a5, v12) )
      return 3221225473LL;
    QuadPart = (unsigned __int8 *)v12[0].QuadPart;
  }
  if ( a5 )
  {
    *a6 = (void *)(unsigned int)QuadPart;
  }
  else
  {
    v11 = (void *)MmMapIoSpaceEx(QuadPart, v8, 516LL);
    *a6 = v11;
    if ( !v11 )
      return 3221225626LL;
    *v7 = 1;
  }
  return 0LL;
}
