/*
 * XREFs of ?EmitSurfaces@CCompositionMipmapSurfaceMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01AE43C
 * Callers:
 *     ?EmitUpdateCommands@CCompositionMipmapSurfaceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01AE5A0 (-EmitUpdateCommands@CCompositionMipmapSurfaceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0009C94 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C000D1E8 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

char __fastcall DirectComposition::CCompositionMipmapSurfaceMarshaler::EmitSurfaces(
        DirectComposition::CCompositionMipmapSurfaceMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  unsigned int v3; // esi
  int i; // ecx
  unsigned __int64 v6; // rax
  unsigned int v7; // r14d
  char *v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // r10
  int v13; // eax
  unsigned __int64 v15; // [rsp+40h] [rbp+8h] BYREF
  void *v16; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  for ( i = *((_DWORD *)this + 18); i; i &= i - 1 )
    ++v3;
  if ( !v3 )
  {
LABEL_17:
    *((_DWORD *)this + 4) |= 0x40u;
    return 1;
  }
  while ( 1 )
  {
    v6 = 4096LL - *(_QWORD *)(*((_QWORD *)*a2 + 17) + 40LL);
    v15 = v6;
    if ( v6 < 0x28 )
      break;
LABEL_7:
    v7 = v3;
    if ( v3 >= (v6 - 16) / 0x18 )
      v7 = (v6 - 16) / 0x18;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, 24 * v7 + 16, &v16);
    v8 = (char *)v16;
    v9 = 0LL;
    v10 = 0LL;
    *(_DWORD *)v16 = 24 * v7 + 16;
    *(_QWORD *)(v8 + 4) = 0LL;
    *((_DWORD *)v8 + 3) = 0;
    *((_DWORD *)v8 + 1) = 95;
    *((_DWORD *)v8 + 2) = *((_DWORD *)this + 6);
    for ( *((_DWORD *)v8 + 3) = v7; (unsigned int)v10 < v7; v9 = (unsigned int)(v9 + 1) )
    {
      if ( ((1 << v9) & *((_DWORD *)this + 18)) != 0 )
      {
        v11 = 3 * v10;
        *(_DWORD *)&v8[24 * v10 + 16] = v9;
        v12 = *(_QWORD *)(*((_QWORD *)this + 5) + 24 * v9);
        if ( v12 )
          v13 = *(_DWORD *)(v12 + 24);
        else
          v13 = 0;
        *(_DWORD *)&v8[24 * v10 + 20] = v13;
        v10 = (unsigned int)(v10 + 1);
        *(_OWORD *)&v8[8 * v11 + 24] = *(_OWORD *)(*((_QWORD *)this + 5) + 24 * v9 + 8);
        *((_DWORD *)this + 18) &= ~(1 << v9);
      }
    }
    v3 -= v7;
    if ( !v3 )
      goto LABEL_17;
  }
  if ( DirectComposition::CBatch::AllocateNewFragment((struct DirectComposition::CBatch ***)a2, &v15) )
  {
    v6 = v15;
    goto LABEL_7;
  }
  return 0;
}
