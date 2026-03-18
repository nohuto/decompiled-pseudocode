/*
 * XREFs of EngEqualRgn @ 0x1C0107160
 * Callers:
 *     <none>
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C001F7F0 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     GreGetObjectOwner @ 0x1C0020BF0 (GreGetObjectOwner.c)
 *     ?GreEqualRgn@@YAHAEAVRGNOBJAPI@@0@Z @ 0x1C008D45C (-GreEqualRgn@@YAHAEAVRGNOBJAPI@@0@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00A9FE0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00AC228 (--0EngModeState@@QEAA@XZ.c)
 */

BOOL __stdcall EngEqualRgn(HANDLE hrgn1, HANDLE hrgn2)
{
  int v4; // ebx
  _BYTE v6[56]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v7[64]; // [rsp+58h] [rbp-40h] BYREF
  __int64 v8; // [rsp+B0h] [rbp+18h] BYREF

  EngModeState::EngModeState((EngModeState *)&v8);
  if ( (unsigned int)GreGetObjectOwner((unsigned int)hrgn1, 4)
    || (unsigned int)GreGetObjectOwner((unsigned int)hrgn2, 4) )
  {
    v4 = 0;
  }
  else
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v7, (HRGN)hrgn1, 1, 0);
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v6, (HRGN)hrgn2, 1, 0);
    v4 = GreEqualRgn((struct RGNOBJAPI *)v7, (struct RGNOBJAPI *)v6);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v6);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v7);
  }
  if ( v8 )
    *(_BYTE *)(v8 + 331) = 0;
  return v4;
}
