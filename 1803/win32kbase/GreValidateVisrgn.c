/*
 * XREFs of GreValidateVisrgn @ 0x1C0031910
 * Callers:
 *     _GetDCEx @ 0x1C0027880 (_GetDCEx.c)
 *     GreCreateDisplayDC @ 0x1C002D5C0 (GreCreateDisplayDC.c)
 * Callees:
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C0024D98 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00295B4 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C002FF24 (--0DCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 */

void __fastcall GreValidateVisrgn(HDC a1, int a2)
{
  struct REGION **v3; // rcx
  int v4; // eax
  unsigned int v5; // eax
  struct DC *v6[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJA::DCOBJA((DCOBJA *)v6, a1);
  v3 = (struct REGION **)v6[0];
  if ( v6[0] )
  {
    v4 = *((_DWORD *)v6[0] + 9);
    if ( a2 )
      v5 = v4 | 0x100000;
    else
      v5 = v4 & 0xFFEFFFFF;
    *((_DWORD *)v6[0] + 9) = v5;
    GrepValidateVisRgn((struct DC *)v3, v3[191]);
    XDCOBJ::vAltUnlockFast((XDCOBJ *)v6);
  }
}
