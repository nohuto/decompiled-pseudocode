/*
 * XREFs of sub_180044EDC @ 0x180044EDC
 * Callers:
 *     sub_180043280 @ 0x180043280 (sub_180043280.c)
 * Callees:
 *     sub_180044B94 @ 0x180044B94 (sub_180044B94.c)
 *     sub_1800450F0 @ 0x1800450F0 (sub_1800450F0.c)
 *     sub_180045D7C @ 0x180045D7C (sub_180045D7C.c)
 *     sub_180046D10 @ 0x180046D10 (sub_180046D10.c)
 *     sub_1800515E8 @ 0x1800515E8 (sub_1800515E8.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800EFD34 @ 0x1800EFD34 (sub_1800EFD34.c)
 *     sub_180103570 @ 0x180103570 (sub_180103570.c)
 *     sub_18010AD30 @ 0x18010AD30 (sub_18010AD30.c)
 */

__int64 __fastcall sub_180044EDC(__int64 a1, int a2, unsigned __int64 a3, unsigned __int64 a4, _QWORD *a5, _WORD *a6)
{
  unsigned int v7; // esi
  __int64 v10; // rcx
  unsigned __int64 v11; // r12
  int v12; // r15d
  unsigned int v13; // ebx
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rdi
  unsigned __int64 v17; // rbx
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 UserModeGlobalLogger; // rcx
  __int16 v21; // ax
  __int64 v22; // rax
  unsigned __int64 v23; // rbx
  __int64 v24; // rax
  _QWORD v25[3]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v26; // [rsp+48h] [rbp-30h]
  unsigned __int64 v27; // [rsp+50h] [rbp-28h]

  v7 = (a2 | *(_DWORD *)(a1 + 20)) & 0x93000F0B;
  if ( a4 > 0x7FFFFFFFFFFFFFFFLL || !(unsigned int)sub_1800450F0(a4, a1, a1 + 32) )
    return 0LL;
  if ( !(unsigned int)sub_180044B94(a1, a3, a4, v7, (__int64)v25) || v27 < a4 )
    return -1LL;
  v10 = 0LL;
  v11 = v25[0];
  if ( a6 )
  {
    v10 = sub_180046D10(a1, a3, v7);
    if ( (unsigned __int64)(v10 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      v21 = 0;
    else
      v21 = *(_WORD *)v10;
    *a6 = v21;
  }
  else if ( a5 )
  {
    *a5 = v25[0];
  }
  if ( v11 == a4 )
  {
    v16 = a3;
LABEL_20:
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && SharedData->ServiceSessionId )
      UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    else
      UserModeGlobalLogger = 2147353472LL;
    if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 && v16 )
      sub_180103570(a1, v16, a3, v25[0], v26, 3);
    return v16;
  }
  v12 = 0;
  if ( (v7 & 0x1000000) == 0 )
  {
    if ( *(_DWORD *)(a1 + 24) )
    {
      if ( v10 || (v10 = sub_180046D10(a1, a3, v7)) != 0 )
      {
        v16 = -1LL;
        if ( v10 != -1 )
        {
          v12 = *(_BYTE *)(v10 + 2) & 0xF;
          if ( (*(_BYTE *)(v10 + 2) & 0xF) != 0
            && (int)sub_1800EFD34(*(_BYTE *)(v10 + 2) & 0xF, a1, a3, 5, v10 + 16) < 0 )
          {
            return v16;
          }
        }
      }
    }
  }
  v13 = v7 & 0x12000001 | 0x1000000;
  if ( (_WORD)a3 )
  {
    v14 = 0;
  }
  else
  {
    v22 = sub_1800515E8(&qword_180166A60, 2 * ((a3 - qword_180166A58) >> 20));
    if ( !v22 )
      goto LABEL_40;
    v14 = v22 - 1;
  }
  if ( v14 != 2 )
  {
    v15 = sub_180045D7C(a1 + 192LL * v14 + 256, v13, a3, v25);
    goto LABEL_15;
  }
LABEL_40:
  v15 = sub_18010AD30(a1, v13, a3, v25);
LABEL_15:
  v16 = v15;
  if ( v12 )
  {
    v23 = a3;
    if ( (unsigned __int64)(v15 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      v23 = v15;
    v24 = sub_180046D10(a1, v23, v7);
    sub_1800EFD34(v12, a1, v23, 6, v24 + 16);
  }
  if ( (unsigned __int64)(v16 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v17 = v26;
    if ( (v7 & 2) != 0 && v26 > v11 )
      memset((void *)(v11 + v16), 0, v26 - v11);
    if ( (v7 & 0x10000000) != 0 )
    {
      *(_QWORD *)(v17 + v16) = 0xABABABABABABABABuLL;
      *(_QWORD *)(v17 + v16 + 8) = 0xABABABABABABABABuLL;
    }
    goto LABEL_20;
  }
  return v16;
}
