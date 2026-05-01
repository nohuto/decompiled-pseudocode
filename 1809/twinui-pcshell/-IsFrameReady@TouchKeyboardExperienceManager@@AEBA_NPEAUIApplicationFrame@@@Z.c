/*
 * XREFs of ?IsFrameReady@TouchKeyboardExperienceManager@@AEBA_NPEAUIApplicationFrame@@@Z @ 0x1802B707C
 * Callers:
 *     _lambda_43679049413ffb011dfd944481e1a2e9_::operator() @ 0x1800929C0 (_lambda_43679049413ffb011dfd944481e1a2e9_--operator().c)
 *     _lambda_9724884f6eff691596e03972589b8d56_::operator() @ 0x180093044 (_lambda_9724884f6eff691596e03972589b8d56_--operator().c)
 *     _lambda_c8b3cfc50c1e59d40f4a103bc0cf4ce9_::operator() @ 0x180093714 (_lambda_c8b3cfc50c1e59d40f4a103bc0cf4ce9_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
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
