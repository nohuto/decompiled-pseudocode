/*
 * XREFs of ?SetLauncherExecutableFileAsync@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIStorageFile@Storage@5@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x180026560
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18000F6EC (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$ComPtr@.c)
 *     _guard_dispatch_icall_nop @ 0x1800443E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::SetLauncherExecutableFileAsync(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy *this,
        struct Windows::Storage::IStorageFile *a2,
        struct Windows::Foundation::IAsyncAction **a3)
{
  __int64 *v6; // r8
  __int64 v7; // rcx
  int v8; // ebx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v15; // [rsp+30h] [rbp+8h] BYREF

  v15 = 0LL;
  v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAsyncInfo>>(&v15);
  *v6 = 0LL;
  if ( *((_QWORD *)this + 11) )
  {
    v7 = *((_QWORD *)this + 11);
    if ( v7 )
      v8 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v7 + 24LL))(
             v7,
             &GUID_d84a8f8b_8749_4a25_90d3_f6c5a427886d,
             v6);
    else
      v8 = 0;
  }
  else
  {
    v8 = -2147467259;
  }
  if ( v8 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, struct Windows::Storage::IStorageFile *, struct Windows::Foundation::IAsyncAction **))(*(_QWORD *)v15 + 72LL))(
            v15,
            a2,
            a3);
    v8 = v11;
    if ( v11 >= 0 )
      goto LABEL_11;
    v9 = (unsigned int)v11;
    v10 = 165LL;
  }
  else
  {
    v9 = (unsigned int)v8;
    v10 = 163LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)v9);
LABEL_11:
  v12 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return (unsigned int)v8;
}
