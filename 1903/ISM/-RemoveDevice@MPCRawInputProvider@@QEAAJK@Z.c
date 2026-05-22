/*
 * XREFs of ?RemoveDevice@MPCRawInputProvider@@QEAAJK@Z @ 0x180094BA0
 * Callers:
 *     ?Unregister@SpectrumListener@@QEAAXXZ @ 0x1800961D8 (-Unregister@SpectrumListener@@QEAAXXZ.c)
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180010B18 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18002A874 (-InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??$_Emplace_reallocate@AEBW4GamepadButtons@Input@Gaming@Windows@@@?$vector@W4GamepadButtons@Input@Gaming@Windows@@V?$allocator@W4GamepadButtons@Input@Gaming@Windows@@@std@@@std@@QEAAPEAW4GamepadButtons@Input@Gaming@Windows@@QEAW42345@AEBW42345@@Z @ 0x1800796BC (--$_Emplace_reallocate@AEBW4GamepadButtons@Input@Gaming@Windows@@@-$vector@W4GamepadButtons@Inpu.c)
 *     ?RemoveDeviceImpl@MPCRawInputProvider@@AEAAXK@Z @ 0x180094C54 (-RemoveDeviceImpl@MPCRawInputProvider@@AEAAXK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCRawInputProvider::RemoveDevice(MPCRawInputProvider *this, unsigned int a2)
{
  unsigned int v2; // esi
  _BYTE *v4; // rdx
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  v2 = a2;
  if ( GetCurrentThreadId() == *((_DWORD *)this + 22) )
  {
    if ( *((_BYTE *)this + 80) )
    {
      MPCRawInputProvider::RemoveDeviceImpl(this, v7);
      return 0LL;
    }
    v2 = v7;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
  v4 = (_BYTE *)*((_QWORD *)this + 21);
  if ( *((_BYTE **)this + 22) == v4 )
  {
    std::vector<enum Windows::Gaming::Input::GamepadButtons>::_Emplace_reallocate<enum Windows::Gaming::Input::GamepadButtons const &>(
      (void **)this + 20,
      v4,
      &v7);
  }
  else
  {
    *(_DWORD *)v4 = v2;
    *((_QWORD *)this + 21) += 4LL;
  }
  wil::details::SetEvent(*((wil::details **)this + 9), v4);
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v6);
  return 0LL;
}
