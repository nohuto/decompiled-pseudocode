/*
 * XREFs of ?HandleActivation@CImmersiveMode@@UEAAJW4ZBID@@@Z @ 0x1800659A0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@Z @ 0x1800170E0 (-UpdateActivationFilter@CDesktopVisibilityChangeSource@CImmersiveMode@@QEAAXW4IMM_SYSTEM_MODE@@@.c)
 *     ?s_ModeFromZbid@CImmersiveMode@@CA?AW4IMM_SYSTEM_MODE@@W4ZBID@@@Z @ 0x180065AB0 (-s_ModeFromZbid@CImmersiveMode@@CA-AW4IMM_SYSTEM_MODE@@W4ZBID@@@Z.c)
 *     ?_PrepareDeferredNotifications@CImmersiveMode@@AEAAXW4ZBID@@@Z @ 0x180065ADC (-_PrepareDeferredNotifications@CImmersiveMode@@AEAAXW4ZBID@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?SHCoGetApartmentId@@YAJPEAK@Z @ 0x1800F28A0 (-SHCoGetApartmentId@@YAJPEAK@Z.c)
 *     ?_UpdateFallbackWindow@CImmersiveMode@@AEAAXXZ @ 0x180102558 (-_UpdateFallbackWindow@CImmersiveMode@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveMode::HandleActivation(__int64 a1, unsigned int a2)
{
  CImmersiveMode *v4; // r14
  __int64 v5; // rbp
  int v6; // ebx
  bool v7; // al
  int v8; // ecx
  signed int ApartmentId; // ebx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned __int64 i; // rsi
  int v15; // [rsp+20h] [rbp-268h]
  unsigned int v16; // [rsp+30h] [rbp-258h] BYREF
  __int64 v17; // [rsp+38h] [rbp-250h]
  __int64 v18; // [rsp+40h] [rbp-248h]
  signed int v19; // [rsp+48h] [rbp-240h]
  WCHAR Filename[264]; // [rsp+50h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+0h]

  v17 = -2LL;
  v4 = (CImmersiveMode *)(a1 - 88);
  v5 = (a1 + 96) & -(__int64)(a1 != 88);
  v18 = v5;
  v6 = *(_DWORD *)(v5 + 0x2C);
  v7 = v6 == 2;
  if ( v6 == 2 )
  {
LABEL_5:
    if ( !v7 )
      goto LABEL_6;
    goto LABEL_24;
  }
  v8 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
  if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
  {
LABEL_3:
    if ( v8 != 1 )
    {
LABEL_4:
      v7 = 0;
      goto LABEL_5;
    }
    goto LABEL_24;
  }
  if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
  {
    if ( FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1 )
    {
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 2;
      goto LABEL_4;
    }
    v12 = 1;
    `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 1;
  }
  else
  {
    v12 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
  }
  if ( v12 != 1 )
    goto LABEL_4;
  if ( v6 == 1 )
  {
    v13 = IsAppCompatModeEnabled(16LL);
    v8 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    if ( v13 )
      v8 = 2;
    `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = v8;
    goto LABEL_3;
  }
LABEL_24:
  if ( *(_DWORD *)(v5 + 40) != -3 )
  {
    ApartmentId = SHCoGetApartmentId(&v16);
    if ( ApartmentId >= 0 && v16 != *(_DWORD *)(v5 + 40) )
      ApartmentId = -2147417842;
    if ( ApartmentId < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC8,
        (unsigned int)"internal\\onecoreuapshell\\private\\inc\\Cowthreadusedetection.h",
        (const char *)(unsigned int)ApartmentId,
        v15);
      goto LABEL_7;
    }
  }
LABEL_6:
  ApartmentId = !TryEnterCriticalSection((LPCRITICAL_SECTION)v5) ? 0x8001010E : 0;
LABEL_7:
  v19 = ApartmentId;
  if ( *(_DWORD *)(a1 + 160) != a2 )
  {
    CImmersiveMode::_PrepareDeferredNotifications(v4, a2);
    v11 = CImmersiveMode::s_ModeFromZbid(a2);
    if ( v11 != -1 && v11 != *(_DWORD *)(a1 + 248) )
    {
      *(_DWORD *)(a1 + 248) = v11;
      CImmersiveMode::_UpdateFallbackWindow(v4);
      for ( i = 0LL; i < *(_QWORD *)(a1 + 352); ++i )
        CImmersiveMode::CDesktopVisibilityChangeSource::UpdateActivationFilter(
          *(_QWORD *)(*(_QWORD *)(a1 + 344) + 8 * i),
          *(_DWORD *)(a1 + 248));
    }
  }
  if ( ApartmentId >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v5);
  return 0LL;
}
