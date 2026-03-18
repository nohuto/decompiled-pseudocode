/*
 * XREFs of ?Create@CSuperWetInkDataCircularQueue@@SAJV?$span@E$0?0@gsl@@PEAPEAV1@_N@Z @ 0x1801BAEA0
 * Callers:
 *     _anonymous_namespace_::TryOpenVmConsumerQueue @ 0x1801BB250 (_anonymous_namespace_--TryOpenVmConsumerQueue.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSuperWetInkDataCircularQueue::Create(__int64 a1, volatile __int32 ***a2, char a3)
{
  volatile __int32 *v3; // rdi
  unsigned int v7; // ebx
  __int64 v8; // rdx
  volatile __int32 **v10; // rax
  volatile __int32 **v11; // rdx
  int v12; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *(volatile __int32 **)(a1 + 8);
  if ( ((unsigned __int8)v3 & 3) != 0 )
  {
    v7 = -2147024809;
    v8 = 28LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\windows\\dwm\\common\\comp\\SuperWetInkDataCircularQueue.h",
      (const char *)v7);
    return v7;
  }
  v10 = (volatile __int32 **)DefaultHeap::Alloc(0x10uLL);
  v11 = v10;
  if ( v10 )
  {
    v12 = *(_DWORD *)a1 - 8;
    *v10 = v3;
    *((_DWORD *)v10 + 2) = v12;
  }
  else
  {
    v11 = 0LL;
  }
  *a2 = v11;
  if ( !v11 )
  {
    v7 = -2147024882;
    v8 = 34LL;
    goto LABEL_3;
  }
  if ( a3 )
  {
    _InterlockedExchange(*v11, 0);
    _InterlockedExchange(*v11 + 1, 0);
  }
  return 0LL;
}
