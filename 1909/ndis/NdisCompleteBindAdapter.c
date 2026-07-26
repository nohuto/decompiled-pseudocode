/*
 * XREFs of NdisCompleteBindAdapter @ 0x1C007DA30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 */

LONG __fastcall NdisCompleteBindAdapter(__int64 a1, int a2)
{
  int v2; // edi
  LONG result; // eax
  int v5; // edx

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      6,
      41,
      (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
      a1);
  }
  *(_DWORD *)(a1 + 88) = v2;
  result = KeSetEvent((PRKEVENT)(a1 + 96), 0, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    return WPP_RECORDER_SF_q(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             v5,
             6,
             42,
             (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
             a1);
  }
  return result;
}
