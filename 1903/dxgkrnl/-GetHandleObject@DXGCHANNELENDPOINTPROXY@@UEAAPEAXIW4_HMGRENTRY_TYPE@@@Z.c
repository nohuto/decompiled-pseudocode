/*
 * XREFs of ?GetHandleObject@DXGCHANNELENDPOINTPROXY@@UEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C028E410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGCHANNELENDPOINTPROXY::GetHandleObject(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // ebx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // rax

  v4 = a2;
  if ( *(struct _KTHREAD **)(a1 + 88) != KeGetCurrentThread() )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v6 + 24) = 520LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = (v4 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v7 >= *(_DWORD *)(a1 + 56) )
    return 0LL;
  v8 = *(_QWORD *)(a1 + 40);
  v9 = *(_DWORD *)(v8 + 16 * v7 + 8);
  if ( ((v4 >> 25) & 0x60) != (*(_BYTE *)(v8 + 16 * v7 + 8) & 0x60) || (v9 & 0x2000) != 0 || (v9 & 0x1F) == 0 )
    return 0LL;
  v10 = v9 & 0x1F;
  if ( a3 != (_DWORD)v10 )
  {
    v11 = WdLogNewEntry5_WdError(v10, 2LL * (unsigned int)v7, v8);
    *(_QWORD *)(v11 + 24) = 267LL;
    WdLogEvent5_WdError(v11);
    return 0LL;
  }
  return *(_QWORD *)(v8 + 16LL * (unsigned int)v7);
}
