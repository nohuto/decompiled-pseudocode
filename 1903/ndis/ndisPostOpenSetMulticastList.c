/*
 * XREFs of ndisPostOpenSetMulticastList @ 0x1C003925C
 * Callers:
 *     ndisOidPostEthMulticastList @ 0x1C0039170 (ndisOidPostEthMulticastList.c)
 *     ndisOidPostEthMulticastOid @ 0x1C0040640 (ndisOidPostEthMulticastOid.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqd @ 0x1C001D460 (WPP_RECORDER_SF_qqqd.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 */

__int64 __fastcall ndisPostOpenSetMulticastList(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r15
  __int64 v7; // rbp
  __int64 result; // rax
  int v9; // ebx
  __int64 v10; // [rsp+40h] [rbp-28h]

  v3 = *(_QWORD *)(a1 + 16);
  v7 = *(_QWORD *)(v3 + 400);
  result = (__int64)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = WPP_RECORDER_SF_qqqd(
               *((_QWORD *)WPP_GLOBAL_Control + 8),
               a2,
               0xBu,
               0x6Du,
               (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
               v3,
               a1,
               a2,
               a3);
  v9 = 0;
  if ( *(_DWORD *)(a2 + 160) )
  {
    *(_QWORD *)(a2 + 40) = *(_QWORD *)(a2 + 152);
    result = *(unsigned int *)(a2 + 160);
    *(_DWORD *)(a2 + 48) = result;
    *(_QWORD *)(a2 + 152) = 0LL;
    *(_DWORD *)(a2 + 160) = 0;
  }
  if ( a3 )
  {
    result = *(unsigned int *)(a1 + 472);
    if ( (_DWORD)result )
    {
      memmove(*(void **)(a1 + 448), *(const void **)(a1 + 464), 12 * result);
      result = *(unsigned int *)(a1 + 472);
      *(_DWORD *)(a1 + 456) = result;
    }
    *(_DWORD *)(a1 + 472) = 0;
    if ( *(_DWORD *)(v7 + 372) )
    {
      memmove(*(void **)(v7 + 352), *(const void **)(v7 + 360), (unsigned int)(6 * *(_DWORD *)(v7 + 344)));
      result = *(unsigned int *)(v7 + 372);
      *(_DWORD *)(v7 + 368) = result;
    }
    *(_DWORD *)(v7 + 372) = 0;
    *(_DWORD *)(a2 + 56) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 472) = 0;
    *(_DWORD *)(v7 + 372) = 0;
    v9 = *(_DWORD *)(a2 + 48);
  }
  *(_DWORD *)(a2 + 52) = v9;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v10) = a3;
    return WPP_RECORDER_SF_qqqd(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             a2,
             0xBu,
             0x6Eu,
             (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
             v3,
             a1,
             a2,
             v10);
  }
  return result;
}
