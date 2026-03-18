/*
 * XREFs of Win32CreateSection @ 0x1C0068E58
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C003EE00 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ?ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z @ 0x1C00B1F7C (-ReserveUserSessionViewsWorker@@YAJPEAPEAX0@Z.c)
 *     ?AllocateKernelSection@@YAJKKPEAPEAX@Z @ 0x1C00C21E0 (-AllocateKernelSection@@YAJKKPEAPEAX@Z.c)
 *     ?AllocateSharedSection@@YAJKKPEAPEAX00@Z @ 0x1C00C228C (-AllocateSharedSection@@YAJKKPEAPEAX00@Z.c)
 *     HmgCreate @ 0x1C00C2B84 (HmgCreate.c)
 *     EngAllocSectionMem @ 0x1C00D86F0 (EngAllocSectionMem.c)
 *     InitCreateSharedSection @ 0x1C01F22B0 (InitCreateSharedSection.c)
 *     InitKernelHandleTable @ 0x1C01F29D0 (InitKernelHandleTable.c)
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
