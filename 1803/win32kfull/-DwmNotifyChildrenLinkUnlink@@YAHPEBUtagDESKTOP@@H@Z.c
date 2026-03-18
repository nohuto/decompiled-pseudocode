/*
 * XREFs of ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C00095B4
 * Callers:
 *     DwmNotifyChildrenAddRemove @ 0x1C0009570 (DwmNotifyChildrenAddRemove.c)
 * Callees:
 *     DwmAsyncChildLink @ 0x1C000983C (DwmAsyncChildLink.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     FreeHwndList @ 0x1C002A0E0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C002A170 (BuildHwndList.c)
 *     DwmAsyncChildUnlink @ 0x1C002FF50 (DwmAsyncChildUnlink.c)
 *     DwmAsyncOwnerChange @ 0x1C006ED2C (DwmAsyncOwnerChange.c)
 */

__int64 __fastcall DwmNotifyChildrenLinkUnlink(const struct tagDESKTOP *a1, int a2)
{
  int v3; // r12d
  unsigned int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r13
  _QWORD *i; // r14
  int v9; // ebx
  void *v10; // rax
  void *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r15
  _QWORD *j; // r14
  __int64 v17; // rsi
  int v18; // ebx
  void *v19; // rax
  void *v20; // rax
  __int64 v22; // rsi
  int v23; // ebx
  void *v24; // rax
  void *v25; // rax
  void *v26; // rax
  void *v27; // rax
  void *v28; // rax

  v3 = a2;
  v4 = 1;
  v5 = BuildHwndList(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL) + 88LL), 3LL, 0LL);
  v7 = v5;
  if ( !v5 )
    return 0;
  for ( i = (_QWORD *)(v5 + 32); *i != 1LL; ++i )
  {
    LOBYTE(v6) = 1;
    v22 = HMValidateHandleNoSecure(*i, v6);
    if ( v22 )
    {
      if ( v3 )
      {
        v23 = *(_DWORD *)(*(_QWORD *)(v22 + 40) + 236LL);
        v24 = (void *)ReferenceDwmApiPort();
        DwmAsyncChildLink(v24, v23);
        v25 = (void *)ReferenceDwmApiPort();
        DwmAsyncOwnerChange(v25);
        v3 = a2;
      }
      else
      {
        v28 = (void *)ReferenceDwmApiPort();
        DwmAsyncChildUnlink(v28);
      }
    }
  }
  FreeHwndList(v7);
  if ( v3 )
  {
    v9 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 13) + 40LL) + 236LL);
    v10 = (void *)ReferenceDwmApiPort();
    DwmAsyncChildLink(v10, v9);
    v11 = (void *)ReferenceDwmApiPort();
    DwmAsyncOwnerChange(v11);
  }
  else
  {
    v26 = (void *)ReferenceDwmApiPort();
    DwmAsyncChildUnlink(v26);
  }
  v12 = *(_QWORD *)(*((_QWORD *)a1 + 13) + 88LL);
  if ( v12 )
  {
    v13 = BuildHwndList(v12, 3LL, 0LL);
    v15 = v13;
    if ( v13 )
    {
      for ( j = (_QWORD *)(v13 + 32); *j != 1LL; ++j )
      {
        LOBYTE(v14) = 1;
        v17 = HMValidateHandleNoSecure(*j, v14);
        if ( v17 )
        {
          if ( v3 )
          {
            v18 = *(_DWORD *)(*(_QWORD *)(v17 + 40) + 236LL);
            v19 = (void *)ReferenceDwmApiPort();
            DwmAsyncChildLink(v19, v18);
            v20 = (void *)ReferenceDwmApiPort();
            DwmAsyncOwnerChange(v20);
            v3 = a2;
          }
          else
          {
            v27 = (void *)ReferenceDwmApiPort();
            DwmAsyncChildUnlink(v27);
          }
        }
      }
      FreeHwndList(v15);
      return v4;
    }
    return 0;
  }
  return v4;
}
