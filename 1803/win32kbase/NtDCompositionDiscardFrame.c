/*
 * XREFs of NtDCompositionDiscardFrame @ 0x1C005B1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z @ 0x1C005B2F4 (-ReferenceHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@PEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0142B58 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall NtDCompositionDiscardFrame(struct HDCOMPOSITIONCONNECTION__ *a1, _QWORD *a2)
{
  unsigned int v3; // edx
  int v4; // eax
  struct DirectComposition::CConnection *v5; // rdi
  signed int v7; // [rsp+20h] [rbp-28h]
  struct DirectComposition::CConnection *v8; // [rsp+60h] [rbp+18h] BYREF

  v8 = 0LL;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (_QWORD *)MmUserProbeAddress;
    v7 = *a2 == 0LL ? 0xC000000D : 0;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 >= 0 )
  {
    KeEnterCriticalRegion();
    v7 = DirectComposition::CConnection::ReferenceHandle(a1, &v8);
    if ( v7 >= 0 )
    {
      v4 = -1073741275;
      v5 = v8;
      if ( *((_QWORD *)v8 + 23) )
        v4 = _guard_dispatch_icall_fptr();
      v7 = v4;
      if ( v4 >= 0 )
      {
        _guard_dispatch_icall_fptr();
        _guard_dispatch_icall_fptr();
      }
      if ( *((_QWORD *)v5 + 23) )
        _guard_dispatch_icall_fptr();
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v5, 0xFFFFFFFF) == 1 )
        DirectComposition::CConnection::`scalar deleting destructor'(v8, v3);
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v7;
}
