/*
 * XREFs of UpdateWindowSpriteDPI @ 0x1C0074A68
 * Callers:
 *     ComposeWindow @ 0x1C000D698 (ComposeWindow.c)
 *     UpdateWindowMonitor @ 0x1C00437C0 (UpdateWindowMonitor.c)
 *     SetRedirectedWindow @ 0x1C0074068 (SetRedirectedWindow.c)
 *     xxxSetLayeredWindow @ 0x1C007BECC (xxxSetLayeredWindow.c)
 *     xxxEnableNonClientDpiScaling @ 0x1C01D2F50 (xxxEnableNonClientDpiScaling.c)
 * Callees:
 *     GreDwmNotifySpriteDPIChange @ 0x1C0074AB4 (GreDwmNotifySpriteDPIChange.c)
 *     InitializeDPIINFO @ 0x1C0075F94 (InitializeDPIINFO.c)
 */

__int64 __fastcall UpdateWindowSpriteDPI(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 result; // rax
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 )
  {
    v3 = a1[5];
    if ( (*(_BYTE *)(v3 + 26) & 8) != 0 )
    {
      InitializeDPIINFO(v6, *(unsigned int *)(v3 + 288), a2, a1);
      return GreDwmNotifySpriteDPIChange(v4, *a1, 0LL, v6);
    }
  }
  return result;
}
