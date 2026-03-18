/*
 * XREFs of ?Remove@CHolographicFrameProcessor@@UEAAXXZ @ 0x18024AB90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveWin32kInteropTexture@CHolographicManager@@QEAAXPEAUIHolographicWin32kInteropTexture@@@Z @ 0x180242428 (-RemoveWin32kInteropTexture@CHolographicManager@@QEAAXPEAUIHolographicWin32kInteropTexture@@@Z.c)
 */

void __fastcall CHolographicFrameProcessor::Remove(CHolographicFrameProcessor *this)
{
  RTL_SRWLOCK *v2; // rcx

  v2 = (RTL_SRWLOCK *)*((_QWORD *)this + 6);
  if ( v2 )
    CHolographicManager::RemoveWin32kInteropTexture(v2, (struct IUnknown *)this + 5);
  if ( *((_QWORD *)this + 16) )
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 16);
}
