/*
 * XREFs of ?Insert@?$CQueue@PEAVCResource@@@@AEAAJ_NPEAVCResource@@@Z @ 0x18006A95C
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18002B4B4 (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 *     ?RevalidationCleanup@CManipulationContext@@CAXHPEAUMCCollections@@PEAV?$CQueue@PEAVCResource@@@@@Z @ 0x1801F8E48 (-RevalidationCleanup@CManipulationContext@@CAXHPEAUMCCollections@@PEAV-$CQueue@PEAVCResource@@@@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CQueue<CResource *>::Insert(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  _QWORD *v7; // rax
  unsigned int v8; // ecx
  _QWORD *v9; // rcx

  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v6 = 0;
  if ( *(_BYTE *)(a1 + 20) )
  {
    v6 = -2147023781;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147023781, 0x98u);
  }
  else
  {
    v7 = operator new(0x18uLL);
    if ( v7 )
    {
      v8 = 0;
      *v7 = 0LL;
      v7[1] = 0LL;
      v7[2] = 0LL;
    }
    else
    {
      v7 = 0LL;
    }
    if ( v7 )
    {
      v7[2] = a3;
      v9 = *(_QWORD **)(a1 + 8);
      if ( *v9 != a1 )
        __fastfail(3u);
      *v7 = a1;
      v7[1] = v9;
      *v9 = v7;
      *(_QWORD *)(a1 + 8) = v7;
      ++*(_DWORD *)(a1 + 16);
    }
    else
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024882, 0x9Bu);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  return v6;
}
