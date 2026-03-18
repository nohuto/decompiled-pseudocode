/*
 * XREFs of ?ProcessHasVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGPROCESS@@W4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@W4DXGDEVICECLIENT_TYPE@@@Z @ 0x1C01F30F0
 * Callers:
 *     ?AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z @ 0x1C0257AC8 (-AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

char __fastcall ADAPTER_DISPLAY::ProcessHasVidPnSourceOwner(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned int v7; // edx
  unsigned int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(a1 + 16)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v6 + 24) = 7835LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = *(_DWORD *)(a1 + 80);
  v8 = 0;
  if ( !v7 )
    return 0;
  v9 = *(_QWORD *)(a1 + 112);
  while ( 1 )
  {
    v10 = 3968LL * v8;
    v11 = *(_QWORD *)(v10 + v9 + 688);
    if ( v11 )
    {
      if ( a2 == *(_QWORD *)(v11 + 40) && !*(_DWORD *)(v11 + 328) && *(_DWORD *)(v10 + v9 + 696) == 3 )
        break;
    }
    if ( ++v8 >= v7 )
      return 0;
  }
  return 1;
}
