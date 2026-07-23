/*
 * XREFs of sub_18004AB8C @ 0x18004AB8C
 * Callers:
 *     RtlDestroyHeap @ 0x18004A960 (RtlDestroyHeap.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_180048120 @ 0x180048120 (sub_180048120.c)
 *     sub_180101554 @ 0x180101554 (sub_180101554.c)
 *     sub_18010A694 @ 0x18010A694 (sub_18010A694.c)
 */

__int64 __fastcall sub_18004AB8C(__int64 a1)
{
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 *v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rdx
  void *v8; // rax
  __int64 v9; // rdi
  unsigned __int32 v10; // ebx
  __int64 v11; // rdx
  ULONG_PTR v12; // [rsp+40h] [rbp+8h] BYREF
  PVOID v13; // [rsp+48h] [rbp+10h] BYREF

  if ( (*(_BYTE *)(a1 + 20) & 1) != 0 )
    return 0LL;
  v3 = a1 + 24;
  v4 = *(_QWORD *)(a1 + 24);
  v5 = *(__int64 **)(a1 + 32);
  v6 = *(_QWORD *)(v4 + 8);
  v7 = *v5;
  if ( *v5 == v6 && v7 == v3 )
  {
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
  }
  else
  {
    sub_18010A694(13, 0, v3, v6, v7, 0LL);
  }
  v8 = *(void **)(a1 + 48);
  v9 = *(_QWORD *)(a1 + 40);
  v12 = 0LL;
  v13 = v8;
  v10 = sub_180048120((__int64)v5, &v13, &v12, 0x8000u);
  if ( RtlGetCurrentServiceSessionId() )
    v11 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[4];
  else
    v11 = 2147353480LL;
  if ( *(_BYTE *)v11 )
    sub_180101554(v9, v13, v12);
  return v10;
}
