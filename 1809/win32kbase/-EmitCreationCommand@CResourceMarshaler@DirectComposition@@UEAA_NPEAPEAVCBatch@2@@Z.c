/*
 * XREFs of ?EmitCreationCommand@CResourceMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005B580
 * Callers:
 *     ?EmitCreationCommand@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C005B4E0 (-EmitCreationCommand@CInteractionMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C000E928 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z @ 0x1C005C0DC (-GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DirectComposition::CResourceMarshaler::EmitCreationCommand(
        DirectComposition::CResourceMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  DirectComposition::CBatch *v2; // r8
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // rbx
  char *v8; // rbx
  void *v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  v5 = *((_QWORD *)*a2 + 17);
  v6 = *(_QWORD *)(v5 + 40);
  if ( (unsigned __int64)(4096 - v6) >= 0x10 )
  {
    v7 = *(_QWORD *)(v5 + 56);
    *(_QWORD *)(v5 + 40) = v6 + 16;
    v8 = (char *)(v6 + v7);
    if ( v8 )
    {
      *((_QWORD *)v2 + 19) += 16LL;
LABEL_4:
      *(_DWORD *)v8 = 16;
      *(_QWORD *)(v8 + 4) = 0LL;
      *((_DWORD *)v8 + 3) = 0;
      *((_DWORD *)v8 + 1) = 49;
      *((_DWORD *)v8 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v8 + 3) = (*(__int64 (__fastcall **)(DirectComposition::CResourceMarshaler *))(*(_QWORD *)this + 16LL))(this);
      return 1;
    }
  }
  if ( DirectComposition::CBatch::AllocateNewFragment((struct DirectComposition::CBatch ***)a2, 0LL) )
  {
    if ( !DirectComposition::CBatch::GetPayloadWritePointer(*a2, 0x10uLL, &v10) )
      KeBugCheck(0xC000000D);
    v8 = (char *)v10;
    goto LABEL_4;
  }
  return 0;
}
