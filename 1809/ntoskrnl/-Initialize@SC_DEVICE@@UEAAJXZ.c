/*
 * XREFs of ?Initialize@SC_DEVICE@@UEAAJXZ @ 0x140168BE0
 * Callers:
 *     ?Initialize@SC_DISK@@UEAAJXZ @ 0x140168890 (-Initialize@SC_DISK@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1406C3B20 (-Free@SC_ENV@@SAXPEAX@Z.c)
 */

__int64 __fastcall SC_DEVICE::Initialize(SC_DEVICE *this)
{
  __int64 v2; // rax
  int v3; // ebx
  void *v5; // rcx
  void *v6; // [rsp+20h] [rbp-38h] BYREF
  DEVPROPGUID fmtid; // [rsp+28h] [rbp-30h] BYREF
  DEVPROPID pid; // [rsp+38h] [rbp-20h]

  v6 = 0LL;
  pid = DEVPKEY_Device_ClassGuid.pid;
  v2 = *(_QWORD *)this;
  fmtid = DEVPKEY_Device_ClassGuid.fmtid;
  v3 = (*(__int64 (__fastcall **)(SC_DEVICE *, DEVPROPGUID *, void **))(v2 + 24))(this, &fmtid, &v6);
  if ( v3 >= 0 )
  {
    v5 = v6;
    *(_OWORD *)((char *)this + 8) = *(_OWORD *)v6;
    SC_ENV::Free(v5);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v3;
}
