/*
 * XREFs of ??0CConstraintModel@@QEAA@XZ @ 0x180050928
 * Callers:
 *     ?Initialize@CConstraintModelResourceManager@@AEAAJPEAUIAudioResourceControl@@@Z @ 0x180059BA4 (-Initialize@CConstraintModelResourceManager@@AEAAJPEAUIAudioResourceControl@@@Z.c)
 * Callees:
 *     ??0?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@QEAA@IMMMI@Z @ 0x180050F58 (--0-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VRe.c)
 */

CConstraintModel *__fastcall CConstraintModel::CConstraintModel(CConstraintModel *this, int a2, int a3)
{
  __int64 v3; // r9
  int v4; // edx
  int v5; // r8d
  int v6; // xmm5_4
  __int64 v7; // r9
  __int64 v8; // r10
  CConstraintModel *result; // rax

  *(_QWORD *)this = &CConstraintModel::`vftable';
  ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>(
    (_DWORD)this + 8,
    a2,
    a3,
    (_DWORD)this,
    LODWORD(FLOAT_2_25));
  *(_QWORD *)(v3 + 80) = 0LL;
  *(_QWORD *)(v3 + 88) = 0LL;
  *(_QWORD *)(v3 + 96) = 0LL;
  *(_QWORD *)(v3 + 104) = 0LL;
  *(_QWORD *)(v3 + 112) = 0LL;
  *(_DWORD *)(v3 + 120) = 10;
  ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>(
    v3 + 128,
    v4,
    v5,
    v3,
    v6);
  *(_QWORD *)(v7 + 200) = v8;
  result = (CConstraintModel *)v7;
  *(_QWORD *)(v7 + 208) = v8;
  *(_QWORD *)(v7 + 216) = v8;
  *(_DWORD *)(v7 + 224) = v8;
  *(_DWORD *)(v7 + 232) = v8;
  return result;
}
