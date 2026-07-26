/*
 * XREFs of ndisFInvokeSynchronousOidRequest @ 0x1C008EF0C
 * Callers:
 *     ndisSynchronousOidRequestInternal @ 0x1C0070208 (ndisSynchronousOidRequestInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_qDq @ 0x1C00083F0 (WPP_RECORDER_SF_qDq.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisFInvokeSynchronousOidRequest(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v5; // rdi
  int v7; // eax
  unsigned int v8; // eax
  int v9; // edx
  unsigned int v10; // edi
  char v12; // [rsp+38h] [rbp-20h]

  v3 = *(_QWORD *)(a1 + 16);
  v5 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = *(_DWORD *)(a2 + 32);
    v12 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qDq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      a3,
      132,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      a1,
      v7,
      v12);
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(v3 + 320))(*(_QWORD *)(a1 + 24), v5, a3);
  v10 = v8;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      11,
      133,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      a1,
      v8);
  }
  return v10;
}
