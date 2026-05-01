/*
 * XREFs of ?OnApplicationViewChanged@AgileApplicationViewChangeListenerConverter@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180057990
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AgileApplicationViewChangeListenerConverter::OnApplicationViewChanged(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v8; // rdi
  int v9; // ebx
  DWORD CurrentThreadId; // esi
  HRESULT ApartmentType; // ebx
  unsigned int v12; // esi
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  int cchValue; // [rsp+20h] [rbp-2A8h]
  int cchValuea; // [rsp+20h] [rbp-2A8h]
  __int64 v19; // [rsp+30h] [rbp-298h] BYREF
  APTTYPE pAptType; // [rsp+38h] [rbp-290h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+3Ch] [rbp-28Ch] BYREF
  __int64 v22; // [rsp+40h] [rbp-288h]
  __int64 v23; // [rsp+48h] [rbp-280h]
  HRESULT v24; // [rsp+50h] [rbp-278h]
  WCHAR Filename[264]; // [rsp+60h] [rbp-268h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2C8h] [rbp+0h]

  v22 = -2LL;
  if ( a1 )
    v8 = a1 + 48;
  else
    v8 = 0LL;
  v23 = v8;
  v9 = *(_DWORD *)(v8 + 44);
  if ( v9 == 2 )
    goto LABEL_4;
  v14 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
  if ( !`_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
  {
    if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
    {
      if ( FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1 )
        goto LABEL_34;
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 1;
    }
    else if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess != 1 )
    {
      goto LABEL_10;
    }
    if ( v9 != 1 )
      goto LABEL_4;
    if ( !(unsigned int)IsAppCompatModeEnabled(16LL) )
    {
      v14 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
      goto LABEL_27;
    }
LABEL_34:
    `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 2;
    goto LABEL_10;
  }
LABEL_27:
  if ( v14 != 1 )
    goto LABEL_10;
LABEL_4:
  if ( *(_DWORD *)(v8 + 40) == -3 )
    goto LABEL_10;
  CurrentThreadId = 0;
  ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
  if ( ApartmentType < 0 )
    goto LABEL_8;
  if ( pAptType == APTTYPE_STA )
    goto LABEL_7;
  if ( pAptType != APTTYPE_MTA )
  {
    if ( pAptType == APTTYPE_NA )
    {
      CurrentThreadId = -1;
    }
    else if ( pAptType == APTTYPE_MAINSTA )
    {
LABEL_7:
      CurrentThreadId = GetCurrentThreadId();
    }
  }
LABEL_8:
  if ( ApartmentType < 0 )
    goto LABEL_12;
  if ( CurrentThreadId != *(_DWORD *)(v8 + 40) )
  {
    ApartmentType = -2147417842;
    goto LABEL_12;
  }
LABEL_10:
  ApartmentType = -2147417842;
  if ( TryEnterCriticalSection((LPCRITICAL_SECTION)v8) )
    ApartmentType = 0;
LABEL_12:
  v24 = ApartmentType;
  if ( ApartmentType < 0 )
  {
    v19 = 0LL;
    v15 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64 *))(**(_QWORD **)(a1 + 96) + 24LL))(
            *(_QWORD *)(a1 + 96),
            &GUID_727f9e97_76ee_497b_a942_b6371328485c,
            &v19);
    v12 = v15;
    if ( v15 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v19 + 24LL))(v19, a2, a3, a4);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4F2,
        (unsigned int)"internal\\sdk\\inc\\wil\\opensource/wil/com.h",
        (const char *)(unsigned int)v15,
        cchValue);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8A,
        (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\notificationdispatcher.cpp",
        (const char *)v12,
        cchValuea);
    }
    v16 = v19;
    if ( v19 )
    {
      v19 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(a1 + 104) + 24LL))(
            *(_QWORD *)(a1 + 104),
            a2,
            a3,
            a4);
  }
  if ( ApartmentType >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v8);
  return v12;
}
