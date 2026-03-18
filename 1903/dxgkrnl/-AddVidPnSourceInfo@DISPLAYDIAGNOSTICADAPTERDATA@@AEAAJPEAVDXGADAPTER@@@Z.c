/*
 * XREFs of ?AddVidPnSourceInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C0294C04
 * Callers:
 *     ?CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1C029576C (-CollectDisplayAdapterDiagData@DISPLAYDIAGNOSTICADAPTERDATA@@QEAAJPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0001E68 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNextVidPnSourceInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAPEAVVIDPNSOURCEINFO@@XZ @ 0x1C0024AAC (-GetNextVidPnSourceInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAPEAVVIDPNSOURCEINFO@@XZ.c)
 *     ?Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z @ 0x1C0295FBC (-Initialize@VIDPNSOURCEINFO@@QEAAJPEAVDXGADAPTER@@I@Z.c)
 */

__int64 __fastcall DISPLAYDIAGNOSTICADAPTERDATA::AddVidPnSourceInfo(
        DISPLAYDIAGNOSTICADAPTERDATA *this,
        struct DXGADAPTER *a2)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbp
  unsigned int v9; // ebx
  unsigned int v10; // esi
  VIDPNSOURCEINFO *NextVidPnSourceInfo; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax

  if ( !a2 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a2) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v7 + 24) = 938LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_QWORD *)a2 + 319);
  v9 = 0;
  v10 = *(_DWORD *)(v8 + 80);
  if ( !v10 )
    return 0LL;
  while ( !ADAPTER_DISPLAY::IsPartOfDesktop((DXGADAPTER **)v8, v9) )
  {
LABEL_9:
    if ( ++v9 >= v10 )
      return 0LL;
  }
  NextVidPnSourceInfo = DISPLAYDIAGNOSTICADAPTERDATA::GetNextVidPnSourceInfo(this);
  if ( NextVidPnSourceInfo )
  {
    VIDPNSOURCEINFO::Initialize(NextVidPnSourceInfo, a2, v9);
    ++*((_DWORD *)this + 234);
    goto LABEL_9;
  }
  v15 = WdLogNewEntry5_WdError(v13, v12, v14);
  *(_QWORD *)(v15 + 24) = 953LL;
  WdLogEvent5_WdError(v15);
  return 3221225495LL;
}
