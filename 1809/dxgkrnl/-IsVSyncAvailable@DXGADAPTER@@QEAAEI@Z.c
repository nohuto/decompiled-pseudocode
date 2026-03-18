/*
 * XREFs of ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C0126AEC
 * Callers:
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x1C00D4724 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C01262F0 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@@Z @ 0x1C0126830 (-DxgkCddWaitForVerticalBlankEvent@@YAJQEAXIIPEAPEAU_KEVENT@@@Z.c)
 *     ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C0126C60 (-DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z.c)
 *     DxgkGetScanLine @ 0x1C01D4A70 (DxgkGetScanLine.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C021A774 (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DXGADAPTER::IsVSyncAvailable(DXGADAPTER *this, unsigned int a2)
{
  __int64 v2; // rdi
  char v3; // bl
  __int64 v4; // rsi
  __int64 v7; // rax
  __int64 v8; // rax

  v2 = *((_QWORD *)this + 315);
  v3 = 0;
  v4 = a2;
  if ( v2
    || (v7 = WdLogNewEntry5_WdAssertion(this),
        *(_QWORD *)(v7 + 24) = 8834LL,
        WdLogEvent5_WdAssertion(v7),
        (v2 = *((_QWORD *)this + 315)) != 0) )
  {
    if ( (unsigned int)v4 >= *(_DWORD *)(v2 + 80) )
    {
      v8 = WdLogNewEntry5_WdAssertion(this);
      *(_QWORD *)(v8 + 24) = 5587LL;
      WdLogEvent5_WdAssertion(v8);
    }
    if ( *(_BYTE *)(3760 * v4 + *(_QWORD *)(v2 + 112) + 720) )
      return 1;
  }
  return v3;
}
