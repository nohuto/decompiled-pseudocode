/*
 * XREFs of NtDCompositionRetireFrame @ 0x1C005AFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z @ 0x1C005B2F4 (-ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0142B58 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall NtDCompositionRetireFrame(struct HDCOMPOSITIONCONNECTION__ *a1, __int64 *a2, __int128 *a3)
{
  __int64 v4; // rbx
  unsigned int v5; // edx
  struct DirectComposition::CConnection *v6; // rdi
  __int64 v7; // rcx
  int v8; // eax
  signed int v10; // [rsp+20h] [rbp-78h]
  struct DirectComposition::CConnection *v11; // [rsp+28h] [rbp-70h] BYREF
  __int64 v12; // [rsp+30h] [rbp-68h]
  __int128 v13; // [rsp+48h] [rbp-50h]
  __int128 v14; // [rsp+58h] [rbp-40h]
  __int128 v15; // [rsp+68h] [rbp-30h]
  __int128 v16; // [rsp+78h] [rbp-20h]

  v12 = 0LL;
  if ( a2 && a3 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    v4 = *a2;
    v12 = *a2;
    if ( a3 + 2 < a3 || (unsigned __int64)(a3 + 2) > MmUserProbeAddress )
      a3 = (__int128 *)MmUserProbeAddress;
    v13 = *a3;
    v14 = a3[1];
    v15 = v13;
    v16 = v14;
    v10 = v4 == 0 ? 0xC000000D : 0;
  }
  else
  {
    v10 = -1073741811;
  }
  if ( v10 >= 0 )
  {
    v11 = 0LL;
    KeEnterCriticalRegion();
    v10 = DirectComposition::CConnection::ReferenceHandle(a1, &v11);
    if ( v10 >= 0 )
    {
      v6 = v11;
      v7 = *((_QWORD *)v11 + 23);
      if ( v7 )
      {
        _guard_dispatch_icall_fptr();
        v7 = *((_QWORD *)v6 + 23);
      }
      v8 = -1073741275;
      if ( v7 )
        v8 = _guard_dispatch_icall_fptr();
      v10 = v8;
      if ( v8 >= 0 )
      {
        _guard_dispatch_icall_fptr();
        _guard_dispatch_icall_fptr();
      }
      if ( *((_QWORD *)v6 + 23) )
        _guard_dispatch_icall_fptr();
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF) == 1 )
        DirectComposition::CConnection::`scalar deleting destructor'(v11, v5);
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v10;
}
