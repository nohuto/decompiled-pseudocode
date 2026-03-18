/*
 * XREFs of ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C0278F4C
 * Callers:
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0271504 (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     McTemplateK0ppqq @ 0x1C0043354 (McTemplateK0ppqq.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00F39C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C014B958 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1C0270D18 (-AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z.c)
 *     ?GetAdapterLuid@OUTPUTDUPL_MGR@@QEAA?AU_LUID@@XZ @ 0x1C0272044 (-GetAdapterLuid@OUTPUTDUPL_MGR@@QEAA-AU_LUID@@XZ.c)
 *     ?Initialize@DXGDXGIKEYEDMUTEX@@QEAAJPEAX@Z @ 0x1C0272A04 (-Initialize@DXGDXGIKEYEDMUTEX@@QEAAJPEAX@Z.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C027371C (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ??0DDAMetaData@@QEAA@II@Z @ 0x1C0278050 (--0DDAMetaData@@QEAA@II@Z.c)
 *     ?Initialize@DDAMetaData@@QEAAHII@Z @ 0x1C0278E54 (-Initialize@DDAMetaData@@QEAAHII@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::Initialize(OUTPUTDUPL_CONTEXT *this, const struct _D3DKMT_CREATE_OUTPUTDUPL *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  DXGSESSIONMGR *v6; // rdi
  __int64 v7; // r8
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v10; // rax
  struct DXGFASTMUTEX **v12; // rdi
  struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *v13; // r8
  __int64 *AdapterLuid; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // ebp
  UINT KeyedMutexCount; // eax
  char *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  DXGDXGIKEYEDMUTEX *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // edi
  const GUID *v29; // r8
  __int64 v30; // r8
  struct DXGPROCESS *Current; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // ebp
  _QWORD *i; // r14
  DDAMetaData *v39; // rax
  DDAMetaData *v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  const GUID *v44; // r8
  __int64 v45; // r9
  _QWORD *v46; // rdi
  __int64 v47; // rax
  __int64 v48; // [rsp+40h] [rbp-48h] BYREF
  __int64 v49; // [rsp+48h] [rbp-40h]
  __int64 v50; // [rsp+50h] [rbp-38h]
  char v51; // [rsp+A0h] [rbp+18h] BYREF

  v6 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 74);
  if ( v6 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v5, v4);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v6, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v10 = WdLogNewEntry5_WdError(v5, v4, v7);
    *(_QWORD *)(v10 + 24) = 1226LL;
LABEL_6:
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
  v12 = (struct DXGFASTMUTEX **)*((_QWORD *)SessionDataForSpecifiedSession + 1);
  if ( !v12 )
  {
    v10 = WdLogNewEntry5_WdError(v5, v4, v7);
    *(_QWORD *)(v10 + 24) = 1233LL;
    goto LABEL_6;
  }
  v13 = 0LL;
  *((_DWORD *)this + 4) = a2->VidPnSourceId;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  if ( *((_DWORD *)this + 81) && !*((_DWORD *)this + 82) )
  {
    AdapterLuid = (__int64 *)OUTPUTDUPL_MGR::GetAdapterLuid(*((OUTPUTDUPL_MGR **)this + 37), (__int64)&v51);
    v13 = (struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *)&v48;
    v15 = *AdapterLuid;
    LODWORD(v50) = *((_DWORD *)this + 4);
    v48 = *((_QWORD *)this + 4);
    v49 = v15;
  }
  if ( !(unsigned int)OUTPUTDUPL_SESSION_MGR::AddRef(v12, *((struct _EPROCESS **)this + 3), v13) )
    return 3221225643LL;
  v18 = 0;
  *((_DWORD *)this + 76) = 1;
  KeyedMutexCount = a2->KeyedMutexCount;
  *((_DWORD *)this + 10) = KeyedMutexCount;
  if ( KeyedMutexCount )
  {
    while ( 1 )
    {
      v20 = (char *)operator new[](0x90uLL, 0x674D444Fu, PagedPool);
      v25 = (DXGDXGIKEYEDMUTEX *)v20;
      if ( v20 )
      {
        *(_QWORD *)v20 = 0LL;
        *((_QWORD *)v20 + 1) = 0LL;
        *((_QWORD *)v20 + 11) = 0LL;
        *((_DWORD *)v20 + 24) = 0;
        *((_QWORD *)v20 + 13) = 0LL;
        *((_QWORD *)v20 + 14) = 0LL;
        *((_QWORD *)v20 + 15) = 0LL;
        *((_DWORD *)v20 + 32) = 0;
        memset(v20 + 16, 0, 0x48uLL);
      }
      else
      {
        v25 = 0LL;
      }
      *((_QWORD *)this + v18 + 6) = v25;
      if ( !v25 )
        goto LABEL_46;
      v28 = DXGDXGIKEYEDMUTEX::Initialize(v25, a2->KeyedMutexs[v18].hSharedSurfaceNt);
      if ( v28 < 0 )
        break;
      v28 = DXGDXGIKEYEDMUTEX::OpenLocalMutex(*((_QWORD *)this + v18 + 6), 1, v29);
      if ( v28 < 0 )
      {
        v36 = WdLogNewEntry5_WdError(v17, v16, v30);
        *(_QWORD *)(v36 + 24) = 1284LL;
LABEL_26:
        WdLogEvent5_WdError(v36);
        return (unsigned int)v28;
      }
      if ( ++v18 >= *((_DWORD *)this + 10) )
        goto LABEL_22;
    }
    v36 = WdLogNewEntry5_WdError(v27, v26, v29);
    *(_QWORD *)(v36 + 24) = 1277LL;
    goto LABEL_26;
  }
LABEL_22:
  Current = DXGPROCESS::GetCurrent(v17, v16);
  if ( Current )
    v35 = *((_QWORD *)Current + 12);
  else
    v35 = 0LL;
  if ( !v35 )
  {
    v10 = WdLogNewEntry5_WdError(v33, v32, v34);
    *(_QWORD *)(v10 + 24) = 1293LL;
    goto LABEL_6;
  }
  v37 = 0;
  for ( i = (_QWORD *)((char *)this + 160); ; i += 12 )
  {
    v39 = (DDAMetaData *)operator new[](0x50uLL, 0x674D444Fu, PagedPool);
    v40 = v39 ? DDAMetaData::DDAMetaData(v39, v21) : 0LL;
    *(i - 10) = v40;
    if ( !v40 || !(unsigned int)DDAMetaData::Initialize(v40) )
      break;
    v41 = operator new[](0x10uLL, 0x674D444Fu, PagedPool);
    v46 = v41;
    if ( v41 )
    {
      *v41 = 0LL;
      v41[1] = 0LL;
      AUTOEXPANDALLOCATION::GetBuffer((AUTOEXPANDALLOCATION *)v41, 0x4000u, 0);
    }
    else
    {
      v46 = 0LL;
    }
    *i = v46;
    if ( !v46 || !*v46 )
    {
      v47 = WdLogNewEntry5_WdLowResource(v43, v42, v44, v45);
      *(_QWORD *)(v47 + 24) = 0x4000LL;
      *(_QWORD *)(v47 + 32) = a2->VidPnSourceId;
      goto LABEL_47;
    }
    if ( (unsigned int)++v37 >= 2 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0ppqq(
          a2->hAdapter,
          &EventOutputDuplicationCreate,
          v44,
          this,
          a2->hAdapter,
          a2->VidPnSourceId,
          a2->KeyedMutexCount);
      return 0LL;
    }
  }
LABEL_46:
  v47 = WdLogNewEntry5_WdLowResource(v22, v21, v23, v24);
  *(_QWORD *)(v47 + 24) = a2->VidPnSourceId;
LABEL_47:
  WdLogEvent5_WdLowResource(v47);
  return 3221225495LL;
}
