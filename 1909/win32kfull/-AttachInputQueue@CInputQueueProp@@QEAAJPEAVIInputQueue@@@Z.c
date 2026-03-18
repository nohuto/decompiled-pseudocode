/*
 * XREFs of ?AttachInputQueue@CInputQueueProp@@QEAAJPEAVIInputQueue@@@Z @ 0x1C0021600
 * Callers:
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C002157C (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 * Callees:
 *     ?Grow@?$CDynamicArray@PEAVIInputQueue@@$0HHHAHDFF@@@IEAAJI@Z @ 0x1C0021684 (-Grow@-$CDynamicArray@PEAVIInputQueue@@$0HHHAHDFF@@@IEAAJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInputQueueProp::AttachInputQueue(CInputQueueProp *this, struct IInputQueue *a2)
{
  int v4; // esi
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v4 = CDynamicArray<IInputQueue *,2003858261>::Grow((char *)this + 16);
  if ( v4 >= 0 )
  {
    *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * (unsigned int)(*((_DWORD *)this + 6))++) = a2;
    (**(void (__fastcall ***)(struct IInputQueue *))a2)(a2);
  }
  if ( (*(int (__fastcall **)(struct IInputQueue *, int *))(*(_QWORD *)a2 + 64LL))(a2, &v6) >= 0 )
    *((_DWORD *)this + 11) = v6;
  return (unsigned int)v4;
}
