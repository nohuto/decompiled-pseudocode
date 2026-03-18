/*
 * XREFs of EngDeleteRgn @ 0x1C012EC40
 * Callers:
 *     <none>
 * Callees:
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0018B70 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     GreGetObjectOwner @ 0x1C00220F0 (GreGetObjectOwner.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C0027430 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C002A944 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C00BCC64 (--0EngModeState@@QEAA@XZ.c)
 */

void __stdcall EngDeleteRgn(HANDLE hrgn)
{
  struct OBJECT *v2[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v3; // [rsp+50h] [rbp+8h] BYREF

  EngModeState::EngModeState((EngModeState *)&v3);
  if ( !(unsigned int)GreGetObjectOwner((unsigned int)hrgn, 4) )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v2, (HRGN)hrgn, 1);
    if ( v2[0] )
      RGNOBJAPI::bDeleteRGNOBJAPI(v2);
    RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v2);
  }
  if ( v3 )
    *(_DWORD *)(v3 + 328) &= ~0x10u;
}
