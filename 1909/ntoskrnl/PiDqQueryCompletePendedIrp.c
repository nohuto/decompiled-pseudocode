/*
 * XREFs of PiDqQueryCompletePendedIrp @ 0x140715C7C
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x1407154B0 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     PiDqQueryGetNextIoctlInfo @ 0x1405B64A0 (PiDqQueryGetNextIoctlInfo.c)
 *     PiDqIrpComplete @ 0x1405B6D68 (PiDqIrpComplete.c)
 */

void __fastcall PiDqQueryCompletePendedIrp(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  unsigned int v4; // r8d
  int v5; // edx
  _OWORD *v6; // r9
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  v7[0] = 0LL;
  v7[1] = 0LL;
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 184);
    if ( _InterlockedExchange64((volatile __int64 *)(v2 + 104), 0LL) )
    {
      v4 = 0;
      if ( (*(_DWORD *)(a1 + 216) & 1) != 0 )
      {
        v6 = 0LL;
        v5 = -1073741670;
      }
      else
      {
        PiDqQueryGetNextIoctlInfo(a1, *(_DWORD *)(v3 + 8), 0, v7);
        v5 = 0;
        v6 = v7;
        v4 = 16;
      }
      PiDqIrpComplete(*(IRP **)(a1 + 176), v5, v4, v6);
      *(_DWORD *)(a1 + 216) &= ~0x10u;
      *(_QWORD *)(a1 + 176) = 0LL;
    }
  }
}
