/*
 * XREFs of ?Destroy@SwitchItemCollection@@UEAAXXZ @ 0x1802F24B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SwitchItemCollection::Destroy(SwitchItemCollection *this)
{
  __int64 v2; // rcx

  if ( *((_DWORD *)this + 56) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 32LL))(*((_QWORD *)this + 24));
    *((_DWORD *)this + 56) = 0;
  }
  v2 = *((_QWORD *)this + 27);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 160LL))(v2, *((_QWORD *)this + 29));
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 27);
  }
}
