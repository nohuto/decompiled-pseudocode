/*
 * XREFs of ??1HidLampArrayDevice@@UEAA@XZ @ 0x1800B2F2C
 * Callers:
 *     ??_EHidLampArrayDevice@@UEAAPEAXI@Z @ 0x1800B3160 (--_EHidLampArrayDevice@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x180029430 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     _TlgCreateWsz @ 0x180052F34 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 *     ?SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z @ 0x1800B5654 (-SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z.c)
 */

void __fastcall HidLampArrayDevice::~HidLampArrayDevice(WCHAR *this, const struct std::nothrow_t *a2)
{
  void *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  void *v10; // rcx
  RefCountedObject *v11; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  const char *v13; // [rsp+60h] [rbp-38h]
  int v14; // [rsp+68h] [rbp-30h]
  int v15; // [rsp+6Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-28h] BYREF

  *(_QWORD *)this = &HidLampArrayDevice::`vftable';
  if ( (unsigned int)hProvider > 5 )
  {
    v13 = "Removing HidLampArrayDevice (device likely removed by user)";
    v14 = 60;
    v15 = 0;
    TlgCreateWsz(&pDesc, this + 12);
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18019D796, 0LL, 0LL, 4u, &pData);
  }
  if ( *((_BYTE *)this + 637) )
    HidLampArrayDevice::SetAutonomousMode((HidLampArrayDevice *)this, 1);
  v3 = (void *)*((_QWORD *)this + 78);
  if ( v3 )
    operator delete(v3, a2);
  v4 = *((_QWORD *)this + 77);
  if ( v4 )
  {
    *((_QWORD *)this + 77) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 76);
  if ( v5 )
  {
    *((_QWORD *)this + 76) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 75);
  if ( v6 )
  {
    *((_QWORD *)this + 75) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 74);
  if ( v7 )
  {
    *((_QWORD *)this + 74) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = *((_QWORD *)this + 73);
  if ( v8 )
  {
    *((_QWORD *)this + 73) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *((_QWORD *)this + 72);
  if ( v9 )
  {
    *((_QWORD *)this + 72) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = (void *)*((_QWORD *)this + 71);
  if ( v10 )
    operator delete(v10, a2);
  v11 = (RefCountedObject *)*((_QWORD *)this + 2);
  if ( v11 )
  {
    *((_QWORD *)this + 2) = 0LL;
    RefCountedObject::Release(v11);
  }
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
