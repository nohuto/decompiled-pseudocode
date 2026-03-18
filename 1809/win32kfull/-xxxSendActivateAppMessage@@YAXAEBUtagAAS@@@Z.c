/*
 * XREFs of ?xxxSendActivateAppMessage@@YAXAEBUtagAAS@@@Z @ 0x1C00CD064
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00AD848 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C00CCDB0 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01CD1C8 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     FreeHwndList @ 0x1C0070D10 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0070DA0 (BuildHwndList.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00CC87C (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C00CD26C (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 */

void __fastcall xxxSendActivateAppMessage(const struct tagAAS *a1)
{
  struct tagBWL *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct tagBWL *v5; // r14
  unsigned __int64 *i; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  int v8; // r8d
  unsigned __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // r15
  ULONG_PTR v12; // rbx
  int v13; // r8d
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rbx
  _QWORD v18[4]; // [rsp+30h] [rbp-48h] BYREF
  char v19; // [rsp+80h] [rbp+8h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v19);
  if ( (*((_DWORD *)a1 + 3) & 2) == 0 )
    UserAtomicCheck::Detach((UserAtomicCheck *)&v19);
  v2 = BuildHwndList(*(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 464LL) + 24LL) + 88LL), 2, 0LL);
  v5 = v2;
  if ( v2 )
  {
    for ( i = (unsigned __int64 *)((char *)v2 + 32); ; ++i )
    {
      v17 = *i;
      if ( *i == 1 )
        break;
      CurrentThread = KeGetCurrentThread();
      if ( !(unsigned int)IsThreadCrossSessionAttached(v4, v3) )
        PsGetThreadWin32Thread(CurrentThread);
      v8 = (unsigned __int16)v17;
      v4 = gpsi;
      if ( (unsigned __int64)(unsigned __int16)v17 < *(_QWORD *)(gpsi + 8LL) )
      {
        v9 = v17 >> 16;
        v3 = gSharedInfo[1];
        v10 = v3 + (unsigned int)(v8 * LODWORD(gSharedInfo[2]));
        v11 = 3 * ((__int64)(unsigned int)(v8 * LODWORD(gSharedInfo[2])) >> 5);
        if ( ((_WORD)v9 == *(_WORD *)(v10 + 26)
           || (_WORD)v9 == 0xFFFF
           || !(_WORD)v9 && PsGetCurrentProcessWow64Process(gpsi))
          && (*(_BYTE *)(v10 + 25) & 1) == 0
          && *(_BYTE *)(v10 + 24) == 1 )
        {
          v12 = *(_QWORD *)(gpKernelHandleTable + 8 * v11);
          if ( v12 )
          {
            if ( *(_QWORD *)(v12 + 16) == *(_QWORD *)a1 )
            {
              v13 = *((_DWORD *)a1 + 3);
              if ( (v13 & 2) != 0 )
              {
                QueueNotifyTransformableMessage((struct tagWND *)v12, 0x1Cu, v13 & 1, *((unsigned int *)a1 + 2), 0, 0);
              }
              else
              {
                ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3);
                v18[0] = *(_QWORD *)(ThreadWin32Thread + 416);
                *(_QWORD *)(ThreadWin32Thread + 416) = v18;
                v18[1] = v12;
                _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
                xxxSendMessage(v12);
                ThreadUnlock1(v16, v15);
              }
            }
          }
        }
      }
    }
    FreeHwndList(v5);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v19);
}
