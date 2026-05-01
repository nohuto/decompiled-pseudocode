/*
 * XREFs of ?InternalClose@ClientDC@Wrappers@WRL@Microsoft@@MEAA_NXZ @ 0x1803B46A0
 * Callers:
 *     ??1ClientDC@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1803B44BC (--1ClientDC@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall Microsoft::WRL::Wrappers::ClientDC::InternalClose(Microsoft::WRL::Wrappers::ClientDC *this)
{
  return ReleaseDC(*((HWND *)this + 2), *((HDC *)this + 1)) != 0;
}
