/*
 * XREFs of ndisFInvokeSynchronousOidRequestComplete @ 0x1C008EFE0
 * Callers:
 *     ndisSynchronousOidRequestInternal @ 0x1C0070208 (ndisSynchronousOidRequestInternal.c)
 * Callees:
 *     WPP_RECORDER_SF_qDqd @ 0x1C00084B0 (WPP_RECORDER_SF_qDqd.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ndisBugCheckEx @ 0x1C007E5C0 (ndisBugCheckEx.c)
 */

__int64 __fastcall ndisFInvokeSynchronousOidRequestComplete(
        ULONG_PTR a1,
        ULONG_PTR BugCheckParameter3,
        unsigned int *a3,
        __int64 a4)
{
  __int64 v4; // r14
  int v9; // edx
  __int64 result; // rax
  char v11[4]; // [rsp+40h] [rbp-28h]

  v4 = *(_QWORD *)(a1 + 16);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v11 = *a3;
    WPP_RECORDER_SF_qDqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      BugCheckParameter3,
      (int)a3,
      0x86u,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      a1,
      *(_DWORD *)(BugCheckParameter3 + 32),
      BugCheckParameter3,
      *(_DWORD *)v11);
  }
  (*(void (__fastcall **)(_QWORD, ULONG_PTR, unsigned int *, __int64))(v4 + 328))(
    *(_QWORD *)(a1 + 24),
    BugCheckParameter3,
    a3,
    a4);
  result = *a3;
  if ( (_DWORD)result == 259 )
    ndisBugCheckEx(0x26uLL, a1, BugCheckParameter3, 0x103uLL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    return WPP_RECORDER_SF_qD(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             v9,
             11,
             135,
             (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
             a1,
             *a3);
  }
  return result;
}
