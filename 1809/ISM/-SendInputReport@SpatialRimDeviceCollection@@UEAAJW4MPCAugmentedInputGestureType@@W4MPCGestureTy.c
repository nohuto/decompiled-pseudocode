/*
 * XREFs of ?SendInputReport@SpatialRimDeviceCollection@@UEAAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@KAEBUHandStateMsg@Internal@Spatial@Input@UI@Windows@@UMatrix4x4@Numerics@Foundation@9@@Z @ 0x180062CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAUInputInfo@@@Z @ 0x180056F34 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     ?Instance@RawInputProvidersContinuousTracing@@KAPEAV1@XZ @ 0x1800605FC (-Instance@RawInputProvidersContinuousTracing@@KAPEAV1@XZ.c)
 *     ?HandInputReportProcessed_@RawInputProvidersContinuousTracing@@QEAAXKW4MPCGestureType@@PEAUInputInfo@@@Z @ 0x180060B74 (-HandInputReportProcessed_@RawInputProvidersContinuousTracing@@QEAAXKW4MPCGestureType@@PEAUInput.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SpatialRimDeviceCollection::SendInputReport(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int128 *a5,
        __int128 *a6)
{
  int v10; // ebx
  __int64 v11; // rdx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int64 v20; // rax
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int64 v26; // rcx
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  _DWORD *v29; // rcx
  __int64 v30; // rcx
  int v31[125]; // [rsp+30h] [rbp-D0h] BYREF
  char v32; // [rsp+224h] [rbp+124h]
  __int128 v33; // [rsp+4A8h] [rbp+3A8h]
  __int128 v34; // [rsp+4B8h] [rbp+3B8h]
  __int128 v35; // [rsp+4C8h] [rbp+3C8h]
  __int128 v36; // [rsp+4D8h] [rbp+3D8h]
  __int128 v37; // [rsp+4E8h] [rbp+3E8h]
  __int128 v38; // [rsp+4F8h] [rbp+3F8h]
  __int128 v39; // [rsp+508h] [rbp+408h]
  __int128 v40; // [rsp+518h] [rbp+418h]
  __int128 v41; // [rsp+528h] [rbp+428h]
  __int128 v42; // [rsp+538h] [rbp+438h]
  __int128 v43; // [rsp+548h] [rbp+448h]
  __int128 v44; // [rsp+558h] [rbp+458h]
  __int64 v45; // [rsp+568h] [rbp+468h]
  __int128 v46; // [rsp+570h] [rbp+470h]
  __int128 v47; // [rsp+580h] [rbp+480h]
  __int128 v48; // [rsp+590h] [rbp+490h]
  __int128 v49; // [rsp+5A0h] [rbp+4A0h]
  wil::details::in1diag3 *retaddr; // [rsp+6B8h] [rbp+5B8h]

  memset_0(v31, 0, 0x640uLL);
  v31[6] = 1600;
  v10 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(a2, a3, 512, a4, (__int64)v31);
  if ( v10 < 0 )
  {
    v11 = 529LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  v13 = *a5;
  v32 = 1;
  v14 = a5[1];
  v33 = v13;
  v15 = a5[2];
  v34 = v14;
  v16 = a5[3];
  v35 = v15;
  v17 = a5[4];
  v36 = v16;
  v18 = a5[5];
  v37 = v17;
  v19 = a5[6];
  v38 = v18;
  v39 = v19;
  v40 = a5[7];
  v20 = *((_QWORD *)a5 + 24);
  v21 = a5[9];
  v41 = a5[8];
  v22 = a5[10];
  v42 = v21;
  v23 = a5[11];
  v43 = v22;
  v24 = a6[1];
  v44 = v23;
  v45 = v20;
  v25 = *a6;
  v26 = *(_QWORD *)(a1 - 2744);
  v47 = v24;
  v27 = a6[3];
  v46 = v25;
  v28 = a6[2];
  v49 = v27;
  v48 = v28;
  v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v26 + 24LL))(v26, v31);
  if ( v10 < 0 )
  {
    v11 = 535LL;
    goto LABEL_3;
  }
  v29 = (_DWORD *)*((_QWORD *)RawInputProvidersContinuousTracing::Instance() + 1);
  if ( v29 )
  {
    if ( *v29 )
    {
      RawInputProvidersContinuousTracing::Instance();
      RawInputProvidersContinuousTracing::HandInputReportProcessed_(v30, a4, a3, (__int64)v31);
    }
  }
  return 0LL;
}
