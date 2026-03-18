/*
 * XREFs of ?vInit256Default@XEPALOBJ@@QEAAXXZ @ 0x1C00EF6EC
 * Callers:
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C00346F0 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     ?vInit256Rainbow@XEPALOBJ@@QEAAXXZ @ 0x1C00EF450 (-vInit256Rainbow@XEPALOBJ@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall XEPALOBJ::vInit256Default(XEPALOBJ *this)
{
  unsigned int v1; // r9d
  __int64 v3; // r10
  __int64 v4; // rcx
  __int64 v5; // r8

  v1 = 0;
  v3 = 0LL;
  do
  {
    v4 = 19 - v1;
    *(_DWORD *)(v3 + *(_QWORD *)(*(_QWORD *)this + 112LL)) = *(_DWORD *)(v3 + logDefaultPal + 4);
    v3 += 4LL;
    v5 = 255 - v1++;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 4 * v5) = *((_DWORD *)&logDefaultPal + v4 + 1);
  }
  while ( v1 < 0xA );
}
