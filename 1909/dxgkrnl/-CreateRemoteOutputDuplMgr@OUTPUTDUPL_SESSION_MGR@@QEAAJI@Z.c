/*
 * XREFs of ?CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z @ 0x1C0271F0C
 * Callers:
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0272138 (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C016DA3C (-CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_SESSION_MGR::CreateRemoteOutputDuplMgr(struct DXGFASTMUTEX *const *this, unsigned int a2)
{
  struct OUTPUTDUPL_MGR **v4; // rbx
  unsigned int OutputDuplManager; // ebx
  _BYTE v7[24]; // [rsp+30h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, this[4], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  v4 = (struct OUTPUTDUPL_MGR **)(this + 5);
  if ( *v4 )
    OutputDuplManager = 0;
  else
    OutputDuplManager = CreateOutputDuplManager(a2, 0LL, 0LL, 0LL, v4);
  if ( v7[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
  return OutputDuplManager;
}
