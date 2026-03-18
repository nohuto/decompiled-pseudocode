/*
 * XREFs of ?FindDesktopRenderTarget@CUINTDesktopAssociation@@QEAAJIPEAPEAVIRenderTargetDesktop@@@Z @ 0x18018B71C
 * Callers:
 *     ?FindTreeFromMITLuid@CComposition@@QEAAJU_LUID@@PEAPEAVCVisualTree@@@Z @ 0x180175DB0 (-FindTreeFromMITLuid@CComposition@@QEAAJU_LUID@@PEAPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CUINTDesktopAssociation::FindDesktopRenderTarget(
        CUINTDesktopAssociation *this,
        int a2,
        struct IRenderTargetDesktop **a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // ecx
  struct IRenderTargetDesktop *v10; // rcx

  *a3 = 0LL;
  v6 = -2147024890;
  AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)this + 4) + 568LL));
  if ( *((_DWORD *)this + 6) )
  {
    v8 = *(_QWORD *)this;
    v9 = 0;
    while ( *(_DWORD *)(v8 + 16LL * v9) != a2 )
    {
      if ( ++v9 >= *((_DWORD *)this + 6) )
        goto LABEL_8;
    }
    v10 = *(struct IRenderTargetDesktop **)(v8 + 16LL * v9 + 8);
    *a3 = v10;
    (*(void (__fastcall **)(struct IRenderTargetDesktop *))(*(_QWORD *)v10 + 8LL))(v10);
    v6 = 0;
  }
  else
  {
    v6 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1802E27D4, 1u, 0x88982F04, 0x78u, 0LL);
  }
LABEL_8:
  ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)this + 4) + 568LL));
  return v6;
}
