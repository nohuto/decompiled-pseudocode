/*
 * XREFs of ?OnApplicationViewChanged@AgileApplicationViewChangeListenerConverter@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1800526F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
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
  int v15; // ecx
  int v16; // eax
  APTTYPEQUALIFIER pAptQualifier[2]; // [rsp+30h] [rbp-298h] BYREF
  APTTYPE pAptType; // [rsp+38h] [rbp-290h] BYREF
  __int64 v19; // [rsp+40h] [rbp-288h]
  __int64 v20; // [rsp+48h] [rbp-280h]
  HRESULT v21; // [rsp+50h] [rbp-278h]
  WCHAR Filename[264]; // [rsp+60h] [rbp-268h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2C8h] [rbp+0h]

  v19 = -2LL;
  if ( a1 )
    v8 = a1 + 48;
  else
    v8 = 0LL;
  v20 = v8;
  v9 = *(_DWORD *)(v8 + 44);
  if ( v9 == 2 )
    goto LABEL_4;
  v14 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
  if ( `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess )
    goto LABEL_28;
  if ( GetModuleFileNameW(0LL, Filename, 0x104u) )
  {
    v15 = (FindStringOrdinal(0x800000u, Filename, -1, L"\\EXPLORER.EXE", -1, 1) != -1) + 1;
    `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = v15;
  }
  else
  {
    v15 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
  }
  if ( v15 != 1 )
    goto LABEL_10;
  if ( v9 == 1 )
  {
    if ( (unsigned int)IsAppCompatModeEnabled(16LL) )
    {
      `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess = 2;
      goto LABEL_10;
    }
    v14 = `_ShouldCheckApartments'::`5'::s_tbEnforceForProcess;
LABEL_28:
    if ( v14 != 1 )
      goto LABEL_10;
  }
LABEL_4:
  if ( *(_DWORD *)(v8 + 40) == -3 )
    goto LABEL_10;
  CurrentThreadId = 0;
  ApartmentType = CoGetApartmentType(&pAptType, pAptQualifier);
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
  v21 = ApartmentType;
  if ( ApartmentType < 0 )
  {
    *(_QWORD *)pAptQualifier = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(pAptQualifier);
    v16 = (*(__int64 (__fastcall **)(_QWORD, GUID *, APTTYPEQUALIFIER *))(**(_QWORD **)(a1 + 96) + 24LL))(
            *(_QWORD *)(a1 + 96),
            &GUID_727f9e97_76ee_497b_a942_b6371328485c,
            pAptQualifier);
    v12 = v16;
    if ( v16 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)pAptQualifier + 24LL))(
              *(_QWORD *)pAptQualifier,
              a2,
              a3,
              a4);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x50A,
        (__int64)"internal\\sdk\\inc\\wil/com.h",
        (const char *)(unsigned int)v16);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8A,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\notificationdispatcher.cpp",
        (const char *)v12);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(pAptQualifier);
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
