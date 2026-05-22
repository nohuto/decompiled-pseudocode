/*
 * XREFs of ?SetTimeoutMicroseconds@SimpleTimeProvider@HapticsEngine@SpatialInteractions@Internal@Windows@@UEAAJ_J@Z @ 0x1801684E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18002A3F4 (-InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::HapticsEngine::SimpleTimeProvider::SetTimeoutMicroseconds(
        Windows::Internal::SpatialInteractions::HapticsEngine::SimpleTimeProvider *this,
        __int64 a2)
{
  LONGLONG v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rsi
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LARGE_INTEGER v11; // [rsp+40h] [rbp+8h] BYREF

  QueryPerformanceCounter(&v11);
  v4 = 1000000 * v11.QuadPart / qword_1801E0C18;
  if ( a2 > v4 )
    v5 = a2 - v4;
  else
    v5 = 1LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v6 = *((_QWORD *)this + 10);
  v11.QuadPart = (LONGLONG)this + 96;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 11);
  v7 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64, char *))(*(_QWORD *)v6 + 56LL))(
         v6,
         ((unsigned __int64)this + 16) & -(__int64)(this != 0LL),
         10 * v5,
         (char *)this + 88);
  v8 = v7;
  if ( v7 >= 0 )
    v8 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1BA,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\inc\\hapticsengine.h",
      (const char *)(unsigned int)v7);
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock((struct _RTL_CRITICAL_SECTION **)&v11);
  return v8;
}
