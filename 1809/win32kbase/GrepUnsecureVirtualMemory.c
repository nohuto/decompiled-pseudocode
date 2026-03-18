/*
 * XREFs of GrepUnsecureVirtualMemory @ 0x1C00ABEC0
 * Callers:
 *     ?HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z @ 0x1C006B224 (-HmgAllocateSecureUserMemory@@YAPEAXPEAPEAX@Z.c)
 *     EngAllocUserMemEx @ 0x1C008DD74 (EngAllocUserMemEx.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C009C490 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     EngFreeUserMem @ 0x1C009D8E0 (EngFreeUserMem.c)
 *     ?HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z @ 0x1C00F8D70 (-HmgFreeAllocateSecureUserMemory@@YAXPEAX0@Z.c)
 *     GdiProcessCallout @ 0x1C0108800 (GdiProcessCallout.c)
 * Callees:
 *     <none>
 */

void __fastcall GrepUnsecureVirtualMemory(void *a1)
{
  MmUnsecureVirtualMemory(a1);
}
