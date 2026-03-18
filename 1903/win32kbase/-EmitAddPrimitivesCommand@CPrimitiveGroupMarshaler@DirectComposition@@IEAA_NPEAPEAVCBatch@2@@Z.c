/*
 * XREFs of ?EmitAddPrimitivesCommand@CPrimitiveGroupMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000BDAC
 * Callers:
 *     ?EmitUpdateCommands@CPrimitiveGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C000BCE0 (-EmitUpdateCommands@CPrimitiveGroupMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

char __fastcall DirectComposition::CPrimitiveGroupMarshaler::EmitAddPrimitivesCommand(
        DirectComposition::CPrimitiveGroupMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // di
  char *v4; // rdx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( *((_QWORD *)this + 6) && (*((_DWORD *)this + 4) & 0x20) == 0 )
  {
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v6) )
    {
      v4 = (char *)v6;
      *(_DWORD *)v6 = 24;
      *(_QWORD *)(v4 + 4) = 0LL;
      *(_QWORD *)(v4 + 12) = 0LL;
      *((_DWORD *)v4 + 5) = 0;
      *((_DWORD *)v4 + 1) = 369;
      *((_DWORD *)v4 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v4 + 3) = *(_DWORD *)(*((_QWORD *)this + 6) + 24LL);
      *((_DWORD *)v4 + 4) = *((_DWORD *)this + 16);
      *((_DWORD *)v4 + 5) = *((_DWORD *)this + 14);
      *((_DWORD *)this + 4) |= 0x20u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
