/*
 * XREFs of ??1CPrimitiveColor@@MEAA@XZ @ 0x1801EF4BC
 * Callers:
 *     ??_GCPrimitiveColor@@MEAAPEAXI@Z @ 0x18019F79C (--_GCPrimitiveColor@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180089514 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ReleasePrimitiveProperties@CPrimitiveColor@@QEAAXXZ @ 0x1801EF910 (-ReleasePrimitiveProperties@CPrimitiveColor@@QEAAXXZ.c)
 */

void __fastcall CPrimitiveColor::~CPrimitiveColor(CPrimitiveColor *this)
{
  *(_QWORD *)this = &CPrimitiveColor::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 1) = &CPrimitiveColor::`vftable'{for `CResource'};
  CPrimitiveColor::ReleasePrimitiveProperties(this);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 64);
  CResource::~CResource((CPrimitiveColor *)((char *)this + 8));
}
