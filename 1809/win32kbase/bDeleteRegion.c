/*
 * XREFs of bDeleteRegion @ 0x1C001CC90
 * Callers:
 *     GreDeleteObject @ 0x1C001CBF0 (GreDeleteObject.c)
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C007E7FC (-vCleanupRegions@@YAXK@Z.c)
 * Callees:
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C001CCF0 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C001F7F0 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00A9FE0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

_BOOL8 __fastcall bDeleteRegion(HRGN a1)
{
  BOOL v1; // ebx
  _QWORD v3[9]; // [rsp+20h] [rbp-48h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v3, a1, 0, 0);
  v1 = 0;
  if ( v3[0] && !*(_DWORD *)(v3[0] + 32LL) )
    v1 = RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v3) != 0;
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v3);
  return v1;
}
