/*
 * XREFs of ndisQueryOpenEnableWakeUp @ 0x1C0075C54
 * Callers:
 *     ndisQueryEnableWakeUp @ 0x1C0075BE8 (ndisQueryEnableWakeUp.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall ndisQueryOpenEnableWakeUp(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v4; // ebx
  int v5; // eax
  char v7; // [rsp+30h] [rbp-18h]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      10,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      a1,
      v7);
  }
  v4 = 0;
  if ( *(_DWORD *)(v2 + 48) >= 4u )
  {
    **(_DWORD **)(v2 + 40) = *(_DWORD *)(a1 + 304);
    v5 = 0;
    *(_DWORD *)(v2 + 52) = 4;
  }
  else
  {
    v4 = -1073676268;
    v5 = 4;
  }
  *(_DWORD *)(v2 + 56) = v5;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      11,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      a1,
      v2,
      v4);
  }
  return v4;
}
