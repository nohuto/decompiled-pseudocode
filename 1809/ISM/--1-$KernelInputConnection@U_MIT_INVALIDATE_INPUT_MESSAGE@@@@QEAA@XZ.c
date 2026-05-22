/*
 * XREFs of ??1?$KernelInputConnection@U_MIT_INVALIDATE_INPUT_MESSAGE@@@@QEAA@XZ @ 0x18002A1AC
 * Callers:
 *     ??_GInputDeliveryServer@@UEAAPEAXI@Z @ 0x18002A070 (--_GInputDeliveryServer@@UEAAPEAXI@Z.c)
 *     ??1RIMRawInputProvider@@MEAA@XZ @ 0x18005BF88 (--1RIMRawInputProvider@@MEAA@XZ.c)
 *     ??1Win32kInterop@@UEAA@XZ @ 0x1800812FC (--1Win32kInterop@@UEAA@XZ.c)
 *     ??1DWMInputRouter@@MEAA@XZ @ 0x18008706C (--1DWMInputRouter@@MEAA@XZ.c)
 *     ??1InputConfigContextProvider@@MEAA@XZ @ 0x18009DC14 (--1InputConfigContextProvider@@MEAA@XZ.c)
 *     ??_ENonBamoInputDeliveryServer@@EEAAPEAXI@Z @ 0x1800D4230 (--_ENonBamoInputDeliveryServer@@EEAAPEAXI@Z.c)
 *     _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$3 @ 0x18012F00C (_InputDeliveryServer--InputDeliveryServer_--_1_--dtor$3.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$21 @ 0x1801321EB (_DWMInputRouter--DWMInputRouter_--_1_--dtor$21.c)
 *     _DWMInputRouter::DWMInputRouter_::_1_::dtor$23 @ 0x18013221D (_DWMInputRouter--DWMInputRouter_--_1_--dtor$23.c)
 *     _NonBamoInputDeliveryServer::NonBamoInputDeliveryServer_::_1_::dtor$6 @ 0x1801343A8 (_NonBamoInputDeliveryServer--NonBamoInputDeliveryServer_--_1_--dtor$6.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>::~KernelInputConnection<_MIT_INVALIDATE_INPUT_MESSAGE>(
        __int64 *a1,
        __int64 a2)
{
  __int64 *v3; // rdi
  __int64 *v4; // rcx
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx

  v3 = a1 + 8;
  v4 = (__int64 *)a1[15];
  if ( v4 )
  {
    LOBYTE(a2) = v4 != v3;
    result = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v4 + 32))(v4, a2);
    v3[7] = 0LL;
  }
  if ( a1[2] )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1[1] + 144LL))(a1[1]);
  a1[2] = 0LL;
  v6 = a1[1];
  if ( v6 )
  {
    a1[1] = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return result;
}
