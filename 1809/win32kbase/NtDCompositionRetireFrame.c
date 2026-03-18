/*
 * XREFs of NtDCompositionRetireFrame @ 0x1C0063610
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0059700 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z @ 0x1C0063920 (-ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionRetireFrame(struct HDCOMPOSITIONCONNECTION__ *a1, __int64 *a2, _OWORD *a3)
{
  __int64 v4; // rbx
  __int128 v5; // xmm1
  struct DirectComposition::CConnection *v6; // rdi
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  signed int v11; // [rsp+20h] [rbp-58h]
  struct DirectComposition::CConnection *v12; // [rsp+28h] [rbp-50h] BYREF
  __int64 v13; // [rsp+30h] [rbp-48h]
  __int64 v14; // [rsp+38h] [rbp-40h] BYREF
  _OWORD v15[2]; // [rsp+48h] [rbp-30h] BYREF

  v4 = 0LL;
  v13 = 0LL;
  if ( a2 && a3 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    v4 = *a2;
    v13 = *a2;
    if ( a3 + 2 < a3 || (unsigned __int64)(a3 + 2) > MmUserProbeAddress )
      a3 = (_OWORD *)MmUserProbeAddress;
    v5 = a3[1];
    v15[0] = *a3;
    v15[1] = v5;
    v11 = v4 == 0 ? 0xC000000D : 0;
  }
  else
  {
    v11 = -1073741811;
  }
  if ( v11 >= 0 )
  {
    v12 = 0LL;
    KeEnterCriticalRegion();
    v11 = DirectComposition::CConnection::ReferenceHandle(a1, &v12);
    if ( v11 >= 0 )
    {
      v6 = v12;
      v7 = *((_QWORD *)v12 + 23);
      if ( v7 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 40LL))(v7, v4);
        v7 = *((_QWORD *)v6 + 23);
      }
      v8 = -1073741275;
      if ( v7 )
        v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v7 + 32LL))(v7, v4, &v14);
      v11 = v8;
      if ( v8 >= 0 )
      {
        (*(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v14 + 24LL))(v14, v15);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      }
      v9 = *((_QWORD *)v6 + 23);
      if ( v9 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 24LL))(v9, v4);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF) == 1 )
        DirectComposition::CConnection::`scalar deleting destructor'(v12);
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v11;
}
