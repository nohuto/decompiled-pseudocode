/*
 * XREFs of GrePtInRegion @ 0x1C0071910
 * Callers:
 *     NtGdiPtInRegion @ 0x1C00F8B70 (NtGdiPtInRegion.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C001F7F0 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?bInside@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C0071990 (-bInside@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     EngSetLastError @ 0x1C0081C80 (EngSetLastError.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00A9FE0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 */

__int64 __fastcall GrePtInRegion(HRGN a1, LONG a2, LONG a3)
{
  unsigned int v5; // ebx
  _QWORD v7[9]; // [rsp+20h] [rbp-48h] BYREF
  struct _POINTL v8; // [rsp+88h] [rbp+20h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v7, a1, 1, 0);
  v5 = 0;
  if ( v7[0] )
  {
    v8.x = a2;
    v8.y = a3;
    LOBYTE(v5) = (unsigned int)RGNOBJ::bInside((RGNOBJ *)v7, &v8) == 2;
  }
  else
  {
    EngSetLastError(6u);
  }
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v7);
  return v5;
}
