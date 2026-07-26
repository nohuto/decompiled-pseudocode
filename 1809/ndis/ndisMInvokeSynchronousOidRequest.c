/*
 * XREFs of ndisMInvokeSynchronousOidRequest @ 0x1C006321C
 * Callers:
 *     ndisSynchronousOidRequest @ 0x1C0048DF4 (ndisSynchronousOidRequest_ea_1C0048DF4.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qLq @ 0x1C0043DA4 (WPP_SF_qLq.c)
 *     ndisBugCheckEx @ 0x1C004FE18 (ndisBugCheckEx.c)
 */

__int64 __fastcall ndisMInvokeSynchronousOidRequest(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  __int64 v2; // rsi
  int v5; // eax
  unsigned int v6; // esi

  v2 = *(_QWORD *)(BugCheckParameter2 + 3792);
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qLq(
      0x105u,
      &WPP_f453a6740ca1326a168191528118e90e_Traceguids,
      BugCheckParameter2,
      *(_DWORD *)(BugCheckParameter3 + 32));
  v5 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR))(v2 + 264))(
         *(_QWORD *)(BugCheckParameter2 + 24),
         BugCheckParameter3);
  v6 = v5;
  if ( ((v5 - 255) & 0xFFFFFFFB) == 0 )
    ndisBugCheckEx(0x26uLL, BugCheckParameter2, BugCheckParameter3, 0x103uLL);
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qD(0x106u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, BugCheckParameter2, v5);
  return v6;
}
