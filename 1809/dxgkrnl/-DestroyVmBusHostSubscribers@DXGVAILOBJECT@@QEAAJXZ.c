/*
 * XREFs of ?DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C025A4CC
 * Callers:
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00E9048 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ??1DXGVAILOBJECT@@UEAA@XZ @ 0x1C025934C (--1DXGVAILOBJECT@@UEAA@XZ.c)
 *     NtDxgkVailConnect @ 0x1C025DCC0 (NtDxgkVailConnect.c)
 *     NtDxgkVailDisconnect @ 0x1C025E0D0 (NtDxgkVailDisconnect.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGVAILOBJECT::DestroyVmBusHostSubscribers(DXGVAILOBJECT *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, (DXGVAILOBJECT *)((char *)this + 40), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
  v2 = *((_QWORD *)this + 14);
  if ( !v2 )
  {
    v3 = *((_QWORD *)this + 15);
    if ( !v3 )
    {
      v4 = -2147483611;
      goto LABEL_7;
    }
    goto LABEL_5;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 56LL))(v2);
  v3 = *((_QWORD *)this + 15);
  *((_QWORD *)this + 14) = 0LL;
  if ( v3 )
  {
LABEL_5:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3);
    *((_QWORD *)this + 15) = 0LL;
  }
  v4 = 0;
LABEL_7:
  if ( v6[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6);
  return v4;
}
