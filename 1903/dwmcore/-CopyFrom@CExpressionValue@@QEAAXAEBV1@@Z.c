/*
 * XREFs of ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x180082060
 * Callers:
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x18008092C (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?CreateConstantKeyframeValue@KeyframeValue@@SAXPEBVCExpressionValue@@PEAPEAV1@@Z @ 0x180080D88 (-CreateConstantKeyframeValue@KeyframeValue@@SAXPEBVCExpressionValue@@PEAPEAV1@@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180081380 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x180081C20 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800993F0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x1800C0DF0 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@PEAV2@@Z @ 0x1800D39C0 (-MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@PEAV2@@Z.c)
 *     ?AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack@@@Z @ 0x1801D4078 (-AddStackValueToSum@CConditionalExpression@@AEAAJPEAVCExpressionValue@@PEAVCExpressionValueStack.c)
 *     ?ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x1801E1714 (-ProcessInnerExpression@CKeyframeAnimation@@QEAAJIPEAVCExpressionValueStack@@PEAVCExpressionValu.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x1801E7F78 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?EnsureInertiaModifierProcessed@CScrollPositionKeyframeAnimation@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x180208190 (-EnsureInertiaModifierProcessed@CScrollPositionKeyframeAnimation@@MEAAJPEAVCExpressionValueStack.c)
 *     ?EnsureInertiaModifierProcessed@CScrollScaleKeyframeAnimation@@MEAAJPEAVCExpressionValueStack@@_K@Z @ 0x1802086B0 (-EnsureInertiaModifierProcessed@CScrollScaleKeyframeAnimation@@MEAAJPEAVCExpressionValueStack@@_.c)
 *     ?GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z @ 0x1802098E4 (-GetValue@KeyframeValue@@QEBAJPEAVCExpressionValueStack@@PEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1801C1A68 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 */

void __fastcall CExpressionValue::CopyFrom(CExpressionValue *this, const struct CExpressionValue *a2)
{
  int v2; // eax
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int64 v5; // rdx

  v2 = *((_DWORD *)a2 + 18);
  if ( v2 == 18 )
  {
    *(_DWORD *)this = *(_DWORD *)a2;
    *((_DWORD *)this + 18) = 18;
LABEL_3:
    *((_BYTE *)this + 76) = 1;
  }
  else
  {
    switch ( v2 )
    {
      case 11:
        v5 = *((_QWORD *)a2 + 8);
        *((_DWORD *)this + 18) = 11;
        *((_BYTE *)this + 76) = 1;
        Microsoft::WRL::ComPtr<CPathData>::operator=((char *)this + 64, v5);
        break;
      case 17:
        *(_BYTE *)this = *(_BYTE *)a2;
        *((_DWORD *)this + 18) = 17;
        goto LABEL_3;
      case 35:
        *((_DWORD *)this + 18) = 35;
        *(_QWORD *)this = *(_QWORD *)a2;
        *((_BYTE *)this + 76) = 1;
        break;
      case 42:
        *((_DWORD *)this + 18) = 42;
        *(_DWORD *)this = *(_DWORD *)a2;
        goto LABEL_3;
      case 52:
        *((_DWORD *)this + 18) = 52;
        *(_QWORD *)this = *(_QWORD *)a2;
        *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
        *((_BYTE *)this + 76) = 1;
        break;
      case 69:
        *((_DWORD *)this + 18) = 69;
        *(_OWORD *)this = *(_OWORD *)a2;
        goto LABEL_3;
      case 70:
        *((_DWORD *)this + 18) = 70;
        v3 = *(_OWORD *)a2;
        *((_BYTE *)this + 76) = 1;
        *(_OWORD *)this = v3;
        break;
      case 71:
        *((_DWORD *)this + 18) = 71;
        *(_OWORD *)this = *(_OWORD *)a2;
        goto LABEL_3;
      case 104:
        *((_DWORD *)this + 18) = 104;
        *(_OWORD *)this = *(_OWORD *)a2;
        *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
        *((_BYTE *)this + 76) = 1;
        break;
      case 265:
        *((_DWORD *)this + 18) = 265;
        *(_OWORD *)this = *(_OWORD *)a2;
        *((_OWORD *)this + 1) = *((_OWORD *)a2 + 1);
        *((_OWORD *)this + 2) = *((_OWORD *)a2 + 2);
        v4 = *((_OWORD *)a2 + 3);
        *((_BYTE *)this + 76) = 1;
        *((_OWORD *)this + 3) = v4;
        break;
      default:
        return;
    }
  }
}
