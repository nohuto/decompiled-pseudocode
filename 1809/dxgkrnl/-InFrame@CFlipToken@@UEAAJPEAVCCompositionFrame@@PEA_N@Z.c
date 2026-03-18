/*
 * XREFs of ?InFrame@CFlipToken@@UEAAJPEAVCCompositionFrame@@PEA_N@Z @ 0x1C000A090
 * Callers:
 *     <none>
 * Callees:
 *     ?SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z @ 0x1C0007730 (-SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z.c)
 *     ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x1C0007DE8 (-SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z.c)
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z @ 0x1C0007EAC (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z.c)
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C0008A9C (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 *     ?SyncIntervalSatisfied@CompositionSurfaceObject@@QEAAJIPEA_N@Z @ 0x1C000A194 (-SyncIntervalSatisfied@CompositionSurfaceObject@@QEAAJIPEA_N@Z.c)
 *     ?GetIndependentFlipState@CompositionSurfaceObject@@QEBA?AW4IndependentFlipState@@_K@Z @ 0x1C000A218 (-GetIndependentFlipState@CompositionSurfaceObject@@QEBA-AW4IndependentFlipState@@_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFlipToken::InFrame(CFlipToken *this, struct CCompositionFrame *a2, bool *a3)
{
  unsigned int v3; // ebp
  int v4; // edi
  CompositionSurfaceObject *v8; // rcx
  int v9; // eax
  bool v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_DWORD *)a2 + 12);
  v4 = 0;
  *a3 = 0;
  if ( *((_DWORD *)this + 6) == 2
    && (unsigned int)CompositionSurfaceObject::GetIndependentFlipState(*((_QWORD *)this + 4), *((_QWORD *)this + 5)) != 2 )
  {
    v8 = (CompositionSurfaceObject *)*((_QWORD *)this + 4);
    v11 = 0;
    v4 = CompositionSurfaceObject::SyncIntervalSatisfied(v8, v3, &v11);
    if ( v4 >= 0 && (v11 || !*((_DWORD *)this + 28)) )
      *a3 = 1;
  }
  if ( v4 >= 0 && *a3 )
  {
    *((_DWORD *)this + 6) = 3;
    CFlipToken::TraceStateChanged(this);
    v4 = CompositionSurfaceObject::NotifyTokenInFrame(*((CompositionSurfaceObject **)this + 4), this, &v11);
    if ( v4 >= 0 )
    {
      *((_BYTE *)this + 88) = v11;
      v9 = (*(__int64 (__fastcall **)(CFlipToken *, _QWORD))(*(_QWORD *)this + 128LL))(this, *((unsigned int *)a2 + 12));
      if ( v9 )
        CompositionSurfaceObject::SetSyncRefreshCount(*((CompositionSurfaceObject **)this + 4), v9);
      CFlipToken::SignalGpuFenceAndPresentLimitSemaphore(this, 0);
    }
  }
  else
  {
    ++*((_DWORD *)this + 7);
  }
  return (unsigned int)v4;
}
