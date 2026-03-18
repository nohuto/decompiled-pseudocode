/*
 * XREFs of ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C00D94F8
 * Callers:
 *     DwmNotifyChildrenAddRemove @ 0x1C00D94B4 (DwmNotifyChildrenAddRemove.c)
 * Callees:
 *     DwmAsyncOwnerChange @ 0x1C0095C18 (DwmAsyncOwnerChange.c)
 *     DwmAsyncChildUnlink @ 0x1C00C8E20 (DwmAsyncChildUnlink.c)
 *     BuildHwndList @ 0x1C00CC820 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00CC9E0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     DwmAsyncChildLink @ 0x1C00D97B0 (DwmAsyncChildLink.c)
 */

__int64 __fastcall DwmNotifyChildrenLinkUnlink(const struct tagDESKTOP *a1, int a2)
{
  int v3; // r12d
  unsigned int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct tagBWL *v9; // r13
  unsigned __int64 *i; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // ebx
  void *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 *v19; // rdi
  _QWORD *v20; // rbx
  void *v21; // rax
  struct tagWND *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  struct tagBWL *v27; // r15
  unsigned __int64 *j; // r14
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 *v31; // rsi
  int v32; // ebx
  void *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  _QWORD *v37; // rbx
  void *v38; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 *v42; // rsi
  int v43; // ebx
  void *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  _QWORD *v48; // rbx
  void *v49; // rax
  __int64 *v50; // rdi
  __int64 *v51; // rbx
  void *v52; // rax
  __int64 *v53; // rbx
  void *v54; // rax
  __int64 *v55; // rbx
  void *v56; // rax

  v3 = a2;
  v4 = 1;
  v5 = BuildHwndList(*(struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL) + 112LL));
  v9 = (struct tagBWL *)v5;
  if ( !v5 )
    return 0;
  for ( i = (unsigned __int64 *)(v5 + 32); *i != 1; ++i )
  {
    LOBYTE(v6) = 1;
    v40 = HMValidateHandleNoSecure(*i, v6, v7, v8);
    v42 = (__int64 *)v40;
    if ( v40 )
    {
      if ( v3 )
      {
        v43 = *(_DWORD *)(*(_QWORD *)(v40 + 40) + 236LL);
        v44 = (void *)ReferenceDwmApiPort(v41, v6, v7);
        DwmAsyncChildLink(v44, v43);
        v48 = (_QWORD *)v42[15];
        if ( v48 )
          v48 = (_QWORD *)*v48;
        v49 = (void *)ReferenceDwmApiPort(v46, v45, v47);
        DwmAsyncOwnerChange(v49, *v42, (__int64)v48);
        v3 = a2;
      }
      else
      {
        v55 = *(__int64 **)(v40 + 104);
        v56 = (void *)ReferenceDwmApiPort(v41, v6, v7);
        DwmAsyncChildUnlink(v56, *v42, *v55);
      }
    }
  }
  FreeHwndList(v9);
  if ( v3 )
  {
    v14 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL) + 236LL);
    v15 = (void *)ReferenceDwmApiPort(v12, v11, v13);
    DwmAsyncChildLink(v15, v14);
    v19 = (__int64 *)*((_QWORD *)a1 + 13);
    v20 = (_QWORD *)v19[15];
    if ( v20 )
      v20 = (_QWORD *)*v20;
    v21 = (void *)ReferenceDwmApiPort(v17, v16, v18);
    DwmAsyncOwnerChange(v21, *v19, (__int64)v20);
  }
  else
  {
    v50 = (__int64 *)*((_QWORD *)a1 + 13);
    v51 = *(__int64 **)(*((_QWORD *)a1 + 1) + 24LL);
    v52 = (void *)ReferenceDwmApiPort(v12, v11, v13);
    DwmAsyncChildUnlink(v52, *v50, *v51);
  }
  v22 = *(struct tagWND **)(*((_QWORD *)a1 + 13) + 112LL);
  if ( v22 )
  {
    v23 = BuildHwndList(v22);
    v27 = (struct tagBWL *)v23;
    if ( v23 )
    {
      for ( j = (unsigned __int64 *)(v23 + 32); *j != 1; ++j )
      {
        LOBYTE(v24) = 1;
        v29 = HMValidateHandleNoSecure(*j, v24, v25, v26);
        v31 = (__int64 *)v29;
        if ( v29 )
        {
          if ( v3 )
          {
            v32 = *(_DWORD *)(*(_QWORD *)(v29 + 40) + 236LL);
            v33 = (void *)ReferenceDwmApiPort(v30, v24, v25);
            DwmAsyncChildLink(v33, v32);
            v37 = (_QWORD *)v31[15];
            if ( v37 )
              v37 = (_QWORD *)*v37;
            v38 = (void *)ReferenceDwmApiPort(v35, v34, v36);
            DwmAsyncOwnerChange(v38, *v31, (__int64)v37);
            v3 = a2;
          }
          else
          {
            v53 = *(__int64 **)(v29 + 104);
            v54 = (void *)ReferenceDwmApiPort(v30, v24, v25);
            DwmAsyncChildUnlink(v54, *v31, *v53);
          }
        }
      }
      FreeHwndList(v27);
      return v4;
    }
    return 0;
  }
  return v4;
}
