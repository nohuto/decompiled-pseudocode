/*
 * XREFs of ndisMInvokeSynchronousOidRequest @ 0x1C009B1C0
 * Callers:
 *     ndisSynchronousOidRequestInternal @ 0x1C0070208 (ndisSynchronousOidRequestInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_qDq @ 0x1C00083F0 (WPP_RECORDER_SF_qDq.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ndisBugCheckEx @ 0x1C007E5C0 (ndisBugCheckEx.c)
 */

__int64 __fastcall ndisMInvokeSynchronousOidRequest(ULONG_PTR a1, ULONG_PTR BugCheckParameter3, int a3)
{
  __int64 v3; // rsi
  ULONG_PTR v4; // rdi
  int v6; // eax
  unsigned int v7; // eax
  int v8; // edx
  unsigned int v9; // esi
  char v11; // [rsp+38h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 3760);
  v4 = BugCheckParameter3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = *(_DWORD *)(BugCheckParameter3 + 32);
    v11 = BugCheckParameter3;
    LOBYTE(BugCheckParameter3) = 4;
    WPP_RECORDER_SF_qDq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      BugCheckParameter3,
      a3,
      262,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a1,
      v6,
      v11);
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR))(v3 + 264))(*(_QWORD *)(a1 + 24), v4);
  v9 = v7;
  if ( ((v7 - 255) & 0xFFFFFFFB) == 0 )
    ndisBugCheckEx(0x26uLL, a1, v4, 0x103uLL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      11,
      263,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a1,
      v7);
  }
  return v9;
}
