/*
 * XREFs of ?IsVerbRegistered@@YA_NPEAUIShellItem@@PEBG@Z @ 0x1803B7434
 * Callers:
 *     _lambda_03333eb1695976eafbeaf663887af01a_::operator() @ 0x1801D5FF0 (_lambda_03333eb1695976eafbeaf663887af01a_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::GetTargetItem @ 0x1803B72EC (_anonymous_namespace_--GetTargetItem.c)
 *     ?IsVerbRegistered@@YA_NPEAUIQueryAssociations@@PEBG@Z @ 0x1803B7384 (-IsVerbRegistered@@YA_NPEAUIQueryAssociations@@PEBG@Z.c)
 */

bool __fastcall IsVerbRegistered(struct IShellItem *a1, const unsigned __int16 *a2)
{
  bool v3; // di
  const unsigned __int16 *v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rbx
  const unsigned __int16 *v7; // rdx
  __int64 v9; // [rsp+40h] [rbp+10h] BYREF
  struct IQueryAssociations *v10; // [rsp+48h] [rbp+18h] BYREF

  v10 = 0LL;
  v3 = 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  if ( ((int (__fastcall *)(struct IShellItem *, _QWORD, const GUID *, GUID *, struct IQueryAssociations **))a1->lpVtbl->BindToHandler)(
         a1,
         0LL,
         &BHID_AssociationArray,
         &GUID_c46ca590_3c3f_11d2_bee6_0000f805ca57,
         &v10) >= 0 )
  {
    v3 = IsVerbRegistered(v10, v4);
    if ( !v3 )
    {
      v9 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
      if ( (int)anonymous_namespace_::GetTargetItem((__int64)a1, v5, &v9) >= 0 )
      {
        v6 = v9;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
        if ( (*(int (__fastcall **)(__int64, _QWORD, const GUID *, GUID *, struct IQueryAssociations **))(*(_QWORD *)v6 + 24LL))(
               v6,
               0LL,
               &BHID_AssociationArray,
               &GUID_c46ca590_3c3f_11d2_bee6_0000f805ca57,
               &v10) >= 0 )
          v3 = IsVerbRegistered(v10, v7);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  return v3;
}
