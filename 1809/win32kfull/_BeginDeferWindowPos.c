/*
 * XREFs of _BeginDeferWindowPos @ 0x1C0109060
 * Callers:
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1C0108ED4 (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 * Callees:
 *     AllocateCvr @ 0x1C0072C20 (AllocateCvr.c)
 */

__int64 __fastcall BeginDeferWindowPos(int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // edx

  LOBYTE(a3) = 4;
  v4 = HMAllocObject(gptiCurrent, 0LL, a3, 48LL);
  v5 = v4;
  if ( v4 )
  {
    v6 = 8;
    if ( a1 )
      v6 = a1;
    if ( (unsigned int)AllocateCvr(v4, v6) )
    {
      *(_DWORD *)(v5 + 24) |= 2u;
      return v5;
    }
    HMFreeObject(v5);
  }
  return 0LL;
}
