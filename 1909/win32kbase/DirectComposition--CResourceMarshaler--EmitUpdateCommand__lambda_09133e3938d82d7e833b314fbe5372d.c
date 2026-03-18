/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_09133e3938d82d7e833b314fbe5372d1___lambda_0de7e8b49aabdfd91187b0359fd6d078___ @ 0x1C01B35BC
 * Callers:
 *     ?EmitAttractors@CParticleEmitterVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B4174 (-EmitAttractors@CParticleEmitterVisualMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0009C94 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C000D1E8 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_09133e3938d82d7e833b314fbe5372d1___lambda_0de7e8b49aabdfd91187b0359fd6d078___(
        __int64 a1,
        struct DirectComposition::CBatch **a2,
        unsigned int *a3,
        unsigned int a4,
        void *a5,
        __int64 a6)
{
  __int64 v6; // r12
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // rbp
  char *v13; // rcx
  _DWORD *v14; // r9
  __int64 v15; // r8
  __int64 v16; // rdx
  unsigned __int64 v18; // [rsp+58h] [rbp+10h] BYREF

  v6 = a6;
  while ( 1 )
  {
    v11 = 4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 17) + 40LL);
    v18 = v11;
    if ( v11 < 0x18 )
      break;
LABEL_5:
    v12 = a4 - *a3;
    if ( v12 >= (v11 - 20) >> 2 )
      LODWORD(v12) = (v11 - 20) >> 2;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(4 * v12 + 20), &a5);
    v13 = (char *)a5;
    *(_DWORD *)a5 = 4 * v12 + 20;
    v14 = v13 + 20;
    *(_QWORD *)(v13 + 4) = 0LL;
    *(_QWORD *)(v13 + 12) = 0LL;
    *((_DWORD *)v13 + 1) = 306;
    *((_DWORD *)v13 + 2) = *(_DWORD *)(a1 + 24);
    *((_DWORD *)v13 + 4) = 4 * v12;
    v13[12] = *a3 != 0;
    if ( (_DWORD)v12 )
    {
      v15 = (unsigned int)v12;
      do
      {
        v16 = *a3;
        *a3 = v16 + 1;
        *v14++ = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 488LL) + 8 * v16) + 24LL);
        --v15;
      }
      while ( v15 );
    }
    if ( *a3 >= a4 )
      return 1;
  }
  if ( DirectComposition::CBatch::AllocateNewFragment((struct DirectComposition::CBatch ***)a2, &v18) )
  {
    v11 = v18;
    goto LABEL_5;
  }
  return 0;
}
