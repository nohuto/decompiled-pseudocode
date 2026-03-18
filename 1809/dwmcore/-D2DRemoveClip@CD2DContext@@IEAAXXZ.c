/*
 * XREFs of ?D2DRemoveClip@CD2DContext@@IEAAXXZ @ 0x180025BE4
 * Callers:
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x180025B08 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x1800D6748 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CD2DContext::D2DRemoveClip(CD2DContext *this)
{
  *((_BYTE *)this + 494) = 1;
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 30) + 80LL))(*((_QWORD *)this + 30), 0LL, 1LL);
}
