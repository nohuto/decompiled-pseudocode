/*
 * XREFs of ?OnInput@SystemButtonEventControllerManager@@QEAAXPEBULegacyInputInfo@@@Z @ 0x18002FF78
 * Callers:
 *     ?OnInput@SystemButtonProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180035BD0 (-OnInput@SystemButtonProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorRes.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?SendSystemButtonEvent@SystemButtonEventController@@QEAAXAEBUSystemButtonEventInfo@@@Z @ 0x18002FE40 (-SendSystemButtonEvent@SystemButtonEventController@@QEAAXAEBUSystemButtonEventInfo@@@Z.c)
 */

void __fastcall SystemButtonEventControllerManager::OnInput(
        SystemButtonEventController **this,
        const struct LegacyInputInfo *a2)
{
  int v2; // r8d
  SystemButtonEventController *v3; // rcx
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h]

  v2 = 0;
  switch ( *((_DWORD *)a2 + 16) )
  {
    case 0xED:
      v2 = 1;
      break;
    case 0xEE:
      v2 = 2;
      break;
    case 0xEF:
      v2 = 3;
      break;
  }
  v3 = *this;
  v5 = 0LL;
  v4 = *((_QWORD *)a2 + 2);
  BYTE4(v5) = *((_BYTE *)a2 + 68);
  LODWORD(v5) = v2;
  SystemButtonEventController::SendSystemButtonEvent(v3, (const struct SystemButtonEventInfo *)&v4);
}
