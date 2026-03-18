/*
 * XREFs of ?Initialize@CGenericInkTipPointSource@@AEAAJPEAVCSharedSection@@III@Z @ 0x18021419C
 * Callers:
 *     ?Create@CGenericInkTipPointSource@@SAJPEAVCSharedSection@@IIIPEAPEAV1@@Z @ 0x180213480 (-Create@CGenericInkTipPointSource@@SAJPEAVCSharedSection@@IIIPEAPEAV1@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x1800943A8 (-ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800AC000 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BE550 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Create@CSharedCircularQueue@@SAJV?$span@E$0?0@gsl@@IPEAPEAV1@_N@Z @ 0x18021357C (-Create@CSharedCircularQueue@@SAJV-$span@E$0-0@gsl@@IPEAPEAV1@_N@Z.c)
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
  unsigned int v10; // ebx
  void *v11; // rcx
  unsigned __int64 v13; // [rsp+20h] [rbp-30h] BYREF
  void *v14; // [rsp+28h] [rbp-28h]
  void **v15; // [rsp+30h] [rbp-20h]
  void *v16; // [rsp+38h] [rbp-18h] BYREF
  char v17; // [rsp+40h] [rbp-10h]

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
  v16 = 0LL;
  v15 = (void **)((char *)this + 24);
  v17 = 1;
  v13 = v6;
  v14 = CSharedSection::ResolveAllocation(a2, v9, v6);
  if ( !v14 && (_DWORD)v6 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v10 = CSharedCircularQueue::Create((unsigned int *)&v13, a5, &v16);
  if ( v17 )
  {
    v11 = *v15;
    *v15 = v16;
    if ( v11 )
      operator delete(v11);
  }
  return v10;
}
