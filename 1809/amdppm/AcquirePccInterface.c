/*
 * XREFs of AcquirePccInterface @ 0x1C00214C0
 * Callers:
 *     InitAcpiLegacyPcc @ 0x1C002DFA0 (InitAcpiLegacyPcc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00010B0 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C000CB40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000CEC0 (memset.c)
 */

__int64 __fastcall AcquirePccInterface(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ebx
  int v4; // edi
  unsigned __int16 v5; // r9
  char v6; // cl
  unsigned int v7; // ecx
  __int64 v8; // rax
  int v10; // [rsp+20h] [rbp-28h]
  int v11; // [rsp+28h] [rbp-20h]

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00113E8,
    0LL);
  if ( qword_1C00118C8 )
  {
    v3 = 0;
    goto LABEL_24;
  }
  dword_1C00118A0 = -1;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, void *, __int16, __int16, _QWORD))(WdfFunctions_01015 + 1048))(
         WdfDriverGlobals,
         v2,
         &GUID_PCC_INTERFACE_STANDARD,
         &unk_1C0011880,
         128,
         1,
         0LL);
  if ( v3 >= 0 )
  {
    v3 = -1073741811;
    v4 = -1073741811;
    if ( *(_DWORD *)qword_1C00118C8 != 609239875 )
    {
      v5 = 43;
LABEL_5:
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v5,
        (__int64)&WPP_885f9b737e553b3972faa1b865470758_Traceguids);
LABEL_22:
      ((void (__fastcall *)(__int64))qword_1C0011898)(qword_1C0011888);
      memset(&unk_1C0011880, 0, 0x80uLL);
      goto LABEL_24;
    }
    if ( *(_WORD *)(qword_1C00118C8 + 4) < 0x28u )
    {
      v5 = 44;
      goto LABEL_5;
    }
    v6 = *(_BYTE *)(qword_1C00118C8 + 6);
    if ( (v6 || *(_BYTE *)(qword_1C00118C8 + 7) < 6u) && (v6 != 1 || *(_BYTE *)(qword_1C00118C8 + 7)) )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x2Du,
        (__int64)&WPP_885f9b737e553b3972faa1b865470758_Traceguids);
    }
    else
    {
      v7 = *(_DWORD *)(qword_1C00118C8 + 36);
      if ( v7 > *(_DWORD *)(qword_1C00118C8 + 28) )
      {
        v5 = 46;
        goto LABEL_5;
      }
      if ( *(_DWORD *)(qword_1C00118C8 + 32) > v7 )
      {
        v5 = 47;
        goto LABEL_5;
      }
      v4 = 0;
    }
    v3 = v4;
    if ( v4 < 0 )
      goto LABEL_22;
    if ( dword_1C0011814 == 1 )
    {
      dword_1C0011840 = -1;
      v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, a1);
      LOWORD(v11) = 1;
      LOWORD(v10) = 88;
      v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, GUID *, void *, int, int, _QWORD))(WdfFunctions_01015 + 1048))(
             WdfDriverGlobals,
             v8,
             &GUID_PCC_INTERFACE_INTERNAL,
             &unk_1C0011820,
             v10,
             v11,
             0LL);
    }
    if ( v3 < 0 )
      goto LABEL_22;
  }
LABEL_24:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00113E8);
  return (unsigned int)v3;
}
