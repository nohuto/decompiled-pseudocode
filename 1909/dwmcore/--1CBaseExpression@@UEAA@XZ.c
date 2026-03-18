/*
 * XREFs of ??1CBaseExpression@@UEAA@XZ @ 0x1800A4BB8
 * Callers:
 *     ??1CKeyframeAnimation@@UEAA@XZ @ 0x1800A23BC (--1CKeyframeAnimation@@UEAA@XZ.c)
 *     ??1CExpression@@UEAA@XZ @ 0x1800A48B8 (--1CExpression@@UEAA@XZ.c)
 *     ??_GCNaturalAnimation@@UEAAPEAXI@Z @ 0x18019D9C0 (--_GCNaturalAnimation@@UEAAPEAXI@Z.c)
 *     ??1CConditionalExpression@@UEAA@XZ @ 0x1801D2760 (--1CConditionalExpression@@UEAA@XZ.c)
 *     ??1CInjectionAnimation@@UEAA@XZ @ 0x1801D5138 (--1CInjectionAnimation@@UEAA@XZ.c)
 *     ??_ECBaseExpression@@UEAAPEAXI@Z @ 0x1801E5BA0 (--_ECBaseExpression@@UEAAPEAXI@Z.c)
 *     ??1CScrollAnimation@@UEAA@XZ @ 0x180205584 (--1CScrollAnimation@@UEAA@XZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z @ 0x180025538 (--$ReleaseInterface@VCDisplay@@@@YAXAEAPEAVCDisplay@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1CSparseStorage@@QEAA@XZ @ 0x180078AD0 (--1CSparseStorage@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ @ 0x1800A4FF8 (-EnsureExpressionIsUnregistered@CBaseExpression@@QEAAXXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BB688 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?_Tidy@?$vector@U?$pair@PEAV?$CWeakReference@VCResource@@@@I@std@@V?$allocator@U?$pair@PEAV?$CWeakReference@VCResource@@@@I@std@@@2@@std@@AEAAXXZ @ 0x1800CE9DC (-_Tidy@-$vector@U-$pair@PEAV-$CWeakReference@VCResource@@@@I@std@@V-$allocator@U-$pair@PEAV-$CWe.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??A?$DynArray@PEAVCBaseExpression@@$0A@@@QEBAAEAPEAVCBaseExpression@@I@Z @ 0x18016A4FC (--A-$DynArray@PEAVCBaseExpression@@$0A@@@QEBAAEAPEAVCBaseExpression@@I@Z.c)
 */

void __fastcall CBaseExpression::~CBaseExpression(CBaseExpression *this)
{
  void *v2; // rcx
  unsigned int i; // ebx
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // rcx

  *(_QWORD *)this = &CBaseExpression::`vftable';
  CBaseExpression::EnsureExpressionIsUnregistered(this);
  ReleaseInterface<CDisplay>((__int64 *)this + 22);
  if ( *(int *)(*((_QWORD *)this + 38) + 4LL) < 0 )
    --*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 240LL) + 160LL);
  v2 = (void *)*((_QWORD *)this + 24);
  if ( v2 )
  {
    operator delete(v2);
    *((_QWORD *)this + 24) = 0LL;
  }
  for ( i = 0; i < *((_DWORD *)this + 60); ++i )
  {
    v4 = (_QWORD *)DynArray<CBaseExpression *,0>::operator[]((char *)this + 216, i);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v4 + 224LL))(*v4, 0LL);
    v5 = (_QWORD *)DynArray<CBaseExpression *,0>::operator[]((char *)this + 216, i);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 16LL))(*v5);
  }
  *((_DWORD *)this + 60) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 216, 8LL);
  CSparseStorage::~CSparseStorage((void **)this + 38);
  std::vector<std::pair<CWeakReference<CResource> *,unsigned int>>::_Tidy((char *)this + 280);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 216);
  v6 = *((_QWORD *)this + 16);
  if ( v6 )
  {
    *((_QWORD *)this + 16) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
