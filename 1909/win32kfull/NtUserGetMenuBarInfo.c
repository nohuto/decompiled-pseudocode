/*
 * XREFs of NtUserGetMenuBarInfo @ 0x1C012D200
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxGetMenuBarInfo @ 0x1C012D47C (xxxGetMenuBarInfo.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall NtUserGetMenuBarInfo(__int64 a1, __int64 a2, __int64 a3, ULONG64 a4)
{
  int v6; // r15d
  __int64 v7; // rcx
  ULONG_PTR v8; // r14
  int MenuBarInfo; // edi
  _BYTE *v10; // rdx
  struct _KTHREAD *CurrentThread; // r12
  __int64 v12; // rbx
  int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *v19; // r12
  __int64 v20; // rbx
  __int64 *v21; // rax
  unsigned int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rcx
  int v26; // ebx
  __int64 v28; // [rsp+38h] [rbp-90h] BYREF
  ULONG_PTR v29; // [rsp+40h] [rbp-88h]
  __int64 v30; // [rsp+48h] [rbp-80h]
  _OWORD v31[3]; // [rsp+60h] [rbp-68h] BYREF

  memset(v31, 0, sizeof(v31));
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v6 = 1;
  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  if ( v8 )
  {
    v28 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v28;
    v29 = v8;
    HMLockObject(v8);
    if ( (a4 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = (_BYTE *)a4;
    if ( a4 >= MmUserProbeAddress )
      v10 = (_BYTE *)MmUserProbeAddress;
    *v10 = *v10;
    v10[47] = v10[47];
    LODWORD(v31[0]) = *(_DWORD *)a4;
    MenuBarInfo = xxxGetMenuBarInfo(v8);
    CurrentThread = KeGetCurrentThread();
    v12 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v14, v13) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v12 = *ThreadWin32Thread;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v12 + 472) + 224LL) & 1) == 0 )
    {
      v19 = KeGetCurrentThread();
      v20 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v16, v15) )
      {
        v21 = (__int64 *)PsGetThreadWin32Thread(v19);
        if ( v21 )
          v20 = *v21;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v20 + 472) + 224LL) & 0x20) == 0 )
      {
        v22 = *(_DWORD *)(*(_QWORD *)(v8 + 40) + 288LL);
        if ( (((unsigned __int16)(v22 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                 v16,
                                                                                 v15,
                                                                                 v17) >> 8)) & 0x1FF) != 0 )
          goto LABEL_24;
        v25 = *(unsigned int *)(*(_QWORD *)(v8 + 40) + 288LL);
        v26 = (*(_DWORD *)(*(_QWORD *)(v8 + 40) + 288LL) & 0xF) == 2 && (v25 & 0x20000000) != 0;
        if ( (W32GetCurrentThreadDpiAwarenessContext(v25, v23, v24) & 0xF) != 2
          || (W32GetCurrentThreadDpiAwarenessContext(v16, v15, v17) & 0x20000000) == 0 )
        {
          v6 = 0;
        }
        if ( v26 != v6 )
LABEL_24:
          TransformRectBetweenCoordinateSpaces((char *)v31 + 4, (char *)v31 + 4, 0LL, v8);
      }
    }
    if ( MenuBarInfo )
    {
      DWORD1(v31[1]) = 0;
      HIDWORD(v31[2]) = 0;
      *(_OWORD *)a4 = v31[0];
      *(_OWORD *)(a4 + 16) = v31[1];
      *(_OWORD *)(a4 + 32) = v31[2];
    }
    ThreadUnlock1(v16, v15, v17);
  }
  else
  {
    MenuBarInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v7);
  return MenuBarInfo;
}
