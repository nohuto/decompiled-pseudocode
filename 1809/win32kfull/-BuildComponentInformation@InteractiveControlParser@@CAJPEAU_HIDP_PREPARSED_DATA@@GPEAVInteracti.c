/*
 * XREFs of ?BuildComponentInformation@InteractiveControlParser@@CAJPEAU_HIDP_PREPARSED_DATA@@GPEAVInteractiveControlDevice@@@Z @ 0x1C023F8C8
 * Callers:
 *     ?BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveControlDevice@@@Z @ 0x1C023FD20 (-BuildDeviceCapabilities@InteractiveControlParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAVInteractiveC.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C023EB08 (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 *     ?CreateAndLinkComponent@InteractiveControlParser@@CAJPEAU_HIDP_VALUE_CAPS@@HPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@@Z @ 0x1C023FF30 (-CreateAndLinkComponent@InteractiveControlParser@@CAJPEAU_HIDP_VALUE_CAPS@@HPEAU_INTERACTIVECTRL.c)
 *     ?FreeComponentInformation@InteractiveControlParser@@CAXPEAU_INTERACTIVECTRL_CAPABILITIES@@@Z @ 0x1C02403A4 (-FreeComponentInformation@InteractiveControlParser@@CAXPEAU_INTERACTIVECTRL_CAPABILITIES@@@Z.c)
 */

__int64 __fastcall InteractiveControlParser::BuildComponentInformation(
        PHIDP_PREPARSED_DATA PreparsedData,
        __int64 a2,
        struct InteractiveControlDevice *a3)
{
  USHORT v3; // di
  struct _INTERACTIVECTRL_CAPABILITIES *v4; // r15
  struct _HIDP_VALUE_CAPS *ValueCaps; // r14
  struct _HIDP_BUTTON_CAPS *v8; // rsi
  NTSTATUS SpecificValueCaps; // eax
  int v10; // ebx
  __int64 v11; // rcx
  UCHAR *v12; // rdi
  SimpleHapticsController *v13; // rcx
  NTSTATUS SpecificButtonCaps; // eax
  USHORT ValueCapsLength[2]; // [rsp+40h] [rbp-59h] BYREF
  USHORT ButtonCapsLength[2]; // [rsp+44h] [rbp-55h] BYREF
  USHORT v18; // [rsp+48h] [rbp-51h] BYREF
  struct tagINTERACTIVECTRL_COMPONENT_ENTRY *v19[2]; // [rsp+50h] [rbp-49h] BYREF
  struct _HIDP_VALUE_CAPS v20; // [rsp+60h] [rbp-39h] BYREF

  v3 = 0;
  v4 = (struct InteractiveControlDevice *)((char *)a3 + 72);
  ValueCapsLength[0] = 0;
  ButtonCapsLength[0] = 0;
  v18 = 1;
  *((_QWORD *)a3 + 24) = (char *)a3 + 184;
  ValueCaps = 0LL;
  *((_QWORD *)a3 + 23) = (char *)a3 + 184;
  v8 = 0LL;
  SpecificValueCaps = HidP_GetSpecificValueCaps(HidP_Input, 0, 0, 0, 0LL, ValueCapsLength, PreparsedData);
  v10 = SpecificValueCaps;
  if ( SpecificValueCaps && SpecificValueCaps != -1072627705 )
    goto LABEL_32;
  if ( ValueCapsLength[0] )
  {
    ValueCaps = (struct _HIDP_VALUE_CAPS *)Win32AllocPool(72LL * ValueCapsLength[0], 1819440195LL);
    if ( !ValueCaps )
    {
      v10 = -1073741670;
LABEL_33:
      InteractiveControlParser::FreeComponentInformation(v4);
      return (unsigned int)v10;
    }
    if ( HidP_GetSpecificValueCaps(HidP_Input, 0, 0, 0, ValueCaps, ValueCapsLength, PreparsedData) >= 0 )
    {
      if ( HidP_GetSpecificValueCaps(HidP_Feature, 1u, 0, 0x48u, &v20, &v18, PreparsedData) >= 0 )
      {
        v11 = *((unsigned __int16 *)v4 + 6);
        LODWORD(v19[0]) = 0;
        v10 = -1073741661;
        v12 = (UCHAR *)Win32AllocPool(v11, 1819440195LL);
        *v12 = v20.ReportID;
        v13 = (SimpleHapticsController *)*((_QWORD *)a3 + 48);
        if ( v13 )
          v10 = SimpleHapticsController::SendDeviceIOControl(
                  v13,
                  0xB0192u,
                  0LL,
                  0,
                  v12,
                  *((unsigned __int16 *)v4 + 6),
                  (unsigned int *)v19);
        if ( v10 < 0 )
          goto LABEL_28;
        DbgPrintEx(
          0x4Du,
          2u,
          "InteractiveControlParser::BuildComponentInformationFound Device Resolution Multiplier:\n");
        DbgPrintEx(
          0x4Du,
          2u,
          "InteractiveControlParser::BuildComponentInformation\tLogical Rnage = [%d - %d]\n",
          v20.LogicalMin,
          v20.LogicalMax);
        DbgPrintEx(0x4Du, 2u, "InteractiveControlParser::BuildComponentInformation\tMultiplier Value = %d\n", 1);
        Win32FreePool(v12);
        v3 = 0;
      }
      if ( ValueCapsLength[0] )
      {
        do
        {
          v10 = InteractiveControlParser::CreateAndLinkComponent(&ValueCaps[v3], 0, v4, v19);
          if ( v10 < 0 )
            goto LABEL_28;
          if ( v19[0] && ValueCaps[v3].LinkCollection == v20.LinkCollection )
            *((_DWORD *)v19[0] + 31) = 1;
        }
        while ( ++v3 < ValueCapsLength[0] );
      }
      v3 = 0;
    }
  }
  SpecificButtonCaps = HidP_GetSpecificButtonCaps(HidP_Input, 0, 0, 0, 0LL, ButtonCapsLength, PreparsedData);
  v10 = SpecificButtonCaps;
  if ( (!SpecificButtonCaps || SpecificButtonCaps == -1072627705) && ButtonCapsLength[0] )
  {
    v8 = (struct _HIDP_BUTTON_CAPS *)Win32AllocPool(72LL * ButtonCapsLength[0], 1819440195LL);
    if ( v8 )
    {
      v10 = HidP_GetSpecificButtonCaps(HidP_Input, 0, 0, 0, v8, ButtonCapsLength, PreparsedData);
      if ( v10 >= 0 && ButtonCapsLength[0] )
      {
        do
        {
          v10 = InteractiveControlParser::CreateAndLinkComponent((struct _HIDP_VALUE_CAPS *)&v8[v3], 1, v4, v19);
          if ( v10 < 0 )
            break;
          ++v3;
        }
        while ( v3 < ButtonCapsLength[0] );
      }
    }
    else
    {
      v10 = -1073741670;
    }
  }
LABEL_28:
  if ( ValueCaps )
    Win32FreePool(ValueCaps);
  if ( v8 )
    Win32FreePool(v8);
LABEL_32:
  if ( v10 < 0 )
    goto LABEL_33;
  return (unsigned int)v10;
}
