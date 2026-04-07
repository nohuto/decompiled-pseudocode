/*
 * XREFs of ?ShiftLeft@?$DynArray@VCIconicBitmapPending@@$0A@@@QEAAJI@Z @ 0x18007BE2C
 * Callers:
 *     ?ProcessTick@CIconicBitmapRegistry@@QEAAJXZ @ 0x18007BAE4 (-ProcessTick@CIconicBitmapRegistry@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memmove_0 @ 0x18004E296 (memmove_0.c)
 */

__int64 __fastcall DynArray<CIconicBitmapPending,0>::ShiftLeft(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // edi
  unsigned int v5; // edi

  v2 = 0;
  if ( a2 )
  {
    v4 = *(_DWORD *)(a1 + 24);
    if ( a2 > v4 )
    {
      v2 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x236u);
    }
    else
    {
      v5 = v4 - a2;
      if ( v5 )
        memmove_0(*(void **)a1, (const void *)(*(_QWORD *)a1 + 16LL * a2), 16LL * v5);
      *(_DWORD *)(a1 + 24) = v5;
    }
  }
  return v2;
}
