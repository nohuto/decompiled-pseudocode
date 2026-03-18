/*
 * XREFs of ?GetVidPnOwner@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAPEBGXZ @ 0x1400072FC
 * Callers:
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@@Z @ 0x140007BC0 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 * Callees:
 *     BlackScreenDiagnostics::GetVidPnOwnership @ 0x1400073A8 (BlackScreenDiagnostics--GetVidPnOwnership.c)
 */

const unsigned __int16 *__fastcall BlackScreenDiagnostics::CBlackScreenDiagnosticReport::GetVidPnOwner(
        BlackScreenDiagnostics::CBlackScreenDiagnosticReport *this)
{
  const unsigned __int16 *result; // rax
  int v2; // [rsp+30h] [rbp+8h] BYREF
  int v3; // [rsp+34h] [rbp+Ch]

  v3 = HIDWORD(this);
  v2 = 0;
  BlackScreenDiagnostics::GetVidPnOwnership(&v2);
  switch ( v2 )
  {
    case 1:
      result = L"DWM";
      break;
    case 2:
      result = L"NotDWM";
      break;
    case 3:
      result = L"None";
      break;
    case 4:
      result = L"NoVidPnPresent";
      break;
    case 5:
      result = L"QueryDisplayConfigFailure";
      break;
    case 6:
      result = L"OpenAdaptorFailure";
      break;
    case 7:
      result = L"CheckVidPnExclusiveOwnershipFailure";
      break;
    default:
      result = L"Unknown";
      break;
  }
  return result;
}
