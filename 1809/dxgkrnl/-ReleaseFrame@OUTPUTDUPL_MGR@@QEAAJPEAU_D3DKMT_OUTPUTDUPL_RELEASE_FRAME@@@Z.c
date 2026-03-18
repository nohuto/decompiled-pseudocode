/*
 * XREFs of ?ReleaseFrame@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z @ 0x1C023F858
 * Callers:
 *     _lambda_693db078d59c16956e85dd4c51bec7d2_::_lambda_invoker_cdecl_ @ 0x1C023BCB0 (_lambda_693db078d59c16956e85dd4c51bec7d2_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x1C023CD5C (-FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIS.c)
 *     ?ReleaseFrame@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z @ 0x1C0245394 (-ReleaseFrame@OUTPUTDUPL_CONTEXT@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::ReleaseFrame(OUTPUTDUPL_MGR *this, struct _D3DKMT_OUTPUTDUPL_RELEASE_FRAME *a2)
{
  struct DXGFASTMUTEX **v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  OUTPUTDUPL_CONTEXT **ContextForProcess; // rax
  unsigned int v9; // ebx
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = (struct DXGFASTMUTEX **)(*((_QWORD *)this + 2) + 32LL * a2->VidPnSourceId);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, *v4, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v6, v5);
  ContextForProcess = OUTPUTDUPL_MGR::FindContextForProcess(
                        this,
                        (struct _OUTPUTDUPL_CONTEXTLIST *)v4,
                        CurrentProcess,
                        0LL);
  if ( ContextForProcess )
    v9 = OUTPUTDUPL_CONTEXT::ReleaseFrame(*ContextForProcess, a2);
  else
    v9 = -1073741275;
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
  return v9;
}
