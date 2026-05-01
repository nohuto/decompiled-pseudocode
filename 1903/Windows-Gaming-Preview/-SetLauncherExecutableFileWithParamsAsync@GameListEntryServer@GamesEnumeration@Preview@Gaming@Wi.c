/*
 * XREFs of ?SetLauncherExecutableFileWithParamsAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIStorageFile@Storage@5@PEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18002B140
 * Callers:
 *     ?SetLauncherExecutableFileAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIStorageFile@Storage@5@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18002B120 (-SetLauncherExecutableFileAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800031DC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800116A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_1800116A0.c)
 *     ??$MakeAsyncActionHelper@VComTaskPoolHandler@Internal@Windows@@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAUIAsyncAction@Foundation@1@W4TrustLevel@@PEAV?$AsyncCallbackBase@VCNoResult@Internal@Windows@@@01@@Z @ 0x18002FF58 (--$MakeAsyncActionHelper@VComTaskPoolHandler@Internal@Windows@@UDisableCausality@WRL@Microsoft@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004317C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800431E4 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180044260 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::SetLauncherExecutableFileWithParamsAsync(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        __int64 (__fastcall ***a2)(struct Windows::Storage::IStorageFile *, GUID *, __int64 *),
        HSTRING a3,
        struct Windows::Foundation::IAsyncAction **a4)
{
  unsigned int v9; // esi
  __int64 (__fastcall **v10)(struct Windows::Storage::IStorageFile *, GUID *, __int64 *); // rax
  int v11; // eax
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rcx
  volatile signed __int64 *v17; // rbx
  signed __int64 v18; // rax
  __int64 v19; // rcx
  signed __int64 v20; // rtt
  volatile signed __int64 *v21; // r14
  signed __int64 v22; // rax
  signed __int64 v23; // rtt
  HSTRING v24; // rsi
  HSTRING v25; // r15
  _QWORD *v26; // rax
  __int64 v27; // r8
  _QWORD *v28; // rdi
  volatile signed __int64 **v29; // rax
  HSTRING v30; // rdi
  HSTRING v31; // rdi
  HSTRING string; // [rsp+38h] [rbp-39h] BYREF
  HSTRING newString; // [rsp+40h] [rbp-31h] BYREF
  __int64 v34; // [rsp+48h] [rbp-29h] BYREF
  HSTRING v35; // [rsp+50h] [rbp-21h]
  HSTRING v36; // [rsp+58h] [rbp-19h]
  int v37; // [rsp+60h] [rbp-11h] BYREF
  __int64 v38; // [rsp+64h] [rbp-Dh]
  signed __int64 v39; // [rsp+70h] [rbp-1h]
  signed __int64 v40; // [rsp+78h] [rbp+7h]
  volatile signed __int64 *v41; // [rsp+88h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  UINT32 length; // [rsp+D8h] [rbp+67h] BYREF

  if ( *((_QWORD *)this + 30) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5DA,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)0x80070005LL);
    return 2147942405LL;
  }
  if ( WindowsGetStringLen(a3) < 0x104 )
  {
    string = 0LL;
    if ( a2 )
    {
      v10 = *a2;
      v34 = 0LL;
      v11 = (*v10)((struct Windows::Storage::IStorageFile *)a2, &GUID_4207a996_ca2f_42f7_bde8_8b10457a7f30, &v34);
      v9 = v11;
      if ( v11 < 0 )
      {
        v12 = (unsigned int)v11;
        v13 = 1507LL;
        goto LABEL_17;
      }
      v14 = v34;
      WindowsDeleteString(string);
      string = 0LL;
      v15 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v14 + 96LL))(v14, &string);
      v9 = v15;
      if ( v15 < 0 )
      {
        v12 = (unsigned int)v15;
        v13 = 1508LL;
        goto LABEL_17;
      }
      length = 0;
      WindowsGetStringRawBuffer(string, &length);
      if ( !string || !length )
      {
        v9 = -2147024809;
        v13 = 1512LL;
        v12 = 2147942487LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
          (const char *)v12);
        v19 = v34;
        if ( v34 )
        {
          v34 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        }
LABEL_40:
        WindowsDeleteString(string);
        return v9;
      }
      v16 = v34;
      if ( v34 )
      {
        v34 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
    v17 = (volatile signed __int64 *)((char *)this - 16);
    if ( this != (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)16 )
    {
      v18 = *((_QWORD *)v17 + 17);
      v39 = v18;
      while ( v18 >= 0 )
      {
        v20 = v18;
        v18 = _InterlockedCompareExchange64(v17 + 17, v18 + 1, v18);
        if ( v20 == v18 )
          goto LABEL_22;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v18 + 16));
    }
LABEL_22:
    newString = 0LL;
    WindowsDeleteString(0LL);
    newString = 0LL;
    WindowsDuplicateString(a3, &newString);
    v21 = (volatile signed __int64 *)((char *)this - 16);
    v35 = string;
    v36 = newString;
    string = 0LL;
    newString = 0LL;
    v41 = (volatile signed __int64 *)((char *)this - 16);
    if ( this != (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)16 )
    {
      v22 = *((_QWORD *)v17 + 17);
      v40 = v22;
      while ( v22 >= 0 )
      {
        v23 = v22;
        v22 = _InterlockedCompareExchange64(v17 + 17, v22 + 1, v22);
        if ( v23 == v22 )
          goto LABEL_27;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v22 + 16));
LABEL_27:
      v21 = v41;
    }
    v24 = v35;
    v25 = v36;
    v37 = 3;
    v38 = 128LL;
    v26 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v28 = v26;
    if ( v26 )
    {
      v26[1] = v17;
      v29 = (volatile signed __int64 **)(v26 + 2);
      *v29 = 0LL;
      if ( v29 != &v41 )
      {
        *v29 = v17;
        v21 = 0LL;
      }
      v28[3] = v24;
      v28[4] = v25;
      *v28 = &off_18004B178;
      *((_DWORD *)v28 + 10) = 0;
      `eh vector constructor iterator'(
        v28 + 6,
        8uLL,
        1uLL,
        (void (*)(void *))Microsoft::WRL::AgileRef::AgileRef,
        (void (*)(void *))Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>);
      *((_DWORD *)v28 + 10) = 0;
    }
    else
    {
      v28 = 0LL;
    }
    v9 = Windows::Internal::MakeAsyncActionHelper<Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::DisableCausality>(
           &v37,
           a4,
           v27,
           v28);
    if ( v21 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v21);
    if ( (v9 & 0x80000000) == 0 )
    {
      v31 = newString;
      v9 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x612,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)v9);
      v30 = v35;
      WindowsDeleteString(string);
      string = v30;
      v31 = v36;
      WindowsDeleteString(newString);
      newString = v31;
    }
    WindowsDeleteString(v31);
    newString = 0LL;
    if ( v17 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v17);
    goto LABEL_40;
  }
  v9 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5DD,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)0x80070057LL);
  return v9;
}
