/*
 * XREFs of ?_GetLastActiveClassicWindow@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicWindow@@@Z @ 0x18006A668
 * Callers:
 *     ?_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIClassicWindow@@@Z @ 0x18006A5C8 (-_GetLastActiveClassicWindowWithValidation@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@PE.c)
 *     ?GetLastActiveDesktopWindow@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUHWND__@@@Z @ 0x180148D00 (-GetLastActiveDesktopWindow@CClassicWindowManager@@UEAAJPEAUIImmersiveMonitor@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003072C (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsValidAndVisibleWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18006A888 (-IsValidAndVisibleWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CClassicWindowManager::_GetLastActiveClassicWindow(
        CClassicWindowManager *this,
        struct IUnknown *a2,
        struct IClassicWindow **a3)
{
  struct IUnknown *v3; // rdi
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // rsi
  __int64 v8; // rbx
  bool v9; // r14
  HWND v10; // rax
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64, __int64, _QWORD, struct IUnknown **); // rdi
  __int64 v13; // rax
  int v14; // eax
  HWND v15; // rax
  HWND v16; // rdx
  __int64 (__fastcall *v18)(__int64, struct IUnknown **); // rdi
  int v19; // eax
  int v20; // [rsp+30h] [rbp-28h] BYREF
  __int64 v21; // [rsp+38h] [rbp-20h] BYREF
  __int64 v22; // [rsp+40h] [rbp-18h]
  __int64 v23; // [rsp+48h] [rbp-10h]
  struct IUnknown *v24; // [rsp+A0h] [rbp+48h] BYREF
  struct IUnknown *v25; // [rsp+A8h] [rbp+50h]
  struct IClassicWindow **v26; // [rsp+B0h] [rbp+58h]
  unsigned int v27; // [rsp+B8h] [rbp+60h]

  v26 = a3;
  v25 = a2;
  v23 = -2LL;
  v3 = a2;
  *a3 = 0LL;
  v27 = -2147024809;
  v5 = *((_QWORD *)this + 25);
  v6 = v5;
  v7 = 0LL;
  if ( !v5 )
    return v27;
  while ( 1 )
  {
    v8 = *(_QWORD *)(*((_QWORD *)this + 24) + 8 * v7);
    v21 = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v9 = 1;
    if ( !v3 )
      goto LABEL_16;
    v24 = 0LL;
    v18 = *(__int64 (__fastcall **)(__int64, struct IUnknown **))(*(_QWORD *)v8 + 80LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
    v19 = v18(v8, &v24);
    v3 = 0LL;
    if ( v19 >= 0
      && !(unsigned int)SHIsSameObject(v25, v24)
      && (*(int (__fastcall **)(_QWORD, struct IUnknown *, int *))(**((_QWORD **)this + 33) + 80LL))(
           *((_QWORD *)this + 33),
           v24,
           &v20) >= 0 )
    {
      v9 = v20 == 0;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
    if ( v9 )
    {
LABEL_16:
      v10 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
      if ( IsIconic(v10) )
        v9 = (char)v3;
      if ( v9 )
      {
        v11 = *((_QWORD *)this + 35);
        v22 = v11;
        if ( v11 )
        {
          LODWORD(v24) = (_DWORD)v3;
          v12 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, struct IUnknown **))(*(_QWORD *)v11 + 48LL);
          v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
          v14 = v12(v22, v13, 0LL, &v24);
          v3 = 0LL;
          if ( v14 >= 0 && (_DWORD)v24 == 1 )
            v9 = 0;
        }
        if ( v9 )
          break;
      }
    }
LABEL_8:
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    if ( ++v7 >= v5 )
      goto LABEL_20;
    v3 = v25;
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
  v21 = (__int64)v3;
  *v26 = (struct IClassicWindow *)v8;
  v27 = (unsigned int)v3;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
LABEL_20:
  if ( v6 != v5 )
    (*(void (__fastcall **)(char *, unsigned __int64))(*((_QWORD *)this + 23) + 16LL))((char *)this + 184, v6);
  return v27;
}
