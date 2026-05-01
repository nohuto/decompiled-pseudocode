/*
 * XREFs of ?RmpActivatorSubscribeForNotifications@@YAJPEAU_RM_ACTIVATOR@@PEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x1800394D0
 * Callers:
 *     ?RmSrvHostNotificationSubscribe@@YAJPEAU_RM_ACTIVATOR@@_KPEA_K@Z @ 0x18002F844 (-RmSrvHostNotificationSubscribe@@YAJPEAU_RM_ACTIVATOR@@_KPEA_K@Z.c)
 * Callees:
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x18001096C (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     ?RmpHostSubscriptionInitialize@@YAX_KPEAU_RM_ACTIVATOR@@PEAU_RM_ACTIVITY_HOST@@PEAU_RM_HOST_SUBSCRIPTION@@@Z @ 0x1800395FC (-RmpHostSubscriptionInitialize@@YAX_KPEAU_RM_ACTIVATOR@@PEAU_RM_ACTIVITY_HOST@@PEAU_RM_HOST_SUBS.c)
 *     ?RmpHostSubscriptionCompareForRtlTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x18003AF90 (-RmpHostSubscriptionCompareForRtlTree@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

__int64 __fastcall RmpActivatorSubscribeForNotifications(
        struct _RM_ACTIVATOR *a1,
        struct _RM_ACTIVITY_HOST *a2,
        unsigned __int64 *a3)
{
  unsigned int v6; // ebx
  char *Heap; // r14
  unsigned __int64 v8; // rax
  __int64 v9; // r8
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rax
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  int v15; // ebp
  unsigned __int64 v16; // rax

  v6 = 0;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x40uLL);
  if ( Heap )
  {
    v8 = HamObjectIdGenerate(4);
    RmpHostSubscriptionInitialize(v8, a1, a2, (struct _RM_HOST_SUBSCRIPTION *)Heap);
    v10 = (_QWORD *)((char *)a2 + 1408);
    v11 = *((_QWORD *)a2 + 176);
    v12 = Heap + 8;
    if ( *(struct _RM_ACTIVITY_HOST **)(v11 + 8) != (struct _RM_ACTIVITY_HOST *)((char *)a2 + 1408) )
      __fastfail(3u);
    *v12 = v11;
    v13 = (unsigned __int64)a1 + 40;
    *((_QWORD *)Heap + 2) = v10;
    *(_QWORD *)(v11 + 8) = v12;
    *v10 = v12;
    v14 = *(_QWORD *)v13;
    if ( (*(_BYTE *)(v13 + 8) & 1) != 0 )
    {
      if ( v14 )
        v14 ^= v13;
      else
        v14 = 0LL;
    }
    LOBYTE(v9) = 0;
    v15 = *(_BYTE *)(v13 + 8) & 1;
    if ( v14 )
    {
      while ( 1 )
      {
        if ( (int)RmpHostSubscriptionCompareForRtlTree(Heap, (struct _RTL_BALANCED_NODE *)v14) < 0 )
        {
          v16 = *(_QWORD *)v14;
          if ( v15 )
          {
            if ( !v16 )
              goto LABEL_18;
            v16 ^= v14;
          }
          if ( !v16 )
          {
LABEL_18:
            LOBYTE(v9) = 0;
            break;
          }
        }
        else
        {
          v16 = *(_QWORD *)(v14 + 8);
          if ( v15 )
          {
            if ( !v16 )
              goto LABEL_19;
            v16 ^= v14;
          }
          if ( !v16 )
          {
LABEL_19:
            LOBYTE(v9) = 1;
            break;
          }
        }
        v14 = v16;
      }
    }
    RtlRbInsertNodeEx(v13, v14, v9, Heap + 24);
    *a3 = *(_QWORD *)Heap;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v6;
}
