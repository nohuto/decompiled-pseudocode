/*
 * XREFs of ?v_ShutdownServices@CImmersiveWindowManager@@MEAAJPEAUIProfferService@@@Z @ 0x180100130
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CImmersiveWindowManager::v_ShutdownServices(
        CImmersiveWindowManager *this,
        struct IProfferService *a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 i; // rbx

  v2 = *((_QWORD *)this + 19);
  for ( i = 0LL; i < v2; ++i )
    IUnknown_SetSite(*(IUnknown **)(*((_QWORD *)this + 18) + 8 * i), 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 23);
  return 0LL;
}
