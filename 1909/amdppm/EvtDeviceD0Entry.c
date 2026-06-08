/*
 * XREFs of EvtDeviceD0Entry @ 0x1C0002D50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000138C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002BEC (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 *     AcpiEval_PPC @ 0x1C002370C (AcpiEval_PPC.c)
 *     AcpiEval_TPC @ 0x1C0023B94 (AcpiEval_TPC.c)
 *     ProcLibCapChange @ 0x1C0027978 (ProcLibCapChange.c)
 */

__int64 __fastcall EvtDeviceD0Entry(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rax
  unsigned int v3; // ebx
  unsigned int v4; // esi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  __int64 v9; // [rsp+28h] [rbp-20h]
  unsigned int v10; // [rsp+60h] [rbp+18h] BYREF

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0013018);
  v2 = *(_QWORD *)(v1 + 264);
  if ( (v2 & 0x80000000) == 0 )
  {
    v3 = 0;
    if ( *(_BYTE *)(v1 + 76) )
    {
      *(_BYTE *)(v1 + 76) = 0;
      v4 = 0;
      v10 = 0;
      if ( (v2 & 0x70000000) != 0 )
      {
        v5 = AcpiEval_PPC(v1, &v10);
        if ( v5 >= 0 )
        {
          v4 = v10;
        }
        else if ( v5 == -1073741772 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              2u,
              0x12u,
              (__int64)&WPP_aa9d9c6c8741343c67d4469f91515e40_Traceguids);
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x13u,
            (__int64)&WPP_aa9d9c6c8741343c67d4469f91515e40_Traceguids,
            v5);
        }
      }
      v6 = *(_DWORD *)(v1 + 264);
      v10 = 0;
      if ( (v6 & 0x3000000) != 0 )
      {
        v7 = AcpiEval_TPC(v1, &v10);
        if ( v7 >= 0 )
        {
          v3 = v10;
        }
        else if ( v7 == -1073741772 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              2u,
              0x14u,
              (__int64)&WPP_aa9d9c6c8741343c67d4469f91515e40_Traceguids);
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LODWORD(v9) = v7;
          WPP_RECORDER_SF_D(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            3u,
            3u,
            0x15u,
            (__int64)&WPP_aa9d9c6c8741343c67d4469f91515e40_Traceguids,
            v9);
        }
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C0013418,
        0LL);
      if ( v4 != *(_DWORD *)(v1 + 448) || v3 != *(_DWORD *)(v1 + 496) )
      {
        ProcLibCapChange(v1, v4, v3, 100LL);
        ((void (__fastcall *)(__int64))qword_1C00137E8)(v1);
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        qword_1C0013418);
    }
  }
  return 0LL;
}
