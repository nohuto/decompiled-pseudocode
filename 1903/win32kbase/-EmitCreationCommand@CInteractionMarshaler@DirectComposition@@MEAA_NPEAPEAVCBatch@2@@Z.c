/*
 * XREFs of ?EmitCreationCommand@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0009040
 * Callers:
 *     <none>
 * Callees:
 *     ?EmitCreationCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00090E0 (-EmitCreationCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

bool __fastcall DirectComposition::CInteractionMarshaler::EmitCreationCommand(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  bool v2; // r8
  char *v5; // rcx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 1;
  if ( ((*((_DWORD *)this + 4) & 1) != 0 || (v2 = DirectComposition::CResourceMarshaler::EmitCreationCommand(this, a2)))
    && (*((_DWORD *)this + 4) & 0x100) == 0 )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v7) )
    {
      v5 = (char *)v7;
      v2 = 1;
      *(_DWORD *)v7 = 16;
      *(_QWORD *)(v5 + 4) = 0LL;
      *((_DWORD *)v5 + 3) = 0;
      *((_DWORD *)v5 + 1) = 219;
      *((_DWORD *)v5 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v5 + 3) = *((_DWORD *)this + 64);
      *((_DWORD *)this + 4) |= 0x100u;
    }
    else
    {
      return 0;
    }
  }
  return v2;
}
