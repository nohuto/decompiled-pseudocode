/*
 * XREFs of ?InsertAt@?$DynArray@PEAVCRenderTarget@@$0A@@@QEAAJAEBQEAVCRenderTarget@@I@Z @ 0x18018789C
 * Callers:
 *     ?SyncLockForParallelMode@CRenderTargetManager@@QEBAXXZ @ 0x1800C1F3C (-SyncLockForParallelMode@CRenderTargetManager@@QEBAXXZ.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18006CB50 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<CRenderTarget *,0>::InsertAt(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v4; // rsi
  unsigned int v5; // edi
  signed int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  _QWORD *v10; // r9
  _QWORD *v11; // rdx
  _QWORD *v12; // r9
  _QWORD *v14; // [rsp+40h] [rbp+8h] BYREF

  v4 = a3;
  if ( a3 <= *(_DWORD *)(a1 + 24) )
  {
    v14 = (_QWORD *)a2;
    v6 = DynArrayImpl<0>::Grow(a1, 8u, 1, 0, (unsigned __int64 *)&v14);
    v5 = v6;
    if ( v6 >= 0 )
    {
      v8 = *(unsigned int *)(a1 + 24);
      v9 = *(_QWORD *)a1;
      *(_DWORD *)(a1 + 24) = v8 + 1;
      if ( (unsigned int)v8 > (unsigned int)v4 )
      {
        v10 = (_QWORD *)(v9 + 8 * v8);
        do
        {
          v8 = (unsigned int)(v8 - 1);
          *v10-- = *(_QWORD *)(v9 + 8 * v8);
        }
        while ( (unsigned int)v8 > (unsigned int)v4 );
      }
      v11 = v14;
      v12 = (_QWORD *)(v9 + 8 * v4);
      if ( v14 >= v12 && (unsigned __int64)v14 < v9 + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 24) - 1) )
        v11 = v14 + 1;
      *v12 = *v11;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x1D8u, 0LL);
    }
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, 0x80070057, 0x1CEu, 0LL);
  }
  return v5;
}
