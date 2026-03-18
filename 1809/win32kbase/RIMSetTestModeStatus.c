/*
 * XREFs of RIMSetTestModeStatus @ 0x1C010B400
 * Callers:
 *     NtRIMSetTestModeStatus @ 0x1C010C510 (NtRIMSetTestModeStatus.c)
 * Callees:
 *     RIMSyncWalkRimObjList @ 0x1C008A0A0 (RIMSyncWalkRimObjList.c)
 */

__int64 __fastcall RIMSetTestModeStatus(int a1)
{
  gbTestModeOn = a1;
  if ( !a1 )
    RIMSyncWalkRimObjList(
      1,
      (void (__fastcall *)(_QWORD *))lambda_9d298b15635a5f57a4f04d62705b4b34_::_lambda_invoker_cdecl_);
  return 0LL;
}
