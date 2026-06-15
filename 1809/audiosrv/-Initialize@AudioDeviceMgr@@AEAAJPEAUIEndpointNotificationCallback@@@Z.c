/*
 * XREFs of ?Initialize@AudioDeviceMgr@@AEAAJPEAUIEndpointNotificationCallback@@@Z @ 0x18005820C
 * Callers:
 *     ?CreateInstance@AudioDeviceMgr@@SAJPEAUIEndpointNotificationCallback@@PEAPEAUIAudioDeviceMgr@@@Z @ 0x1800580E4 (-CreateInstance@AudioDeviceMgr@@SAJPEAUIEndpointNotificationCallback@@PEAPEAUIAudioDeviceMgr@@@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800506B8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?CreateInstance@EndpointCollection@@SAJPEAPEAUIEndpointCollection@@@Z @ 0x180050B14 (-CreateInstance@EndpointCollection@@SAJPEAPEAUIEndpointCollection@@@Z.c)
 *     ?EnumEndpointDevices@AudioDeviceMgr@@AEAAJXZ @ 0x18005830C (-EnumEndpointDevices@AudioDeviceMgr@@AEAAJXZ.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180058D1C (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?CreateWorkItemThread@AudioDeviceMgr@@AEAAJXZ @ 0x180058D48 (-CreateWorkItemThread@AudioDeviceMgr@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioDeviceMgr::Initialize(AudioDeviceMgr *this, struct IUnknown *a2)
{
  unsigned int v3; // ebx
  struct IUnknown **v4; // rcx
  HRESULT Instance; // eax
  int v6; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-20h] BYREF
  char v9; // [rsp+40h] [rbp-18h]

  v3 = 0;
  if ( a2 )
  {
    v4 = (struct IUnknown **)((char *)this + 32);
    if ( *v4 != a2 )
      ATL::AtlComPtrAssign(v4, a2);
  }
  Instance = EndpointCollection::CreateInstance((struct IEndpointCollection **)this + 7);
  if ( Instance < 0 )
    return (unsigned int)Instance;
  Instance = EndpointCollection::CreateInstance((struct IEndpointCollection **)this + 8);
  if ( Instance < 0 )
    return (unsigned int)Instance;
  Instance = CoCreateInstance(
               &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
               0LL,
               0x17u,
               &GUID_85af062d_e5a9_4a92_a30d_784b7ce995e0,
               (LPVOID *)this + 5);
  if ( Instance < 0 )
    return (unsigned int)Instance;
  Instance = AudioDeviceMgr::CreateWorkItemThread(this);
  if ( Instance < 0 )
  {
    return (unsigned int)Instance;
  }
  else
  {
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      &lpCriticalSection,
      (char *)this + 80);
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 5) + 72LL))(
           *((_QWORD *)this + 5),
           ((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
    if ( v6 < 0 || (*((_DWORD *)this + 12) = 1, v6 = AudioDeviceMgr::EnumEndpointDevices(this), v6 < 0) )
      v3 = v6;
    if ( v9 )
      LeaveCriticalSection(lpCriticalSection);
  }
  return v3;
}
