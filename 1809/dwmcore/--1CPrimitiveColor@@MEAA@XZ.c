/*
 * XREFs of ??1CPrimitiveColor@@MEAA@XZ @ 0x1801AAD50
 * Callers:
 *     ??_GCPrimitiveColor@@MEAAPEAXI@Z @ 0x1801749AC (--_GCPrimitiveColor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ReleasePrimitiveProperties@CPrimitiveColor@@QEAAXXZ @ 0x1801AB0F0 (-ReleasePrimitiveProperties@CPrimitiveColor@@QEAAXXZ.c)
 */

void __fastcall CPrimitiveColor::~CPrimitiveColor(CPrimitiveColor *this)
{
  *(_QWORD *)this = &CPrimitiveColor::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 1) = &CPrimitiveColor::`vftable'{for `CResource'};
  CPrimitiveColor::ReleasePrimitiveProperties(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 8);
  CResource::~CResource((CPrimitiveColor *)((char *)this + 8));
}
