/*
 * XREFs of RtlNtStatusToDosErrorNoTeb @ 0x180074070
 * Callers:
 *     sub_1800326A0 @ 0x1800326A0 (sub_1800326A0.c)
 *     RtlQueryUnbiasedInterruptTime @ 0x180063820 (RtlQueryUnbiasedInterruptTime.c)
 *     sub_18007F45C @ 0x18007F45C (sub_18007F45C.c)
 * Callees:
 *     DbgPrint @ 0x180053DA0 (DbgPrint.c)
 */

__int64 __fastcall RtlNtStatusToDosErrorNoTeb(unsigned int a1)
{
  unsigned int v1; // r8d
  __int64 result; // rax
  unsigned int v3; // edx
  unsigned int v4; // r9d
  __int64 v5; // rcx
  unsigned int v6; // eax
  unsigned int v7; // r10d
  int v8; // eax

  v1 = 0;
  if ( !a1 )
    return 0LL;
  if ( a1 == 259 )
    return 997LL;
  result = a1;
  if ( (a1 & 0x20000000) == 0 )
  {
    if ( (a1 & 0xFF0000) == 0x70000 && ((HIBYTE(a1) - 128) & 0xFFFFFFBF) == 0 )
      return (unsigned __int16)a1;
    v3 = a1 & 0xCFFFFFFF;
    v4 = 304;
    if ( (a1 & 0xF0000000) != 0xD0000000 )
      v3 = a1;
    while ( 1 )
    {
      v5 = (v4 + v1) >> 1;
      v6 = dword_180126000[2 * v5];
      v7 = v3 - v6;
      if ( v3 < v6 )
      {
        v4 = v5 - 1;
      }
      else
      {
        if ( v7 < (unsigned __int8)byte_180126004[8 * v5] )
        {
          v8 = (unsigned __int16)word_180126006[4 * v5];
          if ( byte_180126005[8 * v5] == 1 )
            return (unsigned __int16)word_180124210[v7 + v8];
          else
            return (unsigned __int16)word_180124210[2 * v7 + v8] | ((unsigned __int16)word_180124210[2 * v7 + 1 + v8] << 16);
        }
        v1 = v5 + 1;
      }
      if ( v1 > v4 )
      {
        if ( (v3 & 0xFFFF0000) == 0xC0010000 )
          return (unsigned __int16)v3;
        DbgPrint("RTL: RtlNtStatusToDosError(0x%lx): No Valid Win32 Error Mapping\n", v3);
        DbgPrint("RTL: Edit ntos\\rtl\\generr.c to correct the problem\n");
        DbgPrint("RTL: ERROR_MR_MID_NOT_FOUND is being returned\n");
        return 317LL;
      }
    }
  }
  return result;
}
