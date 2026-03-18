/*
 * XREFs of ?AddDebugInfo@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C023BF6C
 * Callers:
 *     ?GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C023D0C8 (-GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

void __fastcall OUTPUTDUPL_SESSION_MGR::AddDebugInfo(
        struct DXGFASTMUTEX *const *this,
        struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *a2)
{
  UINT v4; // edi
  UINT v5; // esi
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned int v9; // eax
  __int64 v10; // rcx
  bool v11; // zf
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  v5 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, this[1], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  v7 = **((_QWORD **)this + 2);
  if ( !v7 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v8 + 24) = 3938LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = *((_DWORD *)this + 1);
  if ( v9 )
  {
    v10 = v9;
    do
    {
      if ( *(_QWORD *)(v7 + 8) && *(_DWORD *)v7 )
      {
        ++v4;
        v5 += *(_DWORD *)v7;
      }
      v7 += 32LL;
      --v10;
    }
    while ( v10 );
  }
  v11 = v12[8] == 0;
  a2->SessionProcessCount = v4;
  a2->SessionActiveConnectionsCount = v5;
  if ( !v11 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
}
