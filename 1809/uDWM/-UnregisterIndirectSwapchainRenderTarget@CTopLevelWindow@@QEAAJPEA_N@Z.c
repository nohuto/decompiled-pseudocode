/*
 * XREFs of ?UnregisterIndirectSwapchainRenderTarget@CTopLevelWindow@@QEAAJPEA_N@Z @ 0x18003917C
 * Callers:
 *     ??1CTopLevelWindow@@MEAA@XZ @ 0x180013E48 (--1CTopLevelWindow@@MEAA@XZ.c)
 *     ?UnregisterIndirectSwapchainRenderTargetFromWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEA_N@Z @ 0x18008D080 (-UnregisterIndirectSwapchainRenderTargetFromWindow@CWindowList@@UEAAJPEAUIDwmWindow@@PEA_N@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UnregisterIndirectSwapchainRenderTarget(CTopLevelWindow *this, bool *a2)
{
  unsigned int v3; // edi
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v8; // eax
  CBaseObject *v9; // rcx

  v3 = 0;
  v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  *a2 = 0;
  v6 = *((_QWORD *)this + 97);
  if ( v6 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 832LL))(v5, *(unsigned int *)(v6 + 24));
    v3 = v8;
    if ( v8 >= 0 )
    {
      v9 = (CBaseObject *)*((_QWORD *)this + 97);
      if ( v9 )
      {
        CBaseObject::Release(v9);
        *((_QWORD *)this + 97) = 0LL;
      }
      *((_BYTE *)this + 768) = 0;
      *a2 = 1;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x1667u);
    }
  }
  return v3;
}
