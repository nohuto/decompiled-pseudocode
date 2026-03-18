/*
 * XREFs of ?Create@CSharedCircularQueue@@SAJV?$span@E$0?0@gsl@@IPEAPEAV1@_N@Z @ 0x180214C5C
 * Callers:
 *     ?Initialize@CGenericInkTipPointSource@@AEAAJPEAVCSharedSection@@III@Z @ 0x18021588C (-Initialize@CGenericInkTipPointSource@@AEAAJPEAVCSharedSection@@III@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CSharedCircularQueue::Create(unsigned int *a1, unsigned int a2, _QWORD *a3)
{
  __int64 v3; // rbp
  unsigned int v4; // ebx
  unsigned __int64 v5; // rdi
  unsigned __int64 v7; // rsi
  _DWORD *v8; // rax
  __int64 v9; // rcx
  _DWORD *v10; // r8

  v3 = *((_QWORD *)a1 + 1);
  v4 = 0;
  v5 = a2;
  if ( (v3 & 3) != 0 || a2 - 1 > 0xFF || (v7 = *a1, a1 = (unsigned int *)(2 * a2 + 8LL), v7 < (unsigned __int64)a1) )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)a1, 0LL, 0, 0x80070057, 0x37u, 0LL);
  }
  else
  {
    v8 = DefaultHeap::Alloc(0x10uLL);
    v10 = v8;
    if ( v8 )
    {
      *(_QWORD *)v8 = v3;
      v8[2] = v5;
      v8[3] = (v7 - 8) / v5;
    }
    else
    {
      v10 = 0LL;
    }
    *a3 = v10;
    if ( !v10 )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, 0x8007000E, 0x3Du, 0LL);
    }
  }
  return v4;
}
