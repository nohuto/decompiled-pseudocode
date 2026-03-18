/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7cab402ceb8a6f13c948e41cb9fe91ad___lambda_d84e1ed4b8f486922f9c1a79d2402bc2___ @ 0x1C01B2F0C
 * Callers:
 *     ?EmitUpdateCommands@CSpriteShapeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B32B0 (-EmitUpdateCommands@CSpriteShapeMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C00091A4 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_7cab402ceb8a6f13c948e41cb9fe91ad___lambda_d84e1ed4b8f486922f9c1a79d2402bc2___(
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
    *((_DWORD *)v13 + 1) = 441;
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
        *v14++ = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v6 + 72LL) + 4 * v16);
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
