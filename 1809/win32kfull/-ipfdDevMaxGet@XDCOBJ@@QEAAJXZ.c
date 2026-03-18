/*
 * XREFs of ?ipfdDevMaxGet@XDCOBJ@@QEAAJXZ @ 0x1C029E3B8
 * Callers:
 *     ?ipfdDevMax@XDCOBJ@@QEAAHXZ @ 0x1C029E390 (-ipfdDevMax@XDCOBJ@@QEAAHXZ.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0099774 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C0289C70 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 */

__int64 __fastcall XDCOBJ::ipfdDevMaxGet(XDCOBJ *this)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 DeviceHdev; // rax
  __int64 (__fastcall *v7)(_QWORD, __int64, _QWORD); // rax
  int v8; // eax
  struct _RECTL v10; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v11[32]; // [rsp+40h] [rbp-78h] BYREF
  char v12[80]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v13; // [rsp+C0h] [rbp+8h] BYREF

  v2 = 0;
  v13 = *(_QWORD *)(*(_QWORD *)this + 48LL);
  v3 = v13;
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v11, (struct PDEVOBJ *)&v13);
  if ( (*(_DWORD *)(v3 + 40) & 0x20000) != 0 )
  {
    v5 = *(_QWORD *)this;
    v10 = *(struct _RECTL *)(*(_QWORD *)this + 1032LL);
    DeviceHdev = hdevFindDeviceHdev(*(_QWORD **)(v5 + 48), &v10, 0LL, v4);
    if ( DeviceHdev )
      v3 = DeviceHdev;
  }
  v7 = *(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v3 + 3128);
  if ( v7 )
  {
    v8 = v7(*(_QWORD *)(v3 + 1800), 1LL, 0LL);
    if ( v8 < 0 )
      v8 = 0;
    v2 = v8;
  }
  *(_WORD *)(*(_QWORD *)this + 2096LL) = v2;
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v11);
  DCOBJ::~DCOBJ((DCOBJ *)v12);
  return v2;
}
