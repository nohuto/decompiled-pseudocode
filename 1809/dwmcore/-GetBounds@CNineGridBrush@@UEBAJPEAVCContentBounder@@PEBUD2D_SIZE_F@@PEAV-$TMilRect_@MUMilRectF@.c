/*
 * XREFs of ?GetBounds@CNineGridBrush@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180019A90
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CNineGridBrush::GetBounds(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // eax
  unsigned int v7; // ecx

  v4 = *(_QWORD *)(a1 + 72);
  v5 = 0;
  if ( v4 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 168LL))(v4);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x58u);
  }
  else
  {
    a4[3] = 0;
    a4[2] = 0;
    a4[1] = 0;
    *a4 = 0;
  }
  return v5;
}
