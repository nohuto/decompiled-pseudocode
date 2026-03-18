/*
 * XREFs of ??1CSharedSection@@UEAA@XZ @ 0x180073580
 * Callers:
 *     ??_ECSharedSection@@UEAAPEAXI@Z @ 0x180073540 (--_ECSharedSection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnmapSharedSectionView@CComposition@@QEAAXPEAX@Z @ 0x1800735E4 (-UnmapSharedSectionView@CComposition@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSharedSection::~CSharedSection(CSharedSection *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 9) == 0LL;
  *(_QWORD *)this = &CSharedSection::`vftable';
  if ( !v1 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 536LL) + 112LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 536LL)) )
      CComposition::UnmapSharedSectionView(*((CComposition **)this + 2), *((void **)this + 9));
    else
      UnmapViewOfFile(*((LPCVOID *)this + 9));
  }
  CResource::~CResource(this);
}
