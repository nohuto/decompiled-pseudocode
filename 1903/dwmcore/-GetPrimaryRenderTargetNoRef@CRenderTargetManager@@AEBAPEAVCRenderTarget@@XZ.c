/*
 * XREFs of ?GetPrimaryRenderTargetNoRef@CRenderTargetManager@@AEBAPEAVCRenderTarget@@XZ @ 0x1800D8490
 * Callers:
 *     ?GetLastPresentCount@CRenderTargetManager@@QEAAJPEAI0@Z @ 0x180092730 (-GetLastPresentCount@CRenderTargetManager@@QEAAJPEAI0@Z.c)
 *     ?GetPresentStatistics@CRenderTargetManager@@QEAAJPEAIPEA_NPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x180097668 (-GetPresentStatistics@CRenderTargetManager@@QEAAJPEAIPEA_NPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UN.c)
 *     ?SetPrimaryVsyncPresentWaitTarget@CRenderTargetManager@@QEBAJI@Z @ 0x180189278 (-SetPrimaryVsyncPresentWaitTarget@CRenderTargetManager@@QEBAJI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

struct CRenderTarget *__fastcall CRenderTargetManager::GetPrimaryRenderTargetNoRef(CRenderTargetManager *this)
{
  unsigned int v1; // r15d
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // r14
  __int64 v7; // rdi

  v1 = *((_DWORD *)this + 12);
  v2 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  if ( !v1 )
    return (struct CRenderTarget *)v2;
  v7 = 0LL;
  while ( 1 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v7 + *((_QWORD *)this + 3)) + 48LL))(
            *(_QWORD *)(v7 + *((_QWORD *)this + 3)),
            80LL) )
    {
      if ( !v3
        && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v7 + *((_QWORD *)this + 3)) + 48LL))(
             *(_QWORD *)(v7 + *((_QWORD *)this + 3)),
             73LL) )
      {
        v3 = *(_QWORD *)(v7 + *((_QWORD *)this + 3));
      }
      goto LABEL_8;
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + *((_QWORD *)this + 3)) + 256LL))(*(_QWORD *)(v7 + *((_QWORD *)this + 3))) )
      break;
LABEL_8:
    v4 = (unsigned int)(v4 + 1);
    v7 += 8LL;
    if ( (unsigned int)v4 >= v1 )
      goto LABEL_9;
  }
  v2 = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v4);
  if ( v2 )
    return (struct CRenderTarget *)v2;
LABEL_9:
  if ( v3 )
    return (struct CRenderTarget *)v3;
  return (struct CRenderTarget *)v2;
}
