/*
 * XREFs of ?SendHeadReport@SpatialRimDeviceCollection@@UEAAJKAEBUHeadInputDataMsg@Internal@Spatial@Input@UI@Windows@@@Z @ 0x18009ED60
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAUInputInfo@@@Z @ 0x1800935B4 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 */

__int64 __fastcall SpatialRimDeviceCollection::SendHeadReport(
        SpatialRimDeviceCollection *this,
        int a2,
        const struct Windows::UI::Input::Spatial::Internal::HeadInputDataMsg *a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  __int128 v9; // xmm0
  __int64 v10; // rcx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  int v14[12]; // [rsp+30h] [rbp-808h] BYREF
  char v15; // [rsp+60h] [rbp-7D8h]
  __int128 v16; // [rsp+2F0h] [rbp-548h]
  __int128 v17; // [rsp+300h] [rbp-538h]
  __int128 v18; // [rsp+310h] [rbp-528h]
  __int128 v19; // [rsp+320h] [rbp-518h]
  wil::details::in1diag3 *retaddr; // [rsp+838h] [rbp+0h]

  memset_0(v14, 0, 0x7F0uLL);
  v14[6] = 2032;
  v6 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0, 8, 0x20000, a2, (__int64)v14);
  if ( v6 < 0 )
  {
    v7 = 547LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v9 = *(_OWORD *)a3;
  v10 = *((_QWORD *)this - 343);
  v11 = *((_OWORD *)a3 + 1);
  v15 = 1;
  v16 = v9;
  v12 = *((_OWORD *)a3 + 2);
  v17 = v11;
  v13 = *((_OWORD *)a3 + 3);
  v18 = v12;
  v19 = v13;
  v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v10 + 24LL))(v10, v14);
  if ( v6 < 0 )
  {
    v7 = 553LL;
    goto LABEL_3;
  }
  return 0LL;
}
