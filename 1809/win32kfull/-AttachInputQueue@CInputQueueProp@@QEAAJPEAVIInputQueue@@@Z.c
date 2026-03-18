/*
 * XREFs of ?AttachInputQueue@CInputQueueProp@@QEAAJPEAVIInputQueue@@@Z @ 0x1C00B20C0
 * Callers:
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C00B203C (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 * Callees:
 *     ?Grow@?$CDynamicArray@PEAVIInputQueue@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C00B211C (-Grow@-$CDynamicArray@PEAVIInputQueue@@$0HHHAHDFF@@@IEAAJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInputQueueProp::AttachInputQueue(CInputQueueProp *this, struct IInputQueue *a2)
{
  char *v2; // rbx
  int v4; // edi

  v2 = (char *)this + 16;
  v4 = CDynamicArray<IInputQueue *,2003858261>::Grow((char *)this + 16);
  if ( v4 >= 0 )
  {
    *(_QWORD *)(*(_QWORD *)v2 + 8LL * (unsigned int)(*((_DWORD *)v2 + 2))++) = a2;
    (**(void (__fastcall ***)(struct IInputQueue *))a2)(a2);
  }
  return (unsigned int)v4;
}
