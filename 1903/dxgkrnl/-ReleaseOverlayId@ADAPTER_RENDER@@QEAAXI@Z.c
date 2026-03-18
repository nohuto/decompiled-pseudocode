/*
 * XREFs of ?ReleaseOverlayId@ADAPTER_RENDER@@QEAAXI@Z @ 0x1C01F5BF0
 * Callers:
 *     ?Destroy@DXGOVERLAY@@QEAAXXZ @ 0x1C0253364 (-Destroy@DXGOVERLAY@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_RENDER::ReleaseOverlayId(ADAPTER_RENDER *this, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rax

  v3 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *(_DWORD *)(*((_QWORD *)this + 2) + 1892LL) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v4 + 24) = 3193LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !*((_QWORD *)this + v3 + 75) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v5 + 24) = 3194LL;
    WdLogEvent5_WdAssertion(v5);
  }
  *((_QWORD *)this + v3 + 75) = 0LL;
}
