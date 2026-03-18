/*
 * XREFs of ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C0031CA8
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0032330 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00483C0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 * Callees:
 *     EngFreeUserMem @ 0x1C003C200 (EngFreeUserMem.c)
 */

void __fastcall PDEVOBJ::vDeleteHTPATSIZEUSERAllocations(PDEVOBJ *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( (*(_DWORD *)(v2 + 40) & 0x400000) != 0 )
  {
    EngFreeUserMem(*(PVOID *)(v2 + 2408));
    EngFreeUserMem(*(PVOID *)(*(_QWORD *)this + 2416LL));
    EngFreeUserMem(*(PVOID *)(*(_QWORD *)this + 2424LL));
  }
}
