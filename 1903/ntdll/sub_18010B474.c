/*
 * XREFs of sub_18010B474 @ 0x18010B474
 * Callers:
 *     sub_180047844 @ 0x180047844 (sub_180047844.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_18010B340 @ 0x18010B340 (sub_18010B340.c)
 */

__int64 __fastcall sub_18010B474(
        __int64 a1,
        volatile signed __int16 *a2,
        int a3,
        char a4,
        PRTL_SRWLOCK SRWLock,
        char *a6)
{
  int v9; // r14d
  char v10; // r12
  signed __int16 v11; // di
  __int16 v12; // bx
  __int16 v13; // bx
  signed __int16 v14; // bx
  __int16 v15; // si
  signed __int16 v16; // bx
  unsigned int v17; // edx
  __int64 v19; // [rsp+60h] [rbp+8h]
  __int16 v20; // [rsp+70h] [rbp+18h]

  v19 = a1;
  v9 = 0;
  v10 = 0;
LABEL_2:
  v11 = *a2;
  v20 = *a2;
  while ( 1 )
  {
    if ( a3 <= 0 )
    {
      if ( v11 >= 0 )
      {
        v17 = -1073741567;
        goto LABEL_30;
      }
      if ( !(a3 + (v11 & 0x7FF)) )
      {
        v14 = v20 | 0x4000;
        goto LABEL_18;
      }
LABEL_16:
      v13 = v20;
      goto LABEL_17;
    }
    if ( (v11 & 0x4000) != 0 )
    {
      _mm_pause();
      goto LABEL_2;
    }
    if ( (v11 & 0x7FF) != 0 )
      goto LABEL_16;
    if ( (a4 & 3) != 0 )
    {
      if ( (a4 & 2) == 0 )
        goto LABEL_16;
      v12 = v20;
    }
    else
    {
      if ( !(unsigned int)sub_18010B340(a1) )
        goto LABEL_16;
      v12 = v20;
    }
    v13 = v12 | 0x4000;
LABEL_17:
    v14 = a3 + v13;
LABEL_18:
    v15 = v14 & 0x4000;
    if ( (v14 & 0x4000) != 0 )
    {
      v9 = 1;
      RtlAcquireSRWLockExclusive(SRWLock);
      v10 = -1;
    }
    v16 = _InterlockedCompareExchange16(a2, v14, v11);
    if ( v11 == v16 )
      break;
    if ( v9 )
      RtlReleaseSRWLockExclusive(SRWLock);
    a1 = v19;
    v11 = v16;
    v20 = v16;
    v9 = 0;
  }
  if ( a3 <= 0 )
  {
    v17 = v15 != 0 ? -1073741566 : -1073741568;
  }
  else if ( v11 >= 0 )
  {
    v17 = (v15 != 0) - 1073741567;
  }
  else
  {
    v17 = -1073741568;
  }
LABEL_30:
  if ( v9 )
    *a6 = v10;
  return v17;
}
