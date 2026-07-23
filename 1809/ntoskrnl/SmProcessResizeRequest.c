/*
 * XREFs of SmProcessResizeRequest @ 0x1408AC530
 * Callers:
 *     SmSetStoreInformation @ 0x1406CCED0 (SmSetStoreInformation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ?SmStoreRequest@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x140303740 (-SmStoreRequest@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_I.c)
 */

__int64 __fastcall SmProcessResizeRequest(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 result; // rax
  bool v7; // zf
  unsigned int v8; // eax
  unsigned int v9; // edx
  LARGE_INTEGER v10; // [rsp+30h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v12[5]; // [rsp+58h] [rbp-28h] BYREF

  if ( a3 != 24 )
    return 3221225990LL;
  if ( a4 )
    return 3221225485LL;
  if ( (unsigned __int8)*(_DWORD *)a2 != 6 )
    return 3221225561LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  memset(v12, 0, sizeof(v12));
  v7 = (*(_DWORD *)a2 & 0x100) == 0;
  LODWORD(v12[0]) = 4;
  if ( v7 )
    v8 = v12[1] & 0xFFFFFFF8 | 5;
  else
    v8 = v12[1] & 0xFFFFFFF8 | 4;
  v9 = *(_DWORD *)(a2 + 4);
  LODWORD(v12[1]) = v8;
  LODWORD(v12[3]) = *(_DWORD *)(a2 + 8);
  v12[2] = *(_QWORD *)(a2 + 16);
  SMKM_STORE_MGR<SM_TRAITS>::SmStoreRequest(a1, v9, (int)v12, (int)&Event, (__int64)&v10);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  result = v10.LowPart;
  *(_DWORD *)(a2 + 8) = v12[3];
  return result;
}
