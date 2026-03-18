/*
 * XREFs of xxxSendMinRectMessages @ 0x1C01240B0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     xxxMinMaximizeEx @ 0x1C00B7604 (xxxMinMaximizeEx.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C0123F50 (NtUserGetWindowMinimizeRect.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C020A9E0 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     xxxMinimizeHungWindow @ 0x1C02243EC (xxxMinimizeHungWindow.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C015D880 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

__int64 __fastcall xxxSendMinRectMessages(unsigned __int64 *a1, __int64 a2)
{
  unsigned int v2; // esi
  unsigned __int64 v4; // rbp
  _QWORD *v5; // r14
  void *v6; // rcx
  unsigned int v7; // edi
  __int64 v8; // rbx
  unsigned int *v9; // rdx
  unsigned int v10; // eax
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD v15[3]; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v16[3]; // [rsp+68h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+B0h] [rbp+8h] BYREF

  v2 = 0;
  if ( a1 )
    v4 = *a1;
  else
    v4 = 0LL;
  v5 = *(_QWORD **)(gptiCurrent + 464LL);
  if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(*v5 + 16LL)) & 0x800) != 0 )
  {
    xxxCallHook(5, v4, a2, 10);
    v5 = *(_QWORD **)(gptiCurrent + 464LL);
    v2 = 1;
  }
  if ( v5[30] )
  {
    PushW32ThreadLock(*(_QWORD *)(gptiCurrent + 456LL), v16, UserDereferenceObject);
    v6 = *(void **)(gptiCurrent + 456LL);
    if ( v6 )
      ObfReferenceObject(v6);
    v7 = 0;
    v8 = 0LL;
    while ( 1 )
    {
      v9 = (unsigned int *)v5[30];
      if ( v9 && !v9[3] )
      {
        if ( v7 < *v9 )
        {
          v10 = v7 + 1;
          if ( *(_QWORD *)&v9[4 * v7 + 6] != v8 )
            v10 = v7;
          v7 = v10;
          if ( v10 < *v9 )
          {
            v8 = *(_QWORD *)&v9[4 * v10 + 6];
            goto LABEL_19;
          }
        }
        v7 = 0;
      }
      v8 = 0LL;
LABEL_19:
      if ( !v8 )
      {
        PopAndFreeW32ThreadLock((__int64)v16, (__int64)v9);
        return v2;
      }
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)v9);
      v15[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v15;
      v15[1] = v8;
      _InterlockedAdd((volatile signed __int32 *)(v8 + 8), 1u);
      if ( xxxSendTransformableMessageTimeout(
             (__int64 *)v8,
             0x8Bu,
             v4,
             a2,
             0,
             100,
             (__int64 *)&BugCheckParameter3,
             1,
             0) )
      {
        v2 = 1;
      }
      ThreadUnlock1(v13, v12);
    }
  }
  return v2;
}
