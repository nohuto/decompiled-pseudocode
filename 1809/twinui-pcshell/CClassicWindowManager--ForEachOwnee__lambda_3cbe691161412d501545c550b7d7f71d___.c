/*
 * XREFs of CClassicWindowManager::ForEachOwnee__lambda_3cbe691161412d501545c550b7d7f71d___ @ 0x18008A468
 * Callers:
 *     ?EnumerateOwnershipTree@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAKPEAPEAPEAUHWND__@@@Z @ 0x1801036F0 (-EnumerateOwnershipTree@CClassicWindowManager@@UEAAJPEAUIClassicWindowExternal@@PEAKPEAPEAPEAUHW.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     CClassicWindowManager::ForEachWindow__lambda_ca9327145f4ff0a101abff7aedc6af55___ @ 0x18008A4EC (CClassicWindowManager--ForEachWindow__lambda_ca9327145f4ff0a101abff7aedc6af55___.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CClassicWindowManager::ForEachOwnee__lambda_3cbe691161412d501545c550b7d7f71d___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  char v4; // bl
  __int128 v6; // [rsp+28h] [rbp-38h]
  __int128 v7; // [rsp+40h] [rbp-20h] BYREF
  __int64 v8; // [rsp+50h] [rbp-10h]
  __int64 v9; // [rsp+78h] [rbp+18h] BYREF
  __int64 v10; // [rsp+80h] [rbp+20h]

  v10 = a3;
  v9 = a2;
  *(_QWORD *)&v6 = a1;
  *((_QWORD *)&v6 + 1) = &v9;
  v7 = v6;
  v8 = a3;
  v4 = CClassicWindowManager::ForEachWindow__lambda_ca9327145f4ff0a101abff7aedc6af55___(a1, &v7);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a3 + 8));
  return v4;
}
