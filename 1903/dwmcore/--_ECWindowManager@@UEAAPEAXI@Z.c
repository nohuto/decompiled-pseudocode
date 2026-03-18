/*
 * XREFs of ??_ECWindowManager@@UEAAPEAXI@Z @ 0x1801AB490
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800D9950 (-PrepareForReuse@CSwRenderTargetGetBounds@@UEAAXXZ.c)
 */

CWindowManager *__fastcall CWindowManager::`vector deleting destructor'(CWindowManager *this, char a2)
{
  struct _RTL_GENERIC_TABLE *v3; // rsi
  PVOID v5; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CWindowManager::`vftable';
  v3 = (struct _RTL_GENERIC_TABLE *)((char *)this + 48);
  while ( 1 )
  {
    RestartKey = 0LL;
    v5 = RtlEnumerateGenericTableWithoutSplaying(v3, &RestartKey);
    if ( !v5 )
      break;
    if ( !RtlDeleteElementGenericTable(v3, v5) )
      RaiseFailFastException(0LL, 0LL, 1u);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 16);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CSwRenderTargetGetBounds::PrepareForReuse(this);
    else
      operator delete(this);
  }
  return this;
}
