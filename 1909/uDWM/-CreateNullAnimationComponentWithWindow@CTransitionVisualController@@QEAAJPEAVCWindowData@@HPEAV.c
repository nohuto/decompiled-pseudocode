/*
 * XREFs of ?CreateNullAnimationComponentWithWindow@CTransitionVisualController@@QEAAJPEAVCWindowData@@HPEAVCStoryboard@@_NPEAPEAVCAnimationComponent@@@Z @ 0x180003484
 * Callers:
 *     ?_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimationComponent@@@Z @ 0x1800033E8 (-_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimat.c)
 * Callees:
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x180009300 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ??0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z @ 0x18000A2D8 (--0CAnimationComponent@@QEAA@PEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEAVCStoryboard@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x180029F64 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18002A4BC (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z @ 0x18002E234 (-Create@CAnimatedTransitionVisual@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransitionVisualController::CreateNullAnimationComponentWithWindow(
        CTransitionVisualController *this,
        struct CWindowData *a2,
        unsigned int a3,
        struct CStoryboard *a4,
        bool a5,
        struct CAnimationComponent **a6)
{
  struct CAnimatedTransitionVisual *v6; // rbp
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rdx
  volatile signed __int32 *v14; // rsi
  int v15; // eax
  unsigned int v16; // ebx
  int v17; // eax
  int v18; // eax
  struct CAnimatedTransitionVisual *v19; // rcx
  struct CTopLevelWindow *v20; // rcx
  struct CAnimationComponent **v21; // rax
  struct CAnimatedTransitionVisual *v22; // rcx
  void *v24; // [rsp+28h] [rbp-30h]
  struct CAnimatedTransitionVisual *v25; // [rsp+68h] [rbp+10h] BYREF

  v6 = 0LL;
  v25 = 0LL;
  v11 = 4095;
  if ( a2 )
    v11 = *((_DWORD *)a2 + 153) & 0x400000 | 0xFFF;
  v12 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          144LL);
  if ( v12 )
  {
    if ( a2 )
      v13 = *((_QWORD *)a2 + 5);
    else
      v13 = 0LL;
    v14 = (volatile signed __int32 *)CAnimationComponent::CAnimationComponent(v12, v13, v11, a3, a4);
  }
  else
  {
    v14 = 0LL;
  }
  if ( v14 )
  {
    v15 = CTransitionVisualController::_EnsureTransitionVisualRoot(this);
    v16 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(
        0x14u,
        &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
        2u,
        v15,
        0x6D4u,
        v24);
    }
    else
    {
      v17 = CTransitionVisualController::_EnsureStagingVisualRoot(this);
      v16 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
          2u,
          v17,
          0x6D5u,
          v24);
      }
      else
      {
        v18 = CAnimatedTransitionVisual::Create(&v25);
        v16 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2u,
            v18,
            0x6D7u,
            v24);
        }
        else
        {
          v19 = v25;
          *((_DWORD *)v25 + 184) = *((_DWORD *)a4 + 18);
          *((_DWORD *)v19 + 185) = a3;
          if ( a5 )
          {
            if ( a2 )
            {
              v20 = (struct CTopLevelWindow *)*((_QWORD *)a2 + 50);
              if ( v20 )
                CTransitionVisualController::_MoveWindowOffscreen(v20, 1);
            }
          }
          v21 = a6;
          *a6 = (struct CAnimationComponent *)v14;
          _InterlockedIncrement(v14 + 2);
          v22 = v25;
          *((_QWORD *)*v21 + 5) = v25;
          _InterlockedIncrement((volatile signed __int32 *)v22 + 4);
        }
        v6 = v25;
      }
    }
    CBaseObject::Release((CBaseObject *)v14);
    if ( v6 )
      CBaseObject::Release((struct CAnimatedTransitionVisual *)((char *)v6 + 8));
  }
  else
  {
    v16 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2147024882,
      0x6D2u,
      v24);
  }
  return v16;
}
