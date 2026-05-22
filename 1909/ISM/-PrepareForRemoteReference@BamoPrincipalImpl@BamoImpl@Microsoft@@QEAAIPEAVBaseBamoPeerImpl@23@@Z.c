/*
 * XREFs of ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z @ 0x1800069B0
 * Callers:
 *     ?OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z @ 0x1800065E0 (-OnPeerConnected@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIIPEAPEAX@Z.c)
 *     ?PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x180023A74 (-PrepareForRemoteReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 *     ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@SAIPEAVBamoPrincipal@Bamo@3@PEAVBaseBamoPeer@53@@Z @ 0x1800654F0 (-PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@SAIPEAVBamoPrincipal@Bamo@3@PEA.c)
 *     ?PrepareForRemoteReference@BamoStubImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z @ 0x1800D0574 (-PrepareForRemoteReference@BamoStubImpl@BamoImpl@Microsoft@@QEAAIPEAVBamoPrincipal@Bamo@3@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2)
{
  __int64 v4; // rbx
  int v5; // eax
  void (__fastcall ***v6)(_QWORD); // rcx
  int v7; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 4);
  if ( !v4 )
    goto LABEL_5;
  do
  {
    if ( *(_DWORD *)(*(_QWORD *)(v4 + 40) + 36LL) == *((_DWORD *)a2 + 9) )
      break;
    v4 = *(_QWORD *)(v4 + 48);
  }
  while ( v4 );
  if ( !v4 )
  {
LABEL_5:
    v5 = (*(__int64 (__fastcall **)(Microsoft::BamoImpl::BamoPrincipalImpl *, struct Microsoft::BamoImpl::BaseBamoPeerImpl *, __int64 *))(*(_QWORD *)this + 64LL))(
           this,
           a2,
           &v11);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x20B,
        (unsigned int)"internal\\mincore\\priv_sdk\\inc\\bamoprincipal.inl",
        (const char *)(unsigned int)v5,
        v9);
      __debugbreak();
    }
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 32LL))(v11);
    *(_QWORD *)(v4 + 24) = this;
    v6 = *(void (__fastcall ****)(_QWORD))(v4 + 40);
    *(_QWORD *)(v4 + 40) = a2;
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
    if ( v6 )
      (**v6)(v6);
    *(_QWORD *)(v4 + 48) = *((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = v4;
    *(_QWORD *)(v4 + 56) = *((_QWORD *)a2 + 6);
    *((_QWORD *)a2 + 6) = v4;
  }
  if ( !*(_BYTE *)(v4 + 32) )
  {
    *(_BYTE *)(v4 + 32) = 1;
    (*(void (__fastcall **)(Microsoft::BamoImpl::BamoPrincipalImpl *, _QWORD, __int64))(*(_QWORD *)this + 56LL))(
      this,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 48LL),
      v4);
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 40LL))(v4);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x13D,
        (unsigned int)"internal\\mincore\\priv_sdk\\inc\\bamoprincipal.inl",
        (const char *)(unsigned int)v7,
        v9);
      __debugbreak();
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 16));
  return *((unsigned int *)this + 6);
}
