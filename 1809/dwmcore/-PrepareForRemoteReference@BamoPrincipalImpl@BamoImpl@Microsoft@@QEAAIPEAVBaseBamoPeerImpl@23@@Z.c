/*
 * XREFs of ?PrepareForRemoteReference@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAIPEAVBaseBamoPeerImpl@23@@Z @ 0x180074E8C
 * Callers:
 *     ?OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z @ 0x180074AF0 (-OnPeerConnected@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJIIIPEAPEAX@Z.c)
 * Callees:
 *     ?AllocateStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAPEAVBamoStubImpl@23@PEAVBaseBamoPeerImpl@23@@Z @ 0x180074F20 (-AllocateStub@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAPEAVBamoStubImpl@23@PEAVBaseBamoPeerImpl.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800EE364 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::PrepareForRemoteReference(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a2)
{
  struct Microsoft::BamoImpl::BamoStubImpl *i; // rbx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  for ( i = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)this + 4);
        i && *(_DWORD *)(*((_QWORD *)i + 5) + 36LL) != *((_DWORD *)a2 + 9);
        i = (struct Microsoft::BamoImpl::BamoStubImpl *)*((_QWORD *)i + 6) )
  {
    ;
  }
  if ( !i )
    i = Microsoft::BamoImpl::BamoPrincipalImpl::AllocateStub(this, a2);
  if ( !*((_BYTE *)i + 32) )
  {
    *((_BYTE *)i + 32) = 1;
    (*(void (__fastcall **)(Microsoft::BamoImpl::BamoPrincipalImpl *, _QWORD, struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)this + 56LL))(
      this,
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 48LL),
      i);
    v4 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)i + 40LL))(i);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x13D,
        (unsigned int)"internal\\mincore\\priv_sdk\\inc\\BamoPrincipal.inl",
        (const char *)(unsigned int)v4,
        v6);
      __debugbreak();
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)i + 4);
  return *((unsigned int *)this + 6);
}
