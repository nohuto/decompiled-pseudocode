/*
 * XREFs of Win32CreateSection @ 0x1C005FB08
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C002D110 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     HmgCreate @ 0x1C005D050 (HmgCreate.c)
 *     ?ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z @ 0x1C0112A5C (-ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z.c)
 *     ?AllocateKernelSection@@YAJKKPEAPEAX@Z @ 0x1C0125268 (-AllocateKernelSection@@YAJKKPEAPEAX@Z.c)
 *     ?AllocateSharedSection@@YAJKKPEAPEAX00@Z @ 0x1C0125320 (-AllocateSharedSection@@YAJKKPEAPEAX00@Z.c)
 *     EngAllocSectionMem @ 0x1C01308F0 (EngAllocSectionMem.c)
 *     InitCreateSharedSection @ 0x1C0267138 (InitCreateSharedSection.c)
 *     InitKernelHandleTable @ 0x1C0267290 (InitKernelHandleTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32CreateSection(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int Section; // ebx

  Section = MmCreateSection(a1, a2, 0LL, a4, 4, a6, 0LL, 0LL);
  if ( Section >= 0 )
    ObDeleteCapturedInsertInfo(*a1);
  return (unsigned int)Section;
}
