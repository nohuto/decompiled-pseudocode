/*
 * XREFs of ?Initialize@CGenericInkTipPointSource@@AEAAJPEAVCSharedSection@@III@Z @ 0x18019936C
 * Callers:
 *     ?Create@CGenericInkTipPointSource@@SAJPEAVCSharedSection@@IIIPEAPEAV1@@Z @ 0x180198B7C (-Create@CGenericInkTipPointSource@@SAJPEAVCSharedSection@@IIIPEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18005A790 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x18005A8F0 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x1800BFE98 (-ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ?Create@CSharedCircularQueue@@SAJV?$span@E$0?0@gsl@@IPEAPEAV1@_N@Z @ 0x180198C78 (-Create@CSharedCircularQueue@@SAJV-$span@E$0-0@gsl@@IPEAPEAV1@_N@Z.c)
 */

__int64 __fastcall CGenericInkTipPointSource::Initialize(
        CGenericInkTipPointSource *this,
        struct CSharedSection *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned __int64 v6; // rsi
  CGdiSpriteBitmap *v7; // rcx
  unsigned __int64 v9; // r14
  gsl::details *v10; // rcx
  unsigned int v11; // ebx
  void *v12; // rcx
  unsigned __int64 v14; // [rsp+20h] [rbp-30h] BYREF
  void *v15; // [rsp+28h] [rbp-28h]
  void **v16; // [rsp+30h] [rbp-20h]
  void *v17; // [rsp+38h] [rbp-18h] BYREF
  char v18; // [rsp+40h] [rbp-10h]

  v6 = a4;
  v7 = (CGdiSpriteBitmap *)*((_QWORD *)this + 2);
  v9 = a3;
  if ( v7 != a2 )
  {
    if ( a2 )
    {
      CMILCOMBase::InternalAddRef(a2);
      v7 = (CGdiSpriteBitmap *)*((_QWORD *)this + 2);
    }
    *((_QWORD *)this + 2) = a2;
    if ( v7 )
      CGdiSpriteBitmap::Release(v7);
  }
  v14 = v6;
  v15 = CSharedSection::ResolveAllocation(a2, v9, v6);
  if ( !v15 && (_DWORD)v6 )
  {
    gsl::details::terminate(v10);
    __debugbreak();
  }
  v17 = 0LL;
  v16 = (void **)((char *)this + 24);
  v18 = 1;
  v11 = CSharedCircularQueue::Create((unsigned int *)&v14, a5, &v17);
  if ( v18 )
  {
    v12 = *v16;
    *v16 = v17;
    if ( v12 )
      operator delete(v12);
  }
  return v11;
}
