/*
 * XREFs of ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C0017DDC
 * Callers:
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C0013280 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C001BBFC (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01E1708 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C0017FEC (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00835BC (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     BuildHwndList @ 0x1C00CC820 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00CC9E0 (FreeHwndList.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 */

void __fastcall xxxSendActivateAppMessage(const struct tagAAS *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbp
  unsigned __int64 *i; // r14
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  __int64 *v12; // r15
  __int64 v13; // rbx
  int v14; // r8d
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned __int64 v19; // rbx
  __int64 v20; // [rsp+30h] [rbp-48h] BYREF
  __int64 v21; // [rsp+38h] [rbp-40h]
  __int64 v22; // [rsp+40h] [rbp-38h]
  char v23; // [rsp+80h] [rbp+8h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v23);
  if ( (*((_DWORD *)a1 + 3) & 2) == 0 )
    UserAtomicCheck::Detach((UserAtomicCheck *)&v23);
  v2 = BuildHwndList(*(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 24LL) + 112LL));
  v7 = v2;
  if ( v2 )
  {
    for ( i = (unsigned __int64 *)(v2 + 32); ; ++i )
    {
      v19 = *i;
      if ( *i == 1 )
        break;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v4, v3, v5, v6) )
        PsGetThreadWin32Thread(CurrentThread);
      v3 = (unsigned __int16)v19;
      v4 = gpsi;
      if ( (unsigned __int64)(unsigned __int16)v19 < *(_QWORD *)(gpsi + 8LL) )
      {
        v10 = *((_QWORD *)&gSharedInfo + 1) + (unsigned int)(unsigned __int16)v19 * *((_DWORD *)&gSharedInfo + 4);
        v11 = v19 >> 16;
        v12 = (__int64 *)HMPkheFromPhe(v10);
        if ( ((_WORD)v11 == *(_WORD *)(v10 + 26)
           || (_WORD)v11 == 0xFFFF
           || !(_WORD)v11 && PsGetCurrentProcessWow64Process(v4))
          && (*(_BYTE *)(v10 + 25) & 1) == 0
          && *(_BYTE *)(v10 + 24) == 1 )
        {
          v13 = *v12;
          if ( *v12 )
          {
            if ( *(_QWORD *)(v13 + 16) == *(_QWORD *)a1 )
            {
              v14 = *((_DWORD *)a1 + 3);
              if ( (v14 & 2) != 0 )
              {
                QueueNotifyTransformableMessage((struct tagWND *)v13, 0x1Cu, v14 & 1, *((unsigned int *)a1 + 2), 0, 0);
              }
              else
              {
                v20 = 0LL;
                v21 = 0LL;
                v22 = 0LL;
                ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
                v20 = *(_QWORD *)(ThreadWin32Thread + 408);
                *(_QWORD *)(ThreadWin32Thread + 408) = &v20;
                v21 = v13;
                HMLockObject(v13);
                xxxSendMessage(v13, 28LL, *((_DWORD *)a1 + 3) & 1, *((unsigned int *)a1 + 2));
                ThreadUnlock1(v17, v16, v18);
              }
            }
          }
        }
      }
    }
    FreeHwndList(v7);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v23);
}
