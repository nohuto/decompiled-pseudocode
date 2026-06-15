/*
 * XREFs of ?GetInvalidTelephonyInstance@TelephonyController@@UEAAJIPEAU_TelephonyInstanceData@@@Z @ 0x180149B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TelephonyController::GetInvalidTelephonyInstance(
        TelephonyController *this,
        unsigned int a2,
        struct _TelephonyInstanceData *a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a3 )
    return 2147500035LL;
  if ( a2 >= 5 )
    return 2147942487LL;
  *(_QWORD *)a3 = qword_1801B69D8[a2];
  return result;
}
