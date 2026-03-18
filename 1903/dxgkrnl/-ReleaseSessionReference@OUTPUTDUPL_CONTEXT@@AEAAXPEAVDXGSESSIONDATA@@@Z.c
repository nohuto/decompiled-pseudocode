/*
 * XREFs of ?ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C027AB20
 * Callers:
 *     ??1OUTPUTDUPL_CONTEXT@@QEAA@XZ @ 0x1C02781A4 (--1OUTPUTDUPL_CONTEXT@@QEAA@XZ.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1C02792B4 (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
 * Callees:
 *     ?GetAdapterLuid@OUTPUTDUPL_MGR@@QEAA?AU_LUID@@XZ @ 0x1C0272044 (-GetAdapterLuid@OUTPUTDUPL_MGR@@QEAA-AU_LUID@@XZ.c)
 *     ?Release@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1C0274A44 (-Release@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z.c)
 */

void __fastcall OUTPUTDUPL_CONTEXT::ReleaseSessionReference(OUTPUTDUPL_MGR **this, struct DXGSESSIONDATA *a2)
{
  struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *v2; // r8
  __int64 v4; // rax
  struct DXGFASTMUTEX **v5; // rdi
  __int64 *AdapterLuid; // rax
  __int64 v7; // rdx
  OUTPUTDUPL_MGR *v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]
  char v11; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0LL;
  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdError(this, 0LL, 0LL);
    *(_QWORD *)(v4 + 24) = 2499LL;
LABEL_5:
    WdLogEvent5_WdError(v4);
    return;
  }
  v5 = (struct DXGFASTMUTEX **)*((_QWORD *)a2 + 1);
  if ( !v5 )
  {
    v4 = WdLogNewEntry5_WdError(this, a2, 0LL);
    *(_QWORD *)(v4 + 24) = 2506LL;
    goto LABEL_5;
  }
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( *((_DWORD *)this + 81) )
  {
    if ( !*((_DWORD *)this + 82) )
    {
      AdapterLuid = (__int64 *)OUTPUTDUPL_MGR::GetAdapterLuid(this[37], (__int64)&v11);
      v2 = (struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *)&v8;
      v7 = *AdapterLuid;
      LODWORD(v10) = *((_DWORD *)this + 4);
      v8 = this[4];
      v9 = v7;
    }
  }
  OUTPUTDUPL_SESSION_MGR::Release(v5, this[3], v2);
}
