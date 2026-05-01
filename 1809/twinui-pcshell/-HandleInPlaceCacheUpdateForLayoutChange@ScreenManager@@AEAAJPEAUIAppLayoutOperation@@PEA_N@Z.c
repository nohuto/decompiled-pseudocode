/*
 * XREFs of ?HandleInPlaceCacheUpdateForLayoutChange@ScreenManager@@AEAAJPEAUIAppLayoutOperation@@PEA_N@Z @ 0x180353C6C
 * Callers:
 *     ?AppLayoutChanged@ScreenManager@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutOperation@@@Z @ 0x180353600 (-AppLayoutChanged@ScreenManager@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutOperation@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ScreenManager::HandleInPlaceCacheUpdateForLayoutChange(
        ScreenManager *this,
        struct IAppLayoutOperation *a2,
        bool *a3)
{
  bool v3; // zf
  __int64 v6; // r14
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 v14; // [rsp+40h] [rbp+20h] BYREF
  __int64 v15; // [rsp+50h] [rbp+30h] BYREF

  v3 = *((_QWORD *)this + 38) == 0LL;
  *a3 = 0;
  if ( !v3 )
  {
    v6 = *((_QWORD *)this + 37);
    v15 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    v7 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(*(_QWORD *)a2 + 40LL))(a2, &v15);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x122,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\screenmanager.cpp",
        (const char *)(unsigned int)v7);
LABEL_11:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
      return v8;
    }
    v14 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    v9 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, &v14);
    v8 = v9;
    if ( v9 < 0 )
    {
      v10 = 292LL;
LABEL_10:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\screenmanager.cpp",
        (const char *)(unsigned int)v9);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
      goto LABEL_11;
    }
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v6 + 8) + 200LL))(
           *(_QWORD *)(v6 + 8),
           v15,
           3LL)
      && (*(unsigned int (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v14 + 200LL))(v14, v15, 4LL) )
    {
      v11 = v14;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(v6 + 8));
      v9 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v11 + 192LL))(
             v11,
             &GUID_7baad876_2fc5_4561_93e1_17e868a174ed,
             v6 + 8);
      v8 = v9;
      if ( v9 < 0 )
      {
        v10 = 300LL;
        goto LABEL_10;
      }
      *a3 = 1;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  }
  return 0LL;
}
