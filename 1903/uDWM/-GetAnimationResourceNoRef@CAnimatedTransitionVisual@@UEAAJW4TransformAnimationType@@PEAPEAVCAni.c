/*
 * XREFs of ?GetAnimationResourceNoRef@CAnimatedTransitionVisual@@UEAAJW4TransformAnimationType@@PEAPEAVCAnimationResource@@@Z @ 0x180033510
 * Callers:
 *     <none>
 * Callees:
 *     ?SetTrigger@CAnimationResource@@QEAAJPEAVCAnimationTriggerProxy@@@Z @ 0x1800335A0 (-SetTrigger@CAnimationResource@@QEAAJPEAVCAnimationTriggerProxy@@@Z.c)
 *     ?Create@CAnimationResource@@SAJPEAPEAV1@@Z @ 0x1800335C8 (-Create@CAnimationResource@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::GetAnimationResourceNoRef(__int64 a1, int a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rdi
  int v7; // eax
  struct CAnimationTriggerProxy *v8; // rdx
  int v9; // eax
  void *v11; // [rsp+28h] [rbp-10h]

  v3 = 0;
  v6 = a1 + 8LL * a2;
  if ( !*(_QWORD *)(v6 + 616) )
  {
    v7 = CAnimationResource::Create((struct CAnimationResource **)(v6 + 616));
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x72Fu, v11);
    }
    else
    {
      v8 = *(struct CAnimationTriggerProxy **)(a1 + 720);
      if ( v8 )
      {
        v9 = CAnimationResource::SetTrigger(*(CAnimationResource **)(v6 + 616), v8);
        v3 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x733u, v11);
      }
    }
  }
  *a3 = *(_QWORD *)(v6 + 616);
  return v3;
}
