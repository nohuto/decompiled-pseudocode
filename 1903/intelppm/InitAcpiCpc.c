/*
 * XREFs of InitAcpiCpc @ 0x1C002005C
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0020CA8 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000360C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C00036CC (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 *     ReadGenAddrMaybeHidden @ 0x1C00083A4 (ReadGenAddrMaybeHidden.c)
 *     WriteGenAddrMaybeHidden @ 0x1C00086A0 (WriteGenAddrMaybeHidden.c)
 *     CpcRegisterIsSupported @ 0x1C0008AD4 (CpcRegisterIsSupported.c)
 *     Display_CPC @ 0x1C000B15C (Display_CPC.c)
 *     AcpiEval_CPC @ 0x1C0021CA4 (AcpiEval_CPC.c)
 *     ValidateAcpiCPC @ 0x1C002CE58 (ValidateAcpiCPC.c)
 *     RegisterSubspaceForGenAddr @ 0x1C003010C (RegisterSubspaceForGenAddr.c)
 */

__int64 __fastcall InitAcpiCpc(__int64 a1)
{
  int v2; // eax
  int v3; // ebx
  unsigned __int16 v5; // r9
  __int64 v6; // rsi
  __int64 v7; // rdx
  int v8; // r8d
  int v9; // r9d
  char *v10; // r13
  unsigned int v11; // r12d
  char v12; // r15
  unsigned int v13; // ebp
  __int64 v14; // r14
  int v15; // eax
  unsigned __int16 v16; // r9
  __int64 v17; // rcx
  int v18; // eax
  _BYTE *v19; // rcx
  unsigned __int64 GenAddrMaybeHidden; // rax
  unsigned __int64 v21; // rcx
  int v22; // [rsp+28h] [rbp-30h]

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  v2 = AcpiEval_CPC(a1, a1 + 576);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v6 = *(_QWORD *)(a1 + 576);
    v2 = ValidateAcpiCPC(v6);
    v3 = v2;
    if ( v2 < 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1096), 0x40000u);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_5;
      v5 = 12;
      goto LABEL_8;
    }
    Display_CPC((_DWORD *)v6, v7, v8, v9);
    if ( dword_1C001B7D4 == 1 )
      goto LABEL_5;
    v10 = (char *)&CpcRegisterTable;
    v11 = 15;
    if ( *(_DWORD *)(v6 + 4) != 1 )
    {
      v11 = 19;
      v10 = (char *)&Cpc2RegisterTable;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C001B398,
      0LL);
    v12 = 0;
    v13 = 0;
    v14 = 0LL;
    do
    {
      if ( *(_BYTE *)(v6 + *(unsigned int *)&v10[v14]) == 10 )
      {
        v15 = RegisterSubspaceForGenAddr(a1);
        v3 = v15;
        v12 = 1;
        if ( v15 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_42;
          v16 = 13;
          goto LABEL_29;
        }
      }
      ++v13;
      v14 += 24LL;
    }
    while ( v13 < v11 );
    if ( !CpcRegisterIsSupported(v6 + 224) || *(_BYTE *)v17 == 126 && !*(_QWORD *)(v6 + 228) )
    {
      v18 = *(_DWORD *)(v6 + 28);
      *(_QWORD *)v17 = *(_QWORD *)(v6 + 20);
      *(_DWORD *)(v17 + 8) = v18;
    }
    if ( v12 )
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD))(qword_1C001B8C0 + 88))(*(_QWORD *)(qword_1C001B8C0 + 56));
      v3 = v15;
      if ( v15 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_42;
        v16 = 14;
LABEL_29:
        v22 = v15;
LABEL_30:
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          v16,
          (__int64)&WPP_d3324fa02ef734613da57316ce3f84ed_Traceguids,
          v22);
        goto LABEL_42;
      }
    }
    if ( CpcRegisterIsSupported(v6 + 176) )
      WriteGenAddrMaybeHidden(a1, v19, 1LL);
    if ( !v12 )
      goto LABEL_39;
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(qword_1C001B8C0 + 104))(*(_QWORD *)(qword_1C001B8C0 + 56), 0LL);
    if ( v3 == -1073741435 )
      v3 = 0;
    if ( v3 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v16 = 15;
        v22 = v3;
        goto LABEL_30;
      }
    }
    else
    {
LABEL_39:
      *(_QWORD *)(a1 + 376) = ReadGenAddrMaybeHidden(a1, (char *)(v6 + 8));
      *(_QWORD *)(a1 + 384) = ReadGenAddrMaybeHidden(a1, (char *)(v6 + 20));
      GenAddrMaybeHidden = ReadGenAddrMaybeHidden(a1, (char *)(v6 + 32));
      v21 = *(_QWORD *)(a1 + 384);
      *(_QWORD *)(a1 + 392) = GenAddrMaybeHidden;
      if ( GenAddrMaybeHidden > v21 )
        *(_QWORD *)(a1 + 392) = v21;
      *(_QWORD *)(a1 + 400) = ReadGenAddrMaybeHidden(a1, (char *)(v6 + 44));
    }
LABEL_42:
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C001B398);
    goto LABEL_5;
  }
  if ( v2 != -1073741772 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_5;
    v5 = 11;
LABEL_8:
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      v5,
      (__int64)&WPP_d3324fa02ef734613da57316ce3f84ed_Traceguids,
      v2);
    goto LABEL_5;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      2u,
      0xAu,
      (__int64)&WPP_d3324fa02ef734613da57316ce3f84ed_Traceguids);
LABEL_5:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return (unsigned int)v3;
}
