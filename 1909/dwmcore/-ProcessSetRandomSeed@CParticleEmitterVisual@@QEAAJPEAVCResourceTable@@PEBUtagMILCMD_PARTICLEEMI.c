/*
 * XREFs of ?ProcessSetRandomSeed@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEEMITTERVISUAL_SETRANDOMSEED@@@Z @ 0x18019FEBC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800F0100 (_alloca_probe.c)
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
 */

__int64 __fastcall CParticleEmitterVisual::ProcessSetRandomSeed(
        CParticleEmitterVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEEMITTERVISUAL_SETRANDOMSEED *a3)
{
  unsigned int v3; // edx
  int v4; // r9d
  __int64 v5; // r8
  int Src; // [rsp+20h] [rbp-13A8h] BYREF
  _DWORD v8[1251]; // [rsp+24h] [rbp-13A4h]

  v3 = *((_DWORD *)a3 + 2);
  v8[1248] = -1;
  v4 = 1;
  v5 = 1LL;
  v8[0] = v3;
  do
  {
    v3 = v4 + 1812433253 * (v3 ^ (v3 >> 30));
    ++v4;
    v8[v5++] = v3;
  }
  while ( v5 < 624 );
  Src = 624;
  memcpy_0((char *)this + 1084, &Src, 0x1388uLL);
  return 0LL;
}
