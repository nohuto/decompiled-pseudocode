/*
 * XREFs of MiIssueHardFaultIo @ 0x14001B5C8
 * Callers:
 *     MiIssueHardFault @ 0x14001BCD0 (MiIssueHardFault.c)
 *     MiPfCoalesceAndIssueIOs @ 0x14012E348 (MiPfCoalesceAndIssueIOs.c)
 *     MiPfIssueCoalesceCandidates @ 0x1402AF0BC (MiPfIssueCoalesceCandidates.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     IoPageReadEx @ 0x1400DE7C0 (IoPageReadEx.c)
 *     SmPageRead @ 0x14014F88C (SmPageRead.c)
 */

__int64 __fastcall MiIssueHardFaultIo(__int64 a1, int a2, __int64 a3)
{
  unsigned int v5; // ecx
  int v6; // r10d
  int v7; // edx
  int v8; // r9d
  _KPROCESS *Process; // rdx
  signed __int32 v10; // eax
  struct _KEVENT *v11; // rbp
  int *v12; // rsi
  int v13; // eax
  unsigned int v14; // edi
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // r8
  signed __int32 v19; // ett

  v5 = *(_DWORD *)(a1 + 192);
  v6 = v5 & 8;
  if ( (v5 & 0x100) != 0 )
  {
    v16 = (a1 + 272) | 1;
    if ( !v6 )
      v16 = a1 + 272;
    v17 = v16;
    if ( (a3 & 1) != 0 )
    {
      v18 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( *(_BYTE *)v18 == 1 && (*(_DWORD *)(v18 + 80) & 0x800) != 0 )
        v17 = v16 | 2;
    }
    v12 = (int *)(a1 + 80);
    v11 = (struct _KEVENT *)(a1 + 32);
    v13 = SmPageRead(a1 + 96, v17, a1 + 32, a1 + 80);
  }
  else
  {
    v7 = (v5 >> 1) & 4 | 1;
    if ( (v5 & 0x40000) == 0 )
      v7 = (v5 >> 1) & 4;
    if ( (v5 & 8) != 0 )
    {
      v8 = v7 | 2;
    }
    else
    {
      v8 = v7;
      if ( !a2 && (unsigned int)MiGetSystemRegionType(*(_QWORD *)(a1 + 224)) == 8 )
        v8 |= 2u;
    }
    if ( !v6 )
    {
      Process = KeGetCurrentThread()->Process;
      v10 = Process[2].ActiveProcessors.Bitmap[13];
      while ( v10 )
      {
        v19 = v10;
        v10 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&Process[2].ActiveProcessors.Bitmap[13],
                v10 - 1,
                v10);
        if ( v19 == v10 )
        {
          v8 |= 8u;
          break;
        }
      }
    }
    v11 = (struct _KEVENT *)(a1 + 32);
    v12 = (int *)(a1 + 80);
    v13 = IoPageReadEx(*(_QWORD *)(a1 + 200), (int)a1 + 272, (int)a1 + 96, (int)a1 + 32, a1 + 80, v8, 0LL);
  }
  v14 = v13;
  if ( v13 < 0 )
  {
    *(_QWORD *)(a1 + 88) = 0LL;
    *v12 = v13;
    KeSetEvent(v11, 0, 0);
  }
  return v14;
}
