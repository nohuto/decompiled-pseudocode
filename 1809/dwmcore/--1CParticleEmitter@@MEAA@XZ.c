/*
 * XREFs of ??1CParticleEmitter@@MEAA@XZ @ 0x1801C4CBC
 * Callers:
 *     ??_ECParticleEmitter@@MEAAPEAXI@Z @ 0x1801C52D0 (--_ECParticleEmitter@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180063BC0 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ @ 0x180154A6C (-_Tidy@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ.c)
 *     ??1Particles@CParticleEmitter@@QEAA@XZ @ 0x1801C50C4 (--1Particles@CParticleEmitter@@QEAA@XZ.c)
 */

void __fastcall CParticleEmitter::~CParticleEmitter(CParticleEmitter *this)
{
  void *v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  void *v5; // rcx
  void *v6; // rcx
  __int64 v7; // rdx
  void *v8; // rcx
  void *v9; // rcx
  void **v10; // rdi
  void **v11; // rdi
  void **v12; // rdi
  void **v13; // rdi
  void **v14; // rdi
  void **v15; // rdi
  void **v16; // rdi
  void **v17; // rdi
  void **v18; // rdi
  void **v19; // rdi
  void **v20; // rdi
  void **v21; // rdi
  void **v22; // rdi
  void **v23; // rdi
  void *v24; // rcx
  unsigned __int64 v25; // [rsp+40h] [rbp+8h] BYREF
  void *v26; // [rsp+48h] [rbp+10h] BYREF

  *(_QWORD *)this = &CParticleEmitter::`vftable';
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 717));
  *((_QWORD *)this + 717) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 718));
  *((_QWORD *)this + 718) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 716));
  *((_QWORD *)this + 716) = 0LL;
  v2 = (void *)*((_QWORD *)this + 715);
  if ( v2 )
    operator delete(v2);
  std::vector<CDataSourceReader *>::_Tidy((__int64)this + 520);
  v5 = (void *)*((_QWORD *)this + 62);
  if ( v5 )
  {
    std::_Deallocate<16,0>(v5, (*((_QWORD *)this + 64) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 62) = 0LL;
    *((_QWORD *)this + 63) = 0LL;
    *((_QWORD *)this + 64) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 59);
  if ( v6 )
  {
    v7 = *((_QWORD *)this + 61) - (_QWORD)v6;
    v26 = (void *)*((_QWORD *)this + 59);
    v25 = 2 * (v7 >> 1);
    if ( v25 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v26, &v25, v3, v4);
      v6 = v26;
    }
    operator delete(v6);
    *((_QWORD *)this + 59) = 0LL;
    *((_QWORD *)this + 60) = 0LL;
    *((_QWORD *)this + 61) = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 56);
  if ( v8 )
  {
    std::_Deallocate<16,0>(v8, (*((_QWORD *)this + 58) - (_QWORD)v8) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)this + 56) = 0LL;
    *((_QWORD *)this + 57) = 0LL;
    *((_QWORD *)this + 58) = 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 53);
  if ( v9 )
  {
    std::_Deallocate<16,0>(v9, (*((_QWORD *)this + 55) - (_QWORD)v9) & 0xFFFFFFFFFFFFFFE0uLL);
    *((_QWORD *)this + 53) = 0LL;
    *((_QWORD *)this + 54) = 0LL;
    *((_QWORD *)this + 55) = 0LL;
  }
  v10 = (void **)*((_QWORD *)this + 48);
  if ( v10 )
  {
    if ( *v10 )
      operator delete(*v10);
    operator delete(v10);
  }
  v11 = (void **)*((_QWORD *)this + 47);
  if ( v11 )
  {
    if ( *v11 )
      operator delete(*v11);
    operator delete(v11);
  }
  v12 = (void **)*((_QWORD *)this + 46);
  if ( v12 )
  {
    if ( *v12 )
      operator delete(*v12);
    operator delete(v12);
  }
  v13 = (void **)*((_QWORD *)this + 45);
  if ( v13 )
  {
    if ( *v13 )
      operator delete(*v13);
    operator delete(v13);
  }
  v14 = (void **)*((_QWORD *)this + 44);
  if ( v14 )
  {
    if ( *v14 )
      operator delete(*v14);
    operator delete(v14);
  }
  v15 = (void **)*((_QWORD *)this + 43);
  if ( v15 )
  {
    if ( *v15 )
      operator delete(*v15);
    operator delete(v15);
  }
  v16 = (void **)*((_QWORD *)this + 42);
  if ( v16 )
  {
    if ( *v16 )
      operator delete(*v16);
    operator delete(v16);
  }
  v17 = (void **)*((_QWORD *)this + 41);
  if ( v17 )
  {
    if ( *v17 )
      operator delete(*v17);
    operator delete(v17);
  }
  v18 = (void **)*((_QWORD *)this + 40);
  if ( v18 )
  {
    if ( *v18 )
      operator delete(*v18);
    operator delete(v18);
  }
  v19 = (void **)*((_QWORD *)this + 39);
  if ( v19 )
  {
    if ( *v19 )
      operator delete(*v19);
    operator delete(v19);
  }
  v20 = (void **)*((_QWORD *)this + 38);
  if ( v20 )
  {
    if ( *v20 )
      operator delete(*v20);
    operator delete(v20);
  }
  v21 = (void **)*((_QWORD *)this + 37);
  if ( v21 )
  {
    if ( *v21 )
      operator delete(*v21);
    operator delete(v21);
  }
  v22 = (void **)*((_QWORD *)this + 36);
  if ( v22 )
  {
    if ( *v22 )
      operator delete(*v22);
    operator delete(v22);
  }
  v23 = (void **)*((_QWORD *)this + 35);
  if ( v23 )
  {
    if ( *v23 )
      operator delete(*v23);
    operator delete(v23);
  }
  v24 = (void *)*((_QWORD *)this + 32);
  if ( v24 )
  {
    std::_Deallocate<16,0>(v24, (*((_QWORD *)this + 34) - (_QWORD)v24) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 32) = 0LL;
    *((_QWORD *)this + 33) = 0LL;
    *((_QWORD *)this + 34) = 0LL;
  }
  CParticleEmitter::Particles::~Particles((CParticleEmitter *)((char *)this + 56));
  CResource::~CResource(this);
}
