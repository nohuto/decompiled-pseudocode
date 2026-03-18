/*
 * XREFs of ?ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z @ 0x1C0274EDC
 * Callers:
 *     OutputDuplRemoteSessionReconnected @ 0x1C0276E14 (OutputDuplRemoteSessionReconnected.c)
 * Callees:
 *     ?QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z @ 0x1C014C380 (-QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z.c)
 *     ?CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ @ 0x1C016DBD0 (-CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ.c)
 *     ?DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ @ 0x1C0271FEC (-DestroySourceContextLists@OUTPUTDUPL_MGR@@AEAAXXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::ReconfigureNumSources(OUTPUTDUPL_MGR *this, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 result; // rax
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax

  v3 = a2;
  if ( *((_DWORD *)this + 12) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v5 + 24) = 2491LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( v3 <= 0x10 )
  {
    v8 = 0;
    if ( *((_DWORD *)this + 13) )
    {
      while ( !(unsigned int)OUTPUTDUPL_MGR::QueryActiveContextCount(this, v8) )
      {
        if ( ++v8 >= *((_DWORD *)this + 13) )
          goto LABEL_8;
      }
      v13 = WdLogNewEntry5_WdAssertion(v10, v9);
      *(_QWORD *)(v13 + 24) = 2505LL;
      WdLogEvent5_WdAssertion(v13);
      return 3223192386LL;
    }
    else
    {
LABEL_8:
      OUTPUTDUPL_MGR::DestroySourceContextLists(this);
      *((_DWORD *)this + 13) = v3;
      result = OUTPUTDUPL_MGR::CreateSourceContextLists(this, v11, v12);
      if ( (int)result < 0 )
        *((_DWORD *)this + 13) = 0;
    }
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v6 + 24) = 16LL;
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  return result;
}
