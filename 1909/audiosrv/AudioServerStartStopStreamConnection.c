/*
 * XREFs of AudioServerStartStopStreamConnection @ 0x1800EA0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180042C04 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ql @ 0x1800EB378 (WPP_SF_ql.c)
 */

__int64 __fastcall AudioServerStartStopStreamConnection(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  volatile signed __int32 *v5; // rbx
  unsigned int v6; // edi

  v3 = a2;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_ql(*((_QWORD *)WPP_GLOBAL_Control + 2), a2, a3, a1, a2);
  }
  v5 = (volatile signed __int32 *)a1[1];
  if ( v5 )
  {
    _InterlockedIncrement(v5 + 2);
    v5 = (volatile signed __int32 *)a1[1];
  }
  LOBYTE(a2) = v3 != 0;
  v6 = (**(__int64 (__fastcall ***)(_QWORD, __int64))*a1)(*a1, a2);
  if ( v5 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
  return v6;
}
