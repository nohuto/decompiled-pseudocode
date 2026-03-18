/*
 * XREFs of ??1CBaseExpression@@UEAA@XZ @ 0x180082720
 * Callers:
 *     ??1CExpression@@UEAA@XZ @ 0x18008086C (--1CExpression@@UEAA@XZ.c)
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x1800C0370 (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ??_GCNaturalAnimation@@UEAAPEAXI@Z @ 0x18019F280 (--_GCNaturalAnimation@@UEAAPEAXI@Z.c)
 *     ??1CConditionalExpression@@UEAA@XZ @ 0x1801D3ED0 (--1CConditionalExpression@@UEAA@XZ.c)
 *     ??1CInjectionAnimation@@UEAA@XZ @ 0x1801D6868 (--1CInjectionAnimation@@UEAA@XZ.c)
 *     ??_ECBaseExpression@@UEAAPEAXI@Z @ 0x1801E7310 (--_ECBaseExpression@@UEAAPEAXI@Z.c)
 *     ??1CScrollAnimation@@UEAA@XZ @ 0x180206C74 (--1CScrollAnimation@@UEAA@XZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x18002B298 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x180082BD4 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x18008AF18 (--1CSparseStorage@@QEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B8A58 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBaseExpression::~CBaseExpression(CBaseExpression *this)
{
  void *v2; // rcx
  __int64 i; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  *(_QWORD *)this = &CBaseExpression::`vftable';
  CBaseExpression::EnsureExpressionIsUnregistered(this);
  ReleaseInterface<CDisplay>((__int64 *)this + 22);
  if ( *(int *)(*((_QWORD *)this + 38) + 4LL) < 0 )
    --*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 240LL) + 160LL);
  v2 = (void *)*((_QWORD *)this + 24);
  if ( v2 )
  {
    operator delete(v2, 8uLL);
    *((_QWORD *)this + 24) = 0LL;
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 60); i = (unsigned int)(i + 1) )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 27) + 8 * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  *((_DWORD *)this + 60) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 216, 8LL);
  CSparseStorage::~CSparseStorage((CBaseExpression *)((char *)this + 304));
  v4 = *((_QWORD *)this + 35);
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, (*((_QWORD *)this + 37) - v4) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 35) = 0LL;
    *((_QWORD *)this + 36) = 0LL;
    *((_QWORD *)this + 37) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 216);
  v5 = *((_QWORD *)this + 16);
  if ( v5 )
  {
    *((_QWORD *)this + 16) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
