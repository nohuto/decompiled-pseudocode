/*
 * XREFs of ??1HidLampArrayDevice@@UEAA@XZ @ 0x18007950C
 * Callers:
 *     ??_EHidLampArrayDevice@@UEAAPEAXI@Z @ 0x1800794C0 (--_EHidLampArrayDevice@@UEAAPEAXI@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z @ 0x18007AD50 (-SetAutonomousMode@HidLampArrayDevice@@QEAAJ_N@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HidLampArrayDevice::~HidLampArrayDevice(
        volatile signed __int32 **this,
        const struct std::nothrow_t *a2)
{
  const WCHAR *v3; // rdx
  __int64 v4; // rax
  const WCHAR *v5; // rcx
  volatile signed __int32 *v6; // rcx
  volatile signed __int32 *v7; // rcx
  volatile signed __int32 *v8; // rcx
  volatile signed __int32 *v9; // rcx
  volatile signed __int32 *v10; // rcx
  volatile signed __int32 *v11; // rcx
  volatile signed __int32 *v12; // rcx
  volatile signed __int32 *v13; // rcx
  volatile signed __int32 *v14; // rdi
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  const char *v16; // [rsp+60h] [rbp-38h]
  __int64 v17; // [rsp+68h] [rbp-30h]
  const WCHAR *v18; // [rsp+70h] [rbp-28h]
  int v19; // [rsp+78h] [rbp-20h]
  int v20; // [rsp+7Ch] [rbp-1Ch]

  *this = (volatile signed __int32 *)&HidLampArrayDevice::`vftable';
  if ( (unsigned int)hProvider > 5 )
  {
    v16 = "Removing HidLampArrayDevice (device likely removed by user)";
    v17 = 60LL;
    v3 = &sourceString;
    LODWORD(v4) = 0;
    v5 = (const WCHAR *)(this + 3);
    if ( v5 )
    {
      v3 = v5;
      v4 = -1LL;
      do
        ++v4;
      while ( v5[v4] );
    }
    v18 = v3;
    v19 = 2 * v4 + 2;
    v20 = 0;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801689E2, 0LL, 0LL, 4u, &pData);
  }
  if ( *((_BYTE *)this + 637) )
    HidLampArrayDevice::SetAutonomousMode((HidLampArrayDevice *)this, 1);
  v6 = this[78];
  if ( v6 )
    operator delete((void *)v6, a2);
  v7 = this[77];
  if ( v7 )
  {
    this[77] = 0LL;
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8 = this[76];
  if ( v8 )
  {
    this[76] = 0LL;
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = this[75];
  if ( v9 )
  {
    this[75] = 0LL;
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = this[74];
  if ( v10 )
  {
    this[74] = 0LL;
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = this[73];
  if ( v11 )
  {
    this[73] = 0LL;
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = this[72];
  if ( v12 )
  {
    this[72] = 0LL;
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = this[71];
  if ( v13 )
    operator delete((void *)v13, a2);
  v14 = this[2];
  if ( v14 )
  {
    this[2] = 0LL;
    if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
    {
      *((_DWORD *)v14 + 2) = 1;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 32LL))(v14);
      *((_DWORD *)v14 + 2) = 0;
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v14 + 24LL))(v14, 1LL);
    }
  }
  *this = (volatile signed __int32 *)&RefCountedObject::`vftable';
}
