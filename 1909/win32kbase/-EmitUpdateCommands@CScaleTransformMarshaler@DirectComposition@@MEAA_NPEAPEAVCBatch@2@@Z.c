/*
 * XREFs of ?EmitUpdateCommands@CScaleTransformMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0090BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0009C94 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0009FF8 (-EmitUpdateCommands@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetCenterYCommand@CScaleTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0090C64 (-EmitSetCenterYCommand@CScaleTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetScaleYCommand@CScaleTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0090C8C (-EmitSetScaleYCommand@CScaleTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitSetScaleXCommand@CScaleTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0090CF8 (-EmitSetScaleXCommand@CScaleTransformMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 */

char __fastcall DirectComposition::CScaleTransformMarshaler::EmitUpdateCommands(
        DirectComposition::CScaleTransformMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v4; // bl
  char *v6; // rcx
  void *v7; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( DirectComposition::CPropertyChangeResourceMarshaler::EmitUpdateCommands(this, a2)
    && DirectComposition::CScaleTransformMarshaler::EmitSetScaleXCommand(this, a2)
    && DirectComposition::CScaleTransformMarshaler::EmitSetScaleYCommand(this, a2) )
  {
    if ( (*((_DWORD *)this + 4) & 0x200) != 0 )
    {
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x10uLL, &v7) )
        return v4;
      v6 = (char *)v7;
      *(_DWORD *)v7 = 16;
      *(_QWORD *)(v6 + 4) = 0LL;
      *((_DWORD *)v6 + 3) = 0;
      *((_DWORD *)v6 + 1) = 605;
      *((_DWORD *)v6 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v6 + 3) = *((_DWORD *)this + 16);
      *((_DWORD *)this + 4) &= ~0x200u;
    }
    if ( DirectComposition::CScaleTransformMarshaler::EmitSetCenterYCommand(this, a2) )
      return 1;
  }
  return v4;
}
