/*
 * XREFs of ?UpdateTime@CKeyframeAnimation@@AEAAXH@Z @ 0x1801A4100
 * Callers:
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180052748 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?ConfigureTimer@KeyframeSequence@@QEAAXXZ @ 0x180053ED4 (-ConfigureTimer@KeyframeSequence@@QEAAXXZ.c)
 *     ?GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ @ 0x18005461C (-GetAnimationTimeLength@CKeyframeAnimation@@QEBAMXZ.c)
 */

void __fastcall CKeyframeAnimation::UpdateTime(CKeyframeAnimation *this, int a2)
{
  __int64 v3; // r9
  __int64 v4; // rcx
  int v5; // r10d
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  __int64 v9; // rax

  if ( *((char *)this + 524) < 0 )
  {
    if ( *((_DWORD *)this + 129) == 4 )
    {
      CKeyframeAnimation::GetAnimationTimeLength(this);
      KeyframeSequence::ConfigureTimer(*(KeyframeSequence **)(v3 + 336));
      *(_DWORD *)(v4 + 92) = v5;
    }
    else
    {
      v6 = *((_DWORD *)this + 109);
      v7 = *((_DWORD *)this + 108);
      if ( v6 < v7 )
      {
        v8 = v7 - v6;
        if ( a2 < v8 )
          v8 = a2;
        *((_DWORD *)this + 109) = v8 + v6;
        a2 -= v8;
      }
      v9 = *((_QWORD *)this + 42);
      if ( (*(_BYTE *)(v9 + 140) & 2) != 0 )
        *(_DWORD *)(v9 + 92) += a2;
    }
  }
}
