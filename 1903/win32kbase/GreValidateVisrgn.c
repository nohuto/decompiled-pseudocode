/*
 * XREFs of GreValidateVisrgn @ 0x1C0016244
 * Callers:
 *     GreCreateDisplayDC @ 0x1C0017D80 (GreCreateDisplayDC.c)
 *     _GetDCEx @ 0x1C001AAA0 (_GetDCEx.c)
 * Callees:
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C001631C (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z @ 0x1C0019BF0 (-GrepValidateVisRgn@@YAXPEAVDC@@PEAVREGION@@@Z.c)
 *     HmgShareLockEx @ 0x1C001BA50 (HmgShareLockEx.c)
 */

void __fastcall GreValidateVisrgn(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]
  int v7; // [rsp+2Ch] [rbp-Ch]

  v6 = 0;
  v2 = a2;
  v7 = 0;
  LOBYTE(a2) = 1;
  v3 = HmgShareLockEx(a1, a2, 0LL);
  v5 = v3;
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 36) | 0x100000;
    if ( !v2 )
      v4 = *(_DWORD *)(v3 + 36) & 0xFFEFFFFF;
    *(_DWORD *)(v3 + 36) = v4;
    GrepValidateVisRgn((struct DC *)v3, *(struct REGION **)(v3 + 1120));
    XDCOBJ::vAltUnlockFast((XDCOBJ *)&v5);
  }
}
