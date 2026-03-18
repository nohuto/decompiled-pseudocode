/*
 * XREFs of ?Clear@CScopedClipStack@@QEAAXXZ @ 0x180046E80
 * Callers:
 *     ??1CDrawingContext@@EEAA@XZ @ 0x180046554 (--1CDrawingContext@@EEAA@XZ.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18007F954 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B8A58 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z @ 0x18017A5A4 (-FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z.c)
 */

void __fastcall CScopedClipStack::Clear(CScopedClipStack *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  int v4; // eax
  int v5; // eax
  unsigned int v6; // edi
  unsigned int v7; // eax
  int v8; // eax
  unsigned int v9; // ecx
  void *v10; // [rsp+40h] [rbp+8h] BYREF

  *((_DWORD *)this + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(this, 80LL);
  *((_DWORD *)this + 556) = 0;
  v3 = 8LL;
  v4 = *((_DWORD *)this + 558);
  if ( v4 == 8 )
  {
    v7 = *((_DWORD *)this + 562);
    v2 = 0xFFFFFFFFLL;
    if ( v7 > 8 )
      v3 = v7;
    if ( (unsigned __int64)(3 * v3) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0xEEu, 0LL);
    }
    else if ( (unsigned int)(3 * v3) <= *((_DWORD *)this + 557) )
    {
      v10 = 0LL;
      v8 = HrMalloc(0x10uLL, (unsigned int)v3, &v10);
      if ( v8 >= 0 )
      {
        operator delete(*((void **)this + 280));
        *((_QWORD *)this + 280) = v10;
        *((_DWORD *)this + 557) = v3;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xFEu, 0LL);
      }
    }
    *((_DWORD *)this + 562) = 0;
    v5 = 0;
  }
  else
  {
    v5 = v4 + 1;
  }
  v6 = 0;
  for ( *((_DWORD *)this + 558) = v5; v6 < *((_DWORD *)this + 214); ++v6 )
    CScopedClipStack::FreeCpuClipStackState(
      (CScopedClipStack *)v2,
      (struct CScopedClipStack::CpuClipStackState *)(*((_QWORD *)this + 104) + 136LL * v6));
  *((_DWORD *)this + 214) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 832, 136LL);
}
