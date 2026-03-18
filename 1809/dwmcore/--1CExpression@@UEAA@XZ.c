/*
 * XREFs of ??1CExpression@@UEAA@XZ @ 0x1800BC1AC
 * Callers:
 *     ??_ECExpression@@UEAAPEAXI@Z @ 0x18006AEE0 (--_ECExpression@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?UnregisterSources@CExpression@@IEAAXXZ @ 0x18005B5F0 (-UnregisterSources@CExpression@@IEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CExpression::~CExpression(CExpression *this)
{
  CGdiSpriteBitmap *v2; // rcx
  CGdiSpriteBitmap *v3; // rcx
  __int64 i; // rdi
  __int64 v5; // r14
  __int64 v6; // rcx
  void *v7; // rcx

  *(_QWORD *)this = &CExpression::`vftable';
  v2 = (CGdiSpriteBitmap *)*((_QWORD *)this + 36);
  if ( v2 )
  {
    CGdiSpriteBitmap::Release(v2);
    *((_QWORD *)this + 36) = 0LL;
  }
  v3 = (CGdiSpriteBitmap *)*((_QWORD *)this + 38);
  if ( v3 )
  {
    CGdiSpriteBitmap::Release(v3);
    *((_QWORD *)this + 38) = 0LL;
  }
  CExpression::UnregisterSources(this);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 94); i = (unsigned int)(i + 1) )
  {
    v5 = *((_QWORD *)this + 46);
    v6 = *(_QWORD *)(v5 + 8 * i);
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      *(_QWORD *)(v5 + 8 * i) = 0LL;
    }
  }
  WPF::ProcessHeapImpl::Free(*((void **)this + 46));
  WPF::ProcessHeapImpl::Free(*((void **)this + 48));
  v7 = (void *)*((_QWORD *)this + 42);
  if ( v7 != *((void **)this + 43) )
  {
    WPF::ProcessHeapImpl::Free(v7);
    *((_QWORD *)this + 42) = 0LL;
  }
  CBaseExpression::~CBaseExpression(this);
}
