/*
 * XREFs of ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x1C00563EC
 * Callers:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C000DBD4 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 *     NtDCompositionSubmitDWMBatch @ 0x1C000DD80 (NtDCompositionSubmitDWMBatch.c)
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C00560BC (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0013920 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32AllocPoolZInit @ 0x1C0014870 (Win32AllocPoolZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateBatch(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rax

  v4 = 0;
  if ( (*(unsigned int (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 8LL))(this) == 3 )
    v5 = Win32AllocPoolZInit(0xA0uLL, 1633829700LL);
  else
    v5 = Win32AllocPoolWithQuotaZInit(0xA0uLL, 0x61624344u);
  if ( v5 )
  {
    v5[1] = this;
    *((_DWORD *)v5 + 5) = 7;
    v5[15] = &DirectComposition::CBatch::CBatchListProxy::`vftable';
    v5[16] = v5;
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
