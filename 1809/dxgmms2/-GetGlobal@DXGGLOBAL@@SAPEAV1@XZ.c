/*
 * XREFs of ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000166C
 * Callers:
 *     VidSchCreateProcess @ 0x1C005EEF0 (VidSchCreateProcess.c)
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1C005F064 (--1VIDMM_PROCESS@@QEAA@XZ.c)
 *     VidSchTerminateProcess @ 0x1C005F180 (VidSchTerminateProcess.c)
 *     ?Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C005F214 (-Init@VIDMM_PROCESS@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C0087578 (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 */

struct DXGGLOBAL *DXGGLOBAL::GetGlobal(void)
{
  return (struct DXGGLOBAL *)((__int64 (*)(void))DxgCoreInterface[3])();
}
