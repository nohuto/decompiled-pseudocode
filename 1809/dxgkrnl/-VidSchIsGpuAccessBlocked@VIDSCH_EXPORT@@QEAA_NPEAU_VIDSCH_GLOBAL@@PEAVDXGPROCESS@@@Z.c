/*
 * XREFs of ?VidSchIsGpuAccessBlocked@VIDSCH_EXPORT@@QEAA_NPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@@Z @ 0x1C000F684
 * Callers:
 *     ?IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z @ 0x1C00E2D78 (-IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z.c)
 *     ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00E3710 (-EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VIDSCH_EXPORT::VidSchIsGpuAccessBlocked(
        VIDSCH_EXPORT *this,
        struct _VIDSCH_GLOBAL *a2,
        struct DXGPROCESS *a3)
{
  __int64 v3; // rbx
  __int64 v7; // rax

  v3 = *((_QWORD *)a3 + 9);
  if ( v3 )
    v3 = *(_QWORD *)(v3 + 8LL * (unsigned int)(*(_DWORD *)this - 1) + 16);
  if ( !v3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v7 + 24) = 992LL;
    WdLogEvent5_WdAssertion(v7);
  }
  return (*(__int64 (__fastcall **)(struct _VIDSCH_GLOBAL *, __int64))(*((_QWORD *)this + 1) + 840LL))(a2, v3);
}
