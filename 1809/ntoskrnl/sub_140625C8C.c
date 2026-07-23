/*
 * XREFs of sub_140625C8C @ 0x140625C8C
 * Callers:
 *     WbDispatchOperation @ 0x140626384 (WbDispatchOperation.c)
 * Callees:
 *     WbSetTrapFrame @ 0x1406257B4 (WbSetTrapFrame.c)
 *     sub_140625890 @ 0x140625890 (sub_140625890.c)
 *     WbGetWarbirdThread @ 0x14062604C (WbGetWarbirdThread.c)
 *     sub_140626220 @ 0x140626220 (sub_140626220.c)
 */

__int64 __fastcall sub_140625C8C(__int64 a1, __int64 a2)
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
        v5 = sub_140625890(a1, v4, 1);
    }
    else
    {
      v5 = -1073741811;
    }
  }
  sub_140626220(a1, v4);
  return (unsigned int)v5;
}
