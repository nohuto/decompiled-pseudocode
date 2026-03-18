/*
 * XREFs of ?AddDebugInfo@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C02712DC
 * Callers:
 *     ?GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C0272A64 (-GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

void __fastcall OUTPUTDUPL_SESSION_MGR::AddDebugInfo(
        struct DXGFASTMUTEX *const *this,
        struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *a2)
{
  UINT v4; // edi
  UINT v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rcx
  bool v12; // zf
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  v5 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, this[1], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  v8 = **((_QWORD **)this + 2);
  if ( !v8 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v9 + 24) = 4148LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = *((_DWORD *)this + 1);
  if ( v10 )
  {
    v11 = v10;
    do
    {
      if ( *(_QWORD *)(v8 + 8) && *(_DWORD *)v8 )
      {
        ++v4;
        v5 += *(_DWORD *)v8;
      }
      v8 += 32LL;
      --v11;
    }
    while ( v11 );
  }
  v12 = v13[8] == 0;
  a2->SessionProcessCount = v4;
  a2->SessionActiveConnectionsCount = v5;
  if ( !v12 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
}
