/*
 * XREFs of ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x1800A1558
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z @ 0x18007D030 (--$ReplaceInterface@VCSharedSection@@V1@@@YAXAEAPEAVCSharedSection@@PEAV0@@Z.c)
 *     ?ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z @ 0x1800943A8 (-ResolveAllocation@CSharedSection@@QEAAPEAX_K0@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009BDF0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetCacheSizeForType@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800A0948 (-GetCacheSizeForType@@YAIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ @ 0x1800A1390 (-RemoveAllKeyFrames@KeyframeSequence@@AEAAXXZ.c)
 *     ?SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnimationStopBehavior@@@Z @ 0x1800A1444 (-SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnima.c)
 *     ??$ReleaseInterface@UMoveOptimizationInfo@@@@YAXAEAPEAUMoveOptimizationInfo@@@Z @ 0x1800A4950 (--$ReleaseInterface@UMoveOptimizationInfo@@@@YAXAEAPEAUMoveOptimizationInfo@@@Z.c)
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x1800A4F48 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?SetChannelHandle@CBaseExpression@@IEAAJI@Z @ 0x1800A4FC8 (-SetChannelHandle@CBaseExpression@@IEAAJI@Z.c)
 *     ?SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionColorSpace@@PEAUKeyframeData@@@Z @ 0x1800A5B38 (-SetKeyFrameData@CKeyframeAnimation@@AEAAJW4Enum@KeyframeAnimationDelayBehavior@@W42CompositionC.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetKeyframeData(
        __int64 this,
        struct CResourceTable *a2,
        const struct tagMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA *a3)
{
  CKeyframeAnimation *v5; // rsi
  unsigned int v6; // edx
  CMILCOMBase *Resource; // rax
  unsigned int v8; // edx
  int v9; // eax
  unsigned int v10; // ebx
  void *v11; // rbp
  __int64 v13; // rax
  int CacheSizeForType; // eax
  CMILCOMBase *v15; // rax
  void *v16; // rax
  unsigned int v17; // r9d
  KeyframeSequence *v18; // rdi
  __int64 v19; // rcx
  unsigned int v20; // [rsp+20h] [rbp-28h]

  v5 = (CKeyframeAnimation *)this;
  if ( *(_QWORD *)(this + 360) || *(_QWORD *)(this + 416) )
  {
    v20 = 229;
    goto LABEL_38;
  }
  v6 = *((_DWORD *)a3 + 3);
  if ( !v6 )
  {
    v20 = 235;
    goto LABEL_38;
  }
  if ( *((_DWORD *)a3 + 13) )
  {
    CacheSizeForType = GetCacheSizeForType(*(_DWORD *)(this + 144));
    if ( *((_DWORD *)a3 + 13) != CacheSizeForType )
    {
      v20 = 242;
LABEL_38:
      v17 = -2003303421;
      goto LABEL_39;
    }
  }
  if ( !*((_DWORD *)a3 + 2) )
  {
    v20 = 248;
    goto LABEL_38;
  }
  this = 48LL * *((unsigned int *)a3 + 2);
  if ( *((unsigned int *)a3 + 5) < (unsigned __int64)this )
  {
    v20 = 254;
    goto LABEL_38;
  }
  Resource = (CMILCOMBase *)CResourceTable::GetResource((__int64)a2, v6, 0xA7u);
  if ( !Resource )
  {
    v20 = 261;
    goto LABEL_38;
  }
  ReplaceInterface<CSharedSection,CSharedSection>((CGdiSpriteBitmap **)v5 + 40, Resource);
  v8 = *((_DWORD *)a3 + 11);
  if ( v8 )
  {
    v13 = CResourceTable::GetResource((__int64)a2, v8, 2u);
    if ( !v13 || *((_DWORD *)a3 + 8) != 4 )
    {
      v20 = 275;
      goto LABEL_38;
    }
    *((_QWORD *)v5 + 52) = v13;
  }
  *((_DWORD *)v5 + 82) = *((_DWORD *)a3 + 5);
  *((_DWORD *)v5 + 83) = *((_DWORD *)a3 + 4);
  *((_DWORD *)v5 + 84) = *((_DWORD *)a3 + 2);
  v9 = CBaseExpression::SetChannelHandle(v5, *((_DWORD *)a2 + 12));
  v10 = v9;
  if ( v9 >= 0 )
  {
    if ( *((_DWORD *)a3 + 13) )
    {
      v15 = (CMILCOMBase *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 12), 0xA7u);
      ReplaceInterface<CSharedSection,CSharedSection>((CGdiSpriteBitmap **)v5 + 43, v15);
      v16 = CSharedSection::ResolveAllocation(
              *((CSharedSection **)v5 + 43),
              *((unsigned int *)a3 + 14),
              *((unsigned int *)a3 + 13));
      *((_QWORD *)v5 + 44) = v16;
      if ( !v16 )
      {
        v17 = -2147024882;
        v20 = 295;
        goto LABEL_39;
      }
      if ( *((_DWORD *)a3 + 15) )
        memset_0(v16, 0, *((unsigned int *)a3 + 13));
    }
    v11 = CSharedSection::ResolveAllocation(
            *((CSharedSection **)v5 + 40),
            *((unsigned int *)v5 + 83),
            *((unsigned int *)v5 + 82));
    if ( v11 )
    {
      v9 = CKeyframeAnimation::SetIterationInfo(
             (__int64)v5,
             *((float *)a3 + 7),
             *((_DWORD *)a3 + 8),
             *((float *)a3 + 6),
             *((_DWORD *)a3 + 9));
      v10 = v9;
      if ( v9 < 0 )
      {
        v20 = 311;
      }
      else
      {
        v9 = CKeyframeAnimation::SetKeyFrameData(v5, *((unsigned int *)a3 + 16), *((unsigned int *)a3 + 10), v11);
        v10 = v9;
        if ( v9 < 0 )
        {
          v20 = 316;
        }
        else
        {
          v9 = CBaseExpression::TryRegisterWithExpressionManager(v5);
          v10 = v9;
          if ( v9 >= 0 )
            return 0;
          v20 = 318;
        }
      }
      goto LABEL_34;
    }
    v17 = -2147024882;
    v20 = 304;
LABEL_39:
    v10 = v17;
    goto LABEL_40;
  }
  v20 = 284;
LABEL_34:
  v17 = v9;
LABEL_40:
  MilInstrumentationCheckHR_MaybeFailFast(this, 0LL, 0, v17, v20, 0LL);
  v18 = (KeyframeSequence *)*((_QWORD *)v5 + 45);
  *((_QWORD *)v5 + 45) = 0LL;
  if ( v18 )
  {
    KeyframeSequence::RemoveAllKeyFrames(v18);
    v19 = *((_QWORD *)v18 + 8);
    if ( v19 )
    {
      *((_QWORD *)v18 + 8) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    operator delete(v18);
  }
  ReleaseInterface<MoveOptimizationInfo>((char *)v5 + 320);
  return v10;
}
