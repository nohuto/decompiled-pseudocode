/*
 * XREFs of ?_GetLastActiveClassicWindow@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicWindow@@@Z @ 0x180066320
 * Callers:
 *     ?_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicWindow@@@Z @ 0x180066278 (-_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PE.c)
 *     ?GetLastActiveDesktopWindow@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUHWND__@@@Z @ 0x1801038F0 (-GetLastActiveDesktopWindow@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003ACF8 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsValidAndVisibleWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x180066548 (-IsValidAndVisibleWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CClassicWindowManager::_GetLastActiveClassicWindow(
        CClassicWindowManager *this,
        struct IImmersiveMonitor *a2,
        struct IClassicWindow **a3)
{
  struct IUnknown *v3; // r14
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rsi
  __int64 v8; // rbx
  bool v9; // di
  HWND v10; // rax
  bool v11; // r14
  _QWORD *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  HWND v15; // rax
  HWND v16; // rdx
  int v18; // [rsp+30h] [rbp-28h] BYREF
  __int64 v19; // [rsp+38h] [rbp-20h] BYREF
  _QWORD *v20; // [rsp+40h] [rbp-18h]
  __int64 v21; // [rsp+48h] [rbp-10h]
  struct IUnknown *v22; // [rsp+A0h] [rbp+48h] BYREF
  struct IImmersiveMonitor *v23; // [rsp+A8h] [rbp+50h]
  struct IClassicWindow **v24; // [rsp+B0h] [rbp+58h]
  unsigned int v25; // [rsp+B8h] [rbp+60h]

  v24 = a3;
  v23 = a2;
  v21 = -2LL;
  v3 = (struct IUnknown *)a2;
  *a3 = 0LL;
  v25 = -2147024809;
  v5 = *((_QWORD *)this + 25);
  v6 = v5;
  v7 = 0LL;
  if ( !v5 )
    return v25;
  while ( 1 )
  {
    v8 = *(_QWORD *)(*((_QWORD *)this + 24) + 8 * v7);
    v19 = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v9 = 1;
    if ( v3 )
    {
      v22 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
      if ( (*(int (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v8 + 80LL))(v8, &v22) >= 0
        && !(unsigned int)SHIsSameObject(v3, v22)
        && (*(int (__fastcall **)(_QWORD, struct IUnknown *, int *))(**((_QWORD **)this + 33) + 80LL))(
             *((_QWORD *)this + 33),
             v22,
             &v18) >= 0 )
      {
        v9 = v18 == 0;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
      if ( !v9 )
        goto LABEL_9;
    }
    v10 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
    v11 = v9;
    if ( IsIconic(v10) )
      v11 = 0;
    if ( v11 )
    {
      v12 = (_QWORD *)*((_QWORD *)this + 35);
      v20 = v12;
      if ( v12 )
      {
        LODWORD(v22) = 0;
        v13 = *v12;
        v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
        if ( (*(int (__fastcall **)(_QWORD *, __int64, _QWORD, struct IUnknown **))(v13 + 48))(v20, v14, 0LL, &v22) >= 0
          && (_DWORD)v22 == 1 )
        {
          v11 = 0;
        }
      }
      if ( v11 )
        break;
    }
LABEL_8:
    v3 = (struct IUnknown *)v23;
LABEL_9:
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    if ( ++v7 >= v5 )
      goto LABEL_21;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 152LL))(v8) )
  {
    v15 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
    if ( !CApplicationManagerUtility::IsValidAndVisibleWindow(v15, v16) )
    {
      v6 = v7;
      goto LABEL_8;
    }
  }
  v19 = 0LL;
  *v24 = (struct IClassicWindow *)v8;
  v25 = 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
LABEL_21:
  if ( v6 != v5 )
    (*(void (__fastcall **)(char *, unsigned __int64))(*((_QWORD *)this + 23) + 16LL))((char *)this + 184, v6);
  return v25;
}
