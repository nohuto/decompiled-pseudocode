/*
 * XREFs of ?PerformModeBasedCallouts@CApplicationManager@@UEAAXQEBUMODE_TRANSITION_INFORMATION@@@Z @ 0x180060D50
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     memset_0 @ 0x18008A73A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?SHCoGetApartmentId@@YAJPEAK@Z @ 0x180136B3C (-SHCoGetApartmentId@@YAJPEAK@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplicationManager::PerformModeBasedCallouts(
        CApplicationManager *this,
        const struct MODE_TRANSITION_INFORMATION *a2)
{
  unsigned __int64 v4; // r14
  int v5; // ebx
  int v6; // ecx
  signed int ApartmentId; // ebx
  int v8; // edi
  bool v9; // r15
  __int64 v10; // r12
  _BYTE *v11; // r13
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  _BYTE *v18; // rcx
  int cchValue; // [rsp+28h] [rbp-E0h]
  unsigned int v20[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C8h] BYREF
  const struct MODE_TRANSITION_INFORMATION *v22; // [rsp+48h] [rbp-C0h]
  _QWORD v23[3]; // [rsp+50h] [rbp-B8h] BYREF
  int v24; // [rsp+68h] [rbp-A0h]
  int v25; // [rsp+6Ch] [rbp-9Ch]
  __int64 v26; // [rsp+70h] [rbp-98h]
  __int64 v27; // [rsp+78h] [rbp-90h]
  __int64 v28; // [rsp+80h] [rbp-88h]
  _BYTE *v29; // [rsp+88h] [rbp-80h]
  bool v30; // [rsp+90h] [rbp-78h]
  __int64 v31; // [rsp+98h] [rbp-70h]
  unsigned __int64 v32; // [rsp+A0h] [rbp-68h]
  signed int v33; // [rsp+A8h] [rbp-60h]
  _BYTE v34[24]; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v35[96]; // [rsp+C8h] [rbp-40h] BYREF
  WCHAR Filename[264]; // [rsp+128h] [rbp+20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+370h] [rbp+268h]

  v31 = -2LL;
  v22 = a2;
  v4 = ((unsigned __int64)this + 152) & -(__int64)(this != (CApplicationManager *)240);
  v32 = v4;
  v5 = *(_DWORD *)(v4 + 0x2C);
  if ( v5 != 2 )
  {
    v6 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
      goto LABEL_3;
    if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
    {
      if ( FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1 )
      {
        `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 2;
        goto LABEL_4;
      }
      v15 = 1;
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 1;
    }
    else
    {
      v15 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    }
    if ( v15 != 1 )
      goto LABEL_4;
    if ( v5 == 1 )
    {
      v16 = IsAppCompatModeEnabled(16LL);
      v6 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
      if ( v16 )
        v6 = 2;
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = v6;
LABEL_3:
      if ( v6 != 1 )
        goto LABEL_4;
    }
  }
  if ( *(_DWORD *)(v4 + 40) != -3 )
  {
    ApartmentId = SHCoGetApartmentId(v20);
    if ( ApartmentId >= 0 && v20[0] != *(_DWORD *)(v4 + 40) )
      ApartmentId = -2147417842;
    if ( ApartmentId < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC8,
        (unsigned int)"internal\\onecoreuapshell\\private\\inc\\Cowthreadusedetection.h",
        (const char *)(unsigned int)ApartmentId,
        cchValue);
      goto LABEL_5;
    }
  }
LABEL_4:
  ApartmentId = !TryEnterCriticalSection((LPCRITICAL_SECTION)v4) ? 0x8001010E : 0;
LABEL_5:
  v33 = ApartmentId;
  v8 = *((_DWORD *)a2 + 4);
  if ( (v8 != 1 && v8 != 8 || v8 == 1 || *((_QWORD *)this + 34)) && *((_QWORD *)this + 39) )
  {
    v9 = 0;
    v10 = 0LL;
    v11 = 0LL;
    memset_0(v35, 0, 0x58uLL);
    if ( v8 == 1 || v8 == 8 )
    {
      if ( v8 == 1 )
      {
        v9 = 1;
        v21 = 0LL;
        if ( (*(int (__fastcall **)(_QWORD, _QWORD, SID *, GUID *, __int64 *))(**((_QWORD **)this + 40) + 88LL))(
               *((_QWORD *)this + 40),
               *((_QWORD *)this + 31),
               &SID_PerMonitorDesktopVisibilityService,
               &GUID_2af0421a_a7bc_4b7e_be85_7e17c0ffee84,
               &v21) >= 0
          && (*(int (__fastcall **)(__int64, _QWORD, unsigned int *))(*(_QWORD *)v21 + 24LL))(v21, 0LL, v20) >= 0 )
        {
          v9 = v20[0] != 0;
        }
        v12 = v21;
        if ( v21 )
        {
          v21 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
      else
      {
        if ( ((*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 280LL))(*((_QWORD *)this + 34)) & 4) != 0 )
        {
          v9 = 1;
          v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 384LL))(*((_QWORD *)this + 34));
        }
        else
        {
          v9 = 0;
        }
        v17 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _BYTE *))(**((_QWORD **)this + 34) + 328LL))(
                *((_QWORD *)this + 34),
                &v21,
                v34);
        v18 = v34;
        if ( v17 < 0 )
          v18 = 0LL;
        v11 = v18;
        (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 34) + 344LL))(*((_QWORD *)this + 34), v35);
      }
    }
    v13 = *((_QWORD *)this + 31);
    v14 = *((_DWORD *)this + 66);
    *(_OWORD *)&v23[1] = *(_OWORD *)v22;
    v24 = *((_DWORD *)v22 + 4);
    v25 = v14;
    LODWORD(v26) = 0;
    v27 = v10;
    v28 = v13;
    v29 = v11;
    v30 = v9;
    *((_BYTE *)this + 240) = (*(int (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 39) + 40LL))(
                               *((_QWORD *)this + 39),
                               &v23[1]) >= 0;
  }
  if ( ApartmentId >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v4);
}
