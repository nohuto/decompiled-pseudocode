/*
 * XREFs of ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x180054030
 * Callers:
 *     ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x180053DB8 (-Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x18005427C (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?TimeSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x18005479C (-TimeSeek@CKeyframeAnimation@@AEAAJM@Z.c)
 *     ?Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x1800E6E2C (-Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?ProgressSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x1801A3E70 (-ProgressSeek@CKeyframeAnimation@@AEAAJM@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CKeyframeAnimation::PrepareSequenceForIteration(CKeyframeAnimation *this, int a2)
{
  int v2; // eax
  float v4; // xmm1_4
  char v5; // r8
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rdx
  char v9; // cl

  v2 = *((_DWORD *)this + 129);
  v4 = FLOAT_1_0;
  if ( v2 )
  {
    if ( v2 == 2 )
    {
      v5 = *((_BYTE *)this + 525) >> 3;
      if ( (a2 & 1) != 0 )
        v5 = ~v5;
    }
    else
    {
      v5 = 0;
    }
  }
  else
  {
    v5 = *((_BYTE *)this + 525) >> 3;
  }
  v6 = *((_DWORD *)this + 122);
  if ( v6 >= 0 && a2 == v6 && *((float *)this + 124) != 1.0 )
    v4 = *((float *)this + 124);
  v7 = *((_QWORD *)this + 42);
  *(_BYTE *)(v7 + 140) &= ~8u;
  *(_BYTE *)(v7 + 140) |= 8 * (v5 & 1);
  v8 = *((_QWORD *)this + 42);
  v9 = *(_BYTE *)(v8 + 140) & 0xEF | (*((float *)this + 118) >= 0.0 ? 0 : 0x10);
  *(_BYTE *)(v8 + 140) = v9;
  *(_BYTE *)(v8 + 96) = (v9 & 0x10) != 0;
  *(_DWORD *)(*((_QWORD *)this + 42) + 132LL) = 0;
  *(float *)(*((_QWORD *)this + 42) + 136LL) = v4;
}
