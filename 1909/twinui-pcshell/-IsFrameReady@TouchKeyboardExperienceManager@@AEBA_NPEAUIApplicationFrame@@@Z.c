/*
 * XREFs of ?IsFrameReady@TouchKeyboardExperienceManager@@AEBA_NPEAUIApplicationFrame@@@Z @ 0x18032F978
 * Callers:
 *     _lambda_39b1066faff2db62f569cb34f066b88c_::operator() @ 0x1800AA13C (_lambda_39b1066faff2db62f569cb34f066b88c_--operator().c)
 *     _lambda_75fd98ac14c9b18bffd1e748aa36b6a5_::operator() @ 0x1800AAE84 (_lambda_75fd98ac14c9b18bffd1e748aa36b6a5_--operator().c)
 *     _lambda_e02802e9a84f69bf6d5de77772b90450_::operator() @ 0x1800AAFFC (_lambda_e02802e9a84f69bf6d5de77772b90450_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
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
