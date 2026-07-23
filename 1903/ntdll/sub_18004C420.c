/*
 * XREFs of sub_18004C420 @ 0x18004C420
 * Callers:
 *     RtlCreateHeap @ 0x180049100 (RtlCreateHeap.c)
 *     sub_18004EF60 @ 0x18004EF60 (sub_18004EF60.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_18004C2EC @ 0x18004C2EC (sub_18004C2EC.c)
 *     sub_18004C6E4 @ 0x18004C6E4 (sub_18004C6E4.c)
 *     sub_18004C7F8 @ 0x18004C7F8 (sub_18004C7F8.c)
 *     sub_18004C8EC @ 0x18004C8EC (sub_18004C8EC.c)
 *     sub_18004C9D8 @ 0x18004C9D8 (sub_18004C9D8.c)
 *     sub_18004CCA4 @ 0x18004CCA4 (sub_18004CCA4.c)
 *     sub_18004CCF0 @ 0x18004CCF0 (sub_18004CCF0.c)
 *     sub_18004FB14 @ 0x18004FB14 (sub_18004FB14.c)
 *     sub_180101358 @ 0x180101358 (sub_180101358.c)
 *     sub_180101420 @ 0x180101420 (sub_180101420.c)
 *     sub_1801032A0 @ 0x1801032A0 (sub_1801032A0.c)
 */

__int64 __fastcall sub_18004C420(unsigned int a1, unsigned __int64 a2, __int64 a3, __int128 *a4)
{
  unsigned int v7; // r13d
  __int64 v8; // rax
  __int64 v9; // rsi
  __int128 v10; // xmm0
  char v11; // cl
  char v12; // bl
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 UserModeGlobalLogger; // rcx
  int v18; // [rsp+28h] [rbp-49h]
  __int128 v19; // [rsp+48h] [rbp-29h] BYREF
  __int128 v20; // [rsp+58h] [rbp-19h] BYREF
  __int128 v21; // [rsp+68h] [rbp-9h] BYREF
  __int64 (__fastcall *v22)(); // [rsp+78h] [rbp+7h] BYREF
  __int64 (__fastcall *v23)(__int64, __int64, __int64, char); // [rsp+80h] [rbp+Fh]
  __int64 (__fastcall *v24)(__int64, __int64); // [rsp+88h] [rbp+17h]
  __int64 (__fastcall *v25)(__int64, unsigned __int64, unsigned int); // [rsp+90h] [rbp+1Fh]
  __int64 (__fastcall *v26)(); // [rsp+98h] [rbp+27h]

  if ( a2 > 0x7FFFFFFFFFFFFFFFLL || (int)sub_18004CCF0(a4, 1LL) < 0 )
    return 0LL;
  v7 = sub_18004CCA4();
  v19 = *a4;
  v8 = sub_18004C9D8(a1, v7, &v19);
  v9 = v8;
  if ( !v8 )
  {
    v13 = 0LL;
    sub_18004CCF0(a4, 0LL);
    return v13;
  }
  v10 = *a4;
  *(_DWORD *)(v8 + 16) = -571548178;
  *(_DWORD *)(v8 + 20) = a1;
  v11 = 0;
  *(_OWORD *)v8 = v10;
  v20 = *a4;
  if ( BYTE1(v20) >= 2u )
    v11 = 16;
  v12 = v11 | 4;
  if ( (a1 & 0x4000000) == 0 )
    v12 = v11;
  sub_18004C6E4(v8 + 256, 0x100000, v8, v8 + 832, v8 + 640, v8 + 128, (__int64)&v20, v12);
  v21 = *a4;
  sub_18004C6E4(v9 + 448, 0x1000000, v9, 0, 0LL, v9 + 128, (__int64)&v21, v12);
  *(_QWORD *)(v9 + 64) = 0LL;
  *(_QWORD *)(v9 + 72) = 0LL;
  *(_QWORD *)(v9 + 80) = 0LL;
  *(_QWORD *)(v9 + 224) = 0LL;
  if ( (*(_DWORD *)(v9 + 20) & 0x20000000) != 0 )
    *(_DWORD *)(v9 + 24) = (unsigned __int16)sub_180101358(sub_180104220);
  v26 = 0LL;
  v22 = sub_180077500;
  v23 = sub_180044D60;
  v24 = sub_180047370;
  v25 = sub_1800465D0;
  sub_18004C8EC(v9 + 640, v9 + 256, (unsigned int)&v22, *(_DWORD *)a4 & 1, v18, (__int64)&qword_18016A318 + 4);
  v22 = (__int64 (__fastcall *)())sub_180036CE0;
  v23 = sub_180044D60;
  v24 = sub_180047370;
  v25 = sub_1800465D0;
  v26 = sub_180050510;
  sub_18004C2EC(v9 + 832, v9 + 256, v7, *(_DWORD *)a4 & 1, (__int64)&v22, v9 + 128, &qword_18016A318);
  *(_QWORD *)(v9 + 104) = 0LL;
  if ( (int)sub_18004C7F8(v9 + 256, a2, a3) < 0 )
  {
    v13 = 0LL;
LABEL_28:
    if ( v9 )
      sub_18004FB14(v9);
    return v13;
  }
  v13 = v9;
  v9 = 0LL;
  if ( RtlGetCurrentServiceSessionId() )
    v14 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[4];
  else
    v14 = 2147353480LL;
  if ( *(_BYTE *)v14 )
    sub_180101420(v13, *(_QWORD *)(v13 + 248) - v13, a1);
  v15 = 2147353472LL;
  if ( RtlGetCurrentServiceSessionId() )
    UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    UserModeGlobalLogger = 2147353472LL;
  if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v15 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    sub_1801032A0(v13, a1, *(_QWORD *)(v13 + 248) - v13, *(_DWORD *)(v13 + 240) - v13, *(unsigned __int8 *)v15);
    goto LABEL_28;
  }
  return v13;
}
