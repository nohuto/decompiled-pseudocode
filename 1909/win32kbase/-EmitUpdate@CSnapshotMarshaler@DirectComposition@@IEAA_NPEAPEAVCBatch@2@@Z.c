/*
 * XREFs of ?EmitUpdate@CSnapshotMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01C1228
 * Callers:
 *     ?EmitUpdateCommands@CSnapshotMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01C12E0 (-EmitUpdateCommands@CSnapshotMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0009C94 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0014F10 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

char __fastcall DirectComposition::CSnapshotMarshaler::EmitUpdate(
        DirectComposition::CSnapshotMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char *v4; // r8
  __int64 v5; // rax
  struct DirectComposition::CResourceMarshaler *v6; // rdx
  DirectComposition::CApplicationChannel *v7; // rbx
  void *v9; // [rsp+40h] [rbp+18h] BYREF

  if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v9) )
    return 0;
  v4 = (char *)v9;
  *(_DWORD *)v9 = 28;
  *(_QWORD *)(v4 + 4) = 0LL;
  *(_QWORD *)(v4 + 12) = 0LL;
  *(_QWORD *)(v4 + 20) = 0LL;
  *((_DWORD *)v4 + 1) = 436;
  *((_DWORD *)v4 + 2) = *((_DWORD *)this + 6);
  v5 = *((_QWORD *)this + 5);
  if ( v5 )
    LODWORD(v5) = *(_DWORD *)(v5 + 24);
  *((_DWORD *)v4 + 3) = v5;
  *((_DWORD *)v4 + 4) = *((_DWORD *)this + 12);
  *((_DWORD *)v4 + 5) = *((_DWORD *)this + 13);
  v4[24] = *((_BYTE *)this + 56);
  v6 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 5);
  if ( v6 )
  {
    v7 = (DirectComposition::CApplicationChannel *)*((_QWORD *)*a2 + 1);
    DirectComposition::CApplicationChannel::ReleaseResource(v7, v6);
    *((_QWORD *)this + 5) = 0LL;
    *((_BYTE *)v7 + 240) |= 0x10u;
  }
  return 1;
}
