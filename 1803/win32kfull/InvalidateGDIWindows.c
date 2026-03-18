/*
 * XREFs of InvalidateGDIWindows @ 0x1C01B2300
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C002E6CC (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0033D9C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     zzzUpdateLayeredWindow @ 0x1C007CD40 (zzzUpdateLayeredWindow.c)
 *     InvalidateGDIWindows @ 0x1C01B2300 (InvalidateGDIWindows.c)
 * Callees:
 *     CalcVisRgn @ 0x1C002B5D0 (CalcVisRgn.c)
 *     InvalidateGDIWindows @ 0x1C01B2300 (InvalidateGDIWindows.c)
 *     GreSetClientRgn @ 0x1C02588F0 (GreSetClientRgn.c)
 */

void __fastcall InvalidateGDIWindows(__int64 a1)
{
  __int64 Prop; // rax
  struct EWNDOBJ *v3; // rdi
  unsigned int v4; // r9d
  __int64 i; // rbx
  HRGN v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    Prop = RealGetProp(*(_QWORD *)(a1 + 120), (unsigned __int16)atomWndObj, 1LL);
    v3 = (struct EWNDOBJ *)Prop;
    if ( Prop )
    {
      v6 = 0LL;
      if ( (*(_DWORD *)(Prop + 184) & 0x20) != 0 )
        v4 = (4 * (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 4)) | 1;
      else
        v4 = 24;
      CalcVisRgn(&v6, a1, (struct tagWND *)a1, v4);
      GreSetClientRgn(v3);
    }
    for ( i = *(_QWORD *)(a1 + 88); i; i = *(_QWORD *)(i + 64) )
      InvalidateGDIWindows(i);
  }
}
