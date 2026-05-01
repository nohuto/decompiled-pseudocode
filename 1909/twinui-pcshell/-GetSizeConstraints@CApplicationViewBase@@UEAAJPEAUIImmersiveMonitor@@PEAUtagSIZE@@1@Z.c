/*
 * XREFs of ?GetSizeConstraints@CApplicationViewBase@@UEAAJPEAUIImmersiveMonitor@@PEAUtagSIZE@@1@Z @ 0x180082180
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006EC20 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewBase::GetSizeConstraints(
        CApplicationViewBase *this,
        struct IImmersiveMonitor *a2,
        struct tagSIZE *a3,
        struct tagSIZE *a4)
{
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v13; // [rsp+68h] [rbp+10h] BYREF
  char v14; // [rsp+70h] [rbp+18h] BYREF
  struct IImmersiveMonitor *v15; // [rsp+78h] [rbp+20h] BYREF

  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  v15 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
  v7 = (__int64)v15;
  if ( !v15 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
    v8 = (*(__int64 (__fastcall **)(CApplicationViewBase *, struct IImmersiveMonitor **))(*(_QWORD *)this + 80LL))(
           this,
           &v15);
    v9 = v8;
    if ( v8 < 0 )
    {
      v11 = 165LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"pcshell\\twinui\\appviewmanager\\lib\\appviewbase.cpp",
        (const char *)(unsigned int)v8);
      goto LABEL_8;
    }
    v7 = (__int64)v15;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *, char *))(*(_QWORD *)v7 + 112LL))(v7, &v13, &v14);
  v9 = v8;
  if ( v8 < 0 )
  {
    v11 = 170LL;
    goto LABEL_14;
  }
  v8 = (*(__int64 (__fastcall **)(CApplicationViewBase *, _QWORD, struct tagSIZE *, struct tagSIZE *))(*(_QWORD *)this + 288LL))(
         this,
         v13,
         a3,
         a4);
  v9 = v8;
  if ( v8 < 0 )
  {
    v11 = 171LL;
    goto LABEL_14;
  }
LABEL_8:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v15);
  return v9;
}
