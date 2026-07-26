/*
 * XREFs of ndisMInvokeHalt @ 0x1C01178D4
 * Callers:
 *     ndisMCommonHaltMiniport @ 0x1C0136B28 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisMInvokeHalt(_QWORD *a1, int a2)
{
  __int64 v2; // rdi
  unsigned int v3; // esi
  __int64 result; // rax
  int v7; // edx

  v2 = a1[470];
  v3 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      1,
      229,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)a1,
      v2);
  }
  if ( ndisVerifierNdisDispatch && (*(_BYTE *)(v2 + 26) & 2) != 0 )
    result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD *, _QWORD, _QWORD))ndisVerifierNdisDispatch->NdisMiniportHaltExHandler)(
               a1[3],
               v3,
               a1,
               a1[620],
               *(_QWORD *)(v2 + 144));
  else
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v2 + 144))(a1[3], v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    return WPP_RECORDER_SF_qq(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             v7,
             1,
             230,
             (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
             (char)a1,
             v2);
  }
  return result;
}
