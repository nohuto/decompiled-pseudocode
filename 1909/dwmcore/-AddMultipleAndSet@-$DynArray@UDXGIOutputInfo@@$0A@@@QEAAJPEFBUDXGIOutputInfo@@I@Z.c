/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UDXGIOutputInfo@@$0A@@@QEAAJPEFBUDXGIOutputInfo@@I@Z @ 0x1800D6160
 * Callers:
 *     ?EnumerateDWMOutputs@CDXGIAdapterLimited@@AEAAJXZ @ 0x1800272E8 (-EnumerateDWMOutputs@CDXGIAdapterLimited@@AEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall DynArray<DXGIOutputInfo,0>::AddMultipleAndSet(__int64 a1, _OWORD *a2)
{
  __int64 v2; // rax
  unsigned int v4; // r8d
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rax
  _OWORD *v8; // rcx
  __int128 v9; // xmm1
  signed int v11; // eax
  __int64 v12; // rcx

  v2 = *(unsigned int *)(a1 + 24);
  v4 = v2 + 1;
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    v5 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, 0x80070216, 0xB8u, 0LL);
  }
  else
  {
    v5 = 0;
    if ( v4 > *(_DWORD *)(a1 + 20) )
    {
      v11 = DynArrayImpl<0>::AddMultipleAndSet(a1, 288, 1, a2);
      v5 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xC3u, 0LL);
    }
    else
    {
      v6 = 288 * v2;
      v7 = 2LL;
      v8 = (_OWORD *)(*(_QWORD *)a1 + v6);
      do
      {
        *v8 = *a2;
        v8[1] = a2[1];
        v8[2] = a2[2];
        v8[3] = a2[3];
        v8[4] = a2[4];
        v8[5] = a2[5];
        v8[6] = a2[6];
        v8 += 8;
        v9 = a2[7];
        a2 += 8;
        *(v8 - 1) = v9;
        --v7;
      }
      while ( v7 );
      *v8 = *a2;
      v8[1] = a2[1];
      *(_DWORD *)(a1 + 24) = v4;
    }
  }
  return v5;
}
