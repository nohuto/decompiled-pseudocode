/*
 * XREFs of ?Close@CStartExperienceManager@@UEAAJXZ @ 0x180169FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CStartExperienceManager::Close(CStartExperienceManager *this)
{
  __int64 *v1; // rdi

  v1 = (__int64 *)((char *)this + 464);
  if ( *((_DWORD *)this + 112) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v1 + 32LL))(*v1);
    *((_DWORD *)this + 112) = 0;
  }
  if ( *((_DWORD *)this + 113) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v1 + 32LL))(*v1);
    *((_DWORD *)this + 113) = 0;
  }
  if ( *((_DWORD *)this + 114) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*v1 + 32LL))(*v1);
    *((_DWORD *)this + 114) = 0;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v1);
  return 0LL;
}
