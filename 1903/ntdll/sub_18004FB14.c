/*
 * XREFs of sub_18004FB14 @ 0x18004FB14
 * Callers:
 *     RtlCreateHeap @ 0x180049100 (RtlCreateHeap.c)
 *     RtlDestroyHeap @ 0x18004A960 (RtlDestroyHeap.c)
 *     sub_18004C420 @ 0x18004C420 (sub_18004C420.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_180048170 @ 0x180048170 (sub_180048170.c)
 *     sub_18004CCF0 @ 0x18004CCF0 (sub_18004CCF0.c)
 *     sub_18004F690 @ 0x18004F690 (sub_18004F690.c)
 *     sub_18004FD48 @ 0x18004FD48 (sub_18004FD48.c)
 *     sub_180050BFC @ 0x180050BFC (sub_180050BFC.c)
 *     sub_180051408 @ 0x180051408 (sub_180051408.c)
 *     sub_180051450 @ 0x180051450 (sub_180051450.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 *     sub_1801014C4 @ 0x1801014C4 (sub_1801014C4.c)
 *     sub_18010ABC4 @ 0x18010ABC4 (sub_18010ABC4.c)
 */

unsigned int *__fastcall sub_18004FB14(__int64 a1)
{
  __int64 v1; // rbx
  bool v2; // zf
  unsigned __int64 v4; // rcx
  char v5; // al
  int v6; // esi
  _QWORD *v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  __int128 v12; // xmm0
  __int64 v13; // rcx
  unsigned int *result; // rax
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r11
  __int64 v18; // rcx
  __int64 v19; // [rsp+20h] [rbp-29h] BYREF
  __int64 v20; // [rsp+28h] [rbp-21h] BYREF
  __int128 v21; // [rsp+30h] [rbp-19h] BYREF
  __int128 v22; // [rsp+40h] [rbp-9h] BYREF
  __int128 v23; // [rsp+50h] [rbp+7h] BYREF
  _BYTE v24[6]; // [rsp+60h] [rbp+17h] BYREF
  __int16 v25; // [rsp+66h] [rbp+1Dh]
  __int64 v26; // [rsp+80h] [rbp+37h]

  v1 = a1 + 72;
  v19 = a1;
  v2 = (*(_BYTE *)(a1 + 80) & 1) == 0;
  v4 = *(_QWORD *)(a1 + 72);
  if ( !v2 && v4 )
    v4 ^= v1;
  v5 = *(_BYTE *)(v1 + 8);
  v6 = v5 & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v4 )
        {
          v7 = (_QWORD *)v4;
          if ( v6 )
            v4 ^= *(_QWORD *)v4;
          else
            v4 = *(_QWORD *)v4;
          *v7 = 0LL;
        }
        v8 = *(_QWORD *)(v4 + 8);
        if ( !v8 )
          break;
        v9 = v4;
        if ( v6 )
          v4 ^= v8;
        else
          v4 = *(_QWORD *)(v4 + 8);
        *(_QWORD *)(v9 + 8) = 0LL;
      }
      v10 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v6 && v10 )
        v10 ^= v4;
      sub_18010ABC4(v4, a1);
      if ( !v10 )
        break;
      v4 = v10;
    }
    v5 = *(_BYTE *)(v1 + 8);
  }
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(v1 + 8) = 0LL;
  if ( (v5 & 1) != 0 )
    *(_BYTE *)(v1 + 8) = 1;
  v11 = v19 + 672;
  while ( *(_QWORD *)v11 )
  {
    sub_180051450(v19 + 640, v11 ^ *(_QWORD *)v11);
    sub_180051408(v19 + 640, v17, 1LL);
  }
  sub_180050BFC(v19 + 832);
  sub_18004FD48(v19 + 256);
  sub_18004FD48(v19 + 448);
  v12 = *(_OWORD *)v19;
  v20 = *(_QWORD *)(v19 + 248) - v19;
  v2 = (*(_BYTE *)(v19 + 30) & 1) == 0;
  v21 = v12;
  if ( v2 )
  {
    v23 = *(_OWORD *)v19;
    sub_180048170((unsigned __int64 *)&v19, (unsigned __int64 *)&v20, BYTE1(v21) < 2u ? 16809984 : 0x8000, &v23);
  }
  else
  {
    v22 = *(_OWORD *)v19;
    sub_18004F690(v19, &v22);
  }
  sub_18004CCF0(&v21, 0);
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v13 = (__int64)NtCurrentPeb()->HotpatchInformation + 558;
  else
    v13 = 2147353480LL;
  if ( *(_BYTE *)v13 )
    sub_1801014C4(v19);
  result = RtlGetCurrentServiceSessionId();
  v15 = 2147353472LL;
  if ( (_DWORD)result )
  {
    result = (unsigned int *)NtCurrentPeb();
    v16 = *((_QWORD *)result + 18) + 550LL;
  }
  else
  {
    v16 = 2147353472LL;
  }
  if ( *(_BYTE *)v16 )
  {
    result = (unsigned int *)NtCurrentPeb();
    if ( (result[222] & 1) != 0 )
    {
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v15 = (__int64)NtCurrentPeb()->HotpatchInformation + 550;
      v18 = *(unsigned __int8 *)v15;
      v26 = v19;
      v25 = 4131;
      return (unsigned int *)ZwTraceEvent(v18, 1026LL, 8LL, v24);
    }
  }
  return result;
}
