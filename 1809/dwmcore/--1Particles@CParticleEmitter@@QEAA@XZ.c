/*
 * XREFs of ??1Particles@CParticleEmitter@@QEAA@XZ @ 0x1801C50C4
 * Callers:
 *     ??1CParticleEmitter@@MEAA@XZ @ 0x1801C4CBC (--1CParticleEmitter@@MEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ @ 0x180154A6C (-_Tidy@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@MV?$allocator@M@std@@@std@@AEAAXXZ @ 0x180175DA8 (-_Tidy@-$vector@MV-$allocator@M@std@@@std@@AEAAXXZ.c)
 */

void __fastcall CParticleEmitter::Particles::~Particles(CParticleEmitter::Particles *this)
{
  void *v2; // rcx
  void *v3; // rcx

  std::vector<float>::_Tidy((__int64)this + 168);
  std::vector<float>::_Tidy((__int64)this + 144);
  std::vector<CDataSourceReader *>::_Tidy((__int64)this + 120);
  std::vector<CDataSourceReader *>::_Tidy((__int64)this + 96);
  v2 = (void *)*((_QWORD *)this + 9);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*((_QWORD *)this + 11) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
  }
  std::vector<float>::_Tidy((__int64)this + 48);
  v3 = (void *)*((_QWORD *)this + 3);
  if ( v3 )
  {
    std::_Deallocate<16,0>(v3, (*((_QWORD *)this + 5) - (_QWORD)v3) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
  }
  if ( *(_QWORD *)this )
  {
    std::_Deallocate<16,0>(*(void **)this, (*((_QWORD *)this + 2) - *(_QWORD *)this) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
  }
}
