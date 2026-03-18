/*
 * XREFs of ?Grow@?$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z @ 0x18007EB40
 * Callers:
 *     ?InsertAt@?$DynArray@PEAVCRenderTarget@@$00@@QEAAJAEBQEAVCRenderTarget@@I@Z @ 0x18007E9D0 (-InsertAt@-$DynArray@PEAVCRenderTarget@@$00@@QEAAJAEBQEAVCRenderTarget@@I@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x18007EA60 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x18007EADC (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?ProcessSetCreationParams@CCompositionCubeMap@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONCUBEMAP_SETCREATIONPARAMS@@@Z @ 0x18018EB40 (-ProcessSetCreationParams@CCompositionCubeMap@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONCU.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 */

__int64 __fastcall DynArrayImpl<1>::Grow(__int64 a1, unsigned int a2, int a3, int a4, unsigned __int64 *a5)
{
  unsigned int v5; // eax
  char *v6; // rsi
  unsigned int v10; // r10d
  unsigned int v11; // ebx
  unsigned int v12; // r8d
  unsigned __int64 v13; // rax
  int v14; // r9d
  unsigned int v15; // ecx
  unsigned int v16; // eax
  unsigned int v17; // edx
  unsigned int v18; // ebp
  unsigned int v19; // ecx
  void *v20; // r8
  SIZE_T v21; // r9
  int v22; // eax
  char *v24; // rax
  unsigned int v25; // ecx
  unsigned __int64 v26; // r9

  v5 = *(_DWORD *)(a1 + 24);
  v6 = 0LL;
  v10 = v5 + a3;
  v11 = v5 + a3 < v5 ? 0x80070216 : 0;
  if ( v5 + a3 < v5 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v11, 0xE7u);
    return v11;
  }
  v12 = *(_DWORD *)(a1 + 20);
  if ( v10 > v12 )
  {
    v13 = a2 * (unsigned __int64)v10;
    v14 = -1;
    if ( v13 <= 0xFFFFFFFF )
      v14 = a2 * v10;
    v11 = v13 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v13 > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, v11, 0xF0u);
      return v11;
    }
    if ( a4 )
      goto LABEL_36;
    v15 = 16;
    v16 = 8092;
    v17 = v10 - v12;
    if ( v12 > 0x10 )
      v15 = v12;
    if ( v15 < 0x1F9C )
      v16 = v15;
    if ( v17 <= v16 )
      v17 = v16;
    v18 = v17 + v12;
    if ( v17 + v12 < v12 || a2 * (unsigned __int64)v18 > 0xFFFFFFFF )
    {
LABEL_36:
      v19 = v14;
      v18 = v10;
    }
    else
    {
      v19 = a2 * v18;
    }
    if ( v18 > 0xFFFFFFFF / a2 )
    {
      v11 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, -2147024362, 0x10Au);
    }
    else
    {
      v20 = *(void **)a1;
      v21 = v19;
      if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) )
      {
        v11 = 0;
        if ( v19 )
        {
          v6 = (char *)HeapAlloc(WPF::g_processHeap, 0, v19);
          if ( !v6 )
            v11 = -2147024882;
        }
        else
        {
          v11 = -2147024809;
        }
        if ( (v11 & 0x80000000) != 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v11, 0x111u);
          return v11;
        }
        v22 = *(_DWORD *)(a1 + 24);
        if ( v22 )
          memcpy_0(v6, *(const void **)a1, a2 * v22);
      }
      else
      {
        if ( v20 )
        {
          v24 = (char *)HeapReAlloc(WPF::g_processHeap, 0, v20, v19);
        }
        else
        {
          if ( !v19 )
            v21 = 1LL;
          v24 = (char *)HeapAlloc(WPF::g_processHeap, 0, v21);
        }
        v6 = v24;
        if ( !v24 )
        {
          v11 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, -2147024882, 0x12Au);
          return v11;
        }
        v11 = 0;
        if ( v24 != *(char **)a1 )
        {
          if ( a5 )
          {
            v26 = *a5;
            if ( *a5 >= *(_QWORD *)a1 && v26 < *(_QWORD *)a1 + (unsigned __int64)(a2 * *(_DWORD *)(a1 + 20)) )
              *a5 = (unsigned __int64)&v24[v26 - *(_QWORD *)a1];
          }
        }
      }
      memset_0(&v6[a2 * *(_DWORD *)(a1 + 20)], 0, a2 * (v18 - *(_DWORD *)(a1 + 20)));
      *(_DWORD *)(a1 + 20) = v18;
      *(_QWORD *)a1 = v6;
    }
  }
  return v11;
}
