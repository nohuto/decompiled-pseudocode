/*
 * XREFs of ?ndisMPeriodicPendingReceives@@YAEPEAXPEAU_NET_BUFFER_LIST@@KKKPEAPEAU1@@Z @ 0x1C006CE1C
 * Callers:
 *     ndisMQueueReceiveNetBufferLists @ 0x1C006E668 (ndisMQueueReceiveNetBufferLists.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisMPeriodicPendingReceives(
        _QWORD *a1,
        struct _NET_BUFFER_LIST *Alignment,
        int a3,
        unsigned int a4,
        char a5,
        struct _NET_BUFFER_LIST **a6)
{
  KSPIN_LOCK *v6; // rsi
  __int64 v7; // r14
  KIRQL v8; // r13
  struct _NET_BUFFER_LIST *v9; // r15
  unsigned __int8 v10; // bp
  KSPIN_LOCK *v13; // rcx
  unsigned int v14; // r8d
  unsigned __int64 v15; // rcx
  _QWORD *v16; // rax
  struct _NET_BUFFER_LIST *i; // rax
  unsigned __int8 result; // al

  v6 = a1 + 399;
  v7 = a4;
  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  v13 = a1 + 399;
  if ( (a5 & 1) != 0 )
    KeAcquireSpinLockAtDpcLevel(v13);
  else
    v8 = KeAcquireSpinLockRaiseToDpc(v13);
  a1[400] = KeGetCurrentThread();
  *((_DWORD *)a1 + 802) = 2493583;
  v14 = v7 + *((_DWORD *)a1 + 803);
  v15 = (unsigned __int64)(v7 + *((int *)a1 + 803)) >> 32;
  if ( *((_DWORD *)a1 + 796) != 1 )
  {
    if ( (_DWORD)v15 || v14 < 0x3E8 )
      goto LABEL_16;
    goto LABEL_15;
  }
  if ( (_DWORD)v15 )
  {
LABEL_16:
    v9 = Alignment;
    goto LABEL_17;
  }
  if ( v14 >= 0x3E8 )
  {
LABEL_15:
    v10 = 1;
    goto LABEL_16;
  }
  *((_DWORD *)a1 + 816) += v7;
  v10 = 1;
  v16 = (_QWORD *)a1[404];
  if ( v16 )
    *v16 = Alignment;
  else
    a1[403] = Alignment;
  for ( i = Alignment; Alignment; Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment )
  {
    i = Alignment;
    LODWORD(Alignment->ProtocolReserved[0]) = a3;
  }
  *((_DWORD *)a1 + 813) += v7;
  *((_DWORD *)a1 + 803) += v7;
  a1[404] = i;
LABEL_17:
  a1[400] = 0LL;
  *((_DWORD *)a1 + 802) = 0;
  if ( (a5 & 1) != 0 )
    KeReleaseSpinLockFromDpcLevel(v6);
  else
    KeReleaseSpinLock(v6, v8);
  result = v10;
  *a6 = v9;
  return result;
}
