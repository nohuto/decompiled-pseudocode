/*
 * XREFs of ?Stop@CISMInputThread@@QEAAXXZ @ 0x18023A264
 * Callers:
 *     ??1CGlobalInputManager@@MEAA@XZ @ 0x180235B18 (--1CGlobalInputManager@@MEAA@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CISMInputThread::Stop(CISMInputThread *this)
{
  _QWORD *v2; // rcx

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 216LL))(*((_QWORD *)this + 4));
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 5);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 16LL))(*((_QWORD *)this + 4));
  v2 = *(_QWORD **)this;
  *((_QWORD *)this + 4) = 0LL;
  WaitForSingleObject(v2, 0xFFFFFFFF);
  CloseHandle(*(HANDLE *)this);
  *(_QWORD *)this = 0LL;
}
