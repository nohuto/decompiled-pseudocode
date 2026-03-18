/*
 * XREFs of ?WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N0@Z @ 0x1C0082180
 * Callers:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C000F704 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 *     NtDCompositionWaitForChannel @ 0x1C0082100 (NtDCompositionWaitForChannel.c)
 * Callees:
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C000F170 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?Initialize@WaitForCommitCompletionData@CApplicationChannel@DirectComposition@@QEAAXPEAV23@@Z @ 0x1C0082284 (-Initialize@WaitForCommitCompletionData@CApplicationChannel@DirectComposition@@QEAAXPEAV23@@Z.c)
 */

char __fastcall DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(
        DirectComposition::CApplicationChannel::WaitForCommitCompletionData **this,
        char a2,
        char a3)
{
  char v5; // bp
  char v6; // r15
  char v7; // si
  char v8; // di

  v5 = 0;
  v6 = 0;
  v7 = 1;
  v8 = 1;
  if ( a3 && a2 && *((int *)this + 57) > 0 )
  {
    DirectComposition::CApplicationChannel::WaitForCommitCompletionData::Initialize(
      this[90],
      (struct DirectComposition::CApplicationChannel *)this);
    *((_BYTE *)this + 241) |= 0x10u;
  }
  do
  {
    if ( *((int *)this + 57) <= 0 )
      break;
    if ( v6 && KeWaitForSingleObject(*((PVOID *)this[27] + 1), UserRequest, 0, 1u, 0LL) )
      v8 = 0;
    if ( DirectComposition::CApplicationChannel::ProcessReturnedBatches((union _SLIST_HEADER *)this) )
      v5 = 1;
    if ( !a2 && v5 )
      v8 = 0;
    v6 = 1;
  }
  while ( v8 );
  *((_BYTE *)this + 241) &= ~0x10u;
  if ( !v5 || a2 && *((_DWORD *)this + 57) )
    return 0;
  return v7;
}
