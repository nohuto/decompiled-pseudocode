/*
 * XREFs of ?SetHitTestVisibility@CVisual@@QEAAJ_N@Z @ 0x180004134
 * Callers:
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x180007924 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetHitTestVisibility(CVisual *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  int v5; // eax
  void *v7; // [rsp+28h] [rbp-10h]

  v3 = *((_QWORD *)this + 2);
  v4 = 0;
  if ( v3 )
  {
    LOBYTE(a3) = 1;
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(**(_QWORD **)(*(_QWORD *)(v3 + 16) + 16LL) + 432LL))(
           *(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL),
           *(unsigned int *)(*(_QWORD *)(v3 + 16) + 24LL),
           a3,
           0LL);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x49Du, v7);
  }
  return v4;
}
