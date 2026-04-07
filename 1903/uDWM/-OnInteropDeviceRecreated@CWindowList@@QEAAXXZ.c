/*
 * XREFs of ?OnInteropDeviceRecreated@CWindowList@@QEAAXXZ @ 0x180091634
 * Callers:
 *     ?HandleInteropDeviceLost@CDesktopManager@@SAXXZ @ 0x18007FA0C (-HandleInteropDeviceLost@CDesktopManager@@SAXXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18002A4D4 (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z @ 0x180090BA4 (-GetGlobalLightSetForDesktop@CWindowList@@QEAAPEAVCGlobalLightSet@@_K@Z.c)
 */

void __fastcall CWindowList::OnInteropDeviceRecreated(CWindowList *this)
{
  struct _RTL_GENERIC_TABLE *i; // rcx
  char *v3; // rsi
  unsigned __int64 j; // rdi
  CWindowData **v5; // rcx
  __int64 v6; // rax
  char v7; // cl
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  unsigned __int64 *v10; // rax
  unsigned __int64 *v11; // rbx
  PVOID RestartKey; // [rsp+40h] [rbp+8h] BYREF

  RestartKey = 0LL;
  for ( i = (struct _RTL_GENERIC_TABLE *)((char *)this + 8); ; i = (struct _RTL_GENERIC_TABLE *)((char *)this + 8) )
  {
    v10 = (unsigned __int64 *)RtlEnumerateGenericTableWithoutSplaying(i, &RestartKey);
    v11 = v10;
    if ( !v10 )
      break;
    v3 = (char *)(v10 + 10);
    for ( j = v10[10]; (char *)j != v3; j = *(_QWORD *)j )
    {
      if ( *(_DWORD *)(j + 152) == 4 )
      {
        v5 = *(CWindowData ***)(j + 400);
        if ( v5 )
          CTopLevelWindow::OnAccentPolicyUpdated(v5);
      }
      v6 = *(_QWORD *)(j + 400);
      if ( v6 )
      {
        v7 = *(_BYTE *)(v6 + 241);
        if ( (v7 & 0x20) != 0 )
          *(_BYTE *)(v6 + 241) = v7 & 0xDF;
      }
    }
    v8 = (CBaseObject *)v11[7];
    if ( v8 )
    {
      CBaseObject::Release(v8);
      v11[7] = 0LL;
    }
    CWindowList::GetGlobalLightSetForDesktop(this, *v11);
    v9 = (CBaseObject *)v11[6];
    if ( v9 )
    {
      CBaseObject::Release(v9);
      v11[6] = 0LL;
    }
  }
}
