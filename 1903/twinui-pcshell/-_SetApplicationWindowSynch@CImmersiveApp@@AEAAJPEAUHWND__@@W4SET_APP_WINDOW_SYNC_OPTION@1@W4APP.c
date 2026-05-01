/*
 * XREFs of ?_SetApplicationWindowSynch@CImmersiveApp@@AEAAJPEAUHWND__@@W4SET_APP_WINDOW_SYNC_OPTION@1@W4APP_TRANSITION_TYPE@@@Z @ 0x18014B5CC
 * Callers:
 *     ?SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSITION_TYPE@@@Z @ 0x180148DB0 (-SetApplicationWindow@CImmersiveApp@@UEAAJPEAUHWND__@@W4SET_APP_REQUEST_ORIGINATOR@@W4APP_TRANSI.c)
 *     ?_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ @ 0x18014B8E8 (-_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x180016984 (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180063E40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z @ 0x18007BE94 (-IAMPrivate_QueryObject@@YAJPEAUIUnknown@@AEBU_GUID@@1PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x180149000 (-SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 *     WPP_SF_Sdl @ 0x18014C2AC (WPP_SF_Sdl.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CImmersiveApp::_SetApplicationWindowSynch(__int64 a1, HWND a2, int a3, int a4)
{
  int v7; // ebx
  bool v8; // r15
  bool v9; // bl
  __m128i si128; // xmm6
  HWND ApplicationWindow; // rax
  unsigned int v12; // ebx
  void *v14; // [rsp+38h] [rbp-59h] BYREF
  struct IUnknown *v15; // [rsp+40h] [rbp-51h] BYREF
  int v16; // [rsp+48h] [rbp-49h]
  __m128i v17; // [rsp+58h] [rbp-39h] BYREF
  int v18; // [rsp+68h] [rbp-29h]
  int v19; // [rsp+6Ch] [rbp-25h]
  int v20; // [rsp+70h] [rbp-21h]
  HWND v21; // [rsp+78h] [rbp-19h]
  HWND v22; // [rsp+80h] [rbp-11h]
  _BYTE *v23; // [rsp+88h] [rbp-9h]
  bool v24; // [rsp+90h] [rbp-1h]
  __int64 v25; // [rsp+98h] [rbp+7h]
  _BYTE v26[16]; // [rsp+A0h] [rbp+Fh] BYREF

  v25 = -2LL;
  v16 = 0;
  v7 = *(_DWORD *)(a1 + 584) & 4;
  v8 = v7 != 0;
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_Sdl(*((_QWORD *)WPP_GLOBAL_Control + 2), (_DWORD)a2, a3, *(_QWORD *)(a1 + 592), *(_DWORD *)(a1 + 600), 1);
  v14 = 0LL;
  if ( v7 )
  {
    v15 = 0LL;
    v16 = 2;
    (*(void (__fastcall **)(__int64, GUID *, struct IUnknown **))(*(_QWORD *)(a1 + 48) + 32LL))(
      a1 + 48,
      &GUID_00000000_0000_0000_c000_000000000046,
      &v15);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    v9 = (int)IAMPrivate_QueryObject(
                v15,
                &GUID_e4c1a137_9674_4fb6_8dd2_ce9400c0ffee,
                &GUID_e4c1a137_9674_4fb6_8dd2_ce9400c0ffee,
                &v14) >= 0;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
    if ( v9 )
    {
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      (*(void (__fastcall **)(__int64, struct IUnknown **, _BYTE *))(*(_QWORD *)(a1 + 112) + 328LL))(
        a1 + 112,
        &v15,
        v26);
      ApplicationWindow = CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 296));
      v17 = si128;
      v18 = 0;
      v19 = 6;
      v20 = a4;
      v21 = ApplicationWindow;
      v22 = a2;
      v23 = v26;
      v24 = v8;
      if ( (*(int (__fastcall **)(void *, __m128i *))(*(_QWORD *)v14 + 40LL))(v14, &v17) < 0 )
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
    }
  }
  v12 = CImmersiveApp::CImmersiveWindowCollection::SetApplicationWindow(
          (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 296),
          a2);
  if ( v14 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v14 + 48LL))(v14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v14);
  return v12;
}
