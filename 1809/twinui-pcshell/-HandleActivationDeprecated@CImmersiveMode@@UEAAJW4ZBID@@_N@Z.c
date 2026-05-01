/*
 * XREFs of ?HandleActivationDeprecated@CImmersiveMode@@UEAAJW4ZBID@@_N@Z @ 0x18005C0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?SHCoGetApartmentId@@YAJPEAK@Z @ 0x1800F28A0 (-SHCoGetApartmentId@@YAJPEAK@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveMode::HandleActivationDeprecated(_DWORD *a1, int a2, char a3)
{
  __int64 v6; // r15
  int v7; // ebx
  bool v8; // al
  int v9; // ecx
  signed int ApartmentId; // ebx
  int v11; // edi
  void *v12; // rcx
  bool v13; // r14
  IUnknown *v14; // rcx
  int v15; // edx
  int v16; // r8d
  int v17; // ecx
  int v18; // eax
  void *v19; // rcx
  int v21; // ecx
  int v22; // eax
  int cchValue; // [rsp+28h] [rbp-E0h]
  unsigned int v24[2]; // [rsp+38h] [rbp-D0h] BYREF
  void *ppvOut; // [rsp+40h] [rbp-C8h] BYREF
  IUnknown *punk; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v27[6]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+68h] [rbp-A0h]
  __int64 v29; // [rsp+70h] [rbp-98h]
  signed int v30; // [rsp+78h] [rbp-90h]
  WCHAR Filename[264]; // [rsp+88h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2D0h] [rbp+1C8h]

  v28 = -2LL;
  v24[0] = 0;
  v6 = (unsigned __int64)(a1 + 24) & -(__int64)(a1 != (_DWORD *)88);
  v29 = v6;
  v7 = *(_DWORD *)(v6 + 0x2C);
  v8 = v7 == 2;
  if ( v7 != 2 )
  {
    v9 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    if ( !`_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
    {
      if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
      {
        v21 = (FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1) + 1;
        `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = v21;
      }
      else
      {
        v21 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
      }
      if ( v21 != 1 )
      {
LABEL_4:
        v8 = 0;
        goto LABEL_5;
      }
      if ( v7 != 1 )
        goto LABEL_40;
      v22 = IsAppCompatModeEnabled(16LL);
      v9 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
      if ( v22 )
        v9 = 2;
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = v9;
    }
    if ( v9 == 1 )
      goto LABEL_40;
    goto LABEL_4;
  }
LABEL_5:
  if ( !v8 )
  {
LABEL_6:
    ApartmentId = !TryEnterCriticalSection((LPCRITICAL_SECTION)v6) ? 0x8001010E : 0;
    goto LABEL_7;
  }
LABEL_40:
  if ( *(_DWORD *)(v6 + 40) == -3 )
    goto LABEL_6;
  ApartmentId = SHCoGetApartmentId(v24);
  if ( ApartmentId >= 0 && v24[0] != *(_DWORD *)(v6 + 40) )
    ApartmentId = -2147417842;
  if ( ApartmentId >= 0 )
    goto LABEL_6;
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0xC8,
    (unsigned int)"internal\\onecoreuapshell\\private\\inc\\Cowthreadusedetection.h",
    (const char *)(unsigned int)ApartmentId,
    cchValue);
LABEL_7:
  v30 = ApartmentId;
  v11 = -1;
  if ( a2 == 1 )
  {
    v11 = 0;
  }
  else if ( a2 == 8 || a2 == 10 || a2 == 12 )
  {
    v11 = 1;
  }
  ppvOut = 0LL;
  punk = 0LL;
  v24[0] = 2;
  (*(void (__fastcall **)(_DWORD *, GUID *, IUnknown **))(*((_QWORD *)a1 - 7) + 32LL))(
    a1 - 14,
    &GUID_00000000_0000_0000_c000_000000000046,
    &punk);
  v12 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = IUnknown_QueryService(
          punk,
          &IID_IImmersiveApplicationManager,
          &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
          &ppvOut) >= 0;
  v14 = punk;
  if ( punk )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v14->lpVtbl->Release)(v14);
  }
  if ( v13 )
  {
    if ( v11 == -1 || !a3 )
    {
      v15 = a1[69];
      v16 = v15;
    }
    else
    {
      v15 = v11;
      v16 = a1[69];
    }
    v17 = a1[40];
    v18 = a1[62];
    v27[0] = v16;
    v27[1] = v15;
    v27[2] = v18;
    v27[3] = v17;
    v27[4] = a2;
    (*(void (__fastcall **)(void *, _DWORD *))(*(_QWORD *)ppvOut + 24LL))(ppvOut, v27);
  }
  if ( a3 && v11 != -1 && v11 != a1[69] )
    a1[69] = v11;
  v19 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v19 + 16LL))(v19);
  }
  if ( ApartmentId >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v6);
  return 0LL;
}
