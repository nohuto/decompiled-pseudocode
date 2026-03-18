/*
 * XREFs of ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x1C000D5CC
 * Callers:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C000AC94 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 *     NtDCompositionSubmitDWMBatch @ 0x1C000AE40 (NtDCompositionSubmitDWMBatch.c)
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C000D29C (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0014C30 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateBatch(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax

  v4 = 0;
  if ( (*(unsigned int (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 8LL))(this) == 3 )
    v5 = Win32AllocPoolZInit(0xA0uLL);
  else
    v5 = Win32AllocPoolWithQuotaZInit(0xA0uLL);
  if ( v5 )
  {
    *(_QWORD *)(v5 + 8) = this;
    *(_DWORD *)(v5 + 20) = 7;
    *(_QWORD *)(v5 + 120) = &DirectComposition::CBatch::CBatchListProxy::`vftable';
    *(_QWORD *)(v5 + 128) = v5;
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
    *a2 = (struct DirectComposition::CBatch *)v5;
  else
    return (unsigned int)-1073741801;
  return v4;
}
