/*
 * XREFs of ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C00C7A58
 * Callers:
 *     DwmNotifyChildrenAddRemove @ 0x1C00C7A14 (DwmNotifyChildrenAddRemove.c)
 * Callees:
 *     DwmAsyncChildUnlink @ 0x1C001B8A8 (DwmAsyncChildUnlink.c)
 *     DwmAsyncOwnerChange @ 0x1C001CB10 (DwmAsyncOwnerChange.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     FreeHwndList @ 0x1C0070D10 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0070DA0 (BuildHwndList.c)
 *     DwmAsyncChildLink @ 0x1C00C7D04 (DwmAsyncChildLink.c)
 */

__int64 __fastcall DwmNotifyChildrenLinkUnlink(const struct tagDESKTOP *a1, int a2)
{
  int v3; // r12d
  unsigned int v4; // ebp
  struct tagBWL *v5; // rax
  __int64 v6; // rdx
  struct tagBWL *v7; // r13
  unsigned __int64 *i; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 *v11; // rdi
  __int64 *v12; // rbx
  void *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 *v16; // rsi
  int v17; // ebx
  void *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rbx
  void *v22; // rax
  int v23; // ebx
  void *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 *v27; // rdi
  _QWORD *v28; // rbx
  void *v29; // rax
  struct tagWND *v30; // rcx
  struct tagBWL *v31; // rax
  __int64 v32; // rdx
  struct tagBWL *v33; // r15
  unsigned __int64 *j; // r14
  int v35; // ebx
  void *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  _QWORD *v39; // rbx
  void *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 *v43; // rsi
  __int64 *v45; // rbx
  void *v46; // rax
  __int64 *v47; // rbx
  void *v48; // rax

  v3 = a2;
  v4 = 1;
  v5 = BuildHwndList(*(struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL) + 88LL), 3, 0LL);
  v7 = v5;
  if ( !v5 )
    return 0;
  for ( i = (unsigned __int64 *)((char *)v5 + 32); *i != 1; ++i )
  {
    LOBYTE(v6) = 1;
    v14 = HMValidateHandleNoSecure(*i, v6);
    v16 = (__int64 *)v14;
    if ( v14 )
    {
      if ( v3 )
      {
        v17 = *(_DWORD *)(*(_QWORD *)(v14 + 40) + 236LL);
        v18 = (void *)ReferenceDwmApiPort(v15, v6);
        DwmAsyncChildLink(v18, v17);
        v21 = (_QWORD *)v16[12];
        if ( v21 )
          v21 = (_QWORD *)*v21;
        v22 = (void *)ReferenceDwmApiPort(v20, v19);
        DwmAsyncOwnerChange(v22, *v16, (__int64)v21);
        v3 = a2;
      }
      else
      {
        v47 = *(__int64 **)(v14 + 80);
        v48 = (void *)ReferenceDwmApiPort(v15, v6);
        DwmAsyncChildUnlink(v48, *v16, *v47);
      }
    }
  }
  FreeHwndList(v7);
  if ( v3 )
  {
    v23 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL) + 236LL);
    v24 = (void *)ReferenceDwmApiPort(v10, v9);
    DwmAsyncChildLink(v24, v23);
    v27 = (__int64 *)*((_QWORD *)a1 + 13);
    v28 = (_QWORD *)v27[12];
    if ( v28 )
      v28 = (_QWORD *)*v28;
    v29 = (void *)ReferenceDwmApiPort(v26, v25);
    DwmAsyncOwnerChange(v29, *v27, (__int64)v28);
  }
  else
  {
    v11 = (__int64 *)*((_QWORD *)a1 + 13);
    v12 = *(__int64 **)(*((_QWORD *)a1 + 1) + 24LL);
    v13 = (void *)ReferenceDwmApiPort(v10, v9);
    DwmAsyncChildUnlink(v13, *v11, *v12);
  }
  v30 = *(struct tagWND **)(*((_QWORD *)a1 + 13) + 88LL);
  if ( v30 )
  {
    v31 = BuildHwndList(v30, 3, 0LL);
    v33 = v31;
    if ( v31 )
    {
      for ( j = (unsigned __int64 *)((char *)v31 + 32); *j != 1; ++j )
      {
        LOBYTE(v32) = 1;
        v41 = HMValidateHandleNoSecure(*j, v32);
        v43 = (__int64 *)v41;
        if ( v41 )
        {
          if ( v3 )
          {
            v35 = *(_DWORD *)(*(_QWORD *)(v41 + 40) + 236LL);
            v36 = (void *)ReferenceDwmApiPort(v42, v32);
            DwmAsyncChildLink(v36, v35);
            v39 = (_QWORD *)v43[12];
            if ( v39 )
              v39 = (_QWORD *)*v39;
            v40 = (void *)ReferenceDwmApiPort(v38, v37);
            DwmAsyncOwnerChange(v40, *v43, (__int64)v39);
            v3 = a2;
          }
          else
          {
            v45 = *(__int64 **)(v41 + 80);
            v46 = (void *)ReferenceDwmApiPort(v42, v32);
            DwmAsyncChildUnlink(v46, *v43, *v45);
          }
        }
      }
      FreeHwndList(v33);
      return v4;
    }
    return 0;
  }
  return v4;
}
