/*
 * XREFs of ?GetNewContentBounds@CComposeTop@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801BDCF4
 * Callers:
 *     ?PostRender@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x18005D180 (-PostRender@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposeTop::GetNewContentBounds(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx

  a2[3] = 0;
  v3 = *(_QWORD *)(a1 + 8);
  a2[2] = 0;
  a2[1] = 0;
  *a2 = 0;
  v4 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64))(*(_QWORD *)v3 + 32LL))(v3, a2, a1 + 16);
  v6 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x53u);
  return v6;
}
