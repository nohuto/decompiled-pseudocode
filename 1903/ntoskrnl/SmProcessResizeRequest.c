/*
 * XREFs of SmProcessResizeRequest @ 0x1408E8530
 * Callers:
 *     SmSetStoreInformation @ 0x1406EB974 (SmSetStoreInformation.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     ?SmStoreRequest@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x140144130 (-SmStoreRequest@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_I.c)
 */

__int64 __fastcall SmProcessResizeRequest(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 result; // rax
  bool v7; // zf
  int v8; // eax
  unsigned int v9; // edx
  LARGE_INTEGER v10; // [rsp+30h] [rbp-50h] BYREF
  __int64 v11; // [rsp+38h] [rbp-48h]
  struct _KEVENT Event; // [rsp+40h] [rbp-40h] BYREF
  int v13; // [rsp+58h] [rbp-28h] BYREF
  __int64 v14; // [rsp+5Ch] [rbp-24h]
  int v15; // [rsp+64h] [rbp-1Ch]
  __int64 v16; // [rsp+68h] [rbp-18h]
  int v17; // [rsp+70h] [rbp-10h]
  __int64 v18; // [rsp+74h] [rbp-Ch]
  int v19; // [rsp+7Ch] [rbp-4h]

  v10.QuadPart = 0LL;
  v11 = 0LL;
  if ( a3 != 24 )
    return 3221225990LL;
  if ( a4 )
    return 3221225485LL;
  if ( (unsigned __int8)*(_DWORD *)a2 != 6 )
    return 3221225561LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v14 = 0LL;
  v15 = 0;
  v18 = 0LL;
  v19 = 0;
  v7 = (*(_DWORD *)a2 & 0x100) == 0;
  v13 = 4;
  if ( v7 )
    v8 = 5;
  else
    v8 = 4;
  v9 = *(_DWORD *)(a2 + 4);
  HIDWORD(v14) = v8;
  v17 = *(_DWORD *)(a2 + 8);
  v16 = *(_QWORD *)(a2 + 16);
  SMKM_STORE_MGR<SM_TRAITS>::SmStoreRequest(a1, v9, (__int64)&v13, (__int64)&Event, (__int64)&v10);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  result = v10.LowPart;
  *(_DWORD *)(a2 + 8) = v17;
  return result;
}
