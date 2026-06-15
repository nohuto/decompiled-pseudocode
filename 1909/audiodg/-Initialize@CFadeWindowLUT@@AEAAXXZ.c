/*
 * XREFs of ?Initialize@CFadeWindowLUT@@AEAAXXZ @ 0x14000C320
 * Callers:
 *     ??0CCrossProcessServerInputEndpoint@@QEAA@XZ @ 0x14000EB3C (--0CCrossProcessServerInputEndpoint@@QEAA@XZ.c)
 * Callees:
 *     powf @ 0x140016E2C (powf.c)
 */

void __fastcall CFadeWindowLUT::Initialize(CFadeWindowLUT *this)
{
  unsigned int v1; // edi
  unsigned int v2; // eax
  float v4; // xmm0_4
  __int64 v5; // rax

  v1 = 1;
  v2 = *((_DWORD *)this + 36) + 1;
  *(_DWORD *)this = 1065353216;
  if ( v2 > 1 )
  {
    do
    {
      v4 = powf(1.0 - (float)((float)(int)v1 / (float)*((int *)this + 36)), 1.75);
      *((float *)this + v1) = v4;
      v5 = v1++ - 1;
      *((float *)this + v5 + 17) = *((float *)this + v5) - v4;
    }
    while ( v1 < *((_DWORD *)this + 36) + 1 );
  }
  *((_DWORD *)this + v1 + 16) = 0;
}
