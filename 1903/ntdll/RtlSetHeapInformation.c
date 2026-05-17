/*
 * XREFs of RtlSetHeapInformation @ 0x180079240
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 *     sub_1800F03F0 @ 0x1800F03F0 (sub_1800F03F0.c)
 *     RtlHeapTrkInitialize @ 0x1800F76D0 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x18000AFD0 (RtlRunOnceExecuteOnce.c)
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     sub_18004F06C @ 0x18004F06C (sub_18004F06C.c)
 *     sub_18006790C @ 0x18006790C (sub_18006790C.c)
 *     sub_180079304 @ 0x180079304 (sub_180079304.c)
 *     sub_1800EF484 @ 0x1800EF484 (sub_1800EF484.c)
 *     sub_180102188 @ 0x180102188 (sub_180102188.c)
 */

__int64 __fastcall RtlSetHeapInformation(_DWORD *a1, int a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rax
  __int64 *v7; // rcx
  __int64 v8; // rax

  switch ( a2 )
  {
    case -2147483646:
      if ( !a3 || a4 != 48 )
        return 3221225473LL;
      result = sub_1800EF484(a1, a3);
LABEL_9:
      if ( (int)result < 0 )
        return result;
      return 0LL;
    case 0:
      if ( a4 < 4 )
        return 3221225507LL;
      if ( *(_DWORD *)a3 == 2 )
      {
        if ( a1[4] != -571548178 )
        {
          if ( (a1[28] & 0x75010F63) == 2 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
          {
            result = sub_180079304();
            goto LABEL_9;
          }
          return 3221225485LL;
        }
        return 0LL;
      }
      return 3221225473LL;
    case 1:
      dword_180166044 = 0;
      return 0LL;
  }
  if ( a2 != 4 )
  {
    if ( a2 == 3 )
    {
      if ( !a3 || a4 < 4 || *(_DWORD *)a3 != 1 || a4 != 8 || *(_DWORD *)(a3 + 4) )
        return 3221225485LL;
      if ( a1 )
      {
        RtlEnterCriticalSection((__int64)&unk_180163BE0);
        v8 = 7LL;
        if ( a1[4] != -571548178 )
          v8 = 52LL;
        if ( LOWORD(a1[v8]) != 0xFFFF )
          sub_18004F06C((__int64)a1);
        RtlLeaveCriticalSection((__int64)&unk_180163BE0);
      }
      else
      {
        sub_18006790C((__int64)sub_18004F050, 0LL, 0);
      }
      return 0LL;
    }
    if ( a2 != 5 )
    {
      if ( a2 == 6 )
      {
        if ( a4 < 0x28
          || *(_DWORD *)a3 != 1
          || ((*(_QWORD *)(a3 + 8) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) != *(_QWORD *)(a3 + 8) )
        {
          return 3221225485LL;
        }
        if ( a1 )
        {
          if ( a1[4] == -571548178 )
          {
            v6 = 8LL;
          }
          else
          {
            if ( (a1[29] & 0x1000000) != 0 )
              return 0LL;
            v6 = 94LL;
          }
          v7 = (__int64 *)&a1[v6];
        }
        else
        {
          v7 = &qword_180163558;
        }
        v7[1] = *(_QWORD *)(a3 + 16);
        v7[3] = *(_QWORD *)(a3 + 32);
        *v7 = *(_QWORD *)(a3 + 8);
        v7[2] = *(_QWORD *)(a3 + 24);
      }
      return 0LL;
    }
    if ( !a3 || a4 < 0x10 || *(_WORD *)a3 != 1 || (*(_WORD *)(a3 + 2) & 0xFFFE) != 0 )
      return 3221225485LL;
    result = sub_180102188(a3);
    goto LABEL_9;
  }
  if ( (byte_180166058 & 1) == 0 )
    return 3221225485LL;
  result = RtlRunOnceExecuteOnce(
             &qword_180166408,
             (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))sub_18004EB80,
             (__int64)&qword_180163B40,
             0LL);
  if ( (int)result >= 0 )
  {
    byte_180166058 |= 2u;
    return 0LL;
  }
  return result;
}
