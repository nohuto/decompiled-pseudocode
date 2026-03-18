/*
 * XREFs of GetAnimatedCursorFrame @ 0x1C001C38C
 * Callers:
 *     NtUserGetIconSize @ 0x1C0012860 (NtUserGetIconSize.c)
 *     _DrawIconEx @ 0x1C0012DE0 (_DrawIconEx.c)
 *     NtUserDrawIconEx @ 0x1C00134C0 (NtUserDrawIconEx.c)
 *     zzzUpdateCursorImage @ 0x1C001E000 (zzzUpdateCursorImage.c)
 *     ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C00C0B10 (-GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     NtUserGetCursorFrameInfo @ 0x1C0130310 (NtUserGetCursorFrameInfo.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall GetAnimatedCursorFrame(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx

  v2 = a1;
  if ( (*(_DWORD *)(a1 + 80) & 0x40) != 0 )
    goto LABEL_2;
  if ( !*(_QWORD *)(a1 + 104) )
    return 0LL;
  if ( !*(_QWORD *)(a1 + 96) )
    return 0LL;
  if ( a2 < 0 )
    return 0LL;
  if ( a2 >= *(_DWORD *)(a1 + 92) )
    return 0LL;
  _mm_lfence();
  v4 = *(_QWORD *)(a1 + 104);
  a1 = a2;
  v5 = *(int *)(v4 + 4LL * a2);
  if ( (int)v5 < 0 || (int)v5 >= *(_DWORD *)(v2 + 88) )
    return 0LL;
  _mm_lfence();
  v6 = *(_QWORD *)(*(_QWORD *)(v2 + 96) + 8 * v5);
  if ( (*(_DWORD *)(v6 + 80) & 8) != 0 )
  {
LABEL_2:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
    return 0LL;
  }
  return v6;
}
