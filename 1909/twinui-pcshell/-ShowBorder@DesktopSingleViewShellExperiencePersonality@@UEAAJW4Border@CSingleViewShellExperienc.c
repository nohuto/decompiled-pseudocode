/*
 * XREFs of ?ShowBorder@DesktopSingleViewShellExperiencePersonality@@UEAAJW4Border@CSingleViewShellExperience@@W4ACCENT_STATE@@KPEBUtagRECT@@@Z @ 0x180035A30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DesktopSingleViewShellExperiencePersonality::ShowBorder(
        __int64 a1,
        char a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  int (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v9; // rbx
  int v10; // eax
  __int64 v12; // rcx
  __int64 v13; // [rsp+20h] [rbp-50h] BYREF
  int v14; // [rsp+28h] [rbp-48h] BYREF
  int v15; // [rsp+30h] [rbp-40h] BYREF
  _QWORD *v16; // [rsp+38h] [rbp-38h]
  int v17; // [rsp+40h] [rbp-30h]
  __int64 v18; // [rsp+48h] [rbp-28h]
  _QWORD v19[2]; // [rsp+50h] [rbp-20h] BYREF

  v18 = -2LL;
  v8 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(_QWORD *)(a1 + 8) + 24LL);
  v13 = 0LL;
  if ( (**v8)(v8, &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e, &v13) < 0
    || (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v13 + 48LL))(v13, &v14) < 0 )
  {
    v12 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v9 = 0LL;
  }
  else
  {
    v9 = v14;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  }
  v19[0] = a3;
  v10 = 1024;
  v19[1] = a4;
  if ( a5 )
    v10 = 3584;
  HIDWORD(v19[0]) = v10;
  if ( (a2 & 1) != 0 )
  {
    v10 |= 0x20u;
    HIDWORD(v19[0]) = v10;
  }
  if ( (a2 & 2) != 0 )
  {
    v10 |= 0x40u;
    HIDWORD(v19[0]) = v10;
  }
  if ( (a2 & 4) != 0 )
  {
    v10 |= 0x80u;
    HIDWORD(v19[0]) = v10;
  }
  if ( (a2 & 8) != 0 )
    HIDWORD(v19[0]) = v10 | 0x100;
  v15 = 19;
  v16 = v19;
  v17 = 16;
  SetWindowCompositionAttribute(v9, &v15);
  if ( a5 )
    DwmpUpdateAccentBlurRect(v9, a5);
  return 0LL;
}
