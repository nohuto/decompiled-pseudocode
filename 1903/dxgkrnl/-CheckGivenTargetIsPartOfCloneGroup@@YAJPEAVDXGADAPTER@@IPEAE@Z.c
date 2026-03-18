/*
 * XREFs of ?CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z @ 0x1C00D6190
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00D5770 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C00D6238 (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C00E8738 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C00EAC24 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 */

__int64 __fastcall CheckGivenTargetIsPartOfCloneGroup(ADAPTER_DISPLAY **a1, unsigned int a2, unsigned __int8 *a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // edi
  int v8; // ebx
  struct SESSION_VIEW *SessionViewOwner; // rax
  __int64 v11; // rax
  unsigned int v12; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0;
  if ( DmmGetSourceConnectedToTargetInClientVidPn(a1, a2, &v12) < 0 )
    return (unsigned int)-1073741275;
  v7 = v12;
  if ( v12 >= *((_DWORD *)a1[319] + 20) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v11 + 24) = 4709LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v8 = DmmEnumClientVidPnPathTargetsFromSource(a1, v7, 1uLL, &v12);
  if ( v8 < 0 || v12 == -1 )
  {
    SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(a1[319], v7);
    if ( !SessionViewOwner || *((_DWORD *)SessionViewOwner + 10) <= 1u )
      return (unsigned int)v8;
  }
  *a3 = 1;
  return 0LL;
}
