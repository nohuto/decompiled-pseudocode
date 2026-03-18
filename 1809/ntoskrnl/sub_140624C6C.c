/*
 * XREFs of sub_140624C6C @ 0x140624C6C
 * Callers:
 *     WbDispatchOperation @ 0x140625364 (WbDispatchOperation.c)
 * Callees:
 *     WbSetTrapFrame @ 0x140624794 (WbSetTrapFrame.c)
 *     sub_140624870 @ 0x140624870 (sub_140624870.c)
 *     WbGetWarbirdThread @ 0x14062502C (WbGetWarbirdThread.c)
 *     sub_140625200 @ 0x140625200 (sub_140625200.c)
 */

__int64 __fastcall sub_140624C6C(__int64 a1, __int64 a2)
{
  int WarbirdThread; // eax
  __int64 v4; // rdi
  int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx
  _QWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  int v10; // [rsp+30h] [rbp-18h]
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = 0LL;
  WarbirdThread = WbGetWarbirdThread(a1, a2, &v11);
  v4 = v11;
  v5 = WarbirdThread;
  if ( WarbirdThread >= 0 )
  {
    v6 = *(_DWORD *)(v11 + 16);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v11 + 24) + 32LL * (unsigned int)(v6 - 1);
      v9[1] = *(_QWORD *)(v7 + 8);
      v9[0] = *(_QWORD *)(v7 + 16);
      v10 = *(_DWORD *)(v7 + 24);
      v5 = WbSetTrapFrame(v11, (__int64)v9);
      if ( v5 >= 0 )
        v5 = sub_140624870(a1, v4, 1);
    }
    else
    {
      v5 = -1073741811;
    }
  }
  sub_140625200(a1, v4);
  return (unsigned int)v5;
}
