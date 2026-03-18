/*
 * XREFs of ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x1800C20D0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEAUKeyframeData@@@Z @ 0x180052FB0 (-SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionC.c)
 *     ?GetCacheSizeForType@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180076048 (-GetCacheSizeForType@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ??$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z @ 0x18009E3AC (--$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x1800BD640 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?SetChannelHandle@CBaseExpression@@IEAAJI@Z @ 0x1800BD6C0 (-SetChannelHandle@CBaseExpression@@IEAAJI@Z.c)
 *     ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x1800BFE98 (-ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z.c)
 *     ??$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z @ 0x1800C1AD0 (--$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z.c)
 *     ?SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnimationStopBehavior@@@Z @ 0x1800C22F8 (-SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnima.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x1800C2558 (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetKeyframeData(
        unsigned __int64 this,
        struct CResourceTable *a2,
        const struct MILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA *a3)
{
  CKeyframeAnimation *v5; // rsi
  __int64 v6; // rdx
  CMILCOMBase *Resource; // rax
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  void *v12; // rbp
  __int64 v14; // rax
  int CacheSizeForType; // eax
  CMILCOMBase *v16; // rax
  void *v17; // rax
  int v18; // r9d
  KeyframeSequence *v19; // rdi
  __int64 v20; // rcx
  unsigned int v21; // [rsp+20h] [rbp-18h]

  v5 = (CKeyframeAnimation *)this;
  if ( *(_QWORD *)(this + 336) || *(_QWORD *)(this + 392) )
  {
    v21 = 232;
    goto LABEL_38;
  }
  v6 = *((unsigned int *)a3 + 3);
  if ( !(_DWORD)v6 )
  {
    v21 = 238;
    goto LABEL_38;
  }
  if ( *((_DWORD *)a3 + 13) )
  {
    CacheSizeForType = GetCacheSizeForType(*(_DWORD *)(this + 144));
    if ( *((_DWORD *)a3 + 13) != CacheSizeForType )
    {
      v21 = 245;
LABEL_38:
      v18 = -2003303421;
      goto LABEL_39;
    }
  }
  if ( !*((_DWORD *)a3 + 2) )
  {
    v21 = 251;
    goto LABEL_38;
  }
  this = 48LL * *((unsigned int *)a3 + 2);
  if ( *((unsigned int *)a3 + 5) < this )
  {
    v21 = 257;
    goto LABEL_38;
  }
  Resource = (CMILCOMBase *)CResourceTable::GetResource(a2, v6, 136LL);
  if ( !Resource )
  {
    v21 = 264;
    goto LABEL_38;
  }
  ReplaceInterface<CSharedSection,CSharedSection>((CGdiSpriteBitmap **)v5 + 37, Resource);
  v8 = *((unsigned int *)a3 + 11);
  if ( (_DWORD)v8 )
  {
    v14 = CResourceTable::GetResource(a2, v8, 2LL);
    if ( !v14 || *((_DWORD *)a3 + 8) != 4 )
    {
      v21 = 278;
      goto LABEL_38;
    }
    *((_QWORD *)v5 + 49) = v14;
  }
  *((_DWORD *)v5 + 76) = *((_DWORD *)a3 + 5);
  *((_DWORD *)v5 + 77) = *((_DWORD *)a3 + 4);
  *((_DWORD *)v5 + 78) = *((_DWORD *)a3 + 2);
  v9 = CBaseExpression::SetChannelHandle(v5, *((_DWORD *)a2 + 12));
  v10 = v9;
  if ( v9 >= 0 )
  {
    if ( *((_DWORD *)a3 + 13) )
    {
      v16 = (CMILCOMBase *)CResourceTable::GetResource(a2, *((unsigned int *)a3 + 12), 136LL);
      ReplaceInterface<CSharedSection,CSharedSection>((CGdiSpriteBitmap **)v5 + 40, v16);
      v17 = CSharedSection::ResolveAllocation(
              *((CSharedSection **)v5 + 40),
              *((unsigned int *)a3 + 14),
              *((unsigned int *)a3 + 13));
      *((_QWORD *)v5 + 41) = v17;
      if ( !v17 )
      {
        v18 = -2147024882;
        v21 = 298;
        goto LABEL_39;
      }
      if ( *((_DWORD *)a3 + 15) )
        memset_0(v17, 0, *((unsigned int *)a3 + 13));
    }
    v12 = CSharedSection::ResolveAllocation(
            *((CSharedSection **)v5 + 37),
            *((unsigned int *)v5 + 77),
            *((unsigned int *)v5 + 76));
    if ( v12 )
    {
      v9 = CKeyframeAnimation::SetIterationInfo(v5, v11, *((unsigned int *)a3 + 8));
      v10 = v9;
      if ( v9 < 0 )
      {
        v21 = 314;
      }
      else
      {
        v9 = CKeyframeAnimation::SetKeyFrameData((__int64)v5, *((_DWORD *)a3 + 16), *((_DWORD *)a3 + 10), (__int64)v12);
        v10 = v9;
        if ( v9 < 0 )
        {
          v21 = 319;
        }
        else
        {
          v9 = CBaseExpression::TryRegisterWithExpressionManager(v5);
          v10 = v9;
          if ( v9 >= 0 )
            return 0;
          v21 = 321;
        }
      }
      goto LABEL_34;
    }
    v18 = -2147024882;
    v21 = 307;
LABEL_39:
    v10 = v18;
    goto LABEL_40;
  }
  v21 = 287;
LABEL_34:
  v18 = v9;
LABEL_40:
  MilInstrumentationCheckHR_MaybeFailFast(this, 0LL, 0, v18, v21);
  v19 = (KeyframeSequence *)*((_QWORD *)v5 + 42);
  *((_QWORD *)v5 + 42) = 0LL;
  if ( v19 )
  {
    KeyframeSequence::RemoveAllKeyFrames(v19);
    v20 = *((_QWORD *)v19 + 8);
    if ( v20 )
    {
      *((_QWORD *)v19 + 8) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    WPF::ProcessHeapImpl::Free(v19);
  }
  ReleaseInterface<CCompositionSurfaceInfo>((CGdiSpriteBitmap **)v5 + 37);
  return v10;
}
