/*
 * XREFs of ?CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z @ 0x1C00BEDE8
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00C0CF0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C00BED04 (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C00BF2F4 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C00E550C (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 */

__int64 __fastcall CheckGivenTargetIsPartOfCloneGroup(ADAPTER_DISPLAY **a1, unsigned int a2, unsigned __int8 *a3)
{
  __int64 v5; // rcx
  unsigned int v6; // edi
  int v7; // ebx
  struct SESSION_VIEW *SessionViewOwner; // rax
  __int64 v10; // rax
  unsigned int v11; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0;
  if ( (int)DmmGetSourceConnectedToTargetInClientVidPn((DXGADAPTER *)a1, a2, &v11) < 0 )
    return (unsigned int)-1073741275;
  v6 = v11;
  if ( v11 >= *((_DWORD *)a1[315] + 20) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v10 + 24) = 4687LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v7 = DmmEnumClientVidPnPathTargetsFromSource(a1, v6, 1uLL, &v11);
  if ( v7 < 0 || v11 == -1 )
  {
    SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(a1[315], v6);
    if ( !SessionViewOwner || *((_DWORD *)SessionViewOwner + 10) <= 1u )
      return (unsigned int)v7;
  }
  *a3 = 1;
  return 0LL;
}
