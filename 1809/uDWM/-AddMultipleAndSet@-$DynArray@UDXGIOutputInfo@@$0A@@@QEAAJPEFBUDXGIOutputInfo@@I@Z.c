/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UDXGIOutputInfo@@$0A@@@QEAAJPEFBUDXGIOutputInfo@@I@Z @ 0x1800398C4
 * Callers:
 *     ?EnumerateDWMOutputs@CDWMDXGIAdapter@@AEAAJXZ @ 0x180029C88 (-EnumerateDWMOutputs@CDWMDXGIAdapter@@AEAAJXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002107C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
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
  int v11; // eax

  v2 = *(unsigned int *)(a1 + 24);
  v4 = v2 + 1;
  v5 = (int)v2 + 1 < (unsigned int)v2 ? 0x80070216 : 0;
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xB5u);
  }
  else if ( v4 > *(_DWORD *)(a1 + 20) )
  {
    v11 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0x120u, 1, a2);
    v5 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xC0u);
  }
  else
  {
    v6 = 9 * v2;
    v7 = 2LL;
    v8 = (_OWORD *)(*(_QWORD *)a1 + 32 * v6);
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
  return v5;
}
