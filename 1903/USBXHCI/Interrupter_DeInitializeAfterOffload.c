/*
 * XREFs of Interrupter_DeInitializeAfterOffload @ 0x1C001E2B0
 * Callers:
 *     Endpoint_Disable @ 0x1C001806C (Endpoint_Disable.c)
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C0002D84 (WPP_RECORDER_SF_i.c)
 */

__int64 __fastcall Interrupter_DeInitializeAfterOffload(__int64 a1)
{
  __int64 v2; // rdi
  int v3; // eax
  int v4; // r8d
  _QWORD *v5; // rdx
  unsigned int i; // ecx
  char v7; // r11
  int v8; // r10d
  unsigned int v9; // ebx
  __int64 v10; // rsi
  unsigned __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 result; // rax
  signed __int32 v14[8]; // [rsp+0h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * *(unsigned int *)(a1 + 64));
  **(_DWORD **)(v2 + 24) &= ~2u;
  _InterlockedOr(v14, 0);
  v3 = **(_DWORD **)(v2 + 24);
  if ( (v3 & 1) != 0 )
  {
    **(_DWORD **)(v2 + 24) = v3;
    _InterlockedOr(v14, 0);
  }
  v4 = 0;
  v5 = *(_QWORD **)(v2 + 160);
  i = 0;
  v7 = 0;
  v8 = 0;
  if ( (_QWORD *)(v2 + 160) != v5 )
  {
    v9 = *(_DWORD *)(v2 + 116);
    do
    {
      v10 = v5[2];
      for ( i = 0; i < v9; ++i )
      {
        if ( v4 || i )
        {
          if ( v8 != (*(_DWORD *)(v10 + 16LL * i + 12) & 1) )
          {
            v7 = 1;
            goto LABEL_14;
          }
        }
        else
        {
          v8 = *(_DWORD *)(v10 + 12) & 1;
        }
      }
      v5 = (_QWORD *)*v5;
      ++v4;
    }
    while ( (_QWORD *)(v2 + 160) != v5 );
  }
LABEL_14:
  v11 = (v7 != 0 ? v4 : 0) & 7 | (*(_QWORD *)(*(_QWORD *)(v2 + 144) + 24LL) + 16LL * (v7 != 0 ? i : 0)) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_i(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      5u,
      9u,
      0x40u,
      (__int64)&WPP_46aa8b6abf25399c8a99e6bda1f22045_Traceguids,
      v11);
  v12 = *(_QWORD *)(v2 + 24);
  result = *(_QWORD *)(*(_QWORD *)(v2 + 8) + 336LL);
  if ( (result & 1) != 0 )
  {
    *(_DWORD *)(v12 + 24) = v11;
    _InterlockedOr(v14, 0);
    *(_DWORD *)(v12 + 28) = HIDWORD(v11);
  }
  else
  {
    *(_QWORD *)(v12 + 24) = v11;
  }
  _InterlockedOr(v14, 0);
  return result;
}
