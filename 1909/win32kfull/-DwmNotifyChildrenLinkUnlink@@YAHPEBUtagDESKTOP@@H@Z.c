/*
 * XREFs of ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C000FCB8
 * Callers:
 *     DwmNotifyChildrenAddRemove @ 0x1C000FC74 (DwmNotifyChildrenAddRemove.c)
 * Callees:
 *     DwmAsyncChildLink @ 0x1C000FF70 (DwmAsyncChildLink.c)
 *     DwmAsyncOwnerChange @ 0x1C0036950 (DwmAsyncOwnerChange.c)
 *     DwmAsyncChildUnlink @ 0x1C006A4F0 (DwmAsyncChildUnlink.c)
 *     BuildHwndList @ 0x1C006DEF0 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006E0B0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall DwmNotifyChildrenLinkUnlink(const struct tagDESKTOP *a1, int a2)
{
  int v3; // r12d
  unsigned int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r13
  _QWORD *i; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // ebx
  void *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  void *v17; // rax
  struct tagWND *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r15
  _QWORD *j; // r14
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // ebx
  void *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  void *v31; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r8
  int v36; // ebx
  void *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  void *v41; // rax
  void *v42; // rax
  void *v43; // rax
  void *v44; // rax

  v3 = a2;
  v4 = 1;
  v5 = BuildHwndList(*(struct tagWND **)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL) + 112LL));
  v7 = v5;
  if ( !v5 )
    return 0;
  for ( i = (_QWORD *)(v5 + 32); *i != 1LL; ++i )
  {
    LOBYTE(v6) = 1;
    v33 = HMValidateHandleNoSecure(*i, v6);
    if ( v33 )
    {
      if ( v3 )
      {
        v36 = *(_DWORD *)(*(_QWORD *)(v33 + 40) + 236LL);
        v37 = (void *)ReferenceDwmApiPort(v34, v6, v35);
        DwmAsyncChildLink(v37, v36);
        v41 = (void *)ReferenceDwmApiPort(v39, v38, v40);
        DwmAsyncOwnerChange(v41);
        v3 = a2;
      }
      else
      {
        v44 = (void *)ReferenceDwmApiPort(v34, v6, v35);
        DwmAsyncChildUnlink(v44);
      }
    }
  }
  FreeHwndList(v7);
  if ( v3 )
  {
    v12 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL) + 236LL);
    v13 = (void *)ReferenceDwmApiPort(v10, v9, v11);
    DwmAsyncChildLink(v13, v12);
    v17 = (void *)ReferenceDwmApiPort(v15, v14, v16);
    DwmAsyncOwnerChange(v17);
  }
  else
  {
    v42 = (void *)ReferenceDwmApiPort(v10, v9, v11);
    DwmAsyncChildUnlink(v42);
  }
  v18 = *(struct tagWND **)(*((_QWORD *)a1 + 13) + 112LL);
  if ( v18 )
  {
    v19 = BuildHwndList(v18);
    v21 = v19;
    if ( v19 )
    {
      for ( j = (_QWORD *)(v19 + 32); *j != 1LL; ++j )
      {
        LOBYTE(v20) = 1;
        v23 = HMValidateHandleNoSecure(*j, v20);
        if ( v23 )
        {
          if ( v3 )
          {
            v26 = *(_DWORD *)(*(_QWORD *)(v23 + 40) + 236LL);
            v27 = (void *)ReferenceDwmApiPort(v24, v20, v25);
            DwmAsyncChildLink(v27, v26);
            v31 = (void *)ReferenceDwmApiPort(v29, v28, v30);
            DwmAsyncOwnerChange(v31);
            v3 = a2;
          }
          else
          {
            v43 = (void *)ReferenceDwmApiPort(v24, v20, v25);
            DwmAsyncChildUnlink(v43);
          }
        }
      }
      FreeHwndList(v21);
      return v4;
    }
    return 0;
  }
  return v4;
}
