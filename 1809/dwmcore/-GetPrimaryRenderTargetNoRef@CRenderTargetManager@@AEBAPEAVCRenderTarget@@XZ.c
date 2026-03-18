/*
 * XREFs of ?GetPrimaryRenderTargetNoRef@CRenderTargetManager@@AEBAPEAVCRenderTarget@@XZ @ 0x18007A73C
 * Callers:
 *     ?GetLastPresentCount@CRenderTargetManager@@QEAAJPEAI0@Z @ 0x1800C7FCC (-GetLastPresentCount@CRenderTargetManager@@QEAAJPEAI0@Z.c)
 *     ?GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800CCE70 (-GetPresentStatisticsAndAdjustRates@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?SetPrimaryVsyncPresentWaitTarget@CRenderTargetManager@@QEBAJI@Z @ 0x180152BD8 (-SetPrimaryVsyncPresentWaitTarget@CRenderTargetManager@@QEBAJI@Z.c)
 * Callees:
 *     ?IsPrimaryMonitor@CHwndRenderTarget@@QEBA_NXZ @ 0x1800814EC (-IsPrimaryMonitor@CHwndRenderTarget@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

struct CRenderTarget *__fastcall CRenderTargetManager::GetPrimaryRenderTargetNoRef(CRenderTargetManager *this)
{
  unsigned int v1; // r12d
  CHwndRenderTarget *v2; // rbx
  __int64 v3; // rsi
  unsigned int v4; // r15d
  __int64 v7; // rdi
  CHwndRenderTarget *v8; // r14

  v1 = *((_DWORD *)this + 12);
  v2 = 0LL;
  v3 = 0LL;
  v4 = 0;
  if ( !v1 )
    return v2;
  v7 = 0LL;
  while ( 1 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v7 + *((_QWORD *)this + 3)) + 48LL))(
            *(_QWORD *)(v7 + *((_QWORD *)this + 3)),
            76LL) )
    {
      if ( !v3
        && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v7 + *((_QWORD *)this + 3)) + 48LL))(
             *(_QWORD *)(v7 + *((_QWORD *)this + 3)),
             69LL) )
      {
        v3 = *(_QWORD *)(v7 + *((_QWORD *)this + 3));
      }
      goto LABEL_8;
    }
    v8 = *(CHwndRenderTarget **)(v7 + *((_QWORD *)this + 3));
    if ( CHwndRenderTarget::IsPrimaryMonitor(v8) )
      break;
LABEL_8:
    ++v4;
    v7 += 8LL;
    if ( v4 >= v1 )
      goto LABEL_9;
  }
  v2 = v8;
  if ( v8 )
    return v2;
LABEL_9:
  if ( v3 )
    return (struct CRenderTarget *)v3;
  return v2;
}
