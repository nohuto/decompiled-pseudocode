/*
 * XREFs of ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C0153EE4
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0153678 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z @ 0x1C023CB8C (-CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0OUTPUTDUPL_MGR_INDIRECT@@QEAA@U_LUID@@0I@Z @ 0x1C003F1C8 (--0OUTPUTDUPL_MGR_INDIRECT@@QEAA@U_LUID@@0I@Z.c)
 *     ??_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z @ 0x1C003F2C0 (--_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z.c)
 *     ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1C0153FB8 (-Initialize@OUTPUTDUPL_MGR@@QEAAJXZ.c)
 */

__int64 __fastcall CreateOutputDuplManager(
        __int64 a1,
        struct ADAPTER_DISPLAY *a2,
        struct _LUID *a3,
        struct _LUID *a4,
        struct OUTPUTDUPL_MGR **a5)
{
  unsigned int v8; // ebp
  char *v9; // rax
  __int128 v10; // rcx
  _QWORD *v11; // rax
  __int64 result; // rax
  unsigned int v13; // edi
  __int64 v14; // rax
  OUTPUTDUPL_MGR_INDIRECT *v15; // rax
  OUTPUTDUPL_MGR_INDIRECT *v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax

  v8 = a1;
  if ( a5 )
  {
    *a5 = 0LL;
    if ( a4 && a3 )
    {
      v15 = (OUTPUTDUPL_MGR_INDIRECT *)operator new(0x78uLL, 0x674D444Fu, PagedPool);
      if ( v15 )
        v16 = OUTPUTDUPL_MGR_INDIRECT::OUTPUTDUPL_MGR_INDIRECT(v15, *a4, *a3, v8);
      else
        v16 = 0LL;
      v17 = (unsigned __int64)v16 + 24;
      v10 = -(__int128)(unsigned __int64)v16;
      *((_QWORD *)&v10 + 1) &= v17;
    }
    else
    {
      v9 = (char *)operator new(0x50uLL, 0x674D444Fu, PagedPool);
      *((_QWORD *)&v10 + 1) = v9;
      if ( v9 )
      {
        *((_DWORD *)v9 + 2) = 0;
        *((_QWORD *)v9 + 2) = 0LL;
        *((_QWORD *)v9 + 3) = 0LL;
        *((_QWORD *)v9 + 7) = 0LL;
        *((_QWORD *)v9 + 8) = 0LL;
        *(_QWORD *)v9 = a2;
        *((_DWORD *)v9 + 12) = 1;
        *((_DWORD *)v9 + 13) = v8;
        v9[72] = 0;
        v11 = v9 + 32;
        v11[1] = v11;
        *v11 = v11;
      }
      else
      {
        *((_QWORD *)&v10 + 1) = 0LL;
      }
    }
    if ( *((_QWORD *)&v10 + 1) )
    {
      result = OUTPUTDUPL_MGR::Initialize(*((OUTPUTDUPL_MGR **)&v10 + 1));
      v13 = result;
      if ( (int)result < 0 )
      {
        v19 = WdLogNewEntry5_WdError(v10);
        *(_QWORD *)(v19 + 24) = a2;
        WdLogEvent5_WdError(v19);
        OUTPUTDUPL_MGR::`scalar deleting destructor'(*((OUTPUTDUPL_MGR **)&v10 + 1));
        return v13;
      }
      else
      {
        *a5 = (struct OUTPUTDUPL_MGR *)*((_QWORD *)&v10 + 1);
      }
    }
    else
    {
      v18 = WdLogNewEntry5_WdLowResource(v10);
      *(_QWORD *)(v18 + 24) = a2;
      WdLogEvent5_WdLowResource(v18);
      return 3221225495LL;
    }
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v14 + 24) = 0LL;
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
  return result;
}
