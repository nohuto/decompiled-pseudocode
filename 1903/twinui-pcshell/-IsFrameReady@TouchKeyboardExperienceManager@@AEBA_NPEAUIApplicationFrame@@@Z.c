/*
 * XREFs of ?IsFrameReady@TouchKeyboardExperienceManager@@AEBA_NPEAUIApplicationFrame@@@Z @ 0x1803104B4
 * Callers:
 *     _lambda_05543aeae04520384b0424ea475026ea_::operator() @ 0x18009CB38 (_lambda_05543aeae04520384b0424ea475026ea_--operator().c)
 *     _lambda_531262642ad094c3078a9cb1af58219e_::operator() @ 0x18009CCB0 (_lambda_531262642ad094c3078a9cb1af58219e_--operator().c)
 *     _lambda_b4654e0922f50786bbde1a7e7a9917df_::operator() @ 0x18009D7D4 (_lambda_b4654e0922f50786bbde1a7e7a9917df_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall TouchKeyboardExperienceManager::IsFrameReady(
        TouchKeyboardExperienceManager *this,
        struct IApplicationFrame *a2)
{
  __int128 v4; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)&v4 = this;
  if ( !a2 )
    return 0;
  (*(void (__fastcall **)(struct IApplicationFrame *, __int128 *))(*(_QWORD *)a2 + 24LL))(a2, &v4);
  (*(void (__fastcall **)(struct IApplicationFrame *, char *))(*(_QWORD *)a2 + 40LL))(a2, (char *)&v4 + 8);
  return v4 != 0;
}
