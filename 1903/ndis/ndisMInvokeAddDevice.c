/*
 * XREFs of ndisMInvokeAddDevice @ 0x1C003EB34
 * Callers:
 *     ndisAddDevice @ 0x1C012E628 (ndisAddDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisMInvokeAddDevice(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v3; // eax
  int v4; // edx
  unsigned int v5; // esi

  v1 = *(_QWORD *)(a1 + 3760);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      213,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      v1,
      a1);
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(v1 + 784))(a1, *(_QWORD *)(v1 + 64));
  v5 = v3;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      1,
      214,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      v1,
      a1,
      v3);
  }
  return v5;
}
