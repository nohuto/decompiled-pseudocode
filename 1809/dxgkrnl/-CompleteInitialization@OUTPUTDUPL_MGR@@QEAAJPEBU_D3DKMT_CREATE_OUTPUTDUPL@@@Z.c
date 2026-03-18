/*
 * XREFs of ?CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C023C794
 * Callers:
 *     DxgkCreateOutputDupl @ 0x1C023FEC0 (DxgkCreateOutputDupl.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIST@@PEAU_EPROCESS@@PEAI@Z @ 0x1C023CD5C (-FindContextForProcess@OUTPUTDUPL_MGR@@AEAAPEAPEAVOUTPUTDUPL_CONTEXT@@PEAU_OUTPUTDUPL_CONTEXTLIS.c)
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
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int CurrentProcessSessionId; // ebx
  unsigned int v11; // ebx
  _BYTE v13[16]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v14[10]; // [rsp+40h] [rbp-28h] BYREF

  v3 = *((_QWORD *)this + 2) + 32LL * a2->VidPnSourceId;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, *(struct DXGFASTMUTEX *const *)v3, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v5, v4);
  ContextForProcess = OUTPUTDUPL_MGR::FindContextForProcess(
                        this,
                        (struct _OUTPUTDUPL_CONTEXTLIST *)v3,
                        CurrentProcess,
                        0LL);
  if ( ContextForProcess )
  {
    *((_DWORD *)*ContextForProcess + 79) = 1;
    v8 = *(unsigned int *)(v3 + 24);
    if ( (unsigned int)v8 >= *((_DWORD *)this + 2) )
    {
      v9 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v9 + 24) = 1618LL;
      WdLogEvent5_WdAssertion(v9);
      v8 = *(unsigned int *)(v3 + 24);
    }
    *(_DWORD *)(v3 + 24) = v8 + 1;
    if ( !(_DWORD)v8 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8);
      memset(v14, 0, 0x20uLL);
      v14[0] = 15;
      SMgrGdiCallout(v14, CurrentProcessSessionId, 0LL, 0LL, 0LL, 0LL);
    }
    v11 = 0;
  }
  else
  {
    v11 = -1073741275;
  }
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  return v11;
}
