/*
 * XREFs of DestroySMWP @ 0x1C0026B90
 * Callers:
 *     NtUserDeferWindowPosAndBand @ 0x1C00144C0 (NtUserDeferWindowPosAndBand.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0026608 (xxxEndDeferWindowPosEx.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C0034F94 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     ?UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z @ 0x1C019E8D0 (-UnrefAndDestroySMWP@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall DestroySMWP(_DWORD *a1)
{
  BOOL v2; // edi
  __int64 v3; // rsi
  int v4; // ebp
  _QWORD *v5; // rsi
  __int64 result; // rax
  __int64 v7; // rdi

  if ( (a1[6] & 2) != 0 )
  {
    result = HMMarkObjectDestroy(a1);
    if ( !(_DWORD)result )
      return result;
    v2 = 1;
  }
  else
  {
    v2 = a1 != gSMWP;
  }
  v3 = *((_QWORD *)a1 + 5);
  if ( v3 )
  {
    v4 = a1[7] - 1;
    if ( v4 >= 0 )
    {
      v5 = (_QWORD *)(v3 + 120);
      do
      {
        if ( *v5 )
          GreDeleteObject(*v5);
        v5 += 21;
        --v4;
      }
      while ( v4 >= 0 );
    }
    if ( v2 )
      Win32FreePool(*((_QWORD *)a1 + 5));
  }
  if ( (a1[6] & 2) != 0 )
    return HMFreeObject(a1);
  if ( v2 )
    return Win32FreePool(a1);
  result = gdwPUDFlags;
  gdwPUDFlags &= ~0x40000000u;
  if ( (int)a1[8] > 8 )
  {
    result = Win32AllocPool(672LL, 2004054869LL);
    v7 = result;
    if ( result )
    {
      result = Win32FreePool(*((_QWORD *)a1 + 5));
      *((_QWORD *)a1 + 5) = v7;
      a1[8] = 4;
    }
  }
  a1[6] &= ~4u;
  return result;
}
