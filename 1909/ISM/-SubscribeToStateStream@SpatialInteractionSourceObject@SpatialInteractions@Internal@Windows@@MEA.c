/*
 * XREFs of ?SubscribeToStateStream@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@MEAAJXZ @ 0x1800EF590
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     _lambda_86a3fa2e77f671cbbc20107799d6d433_::operator() @ 0x1800EAF48 (_lambda_86a3fa2e77f671cbbc20107799d6d433_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject::SubscribeToStateStream(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rdi
  int v7; // [rsp+20h] [rbp-40h] BYREF
  unsigned int v8; // [rsp+24h] [rbp-3Ch] BYREF
  __int128 v9; // [rsp+28h] [rbp-38h] BYREF
  char v10; // [rsp+38h] [rbp-28h]
  __int64 v11; // [rsp+40h] [rbp-20h]
  __int128 v12; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v11 = -2LL;
  v7 = 0;
  *(_QWORD *)&v12 = this;
  *((_QWORD *)&v12 + 1) = &v7;
  v9 = v12;
  v10 = 1;
  v8 = 1;
  v2 = (*(__int64 (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject *, __int128 *, unsigned int *))(*(_QWORD *)this + 240LL))(
         this,
         &v12,
         &v8);
  v7 = v2;
  if ( v2 >= 0 )
  {
    v4 = *((_QWORD *)this + 14);
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 16);
    v2 = (*(__int64 (__fastcall **)(__int64, __int128 *, char *))(*(_QWORD *)v4 + 144LL))(v4, &v12, (char *)this + 128);
    v7 = v2;
    if ( v2 >= 0 )
    {
      v5 = *((_QWORD *)this + 16);
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 17);
      v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v5 + 112LL))(v5, v8, (char *)this + 136);
      v7 = v2;
      if ( v2 >= 0 )
      {
        v2 = (*(__int64 (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject *))(*(_QWORD *)this + 248LL))(this);
        v7 = v2;
        if ( v2 >= 0 )
        {
          v2 = 0;
          goto LABEL_16;
        }
        if ( v2 != -2147024846 )
        {
          v3 = 75LL;
          goto LABEL_14;
        }
      }
      else if ( v2 != -2147024846 )
      {
        v3 = 72LL;
        goto LABEL_14;
      }
    }
    else if ( v2 != -2147024846 )
    {
      v3 = 68LL;
      goto LABEL_14;
    }
    v2 = -2147024846;
  }
  else if ( v2 != -2147024846 )
  {
    v3 = 64LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
      (const char *)(unsigned int)v2);
  }
LABEL_16:
  v10 = 0;
  lambda_86a3fa2e77f671cbbc20107799d6d433_::operator()(&v9);
  return (unsigned int)v2;
}
