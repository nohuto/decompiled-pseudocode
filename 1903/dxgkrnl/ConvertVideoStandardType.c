/*
 * XREFs of ConvertVideoStandardType @ 0x1C0172570
 * Callers:
 *     ConvertVideoSignalInfo @ 0x1C01724A8 (ConvertVideoSignalInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertVideoStandardType(int a1, _DWORD *a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax

  v3 = a1;
  if ( a1 > 14 )
  {
    if ( a1 > 21 )
    {
      switch ( a1 )
      {
        case 22:
          *a2 = 22;
          return 0LL;
        case 23:
          *a2 = 23;
          return 0LL;
        case 24:
          *a2 = 24;
          return 0LL;
        case 25:
          *a2 = 25;
          return 0LL;
      }
      v6 = (unsigned int)(a1 - 26);
      if ( (_DWORD)v3 == 26 )
      {
        *a2 = 26;
        return 0LL;
      }
      if ( (_DWORD)v3 == 27 )
      {
        *a2 = 27;
        return 0LL;
      }
    }
    else
    {
      switch ( a1 )
      {
        case 21:
          *a2 = 21;
          return 0LL;
        case 15:
          *a2 = 15;
          return 0LL;
        case 16:
          *a2 = 16;
          return 0LL;
        case 17:
          *a2 = 17;
          return 0LL;
        case 18:
          *a2 = 18;
          return 0LL;
      }
      v6 = (unsigned int)(a1 - 19);
      if ( (_DWORD)v3 == 19 )
      {
        *a2 = 19;
        return 0LL;
      }
      if ( (_DWORD)v3 == 20 )
      {
        *a2 = 20;
        return 0LL;
      }
    }
  }
  else
  {
    if ( a1 == 14 )
    {
      *a2 = 14;
      return 0LL;
    }
    if ( a1 > 7 )
    {
      switch ( a1 )
      {
        case 8:
          *a2 = 8;
          return 0LL;
        case 9:
          *a2 = 9;
          return 0LL;
        case 10:
          *a2 = 10;
          return 0LL;
        case 11:
          *a2 = 11;
          return 0LL;
      }
      v6 = (unsigned int)(a1 - 12);
      if ( (_DWORD)v3 == 12 )
      {
        *a2 = 12;
        return 0LL;
      }
      if ( (_DWORD)v3 == 13 )
      {
        *a2 = 13;
        return 0LL;
      }
    }
    else
    {
      switch ( a1 )
      {
        case 7:
          *a2 = 7;
          return 0LL;
        case 0:
          *a2 = 255;
          return 0LL;
        case 1:
          *a2 = 1;
          return 0LL;
        case 2:
          *a2 = 2;
          return 0LL;
        case 3:
          *a2 = 3;
          return 0LL;
        case 4:
          *a2 = 4;
          return 0LL;
      }
      v6 = (unsigned int)(a1 - 5);
      if ( (_DWORD)v3 == 5 )
      {
        *a2 = 5;
        return 0LL;
      }
      if ( (_DWORD)v3 == 6 )
      {
        *a2 = 6;
        return 0LL;
      }
    }
  }
  v7 = WdLogNewEntry5_WdError(v6, a2, a3);
  *(_QWORD *)(v7 + 24) = v3;
  WdLogEvent5_WdError(v7);
  *a2 = 0;
  return 3223192354LL;
}
