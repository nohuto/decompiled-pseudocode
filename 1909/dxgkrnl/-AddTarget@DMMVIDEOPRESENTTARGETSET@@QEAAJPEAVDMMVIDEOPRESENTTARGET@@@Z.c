/*
 * XREFs of ?AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C017D038
 * Callers:
 *     ?AddStaticTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C017CEF0 (-AddStaticTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESEN.c)
 *     ?CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C02BB788 (-CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00060CC (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?Add@?$Set@VDMMVIDEOPRESENTTARGET@@@@QEAAEQEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0021E10 (-Add@-$Set@VDMMVIDEOPRESENTTARGET@@@@QEAAEQEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::AddTarget(
        DMMVIDEOPRESENTTARGETSET *this,
        struct DMMVIDEOPRESENTTARGET *a2)
{
  int v2; // ebx
  struct DMMVIDEOPRESENTTARGET *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rax

  v2 = 0;
  if ( !a2 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v13);
  }
  v5 = (struct DMMVIDEOPRESENTTARGET *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById((__int64)this, *((_DWORD *)a2 + 6));
  if ( v5 )
  {
    LOBYTE(v2) = v5 != a2;
    v9 = v2 + 1;
  }
  else
  {
    v7 = Set<DMMVIDEOPRESENTTARGET>::Add((__int64)this, (__int64)a2) != 0 ? 2 : 0;
    v9 = v7 + 1;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      if ( v11 == 1 )
      {
        _InterlockedIncrement((volatile signed __int32 *)a2 + 18);
        return 0LL;
      }
      else
      {
        v14 = WdLogNewEntry5_WdError(v7, v6, v8);
        WdLogEvent5_WdError(v14);
        return 3221225473LL;
      }
    }
    else
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdError(v7, v6, v8);
      v15[3] = *((unsigned int *)a2 + 6);
      v15[4] = a2;
      v15[5] = this;
      WdLogEvent5_WdError(v15);
      return 3223192370LL;
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v16 + 24) = a2;
    *(_QWORD *)(v16 + 32) = this;
    WdLogEvent5_WdError(v16);
    return 3223192344LL;
  }
}
