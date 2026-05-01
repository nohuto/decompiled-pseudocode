/*
 * XREFs of ?OnApplicationViewChanged@CVirtualDesktopApplicationViewEventListener@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180069360
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800500AC (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CVirtualDesktopApplicationViewEventListener::OnApplicationViewChanged(
        __int64 a1,
        __int64 a2,
        int a3)
{
  int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdi
  int (__fastcall *v10)(__int64, __int64, ULONGLONG); // rbx
  ULONGLONG TickCount64; // rax
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rdx
  int v18; // [rsp+20h] [rbp-20h]
  PSRWLOCK SRWLock[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  int v21; // [rsp+70h] [rbp+30h] BYREF

  SRWLock[1] = (PSRWLOCK)-2LL;
  if ( !a3 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 216LL))(a2, &v21);
    if ( v6 >= 0 )
    {
      if ( !v21 )
        return 0LL;
      goto LABEL_14;
    }
    v15 = 47LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapplicationvieweventlistener.cpp",
      (const char *)(unsigned int)v6,
      v18);
    return (unsigned int)v6;
  }
  if ( a3 == 5 )
  {
    v12 = *(_QWORD *)(a1 + 80);
    if ( !v12 )
      return 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 88LL))(v12);
    if ( v6 >= 0 )
      return 0LL;
    v15 = 90LL;
    goto LABEL_33;
  }
  if ( a3 != 1 )
  {
    if ( a3 <= 6 )
      return 0LL;
    if ( a3 <= 8 )
    {
      (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88), SRWLock);
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 64) + 32LL))(
             *(_QWORD *)(a1 + 64),
             *(_QWORD *)(a1 + 48),
             *(_QWORD *)(a1 + 56),
             a2);
      goto LABEL_11;
    }
    if ( a3 != 10 )
    {
      if ( a3 == 11 )
      {
        (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88), SRWLock);
        v14 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 136LL))(*(_QWORD *)(a1 + 48), a2);
        v6 = v14;
        if ( v14 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x44,
            (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapplicationvieweventlistener.cpp",
            (const char *)(unsigned int)v14,
            v18);
      }
      else
      {
        if ( a3 != 17 )
          return 0LL;
        (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88), SRWLock);
        v13 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 304LL))(*(_QWORD *)(a1 + 48), a2);
        v6 = v13;
        if ( v13 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x54,
            (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapplicationvieweventlistener.cpp",
            (const char *)(unsigned int)v13,
            v18);
      }
      goto LABEL_28;
    }
LABEL_14:
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88), SRWLock);
    v7 = *(_QWORD *)(a1 + 80);
    if ( v7 && (v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 80LL))(v7, a2), v6 = v8, v8 < 0) )
    {
      v17 = 56LL;
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 72);
      v10 = *(int (__fastcall **)(__int64, __int64, ULONGLONG))(*(_QWORD *)v9 + 40LL);
      TickCount64 = GetTickCount64();
      if ( v10(v9, a2, TickCount64) >= 0 )
      {
        v6 = 0;
        goto LABEL_11;
      }
      v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 120LL))(*(_QWORD *)(a1 + 48), a2);
      v6 = v8;
      if ( v8 >= 0 )
      {
LABEL_11:
        if ( SRWLock[0] )
          ReleaseSRWLockExclusive(SRWLock[0]);
        return (unsigned int)v6;
      }
      v17 = 61LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapplicationvieweventlistener.cpp",
      (const char *)(unsigned int)v8,
      v18);
    goto LABEL_11;
  }
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88), SRWLock);
  v16 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 144LL))(*(_QWORD *)(a1 + 48), a2);
  v6 = v16;
  if ( v16 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x49,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopapplicationvieweventlistener.cpp",
      (const char *)(unsigned int)v16,
      v18);
LABEL_28:
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(SRWLock);
  return (unsigned int)v6;
}
