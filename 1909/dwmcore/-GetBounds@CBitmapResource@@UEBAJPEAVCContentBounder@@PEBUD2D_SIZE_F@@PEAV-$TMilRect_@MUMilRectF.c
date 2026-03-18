/*
 * XREFs of ?GetBounds@CBitmapResource@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D1D50
 * Callers:
 *     ?GetBounds@CBitmapResource@@W7EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F12C0 (-GetBounds@CBitmapResource@@W7EBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRect.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapResource::GetBounds(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  signed int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int v9; // ecx
  float v10; // xmm1_4
  int v12[6]; // [rsp+30h] [rbp-18h] BYREF
  int v13; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 72);
  if ( v4 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v4 + 32LL))(v4, &v13, v12);
    v8 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xADu, 0LL);
    }
    else
    {
      v9 = v13;
      *(_DWORD *)a4 = 0;
      *(_DWORD *)(a4 + 4) = 0;
      v10 = (float)v12[0];
      *(float *)(a4 + 8) = (float)v9;
      *(float *)(a4 + 12) = v10;
    }
  }
  else
  {
    v8 = -2003292404;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, 0x88982F0C, 0xB6u, 0LL);
  }
  return v8;
}
