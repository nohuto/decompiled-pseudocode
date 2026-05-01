/*
 * XREFs of ?IsWideAtStartupEnabled@@YAEH@Z @ 0x180040F5C
 * Callers:
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x18003DFD4 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z @ 0x180040DC8 (-GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z.c)
 * Callees:
 *     ?GetFlightedValue@CortanaFeatureConfiguration@@YAJPEBGAEAUFeatureValue@1@AEAE@Z @ 0x180041218 (-GetFlightedValue@CortanaFeatureConfiguration@@YAJPEBGAEAUFeatureValue@1@AEAE@Z.c)
 *     ?GetOverrideValue@CortanaFeatureConfiguration@@YAJPEBGAEAUFeatureValue@1@AEAE@Z @ 0x1800412D8 (-GetOverrideValue@CortanaFeatureConfiguration@@YAJPEBGAEAUFeatureValue@1@AEAE@Z.c)
 *     ?getSharedFeatureTable@CortanaFeatureConfiguration@@YAPEAUFeatureBehaviorMap@1@XZ @ 0x180071124 (-getSharedFeatureTable@CortanaFeatureConfiguration@@YAPEAUFeatureBehaviorMap@1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall IsWideAtStartupEnabled(int a1)
{
  HRESULT v2; // eax
  __int64 v3; // rax
  CortanaFeatureConfiguration *v4; // rcx
  int v5; // r15d
  CortanaFeatureConfiguration *v6; // rcx
  CortanaFeatureConfiguration *v7; // rcx
  unsigned __int8 *v8; // r9
  WCHAR *v9; // r14
  char v10; // di
  int v11; // r10d
  int OverrideValue; // eax
  CortanaFeatureConfiguration *v13; // rcx
  unsigned __int8 *v14; // r9
  int v15; // ebx
  int v16; // r15d
  CortanaFeatureConfiguration *v17; // rcx
  CortanaFeatureConfiguration *v18; // rcx
  unsigned __int8 *v19; // r9
  WCHAR *v20; // r14
  int v21; // r10d
  int FlightedValue; // eax
  unsigned __int8 *v23; // r9
  int v24; // ebx
  __int64 v25; // rcx
  __int64 v27; // rdx
  __int64 v28; // rdx
  int v29; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int16 v30[4]; // [rsp+28h] [rbp-48h] BYREF
  __int64 v31; // [rsp+30h] [rbp-40h]
  _QWORD v32[2]; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING string; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v32[1] = -2LL;
  v32[0] = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(L"Windows.UI.ViewManagement.UISettings", 0x24u, &hstringHeader, &string);
  if ( v2 < 0 )
  {
    RaiseException(v2, 1u, 0, 0LL);
    JUMPOUT(0x1800DCD50LL);
  }
  v32[0] = 0LL;
  if ( (int)RoActivateInstance(string, v30) >= 0 )
  {
    v3 = *(_QWORD *)&GUID_bad82401_2721_44f9_bb91_2bb228be442f.Data1
       - *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1;
    if ( *(_QWORD *)&GUID_bad82401_2721_44f9_bb91_2bb228be442f.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1 )
      v3 = *(_QWORD *)GUID_bad82401_2721_44f9_bb91_2bb228be442f.Data4
         - *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
    v4 = *(CortanaFeatureConfiguration **)v30;
    if ( !v3 )
    {
      v32[0] = *(_QWORD *)v30;
      goto LABEL_8;
    }
    (***(void (__fastcall ****)(_QWORD, GUID *, _QWORD *))v30)(
      *(_QWORD *)v30,
      &GUID_bad82401_2721_44f9_bb91_2bb228be442f,
      v32);
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v30 + 16LL))(*(_QWORD *)v30);
  }
  v4 = (CortanaFeatureConfiguration *)v32[0];
LABEL_8:
  if ( !v4
    || (*(double *)v30 = DOUBLE_1_0,
        (*(int (__fastcall **)(CortanaFeatureConfiguration *, unsigned __int16 *))(*(_QWORD *)v4 + 48LL))(v4, v30) < 0)
    || *(double *)v30 <= 1.25 )
  {
    v5 = *((_DWORD *)CortanaFeatureConfiguration::getSharedFeatureTable(v4) + 333);
    CortanaFeatureConfiguration::getSharedFeatureTable(v6);
    v9 = (WCHAR *)*((_QWORD *)CortanaFeatureConfiguration::getSharedFeatureTable(v7) + 165);
    v10 = 1;
    if ( v11 != 1 )
      goto LABEL_35;
    *(_DWORD *)&v30[2] = 0;
    v31 = 0LL;
    *(_DWORD *)v30 = 1;
    LOBYTE(v29) = 0;
    OverrideValue = CortanaFeatureConfiguration::GetOverrideValue(
                      v9,
                      v30,
                      (struct CortanaFeatureConfiguration::FeatureValue *)&v29,
                      v8);
    v15 = OverrideValue;
    if ( OverrideValue < 0 )
    {
      v27 = 369LL;
    }
    else
    {
      if ( (_BYTE)v29 )
        goto LABEL_18;
      LOBYTE(v29) = 0;
      OverrideValue = CortanaFeatureConfiguration::GetFlightedValue(
                        (CortanaFeatureConfiguration *)v9,
                        v30,
                        (struct CortanaFeatureConfiguration::FeatureValue *)&v29,
                        v14);
      v15 = OverrideValue;
      if ( OverrideValue >= 0 )
      {
        v15 = 0;
        if ( (_BYTE)v29 )
          goto LABEL_18;
        *(_DWORD *)&v30[2] = v5;
        goto LABEL_17;
      }
      v27 = 377LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v27,
      (unsigned int)"internal\\onecoreuapshell\\inc\\cortanafeatureconfiguration.h",
      (const char *)(unsigned int)OverrideValue,
      v29);
LABEL_17:
    if ( v15 < 0 )
      goto LABEL_31;
LABEL_18:
    if ( a1 < *(int *)&v30[2] )
      goto LABEL_31;
    v16 = *((_DWORD *)CortanaFeatureConfiguration::getSharedFeatureTable(v13) + 327);
    CortanaFeatureConfiguration::getSharedFeatureTable(v17);
    v20 = (WCHAR *)*((_QWORD *)CortanaFeatureConfiguration::getSharedFeatureTable(v18) + 162);
    if ( v21 == 1 )
    {
      *(_DWORD *)&v30[2] = 0;
      v31 = 0LL;
      *(_DWORD *)v30 = 1;
      LOBYTE(v29) = 0;
      FlightedValue = CortanaFeatureConfiguration::GetOverrideValue(
                        v20,
                        v30,
                        (struct CortanaFeatureConfiguration::FeatureValue *)&v29,
                        v19);
      v24 = FlightedValue;
      if ( FlightedValue < 0 )
      {
        v28 = 369LL;
      }
      else
      {
        if ( (_BYTE)v29 )
        {
LABEL_26:
          if ( *(_DWORD *)&v30[2] )
            goto LABEL_27;
          goto LABEL_31;
        }
        LOBYTE(v29) = 0;
        FlightedValue = CortanaFeatureConfiguration::GetFlightedValue(
                          (CortanaFeatureConfiguration *)v20,
                          v30,
                          (struct CortanaFeatureConfiguration::FeatureValue *)&v29,
                          v23);
        v24 = FlightedValue;
        if ( FlightedValue >= 0 )
        {
          v24 = 0;
          if ( (_BYTE)v29 )
            goto LABEL_26;
          *(_DWORD *)&v30[2] = v16;
LABEL_25:
          if ( v24 >= 0 )
            goto LABEL_26;
LABEL_31:
          v10 = 0;
          goto LABEL_27;
        }
        v28 = 377LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v28,
        (unsigned int)"internal\\onecoreuapshell\\inc\\cortanafeatureconfiguration.h",
        (const char *)(unsigned int)FlightedValue,
        v29);
      goto LABEL_25;
    }
LABEL_35:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B5,
      (unsigned int)"internal\\onecoreuapshell\\inc\\cortanafeatureconfiguration.h",
      (const char *)0x80070057LL,
      v29);
    goto LABEL_31;
  }
  v10 = 1;
LABEL_27:
  v25 = v32[0];
  if ( v32[0] )
  {
    v32[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  return v10;
}
