/*
 * XREFs of ?Destroy@CApplicationFrameWrapper@@UEAAJXZ @ 0x18015B890
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationFrameWrapper::Destroy(unsigned __int64 this)
{
  RTL_SRWLOCK *v2; // rcx

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  *(_BYTE *)(this + 72) = 1;
  ReleaseSRWLockExclusive(v2);
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(this + 136) + 96LL))(
    *(_QWORD *)(this + 136),
    this & ((unsigned __int128)-(__int128)(this - 8) >> 64));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(this + 136));
  return 0LL;
}
