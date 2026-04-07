/*
 * XREFs of ?OnInteropDeviceRecreated@CWindowList@@QEAAXXZ @ 0x18008B440
 * Callers:
 *     ?HandleInteropDeviceLost@CDesktopManager@@SAXXZ @ 0x180079328 (-HandleInteropDeviceLost@CDesktopManager@@SAXXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180036980 (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?Create@CGlobalLightSet@@SAJ_KPEAPEAV1@@Z @ 0x180043A28 (-Create@CGlobalLightSet@@SAJ_KPEAPEAV1@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180073C5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CWindowList::OnInteropDeviceRecreated(CWindowList *this)
{
  struct _RTL_GENERIC_TABLE *v1; // rbp
  char *v2; // rsi
  unsigned __int64 i; // rbx
  CWindowData **v4; // rcx
  CBaseObject *v5; // rcx
  unsigned __int64 v6; // rcx
  int v7; // eax
  volatile signed __int32 *v8; // rbx
  CBaseObject *v9; // rcx
  unsigned __int64 *v10; // rax
  unsigned __int64 *v11; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  CBaseObject *v13; // [rsp+40h] [rbp+8h] BYREF
  PVOID RestartKey; // [rsp+48h] [rbp+10h] BYREF

  RestartKey = 0LL;
  v1 = (struct _RTL_GENERIC_TABLE *)((char *)this + 8);
  while ( 1 )
  {
    v10 = (unsigned __int64 *)RtlEnumerateGenericTableWithoutSplaying(v1, &RestartKey);
    v11 = v10;
    if ( !v10 )
      break;
    v2 = (char *)(v10 + 10);
    for ( i = v10[10]; (char *)i != v2; i = *(_QWORD *)i )
    {
      if ( *(_DWORD *)(i + 152) == 4 )
      {
        v4 = *(CWindowData ***)(i + 392);
        if ( v4 )
          CTopLevelWindow::OnAccentPolicyUpdated(v4);
      }
    }
    v5 = (CBaseObject *)v11[7];
    if ( v5 )
    {
      CBaseObject::Release(v5);
      v11[7] = 0LL;
    }
    v6 = *v11;
    v13 = 0LL;
    v7 = CGlobalLightSet::Create(v6, &v13);
    if ( v7 >= 0 )
    {
      v8 = (volatile signed __int32 *)v13;
      v11[7] = (unsigned __int64)v13;
      if ( !v8 )
        goto LABEL_15;
      _InterlockedIncrement(v8 + 2);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x19F3,
        (__int64)"windows\\dwm\\udwm\\windowlist.cpp",
        (const char *)(unsigned int)v7);
    }
    v8 = (volatile signed __int32 *)v13;
LABEL_15:
    v9 = (CBaseObject *)v11[6];
    if ( v9 )
    {
      CBaseObject::Release(v9);
      v11[6] = 0LL;
    }
    if ( v8 )
      CBaseObject::Release((CBaseObject *)v8);
  }
}
