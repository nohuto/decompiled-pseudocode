/*
 * XREFs of ??0CParticleEmitterVisual@@QEAA@PEAVCComposition@@@Z @ 0x1801E98E0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009AB08 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x1800786A0 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 *     ??2KeyframeInterpolation@@SAPEAX_K@Z @ 0x180079540 (--2KeyframeInterpolation@@SAPEAX_K@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x18007B820 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800F0100 (_alloca_probe.c)
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
 *     ??0ParticleCollection@CParticleEmitterVisual@@QEAA@XZ @ 0x1801E9C00 (--0ParticleCollection@CParticleEmitterVisual@@QEAA@XZ.c)
 */

CParticleEmitterVisual *__fastcall CParticleEmitterVisual::CParticleEmitterVisual(
        CParticleEmitterVisual *this,
        struct CComposition *a2)
{
  unsigned int *v4; // r8
  unsigned int v5; // ecx
  __int64 v6; // r9
  int v7; // edx
  _DWORD *v8; // rax
  unsigned int v9; // eax
  int v10; // r9d
  __int64 v11; // r8
  unsigned int v12; // edx
  int Src; // [rsp+20h] [rbp-13A8h] BYREF
  _DWORD v15[1251]; // [rsp+24h] [rbp-13A4h]

  CVisual::CVisual(this, a2);
  *(_QWORD *)this = &CParticleEmitterVisual::`vftable';
  CParticleEmitterVisual::ParticleCollection::ParticleCollection((CParticleEmitterVisual *)((char *)this + 568));
  *((_QWORD *)this + 129) = 0LL;
  v4 = (unsigned int *)((char *)this + 1092);
  *((_QWORD *)this + 130) = 0LL;
  v5 = 5489;
  *((_QWORD *)this + 131) = 0LL;
  v6 = 623LL;
  *((_QWORD *)this + 132) = 0LL;
  v7 = 1;
  *((_QWORD *)this + 133) = 0LL;
  *((_QWORD *)this + 134) = 0LL;
  *((_DWORD *)this + 1520) = -1;
  *((_DWORD *)this + 272) = 5489;
  do
  {
    v5 = v7 + 1812433253 * (v5 ^ (v5 >> 30));
    ++v7;
    *v4++ = v5;
    --v6;
  }
  while ( v6 );
  *((_DWORD *)this + 271) = 624;
  *(_QWORD *)((char *)this + 6084) = 0LL;
  *((_DWORD *)this + 1523) = 0;
  *((_QWORD *)this + 762) = 0LL;
  *((_QWORD *)this + 763) = 0LL;
  *((_QWORD *)this + 764) = 0LL;
  *((_QWORD *)this + 765) = 0LL;
  *((_DWORD *)this + 1532) = 0;
  *((_DWORD *)this + 1536) = 1065353216;
  *((_DWORD *)this + 1537) = 1065353216;
  *(_QWORD *)((char *)this + 6220) = 0LL;
  *((_DWORD *)this + 1557) = 0;
  *((_DWORD *)this + 1558) = 1065353216;
  *((_DWORD *)this + 1559) = 1065353216;
  *((_DWORD *)this + 1560) = 1065353216;
  *(_QWORD *)((char *)this + 6244) = 1065353216LL;
  *((_QWORD *)this + 782) = 0LL;
  *((_QWORD *)this + 783) = 0LL;
  *((_QWORD *)this + 784) = 0LL;
  *((_WORD *)this + 3140) = 1;
  v8 = KeyframeInterpolation::operator new(0x40uLL);
  if ( v8 )
  {
    v8[2] = 0;
    *((_QWORD *)v8 + 2) = a2;
    *((_QWORD *)v8 + 3) = 0LL;
    *((_QWORD *)v8 + 5) = 0LL;
    v8[8] = 0;
    *(_QWORD *)v8 = &CParticleEmitter::`vftable';
  }
  else
  {
    v8 = 0LL;
  }
  *((_QWORD *)this + 70) = v8;
  *((_QWORD *)v8 + 7) = this;
  v9 = std::_Random_device();
  v15[1248] = -1;
  v10 = 1;
  v11 = 1LL;
  v15[0] = v9;
  v12 = v9;
  do
  {
    v12 = v10 + 1812433253 * (v12 ^ (v12 >> 30));
    ++v10;
    v15[v11++] = v12;
  }
  while ( v11 < 624 );
  Src = 624;
  memcpy_0((char *)this + 1084, &Src, 0x1388uLL);
  CVisual::SetContent((struct CResource **)this, *((struct CContent **)this + 70));
  return this;
}
