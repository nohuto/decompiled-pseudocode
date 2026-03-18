/*
 * XREFs of ??1CSharedSection@@UEAA@XZ @ 0x1800D34A0
 * Callers:
 *     ??_ECSharedSection@@UEAAPEAXI@Z @ 0x1800D3460 (--_ECSharedSection@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnmapSharedMemory@CSharedSection@@AEBAXXZ @ 0x1800D34FC (-UnmapSharedMemory@CSharedSection@@AEBAXXZ.c)
 */

void __fastcall CSharedSection::~CSharedSection(CSharedSection *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 9) == 0LL;
  *(_QWORD *)this = &CSharedSection::`vftable';
  if ( !v1 )
    CSharedSection::UnmapSharedMemory(this);
  CResource::~CResource(this);
}
