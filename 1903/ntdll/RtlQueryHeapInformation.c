/*
 * XREFs of RtlQueryHeapInformation @ 0x180067610
 * Callers:
 *     RtlQueryProcessHeapInformation @ 0x1800D7490 (RtlQueryProcessHeapInformation.c)
 *     sub_1800F03F0 @ 0x1800F03F0 (sub_1800F03F0.c)
 *     sub_1800F4860 @ 0x1800F4860 (sub_1800F4860.c)
 *     sub_180102300 @ 0x180102300 (sub_180102300.c)
 * Callees:
 *     sub_18006773C @ 0x18006773C (sub_18006773C.c)
 *     sub_180067A40 @ 0x180067A40 (sub_180067A40.c)
 *     sub_180102800 @ 0x180102800 (sub_180102800.c)
 */

__int64 __fastcall RtlQueryHeapInformation(__int64 a1, int a2, _QWORD *a3, unsigned __int64 a4, _QWORD *a5)
{
  unsigned int v6; // r10d

  if ( a2 == -2147483647 )
  {
    if ( a4 >= 8 )
    {
      *a3 = &unk_1801627F0;
      v6 = 0;
      if ( a5 )
        *a5 = 8LL;
    }
    else
    {
      if ( a5 )
        *a5 = 8LL;
      return (unsigned int)-1073741789;
    }
    return v6;
  }
  else if ( a2 )
  {
    switch ( a2 )
    {
      case 2:
        if ( a4 < 0x58 )
          return 3221225485LL;
        else
          return sub_18006773C(a3, a4, a5);
      case 4:
        return sub_180067A40(a3, a4, a5);
      case 5:
        return sub_180102800(a3, a4, a5);
      default:
        return 3221225485LL;
    }
  }
  else if ( *(_DWORD *)(a1 + 16) == -571548178 || (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
  {
    if ( a4 >= 4 )
    {
      if ( *(_DWORD *)(a1 + 16) == -571548178 )
        *(_DWORD *)a3 = 2;
      else
        *(_DWORD *)a3 = *(unsigned __int8 *)(a1 + 419);
      if ( a5 )
        *a5 = 4LL;
      return 0LL;
    }
    else
    {
      if ( a5 )
        *a5 = 4LL;
      return 3221225507LL;
    }
  }
  else
  {
    return 3221225474LL;
  }
}
