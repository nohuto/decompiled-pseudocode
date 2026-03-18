/*
 * XREFs of NtGdiGetNearestPaletteIndex @ 0x1C01599C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00CD28C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 */

__int64 __fastcall NtGdiGetNearestPaletteIndex(HPALETTE a1, unsigned int a2)
{
  __int64 v3; // rcx
  unsigned int v4; // edx
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  EPALOBJ::EPALOBJ((EPALOBJ *)&v6, a1);
  v3 = v6;
  if ( !v6 )
  {
    EngSetLastError(6u);
    a2 = -1;
    goto LABEL_5;
  }
  v4 = *(_DWORD *)(v6 + 28);
  if ( !v4 )
    goto LABEL_6;
  if ( (a2 & 0x1000000) == 0 )
  {
    a2 = XEPALOBJ::ulDispatchGFPEFunction(&v6, *(unsigned int *)(v6 + 96), a2 & 0xFFFFFF);
LABEL_5:
    v3 = v6;
    goto LABEL_6;
  }
  a2 = (unsigned __int16)a2 < v4 ? (unsigned __int16)a2 : 0;
LABEL_6:
  if ( v3 )
    DEC_SHARE_REF_CNT(v3);
  return a2;
}
