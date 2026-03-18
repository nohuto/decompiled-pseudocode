/*
 * XREFs of ??$SAFE_DELETE@VCComposeTop@@@@YAXAEAPEAVCComposeTop@@@Z @ 0x1800D9234
 * Callers:
 *     ?DeleteComposeTopContent@CDesktopRenderTarget@@UEAAXXZ @ 0x1800D9220 (-DeleteComposeTopContent@CDesktopRenderTarget@@UEAAXXZ.c)
 *     ?SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x1800E70C0 (-SetVisualTree@CDesktopRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x1801A5C0C (--1CDesktopRenderTarget@@EEAA@XZ.c)
 * Callees:
 *     ??_GCComposeTop@@QEAAPEAXI@Z @ 0x1801A5E34 (--_GCComposeTop@@QEAAPEAXI@Z.c)
 */

void *__fastcall SAFE_DELETE<CComposeTop>(CComposeTop **a1, unsigned int a2)
{
  CComposeTop *v3; // rcx
  void *result; // rax

  v3 = *a1;
  if ( v3 )
  {
    result = CComposeTop::`scalar deleting destructor'(v3, a2);
    *a1 = 0LL;
  }
  return result;
}
