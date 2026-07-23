/*
 * XREFs of sub_18006CCF0 @ 0x18006CCF0
 * Callers:
 *     sub_18006CB44 @ 0x18006CB44 (sub_18006CB44.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 */

__int64 __fastcall sub_18006CCF0(int a1, _OWORD *a2, _QWORD *a3)
{
  unsigned int v3; // r9d
  char *v6; // rbx
  _DWORD *pShimData; // rdx
  __int128 v8; // xmm0
  __int128 v10; // xmm0

  v3 = 0;
  v6 = 0LL;
  pShimData = NtCurrentPeb()->pShimData;
  if ( pShimData )
  {
    v6 = (char *)(pShimData + 504);
    if ( pShimData == (_DWORD *)-2016LL || !pShimData[516] )
      v6 = 0LL;
  }
  if ( a2 && a3 && v6 )
  {
    if ( !a1 )
    {
      v10 = *((_OWORD *)v6 + 3);
      *a3 = *(_QWORD *)v6;
      *a2 = v10;
      return 1;
    }
    if ( a1 == 1 )
    {
      RtlAcquireSRWLockShared(&stru_180166488);
      v8 = *((_OWORD *)v6 + 4);
      *a3 = *(_QWORD *)v6;
      *a2 = v8;
      RtlReleaseSRWLockShared(&stru_180166488);
      return 1;
    }
  }
  return v3;
}
