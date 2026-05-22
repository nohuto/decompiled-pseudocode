/*
 * XREFs of ?GetInfo@TwoFingerClickRecognizer@@UEAAJW4GestureDataType@@PEAUGestureData@@@Z @ 0x18010DAD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?GetTapInfo@TwoFingerClickRecognizer@@QEAA_NPEAUGestureData@@@Z @ 0x18010DB50 (-GetTapInfo@TwoFingerClickRecognizer@@QEAA_NPEAUGestureData@@@Z.c)
 */

__int64 __fastcall TwoFingerClickRecognizer::GetInfo(TwoFingerClickRecognizer *a1, int a2, struct GestureData *a3)
{
  bool TapInfo; // bl
  __int64 v4; // r9

  TapInfo = 0;
  if ( (unsigned int)(a2 - 9) <= 1 )
  {
    TapInfo = TwoFingerClickRecognizer::GetTapInfo(a1, a3);
    if ( TapInfo )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 24LL))(v4, 0xFFFFFFFFLL);
  }
  return !TapInfo ? 0x80070057 : 0;
}
