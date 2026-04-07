/*
 * XREFs of ?UnbindWindow@CHolographicSlate@@AEAAJXZ @ 0x1800815B0
 * Callers:
 *     ??_ECHolographicSlate@@UEAAPEAXI@Z @ 0x1800810E0 (--_ECHolographicSlate@@UEAAPEAXI@Z.c)
 *     ?Initialize@CHolographicSlate@@AEAAJQEAUHWND__@@PEAVCVisual@@II@Z @ 0x18008124C (-Initialize@CHolographicSlate@@AEAAJQEAUHWND__@@PEAVCVisual@@II@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180039BF8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CHolographicSlate::UnbindWindow(CHolographicSlate *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx

  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 3);
  v2 = (CBaseObject *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 4) = 0LL;
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 5);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 5) = 0LL;
  }
  return 2147500037LL;
}
