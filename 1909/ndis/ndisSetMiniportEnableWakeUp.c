/*
 * XREFs of ndisSetMiniportEnableWakeUp @ 0x1C0076EA8
 * Callers:
 *     ndisPreSetPMParameters @ 0x1C0034E04 (ndisPreSetPMParameters.c)
 *     ndisSetEnableWakeUp @ 0x1C0076C14 (ndisSetEnableWakeUp.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall ndisSetMiniportEnableWakeUp(__int64 a1, unsigned int *a2, _BYTE *a3)
{
  unsigned int *v4; // rbx
  unsigned int v6; // edi
  unsigned int v7; // ecx
  char v9; // [rsp+30h] [rbp-28h]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      18,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      a1,
      v9);
  }
  v6 = 0;
  *a3 = 1;
  if ( v4[12] >= 4 )
  {
    a2 = (unsigned int *)*((_QWORD *)v4 + 5);
    v7 = *a2;
    if ( (*(_DWORD *)(a1 + 3864) & 0x100) != 0 )
      v7 &= ~2u;
    *a3 = 0;
    *a2 = v7 & 0xFFFFFFFB;
  }
  else
  {
    v4[13] = 0;
    v6 = -1073676268;
    v4[14] = 4;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      11,
      19,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      a1,
      (char)v4,
      v6);
  }
  return v6;
}
