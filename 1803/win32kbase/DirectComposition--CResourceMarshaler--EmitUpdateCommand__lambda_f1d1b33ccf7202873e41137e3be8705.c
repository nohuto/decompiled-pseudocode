/*
 * XREFs of DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f1d1b33ccf7202873e41137e3be87055___lambda_cef133924e7ba8c5c0c6519b3ed084f6___ @ 0x1C014AC74
 * Callers:
 *     ?EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00089F0 (-EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C0005E44 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0019744 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_f1d1b33ccf7202873e41137e3be87055___lambda_cef133924e7ba8c5c0c6519b3ed084f6___(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        unsigned int *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r15
  __int64 v8; // r12
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rbp
  char *v14; // rdx
  char *v15; // r9
  __int64 v16; // r10
  __int64 v17; // r8
  __int64 v18; // rdx
  int v19; // ecx
  int v20; // eax
  void *v22; // [rsp+20h] [rbp-48h] BYREF
  __int64 v23; // [rsp+28h] [rbp-40h]
  unsigned __int64 v24; // [rsp+78h] [rbp+10h] BYREF

  v6 = a6;
  v8 = a5;
  while ( 1 )
  {
    v12 = 4096LL - *((_QWORD *)(*a2)[17] + 5);
    v24 = v12;
    if ( v12 < 0x20 )
      break;
LABEL_5:
    v13 = a4 - *a3;
    if ( v13 >= (v12 - 20) / 0xC )
      LODWORD(v13) = (v12 - 20) / 0xC;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, (unsigned int)(12 * v13 + 20), &v22);
    v14 = (char *)v22;
    *(_DWORD *)v22 = 12 * v13 + 20;
    v15 = v14 + 20;
    *(_QWORD *)(v14 + 4) = 0LL;
    *(_QWORD *)(v14 + 12) = 0LL;
    *((_DWORD *)v14 + 1) = 239;
    *((_DWORD *)v14 + 2) = *(_DWORD *)(a1 + 24);
    *((_DWORD *)v14 + 4) = *(_DWORD *)(*(_QWORD *)v8 + 208LL);
    *((_DWORD *)v14 + 3) = *a3 != 0;
    if ( (_DWORD)v13 )
    {
      v16 = (unsigned int)v13;
      do
      {
        v17 = 2LL * (*a3)++;
        v18 = *(_QWORD *)(*(_QWORD *)v6 + 200LL);
        v19 = *(_DWORD *)(*(_QWORD *)(v18 + 8 * v17) + 24LL);
        HIDWORD(v23) = *(_DWORD *)(v18 + 8 * v17 + 8);
        v20 = *(_DWORD *)(v18 + 8 * v17 + 12);
        LODWORD(v23) = v19;
        *(_QWORD *)v15 = v23;
        *((_DWORD *)v15 + 2) = v20;
        v15 += 12;
        --v16;
      }
      while ( v16 );
    }
    if ( *a3 >= a4 )
      return 1;
  }
  if ( DirectComposition::CBatch::AllocateNewFragment(a2, &v24) )
  {
    v12 = v24;
    goto LABEL_5;
  }
  return 0;
}
