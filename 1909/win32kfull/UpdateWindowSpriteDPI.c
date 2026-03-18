/*
 * XREFs of UpdateWindowSpriteDPI @ 0x1C002FA68
 * Callers:
 *     SetRedirectedWindow @ 0x1C0032388 (SetRedirectedWindow.c)
 *     UpdateWindowMonitor @ 0x1C0068A30 (UpdateWindowMonitor.c)
 *     ComposeWindow @ 0x1C0089E28 (ComposeWindow.c)
 *     xxxSetLayeredWindow @ 0x1C008D304 (xxxSetLayeredWindow.c)
 *     xxxEnableNonClientDpiScaling @ 0x1C01E7A10 (xxxEnableNonClientDpiScaling.c)
 * Callees:
 *     GreDwmNotifySpriteDPIChange @ 0x1C00303CC (GreDwmNotifySpriteDPIChange.c)
 *     InitializeDPIINFO @ 0x1C0030B74 (InitializeDPIINFO.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall UpdateWindowSpriteDPI(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v5; // rcx
  __int64 result; // rax
  _BYTE v7[56]; // [rsp+20h] [rbp-38h] BYREF

  if ( a2 )
  {
    v2 = a1[5];
    if ( (*(_BYTE *)(v2 + 26) & 8) != 0 )
    {
      memset(v7, 0, 0x28uLL);
      InitializeDPIINFO(v7, *(unsigned int *)(v2 + 288), a2, a1);
      return GreDwmNotifySpriteDPIChange(v5, *a1, 0LL, v7);
    }
  }
  return result;
}
