/*
 * XREFs of ?RestoreState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18008E3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18008E430 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18008E470 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COffScreenRenderingLayer::RestoreState(COffScreenRenderingLayer *this, struct CDrawingContext *a2)
{
  int v2; // eax
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int v9; // ecx

  v2 = *((_DWORD *)a2 + 816);
  if ( v2 )
    *((_DWORD *)a2 + 816) = v2 - 1;
  v5 = CExternalLayer::RestoreState(this, a2);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x74u);
  }
  else
  {
    v8 = CDrawingContext::FlushD2D(a2);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x75u);
    }
    else if ( g_LockAndReadLayer )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, unsigned __int64))(**((_QWORD **)this + 1) + 216LL))(
        *((_QWORD *)this + 1),
        *((_QWORD *)a2 + 48),
        ((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL));
    }
  }
  return v7;
}
