/*
 * XREFs of UpdateWindowSpriteDPI @ 0x1C0077A60
 * Callers:
 *     UpdateWindowMonitor @ 0x1C002DF20 (UpdateWindowMonitor.c)
 *     SetRedirectedWindow @ 0x1C0075334 (SetRedirectedWindow.c)
 *     ComposeWindow @ 0x1C00C3B30 (ComposeWindow.c)
 *     xxxSetLayeredWindow @ 0x1C00C433C (xxxSetLayeredWindow.c)
 *     xxxEnableNonClientDpiScaling @ 0x1C01B00DC (xxxEnableNonClientDpiScaling.c)
 * Callees:
 *     GreDwmNotifySpriteDPIChange @ 0x1C00781A4 (GreDwmNotifySpriteDPIChange.c)
 *     InitializeDPIINFO @ 0x1C0079F6C (InitializeDPIINFO.c)
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
