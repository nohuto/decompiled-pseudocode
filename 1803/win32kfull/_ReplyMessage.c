/*
 * XREFs of _ReplyMessage @ 0x1C0004C50
 * Callers:
 *     <none>
 * Callees:
 *     SetWakeBit @ 0x1C001C970 (SetWakeBit.c)
 *     xxxInterSendMsgEx @ 0x1C0044BF0 (xxxInterSendMsgEx.c)
 */

__int64 __fastcall ReplyMessage(__int64 a1)
{
  __int64 v2; // r10
  int v3; // ecx
  __int64 v4; // rax
  int v6; // ecx
  int v7; // eax
  __int64 v8; // rcx
  _QWORD v9[3]; // [rsp+50h] [rbp-58h] BYREF
  int v10; // [rsp+68h] [rbp-40h] BYREF
  __int64 v11; // [rsp+70h] [rbp-38h]
  __int64 v12; // [rsp+78h] [rbp-30h]
  __int64 v13; // [rsp+80h] [rbp-28h]

  v2 = *(_QWORD *)(gptiCurrent + 504LL);
  if ( !v2 )
    return 0LL;
  v3 = *(_DWORD *)(v2 + 84);
  if ( (v3 & 1) != 0 )
    return 0LL;
  v4 = *(_QWORD *)(v2 + 32);
  if ( v4 )
  {
    *(_QWORD *)(v2 + 72) = a1;
    *(_DWORD *)(v2 + 84) = v3 | 1;
    SetWakeBit(v4, 512LL);
  }
  else if ( (v3 & 0x100) != 0 )
  {
    v6 = v3 | 1;
    *(_DWORD *)(v2 + 84) = v6;
    if ( (v6 & 4) == 0 )
    {
      v13 = a1;
      v7 = 33;
      if ( (v6 & 0x400) != 0 )
        v7 = 289;
      v8 = *(_QWORD *)(v2 + 112);
      v10 = v7;
      v11 = *(_QWORD *)(v2 + 48);
      v12 = *(_QWORD *)(v2 + 56);
      v9[0] = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = v9;
      v9[1] = v8;
      if ( v8 )
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      xxxInterSendMsgEx(
        *(_QWORD *)(v2 + 112),
        *(_DWORD *)(v2 + 104),
        0,
        0,
        0,
        *(_QWORD *)(v2 + 64),
        (__int64)&v10,
        1,
        (*(_WORD *)(v2 + 86) & 1) == 0);
      ThreadUnlock1();
    }
  }
  return 1LL;
}
