/*
 * XREFs of ?GetInvalidCallInstanceCount@TelephonyController@@UEAAJPEAI@Z @ 0x180149B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TelephonyController::GetInvalidCallInstanceCount(TelephonyController *this, unsigned int *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2 )
    return 2147500035LL;
  *a2 = 5;
  return result;
}
