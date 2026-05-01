/*
 * XREFs of ?SetWindowingEnvironmentConfigInternal@CImmersiveApp@@UEAAJPEAUIWindowingEnvironmentConfig@@@Z @ 0x1801206F0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x18001C76C (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?SetDisplayRegionId@CImmersiveWindowCollection@CImmersiveApp@@QEAAJI@Z @ 0x18011FE38 (-SetDisplayRegionId@CImmersiveWindowCollection@CImmersiveApp@@QEAAJI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::SetWindowingEnvironmentConfigInternal(
        CImmersiveApp *this,
        struct IWindowingEnvironmentConfig *a2)
{
  unsigned int v3; // ebx
  _QWORD *v4; // rsi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rdx
  CImmersiveApp::CImmersiveWindowCollection *v8; // rcx
  __int64 v9; // r8
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v12; // [rsp+48h] [rbp+10h] BYREF
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF

  if ( a2 )
  {
    v4 = (_QWORD *)((char *)this + 648);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 81, (__int64)a2);
    v13 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    v5 = (*(__int64 (__fastcall **)(CImmersiveApp *, __int64 *))(*(_QWORD *)this + 464LL))(this, &v13);
    v3 = v5;
    if ( v5 < 0 )
    {
      v6 = 2609LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
        (const char *)(unsigned int)v5);
LABEL_13:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
      return v3;
    }
    if ( v13 )
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(*(_QWORD *)*v4 + 80LL))(*v4, v13, &v12);
      v3 = v5;
      if ( v5 < 0 )
      {
        v6 = 2614LL;
        goto LABEL_11;
      }
      if ( *((_DWORD *)this + 164) != v12 )
      {
        *((_DWORD *)this + 164) = v12;
        v5 = CImmersiveApp::CImmersiveWindowCollection::SetDisplayRegionId(v8, v7, v9);
        v3 = v5;
        if ( v5 < 0 )
        {
          v6 = 2618LL;
          goto LABEL_11;
        }
      }
    }
    v3 = 0;
    goto LABEL_13;
  }
  v3 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA29,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
    (const char *)0x80070057LL);
  return v3;
}
