/*
 * XREFs of ?PerformModeBasedCallouts@CApplicationManager@@UEAAXQEBUMODE_TRANSITION_INFORMATION@@@Z @ 0x18005B8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?SHCoGetApartmentId@@YAJPEAK@Z @ 0x1800F28A0 (-SHCoGetApartmentId@@YAJPEAK@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CApplicationManager::PerformModeBasedCallouts(
        CApplicationManager *this,
        const struct MODE_TRANSITION_INFORMATION *a2)
{
  unsigned __int64 v4; // r14
  int v5; // ebx
  bool v6; // al
  int v7; // ecx
  signed int ApartmentId; // ebx
  int v9; // edi
  bool v10; // r15
  __int64 v11; // r12
  _BYTE *v12; // r13
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  _BYTE *v20; // rcx
  int cchValue; // [rsp+28h] [rbp-E0h]
  unsigned int v22[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v23; // [rsp+40h] [rbp-C8h] BYREF
  const struct MODE_TRANSITION_INFORMATION *v24; // [rsp+48h] [rbp-C0h]
  _QWORD v25[3]; // [rsp+50h] [rbp-B8h] BYREF
  int v26; // [rsp+68h] [rbp-A0h]
  int v27; // [rsp+6Ch] [rbp-9Ch]
  __int64 v28; // [rsp+70h] [rbp-98h]
  __int64 v29; // [rsp+78h] [rbp-90h]
  __int64 v30; // [rsp+80h] [rbp-88h]
  _BYTE *v31; // [rsp+88h] [rbp-80h]
  bool v32; // [rsp+90h] [rbp-78h]
  __int64 v33; // [rsp+98h] [rbp-70h]
  unsigned __int64 v34; // [rsp+A0h] [rbp-68h]
  signed int v35; // [rsp+A8h] [rbp-60h]
  _BYTE v36[24]; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v37[96]; // [rsp+C8h] [rbp-40h] BYREF
  WCHAR Filename[264]; // [rsp+128h] [rbp+20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+370h] [rbp+268h]

  v33 = -2LL;
  v24 = a2;
  v4 = ((unsigned __int64)this + 152) & -(__int64)(this != (CApplicationManager *)240);
  v34 = v4;
  v5 = *(_DWORD *)(v4 + 0x2C);
  v6 = v5 == 2;
  if ( v5 == 2 )
  {
LABEL_5:
    if ( !v6 )
      goto LABEL_6;
    goto LABEL_33;
  }
  v7 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
  if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
  {
LABEL_3:
    if ( v7 != 1 )
    {
LABEL_4:
      v6 = 0;
      goto LABEL_5;
    }
    goto LABEL_33;
  }
  if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
  {
    v16 = (FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1) + 1;
    `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = v16;
  }
  else
  {
    v16 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
  }
  if ( v16 != 1 )
    goto LABEL_4;
  if ( v5 == 1 )
  {
    v17 = IsAppCompatModeEnabled(16LL);
    v7 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
    if ( v17 )
      v7 = 2;
    `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = v7;
    goto LABEL_3;
  }
LABEL_33:
  if ( *(_DWORD *)(v4 + 40) != -3 )
  {
    ApartmentId = SHCoGetApartmentId(v22);
    if ( ApartmentId >= 0 && v22[0] != *(_DWORD *)(v4 + 40) )
      ApartmentId = -2147417842;
    if ( ApartmentId < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC8,
        (unsigned int)"internal\\onecoreuapshell\\private\\inc\\Cowthreadusedetection.h",
        (const char *)(unsigned int)ApartmentId,
        cchValue);
      goto LABEL_7;
    }
  }
LABEL_6:
  ApartmentId = !TryEnterCriticalSection((LPCRITICAL_SECTION)v4) ? 0x8001010E : 0;
LABEL_7:
  v35 = ApartmentId;
  v9 = *((_DWORD *)a2 + 4);
  if ( (v9 != 1 && v9 != 8 || v9 == 1 || *((_QWORD *)this + 34)) && *((_QWORD *)this + 39) )
  {
    v10 = 0;
    v11 = 0LL;
    v12 = 0LL;
    memset_0(v37, 0, 0x58uLL);
    if ( v9 == 1 || v9 == 8 )
    {
      if ( v9 == 1 )
      {
        v10 = 1;
        v23 = 0LL;
        if ( (*(int (__fastcall **)(_QWORD, _QWORD, SID *, GUID *, __int64 *))(**((_QWORD **)this + 40) + 88LL))(
               *((_QWORD *)this + 40),
               *((_QWORD *)this + 31),
               &SID_PerMonitorDesktopVisibilityService,
               &GUID_2af0421a_a7bc_4b7e_be85_7e17c0ffee84,
               &v23) >= 0
          && (*(int (__fastcall **)(__int64, _QWORD, unsigned int *))(*(_QWORD *)v23 + 24LL))(v23, 0LL, v22) >= 0 )
        {
          v10 = v22[0] != 0;
        }
        v13 = v23;
        if ( v23 )
        {
          v23 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
      else
      {
        v18 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 280LL))(*((_QWORD *)this + 34)) & 4;
        v10 = v18 != 0;
        if ( v18 )
          v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 384LL))(*((_QWORD *)this + 34));
        v19 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _BYTE *))(**((_QWORD **)this + 34) + 328LL))(
                *((_QWORD *)this + 34),
                &v23,
                v36);
        v20 = v36;
        if ( v19 < 0 )
          v20 = 0LL;
        v12 = v20;
        (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 34) + 344LL))(*((_QWORD *)this + 34), v37);
      }
    }
    v14 = *((_QWORD *)this + 31);
    v15 = *((_DWORD *)this + 66);
    *(_OWORD *)&v25[1] = *(_OWORD *)v24;
    v26 = *((_DWORD *)v24 + 4);
    v27 = v15;
    LODWORD(v28) = 0;
    v29 = v11;
    v30 = v14;
    v31 = v12;
    v32 = v10;
    *((_BYTE *)this + 240) = (*(int (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 39) + 40LL))(
                               *((_QWORD *)this + 39),
                               &v25[1]) >= 0;
  }
  if ( ApartmentId >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v4);
}
