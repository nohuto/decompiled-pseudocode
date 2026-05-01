/*
 * XREFs of CApplicationFrameService::_FindFrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f___ @ 0x180012070
 * Callers:
 *     ?GetFrameByWindow@CApplicationFrameService@@UEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z @ 0x180012110 (-GetFrameByWindow@CApplicationFrameService@@UEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationFrameService::_FindFrameWrapper__lambda_5d8a1e65269b980cfbd28a496475a26f___(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  unsigned __int64 v4; // r10
  int v5; // r9d
  __int64 v6; // rbx
  __int64 v7; // r8
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  unsigned __int64 i; // r8
  __int64 v12; // rbx
  __int64 v13; // r10
  signed __int64 v14; // rax
  signed __int64 v15; // rtt

  *a3 = 0LL;
  v4 = 0LL;
  v5 = -2147023728;
  do
  {
    if ( v4 >= a1[18] )
      break;
    v6 = a1[17];
    v7 = *(_QWORD *)(v6 + 8 * v4);
    if ( *(_QWORD *)(v7 + 88) == a2 )
    {
      v5 = 0;
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 72);
        while ( v8 >= 0 )
        {
          v9 = v8;
          v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 72), v8 + 1, v8);
          if ( v9 == v8 )
            goto LABEL_8;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v8 + 16));
      }
LABEL_8:
      *a3 = *(_QWORD *)(v6 + 8 * v4);
    }
    else
    {
      v5 = -2147023728;
    }
    ++v4;
  }
  while ( v5 < 0 );
  for ( i = 0LL; v5 < 0 && i < a1[14]; ++i )
  {
    v12 = a1[13];
    v13 = *(_QWORD *)(v12 + 8 * i);
    if ( *(_QWORD *)(v13 + 88) == a2 )
    {
      v5 = 0;
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 72);
        while ( v14 >= 0 )
        {
          v15 = v14;
          v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 72), v14 + 1, v14);
          if ( v15 == v14 )
            goto LABEL_23;
        }
        _InterlockedIncrement((volatile signed __int32 *)(2 * v14 + 16));
      }
LABEL_23:
      *a3 = *(_QWORD *)(v12 + 8 * i);
    }
    else
    {
      v5 = -2147023728;
    }
  }
  return (unsigned int)v5;
}
