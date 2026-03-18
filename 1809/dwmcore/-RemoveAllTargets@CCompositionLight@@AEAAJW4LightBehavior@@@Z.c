/*
 * XREFs of ?RemoveAllTargets@CCompositionLight@@AEAAJW4LightBehavior@@@Z @ 0x1800666A8
 * Callers:
 *     ??1CCompositionLight@@UEAA@XZ @ 0x180066640 (--1CCompositionLight@@UEAA@XZ.c)
 *     ?ProcessClearTargets@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONLIGHT_CLEARTARGETS@@@Z @ 0x180066698 (-ProcessClearTargets@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONLIGHT_CLE.c)
 *     ?ProcessClearExclusions@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONLIGHT_CLEAREXCLUSIONS@@@Z @ 0x18018FF00 (-ProcessClearExclusions@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONLIGHT_.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x18006674C (-RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCompositionLight::RemoveAllTargets(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edi
  unsigned int v5; // ebp
  __int64 v6; // rbx
  unsigned int v7; // r14d
  __int64 v8; // rsi
  int v9; // eax
  unsigned int v10; // ecx

  v2 = 0;
  v5 = 0;
  v6 = a1 + (a2 != 0 ? 112LL : 72LL);
  v7 = *(_DWORD *)(v6 + 24);
  if ( v7 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      v9 = CVisual::RemoveLight(*(_QWORD *)(v8 + *(_QWORD *)v6), a1, a2);
      v2 = v9;
      if ( v9 < 0 )
        break;
      ++v5;
      v8 += 8LL;
      if ( v5 >= v7 )
        goto LABEL_5;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x164u);
  }
  else
  {
LABEL_5:
    *(_DWORD *)(v6 + 24) = 0;
    DynArrayImpl<0>::ShrinkToSize(v6, 8u);
  }
  return v2;
}
