/*
 * XREFs of TtmiCreateEventQueue @ 0x1408C0044
 * Callers:
 *     TtmpDispatchCreateEventQueue @ 0x1408BF90C (TtmpDispatchCreateEventQueue.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     ExInitializeResourceLite @ 0x1400476D0 (ExInitializeResourceLite.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObCreateObjectEx @ 0x1405D9340 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1405D95A0 (ObInsertObjectEx.c)
 *     TtmiLogError @ 0x1408C1CAC (TtmiLogError.c)
 *     TtmiLogQueueCreated @ 0x1408C24B4 (TtmiLogQueueCreated.c)
 */

__int64 __fastcall TtmiCreateEventQueue(__int64 a1, _QWORD *a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 v7; // r9
  int inserted; // ebx
  char *v9; // rbx
  _QWORD *v10; // rdi
  _QWORD *v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-60h]
  _DWORD v14[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v15; // [rsp+58h] [rbp-28h]
  __int64 v16; // [rsp+60h] [rbp-20h]
  int v17; // [rsp+68h] [rbp-18h]
  int v18; // [rsp+6Ch] [rbp-14h]
  __int128 v19; // [rsp+70h] [rbp-10h]
  PVOID Object; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v21; // [rsp+C0h] [rbp+40h] BYREF

  CurrentThread = KeGetCurrentThread();
  *a2 = 0LL;
  *a3 = 0LL;
  v7 = CurrentThread->$42514DC6747B59BF81E16C40547B231E::gap0[10];
  v14[1] = 0;
  v18 = 0;
  v15 = 0LL;
  v16 = 0LL;
  v14[0] = 48;
  v17 = 32;
  v19 = 0LL;
  inserted = ObCreateObjectEx(0, TtmpQueueObjectType, (int)v14, v7, v13, 176, 0, 0, &Object, 0LL);
  if ( inserted < 0 )
    goto LABEL_2;
  v9 = (char *)Object;
  memset(Object, 0, 0xB0uLL);
  *((_QWORD *)v9 + 20) = v9 + 152;
  *((_QWORD *)v9 + 19) = v9 + 152;
  ExInitializeResourceLite((PERESOURCE)(v9 + 24));
  KeInitializeEvent((PRKEVENT)(v9 + 128), NotificationEvent, 0);
  v9[168] = 1;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  v10 = Object;
  *((_QWORD *)Object + 2) = a1;
  v11 = *(_QWORD **)(a1 + 88);
  if ( *v11 != a1 + 80 )
    __fastfail(3u);
  *v10 = a1 + 80;
  v10[1] = v11;
  *v11 = v10;
  *(_QWORD *)(a1 + 88) = v10;
  inserted = ObInsertObjectEx(v10, 0LL, 0x1F0000u, 0, 0, 0LL, &v21);
  if ( inserted < 0 )
  {
LABEL_2:
    TtmiLogError("TtmiCreateEventQueue");
  }
  else
  {
    TtmiLogQueueCreated(v10);
    inserted = 0;
    *a3 = v21;
    *a2 = v10;
  }
  return (unsigned int)inserted;
}
