/*
 * XREFs of ?Create@CCursorVisualReference@@SAJPEAVCComposition@@PEAVCVisual@@PEAPEAV1@@Z @ 0x1800D6948
 * Callers:
 *     ?AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x1800D684C (-AddCursorVisual@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?Create@?$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x1800A5178 (-Create@-$CWeakReference@VCVisual@@@@SAJPEAVCVisual@@PEAPEAV1@@Z.c)
 *     ??_GCCursorVisualReference@@QEAAPEAXI@Z @ 0x1800DDB9C (--_GCCursorVisualReference@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CCursorVisualReference::Create(
        struct CComposition *a1,
        struct CVisual *a2,
        struct CWeakResourceReference ***a3)
{
  struct CWeakResourceReference **v6; // rax
  __int64 v7; // rcx
  struct CWeakResourceReference **v8; // rbx
  signed int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // edi
  unsigned int v13; // edx

  *a3 = 0LL;
  v6 = (struct CWeakResourceReference **)operator new(0x20uLL);
  v8 = v6;
  if ( v6 )
  {
    v6[1] = 0LL;
    v6[2] = 0LL;
    *((_DWORD *)v6 + 7) = 0;
    *v6 = a1;
    *((_BYTE *)v6 + 24) = 0;
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    v9 = CWeakReference<CVisual>::Create(a2, v8 + 1);
    v11 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x1Au, 0LL);
      CCursorVisualReference::`scalar deleting destructor'((CCursorVisualReference *)v8, v13);
    }
    else
    {
      *a3 = v8;
    }
  }
  else
  {
    v11 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, 0x8007000E, 0x18u, 0LL);
  }
  return v11;
}
