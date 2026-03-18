/*
 * XREFs of NtDCompositionDiscardFrame @ 0x1C00637E0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0059700 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z @ 0x1C0063920 (-ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionDiscardFrame(struct HDCOMPOSITIONCONNECTION__ *a1, __int64 *a2)
{
  __int64 v3; // rbx
  int v4; // eax
  struct DirectComposition::CConnection *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  signed int v9; // [rsp+20h] [rbp-28h]
  struct DirectComposition::CConnection *v10; // [rsp+60h] [rbp+18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  v10 = 0LL;
  v3 = 0LL;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    v3 = *a2;
    v9 = *a2 == 0 ? 0xC000000D : 0;
  }
  else
  {
    v9 = -1073741811;
  }
  if ( v9 >= 0 )
  {
    KeEnterCriticalRegion();
    v9 = DirectComposition::CConnection::ReferenceHandle(a1, &v10);
    if ( v9 >= 0 )
    {
      v4 = -1073741275;
      v5 = v10;
      v6 = *((_QWORD *)v10 + 23);
      if ( v6 )
        v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v6 + 32LL))(v6, v3, &v11);
      v9 = v4;
      if ( v4 >= 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 32LL))(v11);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      }
      v7 = *((_QWORD *)v5 + 23);
      if ( v7 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 24LL))(v7, v3);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
        DirectComposition::CConnection::`scalar deleting destructor'(v10);
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v9;
}
