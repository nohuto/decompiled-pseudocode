/*
 * XREFs of NtUserfnINSTRING @ 0x1C010A4E0
 * Callers:
 *     ?_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z @ 0x1C010A3F4 (-_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z.c)
 * Callees:
 *     RtlInitLargeUnicodeString @ 0x1C001BF88 (RtlInitLargeUnicodeString.c)
 *     RtlInitLargeAnsiString @ 0x1C001BFD0 (RtlInitLargeAnsiString.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINSTRING(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6, int a7)
{
  __int64 v8; // r10
  unsigned int v9; // r11d
  _QWORD v11[3]; // [rsp+40h] [rbp-18h] BYREF

  v11[0] = 0LL;
  v11[1] = 0LL;
  if ( a7 )
  {
    RtlInitLargeAnsiString((__int64)v11, a4);
  }
  else
  {
    if ( a4 && (a4 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    RtlInitLargeUnicodeString((__int64)v11, a4);
  }
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           v9,
           v8,
           v11,
           a5);
}
