/*
 * XREFs of ??1CD2DPrimitiveProperties@@MEAA@XZ @ 0x180202644
 * Callers:
 *     ??_GCD2DPrimitiveProperties@@MEAAPEAXI@Z @ 0x180202690 (--_GCD2DPrimitiveProperties@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DPrimitiveProperties::~CD2DPrimitiveProperties(CD2DPrimitiveProperties *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CD2DPrimitiveProperties::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CD2DEffect::`vftable'{for `IDeviceResource'};
  v2 = *((_QWORD *)this + 13);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  CD2DResource::~CD2DResource(this);
}
