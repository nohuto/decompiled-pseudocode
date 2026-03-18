/*
 * XREFs of ?TriggerLowBoxActiveContextWNF@OUTPUTDUPL_SESSION_MGR@@AEAAJXZ @ 0x1C027513C
 * Callers:
 *     ?AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1C0270D18 (-AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z.c)
 *     ?Release@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1C0274A44 (-Release@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OUTPUTDUPL_SESSION_MGR::TriggerLowBoxActiveContextWNF(OUTPUTDUPL_SESSION_MGR *this, __int64 a2)
{
  int updated; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbx
  __int64 v8; // rax
  int CurrentProcessSessionId; // [rsp+50h] [rbp+8h] BYREF

  CurrentProcessSessionId = PsGetCurrentProcessSessionId(this, a2);
  updated = ZwUpdateWnfStateData(
              &WNF_DX_MODERN_OUTPUTDUPLICATION_CONTEXTS,
              (char *)this + 48,
              392LL,
              0LL,
              &CurrentProcessSessionId,
              0,
              0);
  v7 = updated;
  if ( updated < 0 )
  {
    v8 = WdLogNewEntry5_WdError(v5, v4, v6);
    *(_QWORD *)(v8 + 24) = v7;
    WdLogEvent5_WdError(v8);
  }
  return (unsigned int)v7;
}
