/*
 * XREFs of ?SetVirtualDesktopId@CApplicationViewBase@@UEAAJAEBU_GUID@@@Z @ 0x18001A810
 * Callers:
 *     <none>
 * Callees:
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x18001A7A8 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z @ 0x18001A934 (-_PersistData@CPersistence@ApplicationViewManagement@@AEAAJPEBG0PEBEK@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001C8D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@@Deta.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationViewBase::SetVirtualDesktopId(RTL_SRWLOCK *this, const struct _GUID *a2)
{
  RTL_SRWLOCK *v4; // rdi
  __int64 v5; // rbx
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp-50h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-48h] BYREF
  __int64 v9; // [rsp+40h] [rbp-40h]
  __int64 v10; // [rsp+48h] [rbp-38h]
  __int64 v11; // [rsp+50h] [rbp-30h]
  unsigned __int8 v12[4]; // [rsp+58h] [rbp-28h] BYREF
  int v13; // [rsp+5Ch] [rbp-24h]
  __int128 v14; // [rsp+60h] [rbp-20h]

  v11 = -2LL;
  v4 = this + 6;
  AcquireSRWLockExclusive(this + 6);
  v7 = v4;
  *(struct _GUID *)&this[14].Ptr = *a2;
  pv = 0LL;
  v9 = -1LL;
  v10 = -1LL;
  if ( (*((int (__fastcall **)(RTL_SRWLOCK *, LPVOID *))this[2].Ptr + 4))(this + 2, &pv) >= 0 )
  {
    GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v7);
    v5 = (__int64)v7;
    if ( v7 )
    {
      v14 = *(_OWORD *)&this[14].Ptr;
      *(_DWORD *)v12 = 16;
      v13 = 1447309360;
      ApplicationViewManagement::CPersistence::_PersistData(
        (ApplicationViewManagement::CPersistence *)&v7[5],
        (const unsigned __int16 *)pv,
        L"VirtualDesktop",
        v12,
        0x18u);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase>::Release(v5);
    }
  }
  if ( pv )
  {
    CoTaskMemFree(pv);
    pv = 0LL;
  }
  v9 = 0LL;
  v10 = 0LL;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
