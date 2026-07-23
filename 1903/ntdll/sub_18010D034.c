/*
 * XREFs of sub_18010D034 @ 0x18010D034
 * Callers:
 *     sub_18010D380 @ 0x18010D380 (sub_18010D380.c)
 * Callees:
 *     sub_180004BA8 @ 0x180004BA8 (sub_180004BA8.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x180053C10 (RtlNtStatusToDosError.c)
 *     sub_18006D2E4 @ 0x18006D2E4 (sub_18006D2E4.c)
 *     sub_18006D480 @ 0x18006D480 (sub_18006D480.c)
 *     sub_180087200 @ 0x180087200 (sub_180087200.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     sub_18010D318 @ 0x18010D318 (sub_18010D318.c)
 */

__int64 __fastcall sub_18010D034(__int64 a1)
{
  unsigned int v1; // esi
  NTSTATUS v3; // eax
  ULONG v4; // ebp
  __int64 i; // r8
  __int64 v6; // rcx
  unsigned __int32 v7; // eax
  __int64 v8; // rsi
  __int64 j; // rdi
  int v10; // eax

  v1 = *(_DWORD *)(a1 + 208);
  v3 = sub_180004BA8(a1, 0LL, 0, 0);
  if ( v3 )
  {
    v4 = RtlNtStatusToDosError(v3);
    if ( v4 )
      return v4;
  }
  else
  {
    v4 = 0;
  }
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 88));
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 204); i = (unsigned int)(i + 1) )
  {
    v6 = *(_QWORD *)(a1 + 8 * i + 576);
    if ( v6 )
    {
      *(_QWORD *)(a1 + 8 * i + 576) = 0LL;
      v7 = _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), v1);
      if ( v7 <= v1 )
        *(_DWORD *)(v6 + 4) = v7;
      *(_DWORD *)(v6 + 44) = 0;
      *(_QWORD *)(v6 + 32) = 0LL;
      *(_QWORD *)(v6 + 24) = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 416));
      **(_QWORD **)(a1 + 256) = v6 + 32;
      *(_QWORD *)(a1 + 256) = v6 + 32;
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 228));
    }
  }
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 88));
  v8 = *(_QWORD *)(a1 + 416);
  for ( j = sub_18010D318(a1, v8); j; j = sub_18010D318(a1, --v8) )
  {
    sub_18006D480(j);
    v10 = sub_18006D2E4(a1, j, 0);
    _InterlockedExchange((volatile __int32 *)(j + 44), 0);
    if ( ((v10 + 0x80000000) & 0x80000000) == 0 && v10 != -2147483614 )
      break;
  }
  sub_180087200(a1, 0);
  ZwClose(*(HANDLE *)(a1 + 144));
  *(_QWORD *)(a1 + 144) = 0LL;
  return v4;
}
