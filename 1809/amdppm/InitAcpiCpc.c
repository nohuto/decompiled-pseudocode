/*
 * XREFs of InitAcpiCpc @ 0x1C0022250
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0027484 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00010B0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00016A8 (WPP_RECORDER_SF_D.c)
 *     ReadGenAddrMaybeHidden @ 0x1C00039F8 (ReadGenAddrMaybeHidden.c)
 *     WriteGenAddrMaybeHidden @ 0x1C0003A28 (WriteGenAddrMaybeHidden.c)
 *     CpcRegisterIsSupported @ 0x1C0004944 (CpcRegisterIsSupported.c)
 *     Display_CPC @ 0x1C0007A7C (Display_CPC.c)
 *     _guard_dispatch_icall_nop @ 0x1C000CB40 (_guard_dispatch_icall_nop.c)
 *     RegisterSubspace @ 0x1C0021724 (RegisterSubspace.c)
 *     AcpiEval_CPC @ 0x1C00251A0 (AcpiEval_CPC.c)
 *     ValidateAcpiCPC @ 0x1C002F798 (ValidateAcpiCPC.c)
 */

__int64 __fastcall InitAcpiCpc(__int64 a1)
{
  int v2; // eax
  int v3; // ebx
  unsigned __int16 v4; // r9
  __int64 v5; // rsi
  char *v6; // rbp
  void (__fastcall *v7)(PWDF_DRIVER_GLOBALS, __int64, _QWORD); // rax
  unsigned int v8; // r13d
  char v9; // r14
  unsigned int v10; // r15d
  __int64 v11; // r12
  __int64 v12; // rbp
  int v13; // r14d
  unsigned __int16 v14; // r9
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  _BYTE *v18; // rcx
  unsigned __int64 GenAddrMaybeHidden; // rax
  unsigned __int64 v20; // rcx
  int v22; // [rsp+28h] [rbp-40h]
  __int64 v23; // [rsp+70h] [rbp+8h] BYREF
  char *v24; // [rsp+78h] [rbp+10h]

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  v2 = AcpiEval_CPC(a1, a1 + 560);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( v2 == -1073741772 )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        2u,
        0xAu,
        (__int64)&WPP_d3324fa02ef734613da57316ce3f84ed_Traceguids);
      goto LABEL_42;
    }
    v4 = 11;
LABEL_5:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      v4,
      (__int64)&WPP_d3324fa02ef734613da57316ce3f84ed_Traceguids,
      v2);
    goto LABEL_42;
  }
  v5 = *(_QWORD *)(a1 + 560);
  v2 = ValidateAcpiCPC(v5);
  v3 = v2;
  if ( v2 < 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1080), 0x40000u);
    v4 = 12;
    goto LABEL_5;
  }
  Display_CPC((_DWORD *)v5);
  if ( dword_1C0011814 != 1 )
  {
    v6 = (char *)&CpcRegisterTable;
    v7 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504);
    v8 = 15;
    if ( *(_DWORD *)(v5 + 4) != 1 )
    {
      v8 = 19;
      v6 = (char *)&Cpc2RegisterTable;
    }
    v24 = v6;
    v7(WdfDriverGlobals, qword_1C00113E8, 0LL);
    v9 = 0;
    v10 = 0;
    v11 = 0LL;
    while ( 1 )
    {
      v12 = *(unsigned int *)&v6[v11];
      if ( *(_BYTE *)(v12 + v5) == 10 )
      {
        v13 = *(unsigned __int8 *)(v12 + v5 + 3);
        v3 = RegisterSubspace(a1, v13, &v23);
        if ( v3 >= 0 )
        {
          if ( *(_DWORD *)(v23 + 32) == v13 )
          {
            v3 = 0;
            if ( *(_QWORD *)(v12 + v5 + 4) > (__int64)*(unsigned int *)(v23 + 80) )
              v3 = -1073741811;
          }
          else
          {
            v3 = -1073741637;
          }
        }
        v9 = 1;
        if ( v3 < 0 )
        {
          v14 = 13;
LABEL_20:
          v22 = v3;
LABEL_21:
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            v14,
            (__int64)&WPP_d3324fa02ef734613da57316ce3f84ed_Traceguids,
            v22);
          goto LABEL_41;
        }
      }
      ++v10;
      v11 += 24LL;
      if ( v10 >= v8 )
        break;
      v6 = v24;
    }
    if ( !CpcRegisterIsSupported(v5 + 224) || *(_BYTE *)v15 == 126 && !*(_QWORD *)(v5 + 228) )
    {
      v16 = *(_DWORD *)(v5 + 28);
      *(_QWORD *)v15 = *(_QWORD *)(v5 + 20);
      *(_DWORD *)(v15 + 8) = v16;
    }
    if ( v9 )
    {
      v17 = (*(__int64 (__fastcall **)(_QWORD))(qword_1C0011900 + 88))(*(_QWORD *)(qword_1C0011900 + 56));
      v3 = v17;
      if ( v17 < 0 )
      {
        v14 = 14;
        v22 = v17;
        goto LABEL_21;
      }
    }
    if ( CpcRegisterIsSupported(v5 + 176) )
      WriteGenAddrMaybeHidden(a1, v18, 1uLL);
    if ( v9 )
    {
      v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(qword_1C0011900 + 104))(*(_QWORD *)(qword_1C0011900 + 56), 0LL);
      if ( v3 == -1073741435 )
        v3 = 0;
      if ( v3 < 0 )
      {
        v14 = 15;
        goto LABEL_20;
      }
    }
    *(_QWORD *)(a1 + 360) = ReadGenAddrMaybeHidden(a1, v5 + 8);
    *(_QWORD *)(a1 + 368) = ReadGenAddrMaybeHidden(a1, v5 + 20);
    GenAddrMaybeHidden = ReadGenAddrMaybeHidden(a1, v5 + 32);
    v20 = *(_QWORD *)(a1 + 368);
    *(_QWORD *)(a1 + 376) = GenAddrMaybeHidden;
    if ( GenAddrMaybeHidden > v20 )
      *(_QWORD *)(a1 + 376) = v20;
    *(_QWORD *)(a1 + 384) = ReadGenAddrMaybeHidden(a1, v5 + 44);
LABEL_41:
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C00113E8);
  }
LABEL_42:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return (unsigned int)v3;
}
