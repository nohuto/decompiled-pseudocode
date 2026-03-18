/*
 * XREFs of ??1CBaseExpression@@UEAA@XZ @ 0x18004EA00
 * Callers:
 *     ??1CExpression@@UEAA@XZ @ 0x1800BC1AC (--1CExpression@@UEAA@XZ.c)
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x1800C2418 (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ??_GCNaturalAnimation@@UEAAPEAXI@Z @ 0x180174800 (--_GCNaturalAnimation@@UEAAPEAXI@Z.c)
 *     ??_ECBaseExpression@@UEAAPEAXI@Z @ 0x18018C370 (--_ECBaseExpression@@UEAAPEAXI@Z.c)
 *     ??1CConditionalExpression@@UEAA@XZ @ 0x180192900 (--1CConditionalExpression@@UEAA@XZ.c)
 *     ??1CInjectionAnimation@@UEAA@XZ @ 0x18019AB94 (--1CInjectionAnimation@@UEAA@XZ.c)
 *     ??1CScrollAnimation@@UEAA@XZ @ 0x1801D5B00 (--1CScrollAnimation@@UEAA@XZ.c)
 * Callees:
 *     ??1CSparseStorage@@QEAA@XZ @ 0x18004EB7C (--1CSparseStorage@@QEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x1800BD280 (-UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??A?$DynArray@PEAVCBaseExpression@@$0A@@@QEBAAEAPEAVCBaseExpression@@I@Z @ 0x180175DE4 (--A-$DynArray@PEAVCBaseExpression@@$0A@@@QEBAAEAPEAVCBaseExpression@@I@Z.c)
 */

void __fastcall CBaseExpression::~CBaseExpression(CBaseExpression *this)
{
  bool v1; // zf
  __int64 v3; // rcx
  void *v4; // rcx
  unsigned int i; // edi
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rcx

  v1 = (*((_BYTE *)this + 208) & 4) == 0;
  *(_QWORD *)this = &CBaseExpression::`vftable';
  if ( !v1 )
  {
    CExpressionManager::UnregisterExpression(*(CExpressionManager **)(*((_QWORD *)this + 2) + 224LL), this);
    *((_BYTE *)this + 208) &= ~4u;
  }
  v3 = *((_QWORD *)this + 22);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    *((_QWORD *)this + 22) = 0LL;
  }
  if ( *(int *)(*((_QWORD *)this + 35) + 4LL) < 0 )
    --*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 224LL) + 160LL);
  v4 = (void *)*((_QWORD *)this + 24);
  if ( v4 )
  {
    operator delete(v4, 8uLL);
    *((_QWORD *)this + 24) = 0LL;
  }
  for ( i = 0; i < *((_DWORD *)this + 60); ++i )
  {
    v6 = (_QWORD *)DynArray<CBaseExpression *,0>::operator[]((char *)this + 216, i);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v6 + 184LL))(*v6, 0LL);
    v7 = (_QWORD *)DynArray<CBaseExpression *,0>::operator[]((char *)this + 216, i);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 16LL))(*v7);
  }
  *((_DWORD *)this + 60) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 216, 8LL);
  CSparseStorage::~CSparseStorage((CBaseExpression *)((char *)this + 280));
  if ( *((_QWORD *)this + 27) != *((_QWORD *)this + 28) )
  {
    WPF::ProcessHeapImpl::Free(*((void **)this + 27));
    *((_QWORD *)this + 27) = 0LL;
  }
  v8 = *((_QWORD *)this + 16);
  if ( v8 )
  {
    *((_QWORD *)this + 16) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
