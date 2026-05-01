/*
 * XREFs of ?PerformDelayedInitialization@ShellPositionerManager@@UEAAJXZ @ 0x180334C30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ShellPositionerManager::PerformDelayedInitialization(ShellPositionerManager *this)
{
  __int64 v2; // rbx
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  unsigned int i; // edi
  __int64 v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+20h]
  unsigned int v10; // [rsp+70h] [rbp+28h] BYREF
  __int64 v11; // [rsp+78h] [rbp+30h] BYREF
  __int64 v12; // [rsp+80h] [rbp+38h] BYREF
  __int64 v13; // [rsp+88h] [rbp+40h] BYREF

  v12 = 0LL;
  v2 = *((_QWORD *)this + 17);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 24LL))(v2, &v12);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 233LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_13;
  }
  v3 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v12 + 24LL))(v12, &v10);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 236LL;
    goto LABEL_5;
  }
  for ( i = 0; i < v10; ++i )
  {
    v11 = 0LL;
    v7 = v12;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v7 + 32LL))(
           v7,
           i,
           &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
           &v11) >= 0 )
    {
      v13 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
      if ( (*(int (__fastcall **)(char *, __int64, GUID *, __int64 *))(*((_QWORD *)this + 8) + 56LL))(
             (char *)this + 64,
             v11,
             &GUID_ee010e17_919a_4068_868b_675acf787303,
             &v13) >= 0 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 104LL))(v13, v11);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  }
  v4 = 0;
LABEL_13:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  return v4;
}
