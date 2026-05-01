/*
 * XREFs of ?GetPeopleBarScreenEdge@CShoulderTapExperienceManager@@AEAAJPEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x18019425C
 * Callers:
 *     ?PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ @ 0x1801947B4 (-PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ.c)
 *     ?Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z @ 0x180194F14 (-Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CShoulderTapExperienceManager::GetPeopleBarScreenEdge(
        CShoulderTapExperienceManager *this,
        enum EDGEUI_TRAYSTUCKPLACE *a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, PCWSTR, RECT *); // rbx
  PCWSTR StringRawBuffer; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, SID *, GUID *, __int64 *); // rbx
  int v11; // eax
  HMONITOR v12; // rsi
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, HMONITOR, SID *, GUID *, int *); // rdi
  int v15; // eax
  __int64 v16; // rdx
  int v18[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v19; // [rsp+38h] [rbp-38h] BYREF
  UINT32 length; // [rsp+40h] [rbp-30h] BYREF
  __int64 v21; // [rsp+48h] [rbp-28h]
  RECT rc; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v21 = -2LL;
  *(_QWORD *)&rc.left = 0LL;
  *(_QWORD *)&rc.right = 0LL;
  length = 0;
  v4 = *((_QWORD *)this + 30);
  v5 = *(__int64 (__fastcall **)(__int64, PCWSTR, RECT *))(*(_QWORD *)v4 + 112LL);
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 31), &length);
  v7 = v5(v4, StringRawBuffer, &rc);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v19 = 0LL;
    v9 = *((_QWORD *)this + 29);
    v10 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v9 + 24LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
    v11 = v10(v9, &SID_IImmersiveMonitorService, &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2, &v19);
    v8 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA7,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
        (const char *)(unsigned int)v11);
LABEL_12:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v19);
      return v8;
    }
    v12 = MonitorFromRect(&rc, 1u);
    *(_QWORD *)v18 = 0LL;
    v13 = v19;
    v14 = *(__int64 (__fastcall **)(__int64, HMONITOR, SID *, GUID *, int *))(*(_QWORD *)v19 + 72LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v18);
    v15 = v14(v13, v12, &SID_EdgeUi, &GUID_6e6c3c52_5a5e_4b4b_a0f8_7fe12621a93e, v18);
    v8 = v15;
    if ( v15 >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD, enum EDGEUI_TRAYSTUCKPLACE *))(**(_QWORD **)v18 + 80LL))(
              *(_QWORD *)v18,
              a2);
      v8 = v15;
      if ( v15 >= 0 )
      {
        v8 = 0;
        goto LABEL_11;
      }
      v16 = 174LL;
    }
    else
    {
      v16 = 172LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
      (const char *)(unsigned int)v15);
LABEL_11:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v18);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA3,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
