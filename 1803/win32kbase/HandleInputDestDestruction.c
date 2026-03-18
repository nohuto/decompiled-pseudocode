/*
 * XREFs of HandleInputDestDestruction @ 0x1C0061C74
 * Callers:
 *     HandleFullWindowDestruction @ 0x1C0061BE0 (HandleFullWindowDestruction.c)
 *     HandleBaseWindowDestruction @ 0x1C012E530 (HandleBaseWindowDestruction.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C003574C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0035790 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C003704C (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0037360 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HandleInputDestDestruction(struct tagINPUTDEST *a1)
{
  char v2; // bl
  __int64 v3; // rax
  volatile __int32 *v4; // rbx
  _BYTE v5[16]; // [rsp+20h] [rbp-E8h] BYREF
  _BYTE v6[192]; // [rsp+30h] [rbp-D8h] BYREF

  if ( (*((_BYTE *)qword_1C01A0E28 + dword_1C01A0E30 * (unsigned int)(unsigned __int16)**((_DWORD **)a1 + 9) + 25) & 1) == 0 )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v5);
    CInputDest::CInputDest((CInputDest *)v6, a1);
    v2 = CInputDest::operator==((unsigned int *)gpForegroundInfo, (__int64)v6);
    CInputDest::SetEmpty((CInputDest *)v6);
    if ( v2 )
      CInputDest::SetEmpty(gpForegroundInfo);
    v3 = (*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C019A5A8 + 8LL))(qword_1C019A5A8);
    if ( v3 )
    {
      v4 = (volatile __int32 *)(v3 + 2552);
      if ( CInputDest::operator==((unsigned int *)(v3 + 2552), (__int64)a1) )
      {
        CInputDest::SetEmpty((CInputDest *)v4);
        _InterlockedExchange(v4 + 46, 0);
      }
    }
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v5);
  }
}
