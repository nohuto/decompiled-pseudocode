/*
 * XREFs of HandleInputDestDestruction @ 0x1C0032304
 * Callers:
 *     HandleFullWindowDestruction @ 0x1C0032270 (HandleFullWindowDestruction.c)
 *     HandleBaseWindowDestruction @ 0x1C0151230 (HandleBaseWindowDestruction.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C002E66C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C002E6B8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0031750 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C003243C (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HandleInputDestDestruction(struct tagINPUTDEST *a1)
{
  char v2; // bl
  __int64 v3; // rax
  volatile __int32 *v4; // rbx
  _BYTE v5[16]; // [rsp+20h] [rbp-E8h] BYREF
  _BYTE v6[192]; // [rsp+30h] [rbp-D8h] BYREF

  if ( (*((_BYTE *)qword_1C01CBA58 + dword_1C01CBA60 * (unsigned int)(unsigned __int16)**((_DWORD **)a1 + 9) + 25) & 1) == 0 )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v5);
    CInputDest::CInputDest((CInputDest *)v6, a1);
    v2 = CInputDest::operator==(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, v6);
    CInputDest::SetEmpty((CInputDest *)v6);
    if ( v2 )
      CInputDest::SetEmpty((CInputDest *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine);
    v3 = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C01C3018 + 8LL))(qword_1C01C3018);
    if ( v3 )
    {
      v4 = (volatile __int32 *)(v3 + 2552);
      if ( (unsigned __int8)CInputDest::operator==(v3 + 2552, a1) )
      {
        CInputDest::SetEmpty((CInputDest *)v4);
        _InterlockedExchange(v4 + 46, 0);
      }
    }
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v5);
  }
}
