/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f61035a10b61a6860e6a4d2ec7fe9148___lambda_106a60d828237c659c12d231609d6441___ @ 0x1C01AF444
 * Callers:
 *     ?EmitUpdateCommands@CParticleBaseBehaviorMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01AF5B0 (-EmitUpdateCommands@CParticleBaseBehaviorMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0009C94 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C000D1E8 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f61035a10b61a6860e6a4d2ec7fe9148___lambda_106a60d828237c659c12d231609d6441___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        unsigned int *a3,
        unsigned int a4,
        void *a5,
        __int64 a6)
{
  __int64 v6; // r12
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbp
  char *v13; // rcx
  char *v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // xmm0_8
  unsigned __int64 v21; // [rsp+58h] [rbp+10h] BYREF

  v6 = a6;
  while ( 1 )
  {
    v11 = 4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 17) + 40LL);
    v21 = v11;
    if ( v11 < 0x2C )
      break;
LABEL_5:
    v12 = a4 - *a3;
    if ( v12 >= (v11 - 20) / 0x18 )
      LODWORD(v12) = (v11 - 20) / 0x18;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(24 * v12 + 20), &a5);
    v13 = (char *)a5;
    *(_DWORD *)a5 = 24 * v12 + 20;
    v14 = v13 + 20;
    *(_QWORD *)(v13 + 4) = 0LL;
    *(_QWORD *)(v13 + 12) = 0LL;
    *((_DWORD *)v13 + 1) = 293;
    *((_DWORD *)v13 + 2) = *(_DWORD *)(a1 + 24);
    *((_DWORD *)v13 + 4) = 24 * v12;
    v13[12] = *a3 != 0;
    if ( (_DWORD)v12 )
    {
      v15 = (unsigned int)v12;
      do
      {
        v16 = *a3;
        *a3 = v16 + 1;
        v17 = 3 * v16;
        v18 = *(_QWORD *)(*(_QWORD *)v6 + 64LL);
        v19 = *(_QWORD *)(v18 + 8 * v17 + 16);
        *(_OWORD *)v14 = *(_OWORD *)(v18 + 8 * v17);
        *((_QWORD *)v14 + 2) = v19;
        v14 += 24;
        --v15;
      }
      while ( v15 );
    }
    if ( *a3 >= a4 )
      return 1;
  }
  if ( DirectComposition::CBatch::AllocateNewFragment((struct DirectComposition::CBatch ***)a2, &v21) )
  {
    v11 = v21;
    goto LABEL_5;
  }
  return 0;
}
