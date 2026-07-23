/*
 * XREFs of sub_18004E4EC @ 0x18004E4EC
 * Callers:
 *     sub_180036F20 @ 0x180036F20 (sub_180036F20.c)
 *     sub_18004C7F8 @ 0x18004C7F8 (sub_18004C7F8.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_18004E624 @ 0x18004E624 (sub_18004E624.c)
 *     sub_18004E828 @ 0x18004E828 (sub_18004E828.c)
 *     sub_18004FDA8 @ 0x18004FDA8 (sub_18004FDA8.c)
 *     sub_1801015F8 @ 0x1801015F8 (sub_1801015F8.c)
 *     sub_18010313C @ 0x18010313C (sub_18010313C.c)
 *     sub_1801072F0 @ 0x1801072F0 (sub_1801072F0.c)
 */

__int64 __fastcall sub_18004E4EC(__int64 a1, int a2, int a3)
{
  unsigned int v3; // ebp
  __int64 v5; // rdi
  __int64 v6; // r8
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r12
  _BOOL8 v9; // r14
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r15
  __int64 UserModeGlobalLogger; // rcx
  __int64 v13; // rcx
  __int64 v14; // rsi

  v3 = a2 + 2;
  v5 = sub_18004E828(a1, a2 + 2, a3);
  if ( !v5 )
    return 0LL;
  v7 = (unsigned int)-*(_DWORD *)a1;
  v8 = v7;
  v9 = (_DWORD)v7 != 0x100000;
  v10 = 2 * ((unsigned __int64)(v5 - qword_180166A58) >> 20);
  v11 = v10 + 2 * (v7 >> 20);
  if ( v10 >= v11 )
  {
LABEL_5:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1), v8 >> 12);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 8), v3);
    if ( RtlGetCurrentServiceSessionId() )
      UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    else
      UserModeGlobalLogger = 2147353472LL;
    if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      sub_18010313C(*(_QWORD *)(a1 + 56), v5, v3 << 12, 12LL);
    if ( RtlGetCurrentServiceSessionId() )
      v13 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[4];
    else
      v13 = 2147353480LL;
    if ( *(_BYTE *)v13 )
      sub_1801015F8(*(_QWORD *)(a1 + 56), v5, v8);
    if ( (byte_180166058 & 8) != 0 )
      sub_1801072F0(*(_QWORD *)(a1 + 56), a1 + *(__int16 *)(a1 + 22));
    v14 = v5;
    v5 = 0LL;
  }
  else
  {
    while ( (int)sub_18004E624(&qword_180166A60, v10, v6, v9 + 1) >= 0 )
    {
      v10 += 2LL;
      if ( v10 >= v11 )
        goto LABEL_5;
    }
    v14 = 0LL;
  }
  if ( v5 )
    sub_18004FDA8(a1);
  return v14;
}
