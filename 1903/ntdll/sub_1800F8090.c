/*
 * XREFs of sub_1800F8090 @ 0x1800F8090
 * Callers:
 *     sub_1800EFD34 @ 0x1800EFD34 (sub_1800EFD34.c)
 * Callees:
 *     ZwQueryPerformanceCounter @ 0x18009CD00 (ZwQueryPerformanceCounter.c)
 *     RtlGetCurrentProcessorNumber @ 0x1800A1170 (RtlGetCurrentProcessorNumber.c)
 *     sub_1800F85D4 @ 0x1800F85D4 (sub_1800F85D4.c)
 *     sub_1800F86AC @ 0x1800F86AC (sub_1800F86AC.c)
 *     sub_1800F8798 @ 0x1800F8798 (sub_1800F8798.c)
 */

__int64 __fastcall sub_1800F8090(PVOID a1, unsigned __int64 a2, int a3)
{
  int v4; // r8d
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  unsigned __int64 v8; // rbx
  ULONG CurrentProcessorNumber; // eax
  __int64 v10; // rcx
  __int64 v11; // rsi
  signed __int32 v12; // eax
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  LARGE_INTEGER PerformanceCounter; // [rsp+20h] [rbp-18h] BYREF
  LARGE_INTEGER v17; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 == qword_180166A08 || dword_180166A34 == 1 )
    return 0LL;
  v4 = a3 - 2;
  if ( !v4 )
  {
LABEL_11:
    if ( a2 )
    {
      v8 = (a2 >> 3) | 0xE000000000000000uLL;
      if ( dword_180166888 == 1 )
      {
        sub_1800F85D4(a1, v8);
      }
      else if ( dword_180166888 == 2 )
      {
        CurrentProcessorNumber = RtlGetCurrentProcessorNumber();
        v10 = CurrentProcessorNumber < dword_1801669F8 ? CurrentProcessorNumber : 0;
        v11 = (unsigned int)v10;
        v12 = **(_DWORD **)(qword_180166568 + 8 * v10);
        v13 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
        if ( (unsigned int)(v13 - v12) >= 0x3E8
          && v12 == _InterlockedCompareExchange(
                      *(volatile signed __int32 **)(qword_180166568 + 8LL * (unsigned int)v10),
                      v13,
                      v12) )
        {
          _InterlockedExchange64(
            (volatile __int64 *)(*(_QWORD *)(qword_180166568 + 8LL * (unsigned int)v10) + 8LL),
            PerformanceFrequency.QuadPart / 100);
        }
        v14 = *(_QWORD *)(qword_180166568 + 8LL * (unsigned int)v10);
        if ( *(__int64 *)(v14 + 8) <= 0 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v14 + 24));
        }
        else
        {
          ZwQueryPerformanceCounter(&PerformanceCounter, 0LL);
          sub_1800F85D4(a1, v8);
          ZwQueryPerformanceCounter(&v17, 0LL);
          v17.QuadPart -= PerformanceCounter.QuadPart;
          _InterlockedExchangeAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(qword_180166568 + 8 * v11) + 8LL),
            ~v17.QuadPart);
          _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(qword_180166568 + 8 * v11) + 16LL));
        }
      }
    }
    return 0LL;
  }
  v5 = v4 - 1;
  if ( v5 )
  {
    v6 = v5 - 2;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 == 2 )
          sub_1800F8798();
        return 0LL;
      }
      goto LABEL_11;
    }
  }
  if ( a2 )
    sub_1800F86AC(a1, (a2 >> 3) | 0xE000000000000000uLL);
  return 0LL;
}
