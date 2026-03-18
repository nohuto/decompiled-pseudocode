/*
 * XREFs of ?GetAnimatedCursorFrame@@YAPEAUtagCURSOR@@QEAUtagACON@@H@Z @ 0x1C004CFE8
 * Callers:
 *     NtUserGetIconSize @ 0x1C00225E0 (NtUserGetIconSize.c)
 *     _DrawIconEx @ 0x1C00226D0 (_DrawIconEx.c)
 *     NtUserDrawIconEx @ 0x1C0022EF0 (NtUserDrawIconEx.c)
 *     zzzUpdateCursorImage @ 0x1C004CBD0 (zzzUpdateCursorImage.c)
 *     ?_GetCursorFrameInfo@@YAPEAUtagCURSOR@@PEAU1@HPEAKPEAH@Z @ 0x1C010624C (-_GetCursorFrameInfo@@YAPEAUtagCURSOR@@PEAU1@HPEAKPEAH@Z.c)
 *     ?GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0138EEC (-GetCurrentCursorFrame@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagCURSOR *__fastcall GetAnimatedCursorFrame(struct tagACON *const a1, int a2)
{
  struct tagACON *v2; // r8
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdx

  v2 = a1;
  if ( (*((_DWORD *)a1 + 20) & 0x40) != 0 )
    goto LABEL_2;
  if ( !*((_QWORD *)a1 + 13) )
    return 0LL;
  if ( !*((_QWORD *)a1 + 12) )
    return 0LL;
  if ( a2 < 0 )
    return 0LL;
  if ( a2 >= *((_DWORD *)a1 + 23) )
    return 0LL;
  _mm_lfence();
  v4 = *((_QWORD *)a1 + 13);
  a1 = (struct tagACON *const)a2;
  v5 = *(int *)(v4 + 4LL * a2);
  if ( (int)v5 < 0 || (int)v5 >= *((_DWORD *)v2 + 22) )
    return 0LL;
  _mm_lfence();
  v6 = *(_QWORD *)(*((_QWORD *)v2 + 12) + 8 * v5);
  if ( (*(_DWORD *)(v6 + 80) & 8) != 0 )
  {
LABEL_2:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
    return 0LL;
  }
  return (struct tagCURSOR *)v6;
}
