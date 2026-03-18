/*
 * XREFs of ?FindDesktopRenderTarget@CUINTDesktopAssociation@@QEAAJIPEAPEAVCDesktopRenderTarget@@@Z @ 0x1801614C8
 * Callers:
 *     ?FindTreeFromMITLuid@CComposition@@QEAAJU_LUID@@PEAPEAVCVisualTree@@@Z @ 0x18014B400 (-FindTreeFromMITLuid@CComposition@@QEAAJU_LUID@@PEAPEAVCVisualTree@@@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18005A790 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CUINTDesktopAssociation::FindDesktopRenderTarget(
        CUINTDesktopAssociation *this,
        int a2,
        struct CDesktopRenderTarget **a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // edx
  struct CDesktopRenderTarget *v10; // rcx

  *a3 = 0LL;
  v6 = -2147024890;
  AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)this + 4) + 552LL));
  if ( *((_DWORD *)this + 6) )
  {
    v8 = *(_QWORD *)this;
    v9 = 0;
    while ( *(_DWORD *)(v8 + 16LL * v9) != a2 )
    {
      if ( ++v9 >= *((_DWORD *)this + 6) )
        goto LABEL_8;
    }
    v10 = *(struct CDesktopRenderTarget **)(v8 + 16LL * v9 + 8);
    *a3 = v10;
    CMILCOMBase::InternalAddRef(v10);
    v6 = 0;
  }
  else
  {
    v6 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1802BC050, 1u, -2003292412, 0x7Au);
  }
LABEL_8:
  ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)this + 4) + 552LL));
  return v6;
}
