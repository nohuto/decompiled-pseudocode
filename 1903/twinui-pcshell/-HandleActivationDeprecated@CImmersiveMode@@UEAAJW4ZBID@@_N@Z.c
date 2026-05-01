/*
 * XREFs of ?HandleActivationDeprecated@CImmersiveMode@@UEAAJW4ZBID@@_N@Z @ 0x180060700
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?SHCoGetApartmentId@@YAJPEAK@Z @ 0x1801176FC (-SHCoGetApartmentId@@YAJPEAK@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveMode::HandleActivationDeprecated(_DWORD *a1, int a2, char a3)
{
  __int64 v6; // r14
  int v7; // ebx
  int v8; // ecx
  signed int ApartmentId; // ebx
  int v10; // edi
  void *v11; // rcx
  bool v12; // r15
  IUnknown *v13; // rcx
  int v14; // edx
  int v15; // r8d
  int v16; // ecx
  int v17; // eax
  void *v18; // rcx
  int v20; // eax
  int v21; // eax
  int cchValue; // [rsp+28h] [rbp-E0h]
  unsigned int v23[2]; // [rsp+38h] [rbp-D0h] BYREF
  void *ppvOut; // [rsp+40h] [rbp-C8h] BYREF
  IUnknown *punk; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v26[6]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+68h] [rbp-A0h]
  __int64 v28; // [rsp+70h] [rbp-98h]
  signed int v29; // [rsp+78h] [rbp-90h]
  WCHAR Filename[264]; // [rsp+88h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2D0h] [rbp+1C8h]

  v27 = -2LL;
  v23[0] = 0;
  v6 = (unsigned __int64)(a1 + 24) & -(__int64)(a1 != (_DWORD *)88);
  v28 = v6;
  v7 = *(_DWORD *)(v6 + 0x2C);
  if ( v7 == 2 )
    goto LABEL_40;
  v8 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
  if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
    goto LABEL_3;
  if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
  {
    if ( FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1 )
    {
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 2;
      goto LABEL_4;
    }
    v20 = 1;
    `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 1;
  }
  else
  {
    v20 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
  }
  if ( v20 != 1 )
    goto LABEL_4;
  if ( v7 == 1 )
  {
    v21 = IsAppCompatModeEnabled(16LL);
    v8 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    if ( v21 )
      v8 = 2;
    `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = v8;
LABEL_3:
    if ( v8 != 1 )
    {
LABEL_4:
      ApartmentId = !TryEnterCriticalSection((LPCRITICAL_SECTION)v6) ? 0x8001010E : 0;
      goto LABEL_5;
    }
  }
LABEL_40:
  if ( *(_DWORD *)(v6 + 40) == -3 )
    goto LABEL_4;
  ApartmentId = SHCoGetApartmentId(v23);
  if ( ApartmentId >= 0 && v23[0] != *(_DWORD *)(v6 + 40) )
    ApartmentId = -2147417842;
  if ( ApartmentId >= 0 )
    goto LABEL_4;
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0xC8,
    (unsigned int)"internal\\onecoreuapshell\\private\\inc\\Cowthreadusedetection.h",
    (const char *)(unsigned int)ApartmentId,
    cchValue);
LABEL_5:
  v29 = ApartmentId;
  v10 = -1;
  if ( a2 == 1 )
  {
    v10 = 0;
  }
  else if ( a2 == 8 || a2 == 10 || a2 == 12 )
  {
    v10 = 1;
  }
  ppvOut = 0LL;
  punk = 0LL;
  v23[0] = 2;
  (*(void (__fastcall **)(_DWORD *, GUID *, IUnknown **))(*((_QWORD *)a1 - 7) + 32LL))(
    a1 - 14,
    &GUID_00000000_0000_0000_c000_000000000046,
    &punk);
  v11 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = IUnknown_QueryService(
          punk,
          &IID_IImmersiveApplicationManager,
          &GUID_9c74b145_d6c6_4c32_99e9_ea297bc0ffee,
          &ppvOut) >= 0;
  v13 = punk;
  if ( punk )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v13->lpVtbl->Release)(v13);
  }
  if ( v12 )
  {
    if ( v10 == -1 || !a3 )
    {
      v14 = a1[69];
      v15 = v14;
    }
    else
    {
      v14 = v10;
      v15 = a1[69];
    }
    v16 = a1[40];
    v17 = a1[62];
    v26[0] = v15;
    v26[1] = v14;
    v26[2] = v17;
    v26[3] = v16;
    v26[4] = a2;
    (*(void (__fastcall **)(void *, _DWORD *))(*(_QWORD *)ppvOut + 24LL))(ppvOut, v26);
  }
  if ( a3 && v10 != -1 && v10 != a1[69] )
    a1[69] = v10;
  v18 = ppvOut;
  if ( ppvOut )
  {
    ppvOut = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  if ( ApartmentId >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v6);
  return 0LL;
}
