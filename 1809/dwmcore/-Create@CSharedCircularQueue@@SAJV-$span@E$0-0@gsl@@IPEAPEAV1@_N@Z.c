/*
 * XREFs of ?Create@CSharedCircularQueue@@SAJV?$span@E$0?0@gsl@@IPEAPEAV1@_N@Z @ 0x180198C78
 * Callers:
 *     ?Initialize@CGenericInkTipPointSource@@AEAAJPEAVCSharedSection@@III@Z @ 0x18019936C (-Initialize@CGenericInkTipPointSource@@AEAAJPEAVCSharedSection@@III@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CSharedCircularQueue::Create(unsigned int *a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rdi
  unsigned int *v6; // rsi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rbp
  int v9; // r9d
  unsigned int v11; // [rsp+20h] [rbp-18h]

  v3 = 0;
  v4 = a2;
  v6 = a1;
  if ( (a1[2] & 3) != 0
    || a2 - 1 > 0xFF
    || (v7 = *a1, a1 = (unsigned int *)((unsigned int)(2 * v4) + 8LL), v7 < (unsigned __int64)a1) )
  {
    v9 = -2147024809;
    v11 = 54;
    goto LABEL_10;
  }
  v8 = (v7 - 8) / v4;
  a1 = (unsigned int *)HeapAlloc(WPF::g_processHeap, 0, 0x10uLL);
  if ( a1 )
  {
    *(_QWORD *)a1 = *((_QWORD *)v6 + 1);
    a1[2] = v4;
    a1[3] = v8;
  }
  else
  {
    a1 = 0LL;
  }
  *a3 = a1;
  if ( !a1 )
  {
    v9 = -2147024882;
    v11 = 60;
LABEL_10:
    v3 = v9;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, v9, v11);
  }
  return v3;
}
