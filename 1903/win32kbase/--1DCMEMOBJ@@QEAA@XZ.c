/*
 * XREFs of ??1DCMEMOBJ@@QEAA@XZ @ 0x1C007B630
 * Callers:
 *     GreCreateDisplayDC @ 0x1C0017D80 (GreCreateDisplayDC.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00200C0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C0077450 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 */

void __fastcall DCMEMOBJ::~DCMEMOBJ(struct HOBJ__ ***this)
{
  struct HOBJ__ **v1; // rax
  struct HOBJ__ **v2[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v3; // [rsp+40h] [rbp+8h] BYREF
  int v4; // [rsp+48h] [rbp+10h] BYREF

  v1 = *this;
  if ( *this )
  {
    v2[1] = 0LL;
    v2[0] = v1;
    *this = 0LL;
    if ( !*((_DWORD *)this + 4) )
    {
      v3 = 0x400000;
      bDeleteDCOBJ(v2, &v3, &v4);
    }
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v2);
  }
}
