/*
 * XREFs of ?ForceFullRender@CRenderTargetManager@@QEAAXXZ @ 0x180077378
 * Callers:
 *     ?ForceFullRender@CComposition@@QEAAX_N@Z @ 0x180077360 (-ForceFullRender@CComposition@@QEAAX_N@Z.c)
 *     ?Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SWITCHREMOTINGMODE@@@Z @ 0x18007A800 (-Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMI.c)
 *     ?UpdateDebugCounter@CComposition@@QEAAX_N@Z @ 0x18014C0C0 (-UpdateDebugCounter@CComposition@@QEAAX_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRenderTargetManager::ForceFullRender(CRenderTargetManager *this)
{
  __int64 v1; // rbx
  __int64 v3; // rcx

  v1 = 0LL;
  if ( *((_DWORD *)this + 24) && *((_DWORD *)this + 12) )
  {
    do
    {
      v3 = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v1);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 184LL))(v3);
      v1 = (unsigned int)(v1 + 1);
    }
    while ( (unsigned int)v1 < *((_DWORD *)this + 12) );
  }
}
