/*
 * XREFs of ??1DCMEMOBJ@@QEAA@XZ @ 0x1C00779A0
 * Callers:
 *     GreCreateDisplayDC @ 0x1C001A610 (GreCreateDisplayDC.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0020EC0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C00AB930 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 */

void __fastcall DCMEMOBJ::~DCMEMOBJ(DCMEMOBJ *this)
{
  __int64 v1; // rax
  _QWORD v2[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v3; // [rsp+40h] [rbp+8h] BYREF
  int v4; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    v2[1] = 0LL;
    v2[0] = v1;
    *(_QWORD *)this = 0LL;
    if ( !*((_DWORD *)this + 4) )
    {
      v3 = 0x400000;
      bDeleteDCOBJ((struct XDCOBJ *)v2, &v3, &v4);
    }
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v2);
  }
}
