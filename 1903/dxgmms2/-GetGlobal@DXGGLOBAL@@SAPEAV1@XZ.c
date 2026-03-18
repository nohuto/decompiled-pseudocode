/*
 * XREFs of ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002750
 * Callers:
 *     ?Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0065A58 (-Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C006B72C (--1VIDMM_PROCESS@@QEAA@XZ.c)
 *     VidSchTerminateProcess @ 0x1C006B850 (VidSchTerminateProcess.c)
 *     VidSchCreateProcess @ 0x1C007F700 (VidSchCreateProcess.c)
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C008AD84 (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 */

struct DXGGLOBAL *DXGGLOBAL::GetGlobal(void)
{
  return (struct DXGGLOBAL *)((__int64 (*)(void))DxgCoreInterface[3])();
}
