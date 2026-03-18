/*
 * XREFs of ?IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z @ 0x1C01250B4
 * Callers:
 *     OutputDuplProcessTerminate @ 0x1C00D1BF4 (OutputDuplProcessTerminate.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C01240C8 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     OutputDuplProcessDestroyDevice @ 0x1C0124C14 (OutputDuplProcessDestroyDevice.c)
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01F4168 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z @ 0x1C0125140 (-IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::IterateOutputDuplMgrsForRender(
        ADAPTER_DISPLAY *this,
        int (*a2)(struct OUTPUTDUPL_MGR *, void *),
        void *a3)
{
  __int64 v5; // rcx
  __int64 result; // rax
  DXGGLOBAL *Global; // rax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  int (*v10)(struct OUTPUTDUPL_MGR *, void *); // [rsp+28h] [rbp-20h]
  void *v11; // [rsp+30h] [rbp-18h]

  v5 = *((_QWORD *)this + 13);
  if ( !v5 || (result = ((__int64 (__fastcall *)(__int64, void *))a2)(v5, a3), (int)result >= 0) )
  {
    v9 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    v9 = *(_QWORD *)(*((_QWORD *)this + 2) + 276LL);
    v10 = a2;
    v11 = a3;
    Global = DXGGLOBAL::GetGlobal(v9, (__int64)a2);
    return DXGGLOBAL::IterateOutputDuplMgrsWithCallback(
             Global,
             lambda_f082766c36497653ae8a33afcd4107b6_::_lambda_invoker_cdecl_,
             &v9);
  }
  return result;
}
