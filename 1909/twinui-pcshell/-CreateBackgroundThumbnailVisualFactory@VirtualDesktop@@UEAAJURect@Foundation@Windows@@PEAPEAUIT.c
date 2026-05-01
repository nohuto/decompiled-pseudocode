/*
 * XREFs of ?CreateBackgroundThumbnailVisualFactory@VirtualDesktop@@UEAAJURect@Foundation@Windows@@PEAPEAUIThumbnailFactory@Multitasking@ComposableShell@Internal@4@@Z @ 0x18035A620
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18007EED8 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIInspectable@@@?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180359D70 (--$As@UIInspectable@@@-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UII.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktop::CreateBackgroundThumbnailVisualFactory(__int64 a1, __int128 *a2, _QWORD *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 *v8; // rax
  const char *v9; // r9
  __int64 (*v10)(void); // rax
  int v11; // eax
  __int64 result; // rax
  __int64 v13[2]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v14; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF
  __int64 v18; // [rsp+78h] [rbp+20h] BYREF

  v13[1] = -2LL;
  *a3 = 0LL;
  v13[0] = 0LL;
  v5 = Microsoft::WRL::ComPtr<IVirtualDesktop>::As<IInspectable>((_QWORD *)(a1 + 112), v13);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8E,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_10;
  }
  v18 = 0LL;
  v7 = Microsoft::WRL::ComPtr<IVirtualDesktop>::As<IInspectable>((_QWORD *)(a1 + 104), &v18);
  v6 = v7;
  if ( v7 >= 0 )
  {
    v17 = 0LL;
    try
    {
      v8 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 128) + 32LL))(*(_QWORD *)(a1 + 128));
      Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=(&v17, v8);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      v14 = *a2;
      v10 = *(__int64 (**)(void))(*(_QWORD *)v17 + 56LL);
    }
    catch ( ... )
    {
      LODWORD(v16) = wil::details::in1diag3::Return_CaughtException(
                       retaddr,
                       (void *)0x98,
                       (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
                       v9);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
      v6 = v16;
LABEL_10:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
      result = v6;
    }
    v11 = v10();
    v6 = v11;
    if ( v11 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9A,
        (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
        (const char *)(unsigned int)v11);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x91,
      (__int64)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktop.cpp",
      (const char *)(unsigned int)v7);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  goto LABEL_10;
}
