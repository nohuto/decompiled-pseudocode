/*
 * XREFs of ?AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x18000A0F4
 * Callers:
 *     ?_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x18000A058 (-_AddAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 * Callees:
 *     ?GetPerspectiveValue@CTransitionVisualController@@SAJHHPEAM@Z @ 0x18000A240 (-GetPerspectiveValue@CTransitionVisualController@@SAJHHPEAM@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180015648 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180017270 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180029F64 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18002A4BC (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTransitionVisualController::AddAnimationComponent(
        CTransitionVisualController *this,
        struct CAnimationComponent *a2)
{
  int inserted; // eax
  int v4; // ebx
  unsigned int v5; // eax
  unsigned int v6; // edx
  struct CAnimationComponent *v7; // rcx
  struct CVisual *v8; // rdx
  int v10; // eax
  int v11; // r9d
  unsigned int v12; // [rsp+20h] [rbp-18h]
  void *v13; // [rsp+28h] [rbp-10h]
  struct CAnimationComponent *v14; // [rsp+48h] [rbp+10h] BYREF
  float v15; // [rsp+50h] [rbp+18h] BYREF

  v14 = a2;
  inserted = CTransitionVisualController::_EnsureTransitionVisualRoot(this);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v12 = 2307;
LABEL_19:
    v11 = inserted;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v11,
      v12,
      v13);
    return (unsigned int)v4;
  }
  inserted = CTransitionVisualController::_EnsureStagingVisualRoot(this);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v12 = 2308;
    goto LABEL_19;
  }
  v5 = *((_DWORD *)this + 34);
  v6 = v5 + 1;
  if ( v5 + 1 < v5 )
  {
    v4 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, v13);
    goto LABEL_21;
  }
  if ( v6 <= *((_DWORD *)this + 33) )
  {
    *(_QWORD *)(*((_QWORD *)this + 14) + 8LL * v5) = v14;
    *((_DWORD *)this + 34) = v6;
    goto LABEL_6;
  }
  v10 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 112, 8LL, 1LL, &v14);
  v4 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC0u, v13);
  if ( v4 < 0 )
  {
LABEL_21:
    v12 = 2310;
    v11 = v4;
    goto LABEL_22;
  }
LABEL_6:
  _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
  v7 = v14;
  v8 = (struct CVisual *)*((_QWORD *)v14 + 4);
  if ( v8 )
  {
    inserted = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 18) + 32LL), v8, 0LL, 0, 1);
    v4 = inserted;
    if ( inserted < 0 )
    {
      v12 = 2315;
      goto LABEL_19;
    }
    v7 = v14;
  }
  inserted = VisualCollection::InsertRelative(
               (VisualCollection *)(*((_QWORD *)this + 2) + 32LL),
               (struct CVisual *)((*((_QWORD *)v7 + 5) + 8LL) & -(__int64)(*((_QWORD *)v7 + 5) != 0LL)),
               0LL,
               0,
               1);
  v4 = inserted;
  if ( inserted < 0 )
  {
    v12 = 2319;
    goto LABEL_19;
  }
  if ( (int)CTransitionVisualController::GetPerspectiveValue(
              *(_DWORD *)(*((_QWORD *)v14 + 16) + 72LL),
              *((_DWORD *)v14 + 7),
              &v15) >= 0 )
    *(float *)(*((_QWORD *)v14 + 5) + 936LL) = v15;
  return (unsigned int)v4;
}
