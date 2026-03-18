/*
 * XREFs of ?AddToVisibleRegion@CMoveRenderPassInfo@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18018049C
 * Callers:
 *     ?AddToVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x1801C24F8 (-AddToVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMoveRenderPassInfo::AddToVisibleRegion(__int64 a1, float *a2)
{
  int v4; // ebx
  float v5; // xmm0_4
  float v6; // r9d
  float v7; // xmm0_4
  int v8; // r8d
  float v9; // xmm0_4
  HRGN RectRgn; // rsi
  signed int v11; // eax
  __int64 v12; // rcx
  HRGN v13; // rax
  signed int v14; // eax
  __int64 v15; // rcx
  signed int LastError; // eax
  __int64 v17; // rcx
  float v19; // [rsp+30h] [rbp-28h]

  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 72) + 312LL))(*(_QWORD *)(a1 + 72)) )
  {
    SetLastError(0);
    v5 = a2[3] + 6291456.25;
    v6 = v5;
    v7 = a2[2] + 6291456.25;
    v8 = (int)(LODWORD(v7) << 10) >> 11;
    v9 = a2[1] + 6291456.25;
    v19 = *a2 + 6291456.25;
    RectRgn = CreateRectRgn(
                (int)(LODWORD(v19) << 10) >> 11,
                (int)(LODWORD(v9) << 10) >> 11,
                v8,
                (int)(LODWORD(v6) << 10) >> 11);
    if ( RectRgn )
    {
      if ( *(_QWORD *)(a1 + 8) || (SetLastError(0), v13 = CreateRectRgn(0, 0, 0, 0), (*(_QWORD *)(a1 + 8) = v13) != 0LL) )
      {
        SetLastError(0);
        if ( !CombineRgn(*(HRGN *)(a1 + 8), *(HRGN *)(a1 + 8), RectRgn, 2) )
        {
          LastError = GetLastError();
          v4 = LastError;
          if ( LastError > 0 )
            v4 = (unsigned __int16)LastError | 0x80070000;
          if ( v4 >= 0 )
            v4 = -2003304445;
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v4, 0x9Au, 0LL);
        }
      }
      else
      {
        v14 = GetLastError();
        v4 = v14;
        if ( v14 > 0 )
          v4 = (unsigned __int16)v14 | 0x80070000;
        if ( v4 >= 0 )
          v4 = -2003304445;
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v4, 0x94u, 0LL);
      }
      DeleteObject(RectRgn);
    }
    else
    {
      v11 = GetLastError();
      v4 = v11;
      if ( v11 > 0 )
        v4 = (unsigned __int16)v11 | 0x80070000;
      if ( v4 >= 0 )
        v4 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v4, 0x90u, 0LL);
    }
  }
  return (unsigned int)v4;
}
