/*
 * XREFs of sub_18004EA3C @ 0x18004EA3C
 * Callers:
 *     sub_18004CF00 @ 0x18004CF00 (sub_18004CF00.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_1800450F0 @ 0x1800450F0 (sub_1800450F0.c)
 *     sub_180046028 @ 0x180046028 (sub_180046028.c)
 *     sub_18004EB50 @ 0x18004EB50 (sub_18004EB50.c)
 *     sub_1800EFD34 @ 0x1800EFD34 (sub_1800EFD34.c)
 *     sub_1801030B4 @ 0x1801030B4 (sub_1801030B4.c)
 *     sub_18010A714 @ 0x18010A714 (sub_18010A714.c)
 */

void *__fastcall sub_18004EA3C(char *HeapHandle, unsigned __int64 a2, int a3, __int16 a4)
{
  unsigned int v7; // ebx
  __int64 v8; // rax
  int v9; // esi
  unsigned int v10; // r14d
  unsigned __int64 v11; // rbp
  __int64 v12; // rax
  int v13; // r9d
  void *v14; // rbx
  __int64 UserModeGlobalLogger; // rcx
  __int64 v17; // rax
  __int64 v18; // [rsp+80h] [rbp+8h] BYREF
  int v19; // [rsp+90h] [rbp+18h] BYREF

  v7 = (a3 | *((_DWORD *)HeapHandle + 5)) & 0x93000F0B;
  if ( !(unsigned int)sub_1800450F0(a2, (int)HeapHandle, (__int64)(HeapHandle + 32)) )
    goto LABEL_14;
  v8 = 0LL;
  v9 = 0;
  v18 = 0LL;
  if ( (v7 & 0x1000000) == 0 )
  {
    v9 = *((_DWORD *)HeapHandle + 6);
    if ( v9 )
    {
      v7 |= 8u;
      if ( (int)sub_1800EFD34(v9, (_DWORD)HeapHandle, 0, 1, (__int64)&v18) >= 0 )
      {
        v8 = v18;
        goto LABEL_3;
      }
LABEL_14:
      v11 = 0LL;
LABEL_13:
      v19 = 0;
      goto LABEL_21;
    }
  }
LABEL_3:
  v10 = v7 | 8;
  if ( !a4 )
    v10 = v7;
  v11 = sub_18004EB50(v8 + a2, v10);
  if ( v11 < a2 || a2 > 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_13;
  v12 = sub_180046028(HeapHandle, a2, v11, v10 & 0x13000003, &v19);
  v14 = (void *)v12;
  if ( !v12 )
    goto LABEL_9;
  if ( (v10 & 0x30000F08) == 0 )
    goto LABEL_9;
  v17 = sub_18010A714((_DWORD)HeapHandle, v12, a2, v13, v18, v10, a4);
  if ( !v9 )
    goto LABEL_9;
  *(_BYTE *)(v17 + 2) &= 0xF0u;
  *(_BYTE *)(v17 + 2) |= v9 & 0xF;
  if ( (int)sub_1800EFD34(v9, (_DWORD)HeapHandle, (_DWORD)v14, 2, v17 + 16) >= 0 )
    goto LABEL_9;
  RtlFreeHeap(HeapHandle, 0, v14);
LABEL_21:
  v14 = 0LL;
LABEL_9:
  if ( RtlGetCurrentServiceSessionId() )
    UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
  else
    UserModeGlobalLogger = 2147353472LL;
  if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    sub_1801030B4(HeapHandle, v14, v11);
  return v14;
}
