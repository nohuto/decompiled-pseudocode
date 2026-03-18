/*
 * XREFs of ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C0243B38
 * Callers:
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C023C8AC (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     McTemplateK0ppqq @ 0x1C003CAF4 (McTemplateK0ppqq.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C013B158 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1C023C038 (-AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z.c)
 *     ?GetAdapterLuid@OUTPUTDUPL_MGR@@QEAA?AU_LUID@@XZ @ 0x1C023CE24 (-GetAdapterLuid@OUTPUTDUPL_MGR@@QEAA-AU_LUID@@XZ.c)
 *     ?Initialize@DXGDXGIKEYEDMUTEX@@QEAAJPEAX@Z @ 0x1C023D78C (-Initialize@DXGDXGIKEYEDMUTEX@@QEAAJPEAX@Z.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C023E404 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ??0DDAMetaData@@QEAA@II@Z @ 0x1C0242C38 (--0DDAMetaData@@QEAA@II@Z.c)
 *     ?Initialize@DDAMetaData@@QEAAHII@Z @ 0x1C0243A40 (-Initialize@DDAMetaData@@QEAAHII@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::Initialize(OUTPUTDUPL_CONTEXT *this, const struct _D3DKMT_CREATE_OUTPUTDUPL *a2)
{
  __int64 v4; // rcx
  DXGSESSIONMGR *v5; // rdi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v8; // rax
  struct DXGFASTMUTEX **v10; // rdi
  struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *v11; // r8
  __int64 *AdapterLuid; // rax
  __int64 v13; // rdx
  unsigned int v14; // ebp
  UINT KeyedMutexCount; // eax
  char *v16; // rax
  __int64 v17; // rcx
  DXGDXGIKEYEDMUTEX *v18; // rdi
  __int64 v19; // rcx
  int v20; // edi
  const GUID *v21; // r8
  __int64 v22; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // ebp
  _QWORD *i; // r14
  DDAMetaData *v29; // rax
  DDAMetaData *v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rcx
  const GUID *v33; // r8
  _QWORD *v34; // rdi
  __int64 v35; // rax
  _QWORD v36[2]; // [rsp+40h] [rbp-48h] BYREF
  int v37; // [rsp+50h] [rbp-38h]
  char v38; // [rsp+A0h] [rbp+18h] BYREF

  v5 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this) + 77);
  if ( v5 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v4);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v5, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v8 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v8 + 24) = 1226LL;
LABEL_6:
    WdLogEvent5_WdError(v8);
    return 3221225485LL;
  }
  v10 = (struct DXGFASTMUTEX **)*((_QWORD *)SessionDataForSpecifiedSession + 1);
  if ( !v10 )
  {
    v8 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v8 + 24) = 1233LL;
    goto LABEL_6;
  }
  v11 = 0LL;
  *((_DWORD *)this + 4) = a2->VidPnSourceId;
  if ( *((_DWORD *)this + 81) && !*((_DWORD *)this + 82) )
  {
    AdapterLuid = (__int64 *)OUTPUTDUPL_MGR::GetAdapterLuid(*((OUTPUTDUPL_MGR **)this + 37), (__int64)&v38);
    v11 = (struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *)v36;
    v13 = *AdapterLuid;
    v37 = *((_DWORD *)this + 4);
    v36[0] = *((_QWORD *)this + 4);
    v36[1] = v13;
  }
  if ( !(unsigned int)OUTPUTDUPL_SESSION_MGR::AddRef(v10, *((struct _EPROCESS **)this + 3), v11) )
    return 3221225643LL;
  v14 = 0;
  *((_DWORD *)this + 76) = 1;
  KeyedMutexCount = a2->KeyedMutexCount;
  *((_DWORD *)this + 10) = KeyedMutexCount;
  if ( KeyedMutexCount )
  {
    while ( 1 )
    {
      v16 = (char *)operator new(0x90uLL, 0x674D444Fu, PagedPool);
      v18 = (DXGDXGIKEYEDMUTEX *)v16;
      if ( v16 )
      {
        *(_QWORD *)v16 = 0LL;
        *((_QWORD *)v16 + 1) = 0LL;
        *((_QWORD *)v16 + 11) = 0LL;
        *((_DWORD *)v16 + 24) = 0;
        *((_QWORD *)v16 + 13) = 0LL;
        *((_QWORD *)v16 + 14) = 0LL;
        *((_QWORD *)v16 + 15) = 0LL;
        *((_DWORD *)v16 + 32) = 0;
        memset(v16 + 16, 0, 0x48uLL);
      }
      else
      {
        v18 = 0LL;
      }
      *((_QWORD *)this + v14 + 6) = v18;
      if ( !v18 )
        goto LABEL_46;
      v20 = DXGDXGIKEYEDMUTEX::Initialize(v18, a2->KeyedMutexs[v14].hSharedSurfaceNt);
      if ( v20 < 0 )
        break;
      v20 = DXGDXGIKEYEDMUTEX::OpenLocalMutex(*((_QWORD *)this + v14 + 6), 1, v21);
      if ( v20 < 0 )
      {
        v26 = WdLogNewEntry5_WdError(v22);
        *(_QWORD *)(v26 + 24) = 1284LL;
LABEL_26:
        WdLogEvent5_WdError(v26);
        return (unsigned int)v20;
      }
      if ( ++v14 >= *((_DWORD *)this + 10) )
        goto LABEL_22;
    }
    v26 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v26 + 24) = 1277LL;
    goto LABEL_26;
  }
LABEL_22:
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
    v25 = *((_QWORD *)Current + 13);
  else
    v25 = 0LL;
  if ( !v25 )
  {
    v8 = WdLogNewEntry5_WdError(v24);
    *(_QWORD *)(v8 + 24) = 1293LL;
    goto LABEL_6;
  }
  v27 = 0;
  for ( i = (_QWORD *)((char *)this + 160); ; i += 12 )
  {
    v29 = (DDAMetaData *)operator new(0x50uLL, 0x674D444Fu, PagedPool);
    v30 = v29 ? DDAMetaData::DDAMetaData(v29) : 0LL;
    *(i - 10) = v30;
    if ( !v30 || !(unsigned int)DDAMetaData::Initialize(v30) )
      break;
    v31 = operator new(0x10uLL, 0x674D444Fu, PagedPool);
    v34 = v31;
    if ( v31 )
    {
      *v31 = 0LL;
      v31[1] = 0LL;
      AUTOEXPANDALLOCATION::GetBuffer((AUTOEXPANDALLOCATION *)v31, 0x4000u, 0);
    }
    else
    {
      v34 = 0LL;
    }
    *i = v34;
    if ( !v34 || !*v34 )
    {
      v35 = WdLogNewEntry5_WdLowResource(v32);
      *(_QWORD *)(v35 + 24) = 0x4000LL;
      *(_QWORD *)(v35 + 32) = a2->VidPnSourceId;
      goto LABEL_47;
    }
    if ( (unsigned int)++v27 >= 2 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0ppqq(
          a2->hAdapter,
          &EventOutputDuplicationCreate,
          v33,
          this,
          a2->hAdapter,
          a2->VidPnSourceId,
          a2->KeyedMutexCount);
      return 0LL;
    }
  }
LABEL_46:
  v35 = WdLogNewEntry5_WdLowResource(v17);
  *(_QWORD *)(v35 + 24) = a2->VidPnSourceId;
LABEL_47:
  WdLogEvent5_WdLowResource(v35);
  return 3221225495LL;
}
