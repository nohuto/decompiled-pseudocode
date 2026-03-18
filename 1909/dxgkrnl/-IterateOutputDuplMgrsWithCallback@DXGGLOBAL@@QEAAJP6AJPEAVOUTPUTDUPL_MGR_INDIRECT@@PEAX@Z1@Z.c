/*
 * XREFs of ?IterateOutputDuplMgrsWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVOUTPUTDUPL_MGR_INDIRECT@@PEAX@Z1@Z @ 0x1C0125140
 * Callers:
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C0114BB0 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ?IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z @ 0x1C01250B4 (-IterateOutputDuplMgrsForRender@ADAPTER_DISPLAY@@QEAAJP6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z1@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGGLOBAL::IterateOutputDuplMgrsWithCallback(
        DXGGLOBAL *this,
        int (*a2)(struct OUTPUTDUPL_MGR_INDIRECT *, void *),
        void *a3)
{
  _QWORD **v4; // rsi
  _QWORD *i; // rbx
  int v7; // edi
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = (_QWORD **)((char *)this + 1208);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (DXGGLOBAL *)((char *)this + 1168), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  for ( i = *v4; i != v4 && i; i = (_QWORD *)*i )
  {
    v7 = ((__int64 (__fastcall *)(_QWORD *, void *))a2)(i, a3);
    if ( v7 < 0 )
      goto LABEL_4;
  }
  v7 = 0;
LABEL_4:
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
  return (unsigned int)v7;
}
