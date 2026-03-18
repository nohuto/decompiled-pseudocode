/*
 * XREFs of ??1DCMEMOBJ@@QEAA@XZ @ 0x1C001DDF0
 * Callers:
 *     GreCreateDisplayDC @ 0x1C001D950 (GreCreateDisplayDC.c)
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C001DE38 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C001DE64 (--0DCOBJ@@QEAA@XZ.c)
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C001DEDC (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 */

void __fastcall DCMEMOBJ::~DCMEMOBJ(DCMEMOBJ *this)
{
  __int64 v2; // rax
  bool v3; // zf
  _QWORD v4[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v5; // [rsp+60h] [rbp+8h] BYREF
  int v6; // [rsp+68h] [rbp+10h] BYREF

  if ( *(_QWORD *)this )
  {
    DCOBJ::DCOBJ((DCOBJ *)v4);
    v2 = *(_QWORD *)this;
    *(_QWORD *)this = 0LL;
    v3 = *((_DWORD *)this + 4) == 0;
    v4[0] = v2;
    if ( v3 )
    {
      v5 = 0x400000;
      bDeleteDCOBJ((struct XDCOBJ *)v4, &v5, &v6);
    }
    DCOBJ::~DCOBJ((DCOBJ *)v4);
  }
}
