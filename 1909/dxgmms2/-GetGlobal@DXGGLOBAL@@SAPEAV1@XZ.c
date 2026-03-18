/*
 * XREFs of ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002710
 * Callers:
 *     ?Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0065668 (-Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C006B43C (--1VIDMM_PROCESS@@QEAA@XZ.c)
 *     VidSchTerminateProcess @ 0x1C006B560 (VidSchTerminateProcess.c)
 *     VidSchCreateProcess @ 0x1C0080830 (VidSchCreateProcess.c)
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C008C144 (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 */

struct DXGGLOBAL *DXGGLOBAL::GetGlobal(void)
{
  return (struct DXGGLOBAL *)((__int64 (*)(void))DxgCoreInterface[3])();
}
