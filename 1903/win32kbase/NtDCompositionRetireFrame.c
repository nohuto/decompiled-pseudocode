/*
 * XREFs of NtDCompositionRetireFrame @ 0x1C000F720
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z @ 0x1C000F91C (-ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C00B7700 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

__int64 __fastcall NtDCompositionRetireFrame(struct HDCOMPOSITIONCONNECTION__ *a1, __int64 *a2, __int128 *a3)
{
  __int64 v6; // rbx
  unsigned int v7; // edx
  struct DirectComposition::CConnection *v8; // rdi
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  signed int v13; // [rsp+20h] [rbp-88h]
  struct DirectComposition::CConnection *v14; // [rsp+28h] [rbp-80h] BYREF
  __int64 v15; // [rsp+30h] [rbp-78h]
  __int64 v16; // [rsp+38h] [rbp-70h] BYREF
  __int128 v17; // [rsp+48h] [rbp-60h]
  __int128 v18; // [rsp+58h] [rbp-50h]
  _OWORD v19[2]; // [rsp+68h] [rbp-40h] BYREF

  memset(v19, 0, sizeof(v19));
  v6 = 0LL;
  v15 = 0LL;
  if ( a2 && a3 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    v6 = *a2;
    v15 = *a2;
    if ( a3 + 2 < a3 || (unsigned __int64)(a3 + 2) > MmUserProbeAddress )
      a3 = (__int128 *)MmUserProbeAddress;
    v17 = *a3;
    v18 = a3[1];
    v19[0] = v17;
    v19[1] = v18;
    v13 = v6 == 0 ? 0xC000000D : 0;
  }
  else
  {
    v13 = -1073741811;
  }
  if ( v13 >= 0 )
  {
    v14 = 0LL;
    KeEnterCriticalRegion();
    v13 = DirectComposition::CConnection::ReferenceHandle(a1, &v14);
    if ( v13 >= 0 )
    {
      v8 = v14;
      v9 = *((_QWORD *)v14 + 23);
      if ( v9 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 40LL))(v9, v6);
        v9 = *((_QWORD *)v8 + 23);
      }
      v10 = -1073741275;
      if ( v9 )
        v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v9 + 32LL))(v9, v6, &v16);
      v13 = v10;
      if ( v10 >= 0 )
      {
        (*(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v16 + 24LL))(v16, v19);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
      }
      v11 = *((_QWORD *)v8 + 23);
      if ( v11 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 24LL))(v11, v6);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v8, 0xFFFFFFFF) == 1 )
        DirectComposition::CConnection::`scalar deleting destructor'(v14, v7);
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v13;
}
