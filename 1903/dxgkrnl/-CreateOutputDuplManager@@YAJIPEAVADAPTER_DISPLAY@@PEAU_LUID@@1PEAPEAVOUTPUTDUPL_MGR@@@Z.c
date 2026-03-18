/*
 * XREFs of ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C0169C4C
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C016938C (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z @ 0x1C02717E4 (-CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0OUTPUTDUPL_MGR_INDIRECT@@QEAA@U_LUID@@0I@Z @ 0x1C0045EFC (--0OUTPUTDUPL_MGR_INDIRECT@@QEAA@U_LUID@@0I@Z.c)
 *     ??_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z @ 0x1C0045FA0 (--_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z.c)
 *     ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1C0169D20 (-Initialize@OUTPUTDUPL_MGR@@QEAAJXZ.c)
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
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int128 v13; // rcx
  _QWORD *v14; // rax
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned int v18; // edi
  __int64 v19; // rax
  OUTPUTDUPL_MGR_INDIRECT *v20; // rax
  OUTPUTDUPL_MGR_INDIRECT *v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax

  v8 = a1;
  if ( a5 )
  {
    *a5 = 0LL;
    if ( a4 && a3 )
    {
      v20 = (OUTPUTDUPL_MGR_INDIRECT *)operator new[](0x78uLL, 0x674D444Fu, PagedPool);
      if ( v20 )
        v21 = OUTPUTDUPL_MGR_INDIRECT::OUTPUTDUPL_MGR_INDIRECT(v20, *a4, *a3, v8);
      else
        v21 = 0LL;
      v22 = (unsigned __int64)v21 + 24;
      v13 = -(__int128)(unsigned __int64)v21;
      *((_QWORD *)&v13 + 1) &= v22;
    }
    else
    {
      v9 = (char *)operator new[](0x50uLL, 0x674D444Fu, PagedPool);
      *((_QWORD *)&v13 + 1) = v9;
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
        v14 = v9 + 32;
        v14[1] = v14;
        *v14 = v14;
      }
      else
      {
        *((_QWORD *)&v13 + 1) = 0LL;
      }
    }
    if ( *((_QWORD *)&v13 + 1) )
    {
      result = OUTPUTDUPL_MGR::Initialize(*((OUTPUTDUPL_MGR **)&v13 + 1));
      v18 = result;
      if ( (int)result < 0 )
      {
        v24 = WdLogNewEntry5_WdError(v13, v16, v17);
        *(_QWORD *)(v24 + 24) = a2;
        WdLogEvent5_WdError(v24);
        OUTPUTDUPL_MGR::`scalar deleting destructor'(*((OUTPUTDUPL_MGR **)&v13 + 1));
        return v18;
      }
      else
      {
        *a5 = (struct OUTPUTDUPL_MGR *)*((_QWORD *)&v13 + 1);
      }
    }
    else
    {
      v23 = WdLogNewEntry5_WdLowResource(v13, v10, v11, v12);
      *(_QWORD *)(v23 + 24) = a2;
      WdLogEvent5_WdLowResource(v23);
      return 3221225495LL;
    }
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v19 + 24) = 0LL;
    WdLogEvent5_WdError(v19);
    return 3221225485LL;
  }
  return result;
}
