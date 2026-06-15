/*
 * XREFs of ??$ApplyVolumeRampUp_Internal@P6AMPEAE@ZP6AX0M@Z@@YAXPEAVCFadeWindowLUT@@PEAEIIIP6AM1@ZP6AX1M@Z@Z @ 0x140056EE8
 * Callers:
 *     ?GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_CURRENT_POSITION@@@Z @ 0x140002910 (-GetInputDataPointer@CCrossProcessServerInputEndpoint@@UEAAXPEAUAPO_CONNECTION_PROPERTY@@PEAUAE_.c)
 * Callees:
 *     ?SetStep@CFadeWindowLUT@@QEAAXIW4FadeType@1@@Z @ 0x140003D38 (-SetStep@CFadeWindowLUT@@QEAAXIW4FadeType@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140018220 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplyVolumeRampUp_Internal<float (*)(unsigned char *),void (*)(unsigned char *,float)>(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        void (__fastcall *a6)(__int64),
        __int64 (__fastcall *a7)(__int64))
{
  __int64 v8; // rbp
  __int64 result; // rax
  unsigned int v11; // r10d
  __int64 v12; // rsi
  float v13; // xmm1_4
  __int64 v14; // r15

  v8 = a4;
  result = CFadeWindowLUT::SetStep(a1, a3, 0);
  if ( v11 )
  {
    v12 = v11;
    do
    {
      v13 = *(float *)(a1 + 136);
      result = (unsigned int)(int)v13;
      *(float *)(a1 + 136) = v13 + *(float *)(a1 + 140);
      if ( (_DWORD)v8 )
      {
        v14 = v8;
        do
        {
          a6(a2);
          result = a7(a2);
          a2 += (unsigned __int64)a5 >> 3;
          --v14;
        }
        while ( v14 );
      }
      --v12;
    }
    while ( v12 );
  }
  return result;
}
