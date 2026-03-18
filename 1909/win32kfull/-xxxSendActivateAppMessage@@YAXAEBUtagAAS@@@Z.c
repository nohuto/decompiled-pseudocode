/*
 * XREFs of ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C01357E0
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C001C72C (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C01354CC (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01E1588 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C0011538 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     BuildHwndList @ 0x1C006DEF0 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006E0B0 (FreeHwndList.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C01359F0 (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 */

void __fastcall xxxSendActivateAppMessage(const struct tagAAS *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct tagBWL *v5; // rbp
  unsigned __int64 *i; // r14
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  ULONG_PTR *v10; // r15
  ULONG_PTR v11; // rbx
  __int64 v12; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v17; // rbx
  __int64 v18; // [rsp+30h] [rbp-48h] BYREF
  ULONG_PTR v19; // [rsp+38h] [rbp-40h]
  __int64 v20; // [rsp+40h] [rbp-38h]
  char v21; // [rsp+80h] [rbp+8h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v21);
  if ( (*((_DWORD *)a1 + 3) & 2) == 0 )
    UserAtomicCheck::Detach((UserAtomicCheck *)&v21);
  v2 = BuildHwndList(*(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 24LL) + 112LL));
  v5 = (struct tagBWL *)v2;
  if ( v2 )
  {
    for ( i = (unsigned __int64 *)(v2 + 32); ; ++i )
    {
      v17 = *i;
      if ( *i == 1 )
        break;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v4, v3) )
        PsGetThreadWin32Thread(CurrentThread);
      LODWORD(v3) = (unsigned __int16)v17;
      v4 = gpsi;
      if ( (unsigned __int64)(unsigned __int16)v17 < *(_QWORD *)(gpsi + 8LL) )
      {
        v8 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v17 * LODWORD(gSharedInfo[2]);
        v9 = v17 >> 16;
        v10 = (ULONG_PTR *)HMPkheFromPhe(v8);
        if ( ((_WORD)v9 == *(_WORD *)(v8 + 26)
           || (_WORD)v9 == 0xFFFF
           || !(_WORD)v9 && PsGetCurrentProcessWow64Process(v4))
          && (*(_BYTE *)(v8 + 25) & 1) == 0
          && *(_BYTE *)(v8 + 24) == 1 )
        {
          v11 = *v10;
          if ( *v10 )
          {
            if ( *(_QWORD *)(v11 + 16) == *(_QWORD *)a1 )
            {
              v12 = *((unsigned int *)a1 + 3);
              if ( (v12 & 2) != 0 )
              {
                QueueNotifyTransformableMessage((struct tagWND *)v11, 0x1Cu, v12 & 1, *((unsigned int *)a1 + 2), 0, 0);
              }
              else
              {
                v18 = 0LL;
                v19 = 0LL;
                v20 = 0LL;
                ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3, v12);
                v18 = *(_QWORD *)(ThreadWin32Thread + 408);
                *(_QWORD *)(ThreadWin32Thread + 408) = &v18;
                v19 = v11;
                HMLockObject(v11);
                xxxSendMessage(v11);
                ThreadUnlock1(v15, v14, v16);
              }
            }
          }
        }
      }
    }
    FreeHwndList(v5);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v21);
}
