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

int __fastcall sub_18004FB14(__int64 a1)
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
  struct _PEB *v14; // rax
  __int64 v15; // rbx
  __int64 UserModeGlobalLogger; // rcx
  __int64 v17; // r11
  void *v18; // rcx
  PVOID BaseAddress; // [rsp+20h] [rbp-29h] BYREF
  ULONG_PTR RegionSize; // [rsp+28h] [rbp-21h] BYREF
  __int128 v22; // [rsp+30h] [rbp-19h] BYREF
  __int128 v23; // [rsp+40h] [rbp-9h] BYREF
  __int128 v24; // [rsp+50h] [rbp+7h] BYREF
  _BYTE Fields[6]; // [rsp+60h] [rbp+17h] BYREF
  __int16 v26; // [rsp+66h] [rbp+1Dh]
  PVOID v27; // [rsp+80h] [rbp+37h]

  v1 = a1 + 72;
  BaseAddress = (PVOID)a1;
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
  v11 = (unsigned __int64)BaseAddress + 672;
  while ( *(_QWORD *)v11 )
  {
    sub_180051450((char *)BaseAddress + 640, v11 ^ *(_QWORD *)v11);
    sub_180051408((char *)BaseAddress + 640, v17, 1LL);
  }
  sub_180050BFC((char *)BaseAddress + 832);
  sub_18004FD48((char *)BaseAddress + 256);
  sub_18004FD48((char *)BaseAddress + 448);
  v12 = *(_OWORD *)BaseAddress;
  RegionSize = *((_QWORD *)BaseAddress + 31) - (_QWORD)BaseAddress;
  v2 = (*((_BYTE *)BaseAddress + 30) & 1) == 0;
  v22 = v12;
  if ( v2 )
  {
    v24 = *(_OWORD *)BaseAddress;
    sub_180048170(&BaseAddress, &RegionSize, BYTE1(v22) < 2u ? 16809984 : 0x8000, &v24);
  }
  else
  {
    v23 = *(_OWORD *)BaseAddress;
    sub_18004F690((__int64)BaseAddress, &v23);
  }
  sub_18004CCF0(&v22, 0);
  if ( RtlGetCurrentServiceSessionId() )
    v13 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[4];
  else
    v13 = 2147353480LL;
  if ( *(_BYTE *)v13 )
    sub_1801014C4(BaseAddress);
  LODWORD(v14) = RtlGetCurrentServiceSessionId();
  v15 = 2147353472LL;
  if ( (_DWORD)v14 )
  {
    v14 = NtCurrentPeb();
    UserModeGlobalLogger = (__int64)v14->SharedData->UserModeGlobalLogger;
  }
  else
  {
    UserModeGlobalLogger = 2147353472LL;
  }
  if ( *(_BYTE *)UserModeGlobalLogger )
  {
    v14 = NtCurrentPeb();
    if ( (v14->TracingFlags & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v15 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
      v18 = (void *)*(unsigned __int8 *)v15;
      v27 = BaseAddress;
      v26 = 4131;
      LODWORD(v14) = ZwTraceEvent(v18, 0x402u, 8u, Fields);
    }
  }
  return (int)v14;
}
