/*
 * XREFs of ?CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C0271B14
 * Callers:
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0272138 (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x1C02726A4 (-FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIS.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::CompleteInitialization(
        OUTPUTDUPL_MGR *this,
        const struct _D3DKMT_CREATE_OUTPUTDUPL *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _EPROCESS *CurrentProcess; // rax
  struct OUTPUTDUPL_CONTEXT **ContextForProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int CurrentProcessSessionId; // ebx
  unsigned int v12; // ebx
  _BYTE v14[16]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v15[10]; // [rsp+40h] [rbp-28h] BYREF

  v3 = *((_QWORD *)this + 2) + 32LL * a2->VidPnSourceId;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, *(struct DXGFASTMUTEX *const *)v3, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v5, v4);
  ContextForProcess = OUTPUTDUPL_MGR::FindContextForProcess(
                        this,
                        (struct _OUTPUTDUPL_CONTEXTLIST *)v3,
                        CurrentProcess,
                        0LL);
  if ( ContextForProcess )
  {
    *((_DWORD *)*ContextForProcess + 79) = 1;
    v9 = *(unsigned int *)(v3 + 24);
    if ( (unsigned int)v9 >= *((_DWORD *)this + 2) )
    {
      v10 = WdLogNewEntry5_WdAssertion(v9, v8);
      *(_QWORD *)(v10 + 24) = 1639LL;
      WdLogEvent5_WdAssertion(v10);
      v9 = *(unsigned int *)(v3 + 24);
    }
    *(_DWORD *)(v3 + 24) = v9 + 1;
    if ( !(_DWORD)v9 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9, v8);
      memset(v15, 0, 0x20uLL);
      v15[0] = 15;
      SMgrGdiCallout(v15, CurrentProcessSessionId, 0LL, 0LL, 0LL, 0LL);
    }
    v12 = 0;
  }
  else
  {
    v12 = -1073741275;
  }
  if ( v14[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v14);
  return v12;
}
