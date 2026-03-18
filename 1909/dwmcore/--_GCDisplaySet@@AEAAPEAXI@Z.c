/*
 * XREFs of ??_GCDisplaySet@@AEAAPEAXI@Z @ 0x18002B9B0
 * Callers:
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x180053E64 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180059AF4 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?UpdateDisplaySet@CComposition@@IEAAXXZ @ 0x180070550 (-UpdateDisplaySet@CComposition@@IEAAXXZ.c)
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x180074920 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

CDisplaySet *__fastcall CDisplaySet::`scalar deleting destructor'(CDisplaySet *this)
{
  void **v2; // rdi
  __int64 v3; // rsi
  __int64 i; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = (void **)((char *)this + 120);
  v3 = 13LL;
  do
  {
    if ( *v2 )
      operator delete(*v2, 0x200uLL);
    ++v2;
    --v3;
  }
  while ( v3 );
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 18); i = (unsigned int)(i + 1) )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * i);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  v6 = *((_QWORD *)this + 2);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 48);
  operator delete(this);
  return this;
}
