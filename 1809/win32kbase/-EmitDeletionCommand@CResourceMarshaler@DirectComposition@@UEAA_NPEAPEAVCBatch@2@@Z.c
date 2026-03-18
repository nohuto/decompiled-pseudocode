/*
 * XREFs of ?EmitDeletionCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005ABA0
 * Callers:
 *     ?EmitDeletionCommand@CCrossChannelChildVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0004250 (-EmitDeletionCommand@CCrossChannelChildVisualMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@.c)
 *     ?EmitDeletionCommand@CRemotingRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016D4D0 (-EmitDeletionCommand@CRemotingRenderTargetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C000E928 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z @ 0x1C005C0DC (-GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitDeletionCommand(
        DirectComposition::CResourceMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v4; // eax
  struct DirectComposition::CBatch **v5; // r9
  char v6; // bl
  int v7; // ebp
  struct DirectComposition::CBatch *v8; // r10
  __int64 v9; // r11
  __int64 v10; // rdx
  char *v11; // rdx
  void *v13; // [rsp+30h] [rbp+8h] BYREF

  v4 = (*(__int64 (__fastcall **)(DirectComposition::CResourceMarshaler *))(*(_QWORD *)this + 16LL))(this);
  v5 = *a2;
  v6 = 0;
  v7 = v4;
  v8 = (*a2)[17];
  v9 = *((_QWORD *)v8 + 5);
  if ( (unsigned __int64)(4096 - v9) >= 0x10
    && (v10 = *((_QWORD *)v8 + 7), *((_QWORD *)v8 + 5) = v9 + 16, (v11 = (char *)(v9 + v10)) != 0LL) )
  {
    v5[19] = (struct DirectComposition::CBatch *)((char *)v5[19] + 16);
  }
  else
  {
    if ( !DirectComposition::CBatch::AllocateNewFragment(a2, 0LL) )
      return v6;
    if ( !DirectComposition::CBatch::GetPayloadWritePointer((DirectComposition::CBatch *)*a2, 0x10uLL, &v13) )
      KeBugCheck(0xC000000D);
    v11 = (char *)v13;
  }
  *(_DWORD *)v11 = 16;
  *(_QWORD *)(v11 + 4) = 0LL;
  v6 = 1;
  *((_DWORD *)v11 + 3) = 0;
  *((_DWORD *)v11 + 1) = 50;
  *((_DWORD *)v11 + 2) = *((_DWORD *)this + 6);
  *((_DWORD *)v11 + 3) = v7;
  return v6;
}
