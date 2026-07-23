/*
 * XREFs of MiVolunteerForTrimFirst @ 0x14012C8C8
 * Callers:
 *     MiSetVaAgeList @ 0x14003E2D0 (MiSetVaAgeList.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 */

unsigned __int64 __fastcall MiVolunteerForTrimFirst(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  _QWORD *v3; // rdi
  __int64 v4; // rsi
  unsigned __int64 result; // rax
  __int64 *v6; // rbx
  int v7; // ebp
  __int64 *v8; // rax
  __int64 **v9; // rcx
  __int64 **v10; // rax
  __int64 **v11; // rcx
  __int64 *v12; // rcx
  volatile signed __int64 *v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(unsigned __int16 *)(a1 + 174);
  v3 = *(_QWORD **)(qword_14043B808 + 8 * v2);
  v4 = v3[878];
  result = *(_QWORD *)(v4 + 64);
  if ( *(_QWORD *)(a1 + 96) >= result )
  {
    if ( a2 >= 0 )
    {
      v6 = (__int64 *)(a1 + 24);
      if ( *(_QWORD *)(a1 + 24) )
      {
        if ( (__int64 *)v3[879] != v6 )
        {
          v7 = 1;
          goto LABEL_7;
        }
      }
    }
  }
  else if ( a2 <= 0 )
  {
    v6 = (__int64 *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 24) )
    {
      if ( (__int64 *)v3[880] != v6 )
      {
        v7 = 2;
LABEL_7:
        v13[0] = 0LL;
        v13[1] = (volatile signed __int64 *)&qword_14043BF40;
        KxAcquireQueuedSpinLock((__int64)v13, (volatile __int64 *)&qword_14043BF40, v2);
        if ( !*(_BYTE *)(v4 + 53) )
        {
          v8 = (__int64 *)*v6;
          if ( *v6 )
          {
            if ( (__int64 *)v8[1] == v6 )
            {
              v9 = (__int64 **)v6[1];
              if ( *v9 == v6 )
              {
                *v9 = v8;
                v8[1] = (__int64)v9;
                v10 = (__int64 **)(v3 + 879);
                if ( v7 == 1 )
                {
                  v12 = *v10;
                  if ( (__int64 **)(*v10)[1] == v10 )
                  {
                    *v6 = (__int64)v12;
                    v6[1] = (__int64)v10;
                    v12[1] = (__int64)v6;
                    *v10 = v6;
                    return KxReleaseQueuedSpinLock(v13);
                  }
                }
                else
                {
                  v11 = (__int64 **)v3[880];
                  if ( *v11 == (__int64 *)v10 )
                  {
                    *v6 = (__int64)v10;
                    v6[1] = (__int64)v11;
                    *v11 = v6;
                    v3[880] = v6;
                    return KxReleaseQueuedSpinLock(v13);
                  }
                }
              }
            }
            __fastfail(3u);
          }
        }
        *(_BYTE *)(v4 + 54) = 1;
        return KxReleaseQueuedSpinLock(v13);
      }
    }
  }
  return result;
}
