/*
 * XREFs of ?PrepareSequenceForIteration@CKeyframeAnimation@@AEAAXI@Z @ 0x1800A7C94
 * Callers:
 *     ?Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x1800A7298 (-Calculate@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z @ 0x1800A78CC (-Play@CKeyframeAnimation@@AEAAXPEAVCExpressionValueStack@@@Z.c)
 *     ?Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z @ 0x1800A7ED0 (-Reset@CKeyframeAnimation@@AEAAJ_NPEAVCExpressionValueStack@@@Z.c)
 *     ?TimeSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x1800A8994 (-TimeSeek@CKeyframeAnimation@@AEAAJM@Z.c)
 *     ?ProgressSeek@CKeyframeAnimation@@AEAAJM@Z @ 0x1801E02C4 (-ProgressSeek@CKeyframeAnimation@@AEAAJM@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CKeyframeAnimation::PrepareSequenceForIteration(CKeyframeAnimation *this, int a2)
{
  int v2; // eax
  int v4; // xmm1_4
  char v5; // r8
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rdx
  char v9; // cl

  v2 = *((_DWORD *)this + 133);
  v4 = (int)FLOAT_1_0;
  if ( v2 )
  {
    if ( v2 == 2 )
    {
      v5 = *((_BYTE *)this + 541) >> 3;
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
    v5 = *((_BYTE *)this + 541) >> 3;
  }
  v6 = *((_DWORD *)this + 126);
  if ( v6 >= 0 && a2 == v6 && *((float *)this + 128) != 1.0 )
    v4 = *((_DWORD *)this + 128);
  v7 = *((_QWORD *)this + 45);
  *(_BYTE *)(v7 + 140) &= ~8u;
  *(_BYTE *)(v7 + 140) |= 8 * (v5 & 1);
  v8 = *((_QWORD *)this + 45);
  v9 = *(_BYTE *)(v8 + 140) & 0xEF | (*((float *)this + 122) >= 0.0 ? 0 : 0x10);
  *(_BYTE *)(v8 + 140) = v9;
  *(_BYTE *)(v8 + 96) = (v9 & 0x10) != 0;
  *(_DWORD *)(*((_QWORD *)this + 45) + 132LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 45) + 136LL) = v4;
}
