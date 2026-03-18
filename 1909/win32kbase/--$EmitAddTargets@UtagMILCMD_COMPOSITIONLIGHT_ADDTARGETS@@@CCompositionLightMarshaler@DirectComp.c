/*
 * XREFs of ??$EmitAddTargets@UtagMILCMD_COMPOSITIONLIGHT_ADDTARGETS@@@CCompositionLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@PEAPEAVCResourceMarshaler@1@PEAI2W4MILCMD@@@Z @ 0x1C008C0B4
 * Callers:
 *     ?EmitAddTargets@CCompositionLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@W4Enum@CompositionLightProperty@@@Z @ 0x1C008C070 (-EmitAddTargets@CCompositionLightMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@W4Enum@Compo.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0009C94 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C000D1E8 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

bool __fastcall DirectComposition::CCompositionLightMarshaler::EmitAddTargets<tagMILCMD_COMPOSITIONLIGHT_ADDTARGETS>(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        __int64 a3,
        _DWORD *a4,
        unsigned __int64 a5)
{
  unsigned int *v5; // rdi
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbp
  char *v12; // rcx
  _DWORD *v13; // r8
  unsigned int v14; // edx
  __int64 v15; // r9
  __int64 v16; // rax
  void *v18; // [rsp+68h] [rbp+20h] BYREF

  v5 = (unsigned int *)a5;
  if ( *(_DWORD *)a5 < *a4 )
  {
    do
    {
      v10 = 4096LL - *((_QWORD *)(*a2)[17] + 5);
      a5 = v10;
      if ( v10 < 0x14 )
      {
        if ( !DirectComposition::CBatch::AllocateNewFragment(a2, &a5) )
          return *v5 == *a4;
        v10 = a5;
      }
      v11 = *a4 - *v5;
      if ( v11 >= (v10 - 16) >> 2 )
        LODWORD(v11) = (v10 - 16) >> 2;
      DirectComposition::CBatch::EnsureBatchBuffer(
        (struct DirectComposition::CBatch **)a2,
        (unsigned int)(4 * v11 + 16),
        &v18);
      v12 = (char *)v18;
      *(_DWORD *)v18 = 4 * v11 + 16;
      v13 = v12 + 16;
      *(_QWORD *)(v12 + 4) = 0LL;
      *((_DWORD *)v12 + 3) = 0;
      *((_DWORD *)v12 + 1) = 90;
      *((_DWORD *)v12 + 2) = *(_DWORD *)(a1 + 24);
      *((_DWORD *)v12 + 3) = v11;
      v14 = *v5;
      if ( (_DWORD)v11 )
      {
        v15 = (unsigned int)v11;
        do
        {
          v16 = v14++;
          *v13++ = *(_DWORD *)(*(_QWORD *)(a3 + 8 * v16) + 24LL);
          --v15;
        }
        while ( v15 );
        v14 = *v5;
      }
      *v5 = v14 + v11;
    }
    while ( v14 + (unsigned int)v11 < *a4 );
  }
  return *v5 == *a4;
}
