/*
 * XREFs of ndisInvokeNetPnPEvent @ 0x1C00FC890
 * Callers:
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00FC974 (ndisDeliverNetPnPEventSynchronously.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001808C (WPP_RECORDER_SF_qqLd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisInvokeNetPnPEvent(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  __int64 v5; // rbx
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned int v9; // esi
  char v11; // [rsp+30h] [rbp-38h]
  char v12[4]; // [rsp+40h] [rbp-28h]

  v3 = *(_DWORD *)(a3 + 8);
  v5 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      13,
      102,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      a1,
      v11,
      *(_DWORD *)(a3 + 8));
  }
  v7 = 0LL;
  if ( v5 )
    v7 = *(_QWORD *)(v5 + 32);
  v8 = (*(__int64 (__fastcall **)(__int64, __int64))(a1 + 128))(v7, a3);
  v9 = v8;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v12 = v8;
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x67u,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      a1,
      v5,
      v3,
      *(_DWORD *)v12);
  }
  return v9;
}
