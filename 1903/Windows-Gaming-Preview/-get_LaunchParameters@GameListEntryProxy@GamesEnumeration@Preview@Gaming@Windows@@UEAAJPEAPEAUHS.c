/*
 * XREFs of ?get_LaunchParameters@GameListEntryProxy@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180026360
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18000F67C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIAsyncInfo@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$ComPtr@.c)
 *     _guard_dispatch_icall_nop @ 0x180044260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy::get_LaunchParameters(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryProxy *this,
        HSTRING *a2)
{
  __int64 *v4; // r8
  __int64 v5; // rcx
  int v6; // ebx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = 0LL;
  v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IAsyncInfo>>(&v13);
  *v4 = 0LL;
  if ( *((_QWORD *)this + 11) )
  {
    v5 = *((_QWORD *)this + 11);
    if ( v5 )
      v6 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v5 + 24LL))(
             v5,
             &GUID_d84a8f8b_8749_4a25_90d3_f6c5a427886d,
             v4);
    else
      v6 = 0;
  }
  else
  {
    v6 = -2147467259;
  }
  if ( v6 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, HSTRING *, __int64 *))(*(_QWORD *)v13 + 64LL))(v13, a2, v4);
    v6 = v9;
    if ( v9 >= 0 )
      goto LABEL_11;
    v7 = (unsigned int)v9;
    v8 = 152LL;
  }
  else
  {
    v7 = (unsigned int)v6;
    v8 = 150LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)v7);
LABEL_11:
  v10 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return (unsigned int)v6;
}
