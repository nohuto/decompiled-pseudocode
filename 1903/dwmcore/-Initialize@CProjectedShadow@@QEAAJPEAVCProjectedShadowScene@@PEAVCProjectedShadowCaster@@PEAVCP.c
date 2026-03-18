/*
 * XREFs of ?Initialize@CProjectedShadow@@QEAAJPEAVCProjectedShadowScene@@PEAVCProjectedShadowCaster@@PEAVCProjectedShadowReceiver@@@Z @ 0x1801F1E00
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180008230 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x180080284 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CProjectedShadow::Initialize(
        CProjectedShadow *this,
        struct CProjectedShadowScene *a2,
        struct CProjectedShadowCaster *a3,
        struct CProjectedShadowReceiver *a4)
{
  CPtrArrayBase *v4; // rdi
  __int64 v6; // r8
  unsigned __int64 v10; // r8
  signed int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  unsigned __int64 v14; // r8
  signed int v15; // eax
  __int64 v16; // rcx
  unsigned __int64 v17; // r8
  signed int v18; // eax
  __int64 v19; // rcx

  v4 = (CProjectedShadow *)((char *)this + 24);
  v6 = *((_QWORD *)this + 3);
  if ( (v6 & 2) != 0 )
    v10 = *(_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v10 = *((_QWORD *)this + 3) & 1LL;
  v11 = CPtrArrayBase::InsertAt(v4, (unsigned __int64)a2, v10);
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x49u, 0LL);
  }
  else
  {
    *((_QWORD *)this + 7) = a2;
    if ( (*(_QWORD *)v4 & 2) != 0 )
      v14 = *(_QWORD *)(*(_QWORD *)v4 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      v14 = *(_QWORD *)v4 & 1LL;
    v15 = CPtrArrayBase::InsertAt(v4, (unsigned __int64)a3, v14);
    v13 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x4Cu, 0LL);
    }
    else
    {
      *((_QWORD *)this + 8) = a3;
      if ( (*(_QWORD *)v4 & 2) != 0 )
        v17 = *(_QWORD *)(*(_QWORD *)v4 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        v17 = *(_QWORD *)v4 & 1LL;
      v18 = CPtrArrayBase::InsertAt(v4, (unsigned __int64)a4, v17);
      v13 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x4Fu, 0LL);
      else
        *((_QWORD *)this + 9) = a4;
    }
  }
  return v13;
}
