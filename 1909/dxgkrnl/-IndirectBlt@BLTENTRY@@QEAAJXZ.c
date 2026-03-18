/*
 * XREFs of ?IndirectBlt@BLTENTRY@@QEAAJXZ @ 0x1C027C328
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C0145D84 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x1C027B738 (-CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z.c)
 *     ?SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ @ 0x1C027E384 (-SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ.c)
 */

__int64 __fastcall BLTENTRY::IndirectBlt(LARGE_INTEGER *this)
{
  unsigned int v2; // ebx
  BLTQUEUE *QuadPart; // rcx
  LARGE_INTEGER v4; // rax
  BLTQUEUE *v5; // rcx
  union _LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  this[68] = PerformanceCounter;
  if ( (this[8].LowPart & 8) == 0 )
  {
    QuadPart = (BLTQUEUE *)this[3].QuadPart;
    if ( !*((_DWORD *)QuadPart + 656) )
      v2 = BLTQUEUE::CompletePresentIndirectInternal(QuadPart, (struct BLTENTRY *)this, &PerformanceCounter);
  }
  v4 = KeQueryPerformanceCounter(0LL);
  v5 = (BLTQUEUE *)this[3].QuadPart;
  this[69] = v4;
  BLTQUEUE::SetVisibilityIfDeferred(v5);
  return v2;
}
