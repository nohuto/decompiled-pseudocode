/*
 * XREFs of ??_ECWindowManager@@UEAAPEAXI@Z @ 0x1801522F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E5BD0 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

void **__fastcall CWindowManager::`vector deleting destructor'(void **this, char a2)
{
  struct _RTL_GENERIC_TABLE *v3; // rsi
  PVOID v5; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  *this = &CWindowManager::`vftable';
  v3 = (struct _RTL_GENERIC_TABLE *)(this + 6);
  while ( 1 )
  {
    RestartKey = 0LL;
    v5 = RtlEnumerateGenericTableWithoutSplaying(v3, &RestartKey);
    if ( !v5 )
      break;
    if ( !RtlDeleteElementGenericTable(v3, v5) )
      RaiseFailFastException(0LL, 0LL, 1u);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 2);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse((CSwRenderTargetGetBounds *)this);
    else
      WPF::ProcessHeapImpl::Free(this);
  }
  return this;
}
