/*
 * XREFs of ?EmitCreationCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0077600
 * Callers:
 *     ?EmitCreationCommand@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0077560 (-EmitCreationCommand@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z @ 0x1C000AC58 (-GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C000D1E8 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitCreationCommand(
        DirectComposition::CResourceMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  DirectComposition::CBatchSharedMemoryPool **v2; // r8
  struct DirectComposition::CBatch *v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rbx
  char *v8; // rbx
  void *v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  v5 = (*a2)[17];
  v6 = *((_QWORD *)v5 + 5);
  if ( (unsigned __int64)(4096 - v6) >= 0x10 )
  {
    v7 = *((_QWORD *)v5 + 7);
    *((_QWORD *)v5 + 5) = v6 + 16;
    v8 = (char *)(v6 + v7);
    if ( v8 )
    {
      v2[19] = (DirectComposition::CBatchSharedMemoryPool *)((char *)v2[19] + 16);
LABEL_4:
      *(_DWORD *)v8 = 16;
      *(_QWORD *)(v8 + 4) = 0LL;
      *((_DWORD *)v8 + 3) = 0;
      *((_DWORD *)v8 + 1) = 45;
      *((_DWORD *)v8 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v8 + 3) = (*(__int64 (__fastcall **)(DirectComposition::CResourceMarshaler *))(*(_QWORD *)this + 16LL))(this);
      return 1;
    }
  }
  if ( DirectComposition::CBatch::AllocateNewFragment(a2, 0LL) )
  {
    if ( !DirectComposition::CBatch::GetPayloadWritePointer(*a2, 0x10uLL, &v10) )
      KeBugCheck(0xC000000D);
    v8 = (char *)v10;
    goto LABEL_4;
  }
  return 0;
}
