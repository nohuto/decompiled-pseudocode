/*
 * XREFs of Interrupter_InitializeForOffload @ 0x1C001EFB8
 * Callers:
 *     Controller_IncrementNumberOfEndpointsOffloaded @ 0x1C000EB58 (Controller_IncrementNumberOfEndpointsOffloaded.c)
 * Callees:
 *     memset @ 0x1C0008D80 (memset.c)
 *     Interrupter_UpdateERDP @ 0x1C001F324 (Interrupter_UpdateERDP.c)
 */

__int64 __fastcall Interrupter_InitializeForOffload(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 result; // rax
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  memset(*(void **)(*(_QWORD *)(a1 + 144) + 16LL), 0, *(unsigned int *)(*(_QWORD *)(a1 + 144) + 44LL));
  v2 = (unsigned __int16)*(_DWORD *)(a1 + 108);
  *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL) = v2;
  _InterlockedOr(v6, 0);
  LOBYTE(v2) = 1;
  Interrupter_UpdateERDP(a1, v2);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 152) + 24LL);
  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 336LL) & 1) != 0 )
  {
    *(_DWORD *)(v3 + 16) = v4;
    _InterlockedOr(v6, 0);
    *(_DWORD *)(v3 + 20) = HIDWORD(v4);
  }
  else
  {
    *(_QWORD *)(v3 + 16) = v4;
  }
  _InterlockedOr(v6, 0);
  result = **(_DWORD **)(a1 + 24) | 2u;
  **(_DWORD **)(a1 + 24) = result;
  _InterlockedOr(v6, 0);
  return result;
}
