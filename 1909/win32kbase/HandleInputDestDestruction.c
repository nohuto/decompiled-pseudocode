/*
 * XREFs of HandleInputDestDestruction @ 0x1C002FD60
 * Callers:
 *     HandleFullWindowDestruction @ 0x1C002FE50 (HandleFullWindowDestruction.c)
 *     HandleBaseWindowDestruction @ 0x1C0182190 (HandleBaseWindowDestruction.c)
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002D794 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FF2C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C003003C (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C003009C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00300E8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C0030238 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C00304C0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

void __fastcall HandleInputDestDestruction(struct tagINPUTDEST *a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rbx
  char v5; // bl
  __int64 MouseProcessor; // rax
  volatile __int32 *v7; // rbx
  _BYTE v8[8]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v9[24]; // [rsp+28h] [rbp-B0h] BYREF
  _BYTE v10[128]; // [rsp+40h] [rbp-98h] BYREF

  v3 = (_DWORD *)*((_QWORD *)a1 + 10);
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
    (__int64)v9,
    a2,
    a3);
  if ( (*((_BYTE *)qword_1C0210758 + dword_1C0210760 * (unsigned int)(unsigned __int16)*v3 + 25) & 1) == 0 )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v8);
    CInputDest::CInputDest((CInputDest *)v10, a1);
    v5 = CInputDest::operator==(gpForegroundInfo, v10);
    CInputDest::SetEmpty((CInputDest *)v10);
    if ( v5 )
      CInputDest::SetEmpty(gpForegroundInfo);
    MouseProcessor = anonymous_namespace_::GetMouseProcessor();
    if ( MouseProcessor )
    {
      v7 = (volatile __int32 *)(MouseProcessor + 3272);
      if ( (unsigned __int8)CInputDest::operator==(MouseProcessor + 3272, a1) )
      {
        CInputDest::SetEmpty((CInputDest *)v7);
        _InterlockedExchange(v7 + 32, 0);
      }
    }
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v8);
  }
}
