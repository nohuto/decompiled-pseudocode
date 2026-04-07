/*
 * XREFs of ?UpdateGDISurface@CTopLevelWindow@@AEAAJXZ @ 0x180038348
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180016B10 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateGDISurface(CTopLevelWindow *this)
{
  unsigned int v1; // ebx
  __int64 v2; // r8
  __int64 v3; // rax
  int v4; // eax

  v1 = 0;
  v2 = *(_QWORD *)(*((_QWORD *)this + 90) + 376LL);
  if ( v2 )
  {
    v3 = *((_QWORD *)this + 59);
    if ( v3 )
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v3 + 16) + 16LL) + 560LL))(
             *(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL),
             *(unsigned int *)(*(_QWORD *)(v3 + 16) + 24LL),
             *(unsigned int *)(v2 + 24));
      v1 = v4;
      if ( v4 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x13FFu);
    }
  }
  return v1;
}
