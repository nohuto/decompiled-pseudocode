/*
 * XREFs of TtmiCreateEventQueue @ 0x14088353C
 * Callers:
 *     TtmpDispatchCreateEventQueue @ 0x140882DDC (TtmpDispatchCreateEventQueue.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     ExInitializeResourceLite @ 0x1400CC570 (ExInitializeResourceLite.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ObCreateObjectEx @ 0x1405E15E0 (ObCreateObjectEx.c)
 *     TtmiLogError @ 0x1407628CC (TtmiLogError.c)
 *     TtmiLogQueueCreated @ 0x140885810 (TtmiLogQueueCreated.c)
 */

__int64 __fastcall TtmiCreateEventQueue(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v5; // r9
  int v6; // eax
  unsigned int v7; // ebx
  char *v8; // rbx
  _QWORD *v9; // rbx
  _QWORD *v10; // rcx
  __int64 v12; // [rsp+20h] [rbp-68h]
  int v13; // [rsp+50h] [rbp-38h] BYREF
  __int64 v14; // [rsp+58h] [rbp-30h]
  __int64 v15; // [rsp+60h] [rbp-28h]
  int v16; // [rsp+68h] [rbp-20h]
  __int128 v17; // [rsp+70h] [rbp-18h]
  void *v18; // [rsp+98h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  *a2 = 0LL;
  v13 = 48;
  v14 = 0LL;
  v5 = CurrentThread->$86A1A36C0FEBA810544B2F2B35F40C82::gap0[10];
  v16 = 32;
  v15 = 0LL;
  v17 = 0LL;
  v6 = ObCreateObjectEx(0, TtmpQueueObjectType, (int)&v13, v5, v12, 176, 0, 0, &v18, 0LL);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = (char *)v18;
    memset(v18, 0, 0xB0uLL);
    *((_QWORD *)v8 + 20) = v8 + 152;
    *((_QWORD *)v8 + 19) = v8 + 152;
    ExInitializeResourceLite((PERESOURCE)(v8 + 24));
    KeInitializeEvent((PRKEVENT)(v8 + 128), NotificationEvent, 0);
    v8[168] = 1;
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
    v9 = v18;
    *((_QWORD *)v18 + 2) = a1;
    v10 = *(_QWORD **)(a1 + 88);
    if ( *v10 != a1 + 80 )
      __fastfail(3u);
    v9[1] = v10;
    *v9 = a1 + 80;
    *v10 = v9;
    *(_QWORD *)(a1 + 88) = v9;
    TtmiLogQueueCreated(v9);
    *a2 = v9;
    return 0;
  }
  else
  {
    TtmiLogError("TtmiCreateEventQueue", 567, v6, v6);
  }
  return v7;
}
