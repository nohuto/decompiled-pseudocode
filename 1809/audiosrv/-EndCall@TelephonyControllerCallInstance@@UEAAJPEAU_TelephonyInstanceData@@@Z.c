/*
 * XREFs of ?EndCall@TelephonyControllerCallInstance@@UEAAJPEAU_TelephonyInstanceData@@@Z @ 0x1801478D0
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleCallControl@TelephonyControllerCallInstance@@AEAAJU_tagKSTELEPHONY_CALLCONTROL@@@Z @ 0x180147A34 (-HandleCallControl@TelephonyControllerCallInstance@@AEAAJU_tagKSTELEPHONY_CALLCONTROL@@@Z.c)
 *     ?VerifyAndSetCallType@TelephonyControllerCallInstance@@AEAAJPEAU_TelephonyInstanceData@@@Z @ 0x180147E24 (-VerifyAndSetCallType@TelephonyControllerCallInstance@@AEAAJPEAU_TelephonyInstanceData@@@Z.c)
 */

__int64 __fastcall TelephonyControllerCallInstance::EndCall(
        TelephonyControllerCallInstance *this,
        struct _TelephonyInstanceData *a2)
{
  __int64 result; // rax
  __int64 v3; // r10

  if ( !a2 )
    return 2147500035LL;
  result = TelephonyControllerCallInstance::VerifyAndSetCallType(this, a2);
  if ( (int)result >= 0 )
    return TelephonyControllerCallInstance::HandleCallControl(v3, *(unsigned int *)(v3 + 40));
  return result;
}
