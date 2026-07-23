/*
 * XREFs of sub_180007424 @ 0x180007424
 * Callers:
 *     RtlWaitOnAddress @ 0x180006390 (RtlWaitOnAddress.c)
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x1800063F0 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 *     sub_180007200 @ 0x180007200 (sub_180007200.c)
 *     sub_18004E6F8 @ 0x18004E6F8 (sub_18004E6F8.c)
 *     sub_180050258 @ 0x180050258 (sub_180050258.c)
 *     RtlBarrier_0 @ 0x1800EA614 (RtlBarrier_0.c)
 * Callees:
 *     sub_180007520 @ 0x180007520 (sub_180007520.c)
 *     sub_180007598 @ 0x180007598 (sub_180007598.c)
 *     sub_1800076B4 @ 0x1800076B4 (sub_1800076B4.c)
 */

__int64 __fastcall sub_180007424(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, unsigned int a5)
{
  int v6; // ebx
  unsigned int v9; // ebp
  struct _TEB *v10; // rcx
  __int64 WaitOnAddressHashTable; // r14
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  bool v15; // zf
  _QWORD v17[5]; // [rsp+20h] [rbp-48h] BYREF
  int v18; // [rsp+48h] [rbp-20h]

  v6 = a3;
  if ( (unsigned __int64)(a3 - 1) <= 7 && ((a3 - 1) & a3) == 0 )
  {
    v17[0] = a1;
    v18 = 1;
    v9 = 0;
    memset(&v17[2], 0, 24);
    v10 = NtCurrentTeb();
    v17[1] = v10->ClientId.UniqueThread;
    WaitOnAddressHashTable = (__int64)v10->ProcessEnvironmentBlock->WaitOnAddressHashTable;
    sub_180007520(WaitOnAddressHashTable, v17);
    v12 = v6 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 2;
        if ( v14 )
        {
          if ( v14 != 4 )
            goto LABEL_10;
          v15 = *a1 == *a2;
        }
        else
        {
          v15 = *(_DWORD *)a1 == *(_DWORD *)a2;
        }
      }
      else
      {
        v15 = *(_WORD *)a1 == *(_WORD *)a2;
      }
    }
    else
    {
      v15 = *(_BYTE *)a1 == *(_BYTE *)a2;
    }
    if ( v15 )
      return (unsigned int)sub_180007598(WaitOnAddressHashTable, v17, a4, a5);
LABEL_10:
    sub_1800076B4(WaitOnAddressHashTable, v17);
    return v9;
  }
  return 3221225485LL;
}
