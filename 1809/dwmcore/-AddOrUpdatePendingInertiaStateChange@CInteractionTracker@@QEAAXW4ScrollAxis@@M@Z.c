/*
 * XREFs of ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@M@Z @ 0x18019DE80
 * Callers:
 *     ?StartInertia@CScrollAnimation@@QEAAXM_N@Z @ 0x1801D65B0 (-StartInertia@CScrollAnimation@@QEAAXM_N@Z.c)
 *     ?EnsureInertiaStateChangeAdded@CScrollKeyframeAnimation@@AEAAJXZ @ 0x1801E02F0 (-EnsureInertiaStateChangeAdded@CScrollKeyframeAnimation@@AEAAJXZ.c)
 * Callees:
 *     ?AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z @ 0x18019DFA8 (-AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CInteractionTracker::AddOrUpdatePendingInertiaStateChange(__int64 a1, int a2, float a3)
{
  __int64 v5; // r8
  __int64 v6; // rax
  int v7; // edx
  __int64 v8; // [rsp+20h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-10h] BYREF
  int v10; // [rsp+38h] [rbp-8h]
  void *retaddr; // [rsp+48h] [rbp+8h]

  if ( *(_DWORD *)(a1 + 496)
    && (v5 = *(_QWORD *)(a1 + 472), v6 = (unsigned int)(*(_DWORD *)(a1 + 496) - 1), *(_DWORD *)(v5 + 20 * v6) == 2) )
  {
    if ( a2 )
    {
      if ( a2 != 1 )
      {
        if ( a2 != 2 )
          ModuleFailFastForHRESULT(2147942487LL, retaddr);
        *(float *)(v5 + 20 * v6 + 16) = a3;
LABEL_20:
        v7 = 56;
        goto LABEL_10;
      }
      *(float *)(v5 + 20 * v6 + 8) = a3;
    }
    else
    {
      *(float *)(v5 + 20 * v6 + 4) = a3;
    }
  }
  else
  {
    v8 = 0LL;
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        *((float *)&v8 + 1) = a3;
      }
      else if ( a2 != 2 )
      {
        ModuleFailFastForHRESULT(2147942487LL, retaddr);
      }
    }
    else
    {
      *(float *)&v8 = a3;
    }
    v9 = v8;
    v10 = 0;
    CInteractionTracker::AddPendingStateChange(a1, 2LL, &v9);
    if ( a2 > 1 )
      goto LABEL_20;
  }
  v7 = 55;
LABEL_10:
  CResource::InvalidateAnimationSources((CResource *)a1, v7);
}
