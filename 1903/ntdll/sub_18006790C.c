/*
 * XREFs of sub_18006790C @ 0x18006790C
 * Callers:
 *     RtlFlushHeaps @ 0x1800675F0 (RtlFlushHeaps.c)
 *     sub_18006781C @ 0x18006781C (sub_18006781C.c)
 *     sub_1800678D0 @ 0x1800678D0 (sub_1800678D0.c)
 *     RtlSetHeapInformation @ 0x180079240 (RtlSetHeapInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D7490 (RtlQueryProcessHeapInformation.c)
 *     RtlEnumProcessHeaps @ 0x1800EED70 (RtlEnumProcessHeaps.c)
 *     RtlGetProcessHeaps @ 0x1800EED80 (RtlGetProcessHeaps.c)
 *     sub_1800EF484 @ 0x1800EF484 (sub_1800EF484.c)
 *     sub_1800FAF50 @ 0x1800FAF50 (sub_1800FAF50.c)
 *     sub_1801021FC @ 0x1801021FC (sub_1801021FC.c)
 *     sub_180102800 @ 0x180102800 (sub_180102800.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006790C(__int64 a1, __int64 a2, char a3)
{
  struct _PEB *v4; // rsi
  ULONG i; // ebx
  unsigned int j; // ebx
  __int64 k; // rax
  int v9; // [rsp+20h] [rbp-28h]
  int v10; // [rsp+24h] [rbp-24h]

  v4 = NtCurrentPeb();
  v10 = 0;
  if ( (a3 & 1) == 0 )
    RtlEnterCriticalSection(&stru_180163BE0);
  for ( i = 0; i < v4->NumberOfHeaps; ++i )
  {
    v10 = _guard_dispatch_icall_fptr();
    if ( v10 < 0 )
      goto LABEL_18;
  }
  if ( (a3 & 2) != 0 )
  {
    for ( j = 0; j < (unsigned __int16)word_180166040; ++j )
    {
      v10 = _guard_dispatch_icall_fptr();
      if ( v10 < 0 )
        goto LABEL_18;
    }
    for ( k = 0LL; ; k = (unsigned int)(v9 + 1) )
    {
      v9 = k;
      if ( (unsigned int)k >= 3 )
        break;
      if ( *((_QWORD *)&unk_18016A2E8 + 2 * k) )
      {
        v10 = _guard_dispatch_icall_fptr();
        if ( v10 < 0 )
          break;
      }
    }
  }
LABEL_18:
  if ( (a3 & 1) == 0 )
    RtlLeaveCriticalSection(&stru_180163BE0);
  return (unsigned int)v10;
}
