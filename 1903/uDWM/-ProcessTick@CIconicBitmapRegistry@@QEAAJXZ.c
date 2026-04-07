/*
 * XREFs of ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x1800820A0
 * Callers:
 *     ?FireTimeEvents@CDesktopManager@@AEAAJPEA_N@Z @ 0x180036B5C (-FireTimeEvents@CDesktopManager@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x180012B50 (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z @ 0x1800402E8 (-RegisterBitmapPending@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShiftLeft@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x1800822BC (-ShiftLeft@-$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x180093928 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 */

__int64 __fastcall CIconicBitmapRegistry::ProcessTick(CIconicBitmapRegistry *this)
{
  unsigned int v1; // edi
  double i; // xmm6_8
  __int64 v4; // rax
  __int64 v5; // rdx
  CWindowIconic *v6; // rsi
  int v7; // eax
  int v8; // eax
  unsigned int v9; // edi

  v1 = 0;
  for ( i = *((double *)CDesktopManager::s_pDesktopManagerInstance + 40); v1 < *((_DWORD *)this + 18); ++v1 )
  {
    v4 = *((_QWORD *)this + 6);
    if ( *(double *)(v4 + 16LL * v1) > i )
      break;
    v5 = *(_QWORD *)(v4 + 16LL * v1 + 8);
    if ( v5 == -1 )
    {
      v6 = (CWindowIconic *)*((_QWORD *)this + 12);
      *(_WORD *)((char *)this + 89) = 256;
    }
    else
    {
      CIconicBitmapRegistry::RegisterBitmapPending(this, (struct CWindowData *)v5, 0);
      *(_BYTE *)(v5 + 606) |= 8u;
      v6 = *(CWindowIconic **)(v5 + 440);
    }
    CIconicBitmapRegistry::ClearBitmap(this, (CWindowIconic **)v5);
    if ( v6 )
    {
      v7 = CWindowIconic::OnRepresentationTypeUpdated(v6);
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x378u);
    }
  }
  v8 = DynArray<CIconicBitmapPending,0>::ShiftLeft((char *)this + 48, v1);
  v9 = v8;
  if ( v8 >= 0 )
    *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 23) = *((_DWORD *)this + 18) != 0;
  else
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x37Eu);
  return v9;
}
