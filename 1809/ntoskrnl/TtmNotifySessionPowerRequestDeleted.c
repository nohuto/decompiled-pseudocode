/*
 * XREFs of TtmNotifySessionPowerRequestDeleted @ 0x140881028
 * Callers:
 *     PopNotifySessionUserPowerRequestDeleted @ 0x1405896DC (PopNotifySessionUserPowerRequestDeleted.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     TtmpAcquireSessionById @ 0x140762864 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1407628CC (TtmiLogError.c)
 *     TtmiLogSessionPowerRequestDeleted @ 0x140886610 (TtmiLogSessionPowerRequestDeleted.c)
 */

void __fastcall TtmNotifySessionPowerRequestDeleted(unsigned int a1, int a2)
{
  unsigned __int64 v3; // rbp
  int v4; // eax
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // r10
  _QWORD *i; // rdx
  _QWORD *v9; // rcx
  bool v10; // si
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = 0LL;
  v3 = a2;
  v4 = TtmpAcquireSessionById(&v11, a1);
  v6 = v11;
  if ( v4 >= 0 )
  {
    if ( *(_DWORD *)(v11 + 272) )
    {
      v7 = -1LL << (*(_DWORD *)(v11 + 276) & 0x1F);
      v5 = 37
         * ((unsigned __int8)((v7 & v3) >> 48)
          + 37
          * ((unsigned __int8)((unsigned __int16)((v7 & v3) >> 32) >> 8)
           + 37
           * ((unsigned __int8)((v7 & v3) >> 32)
            + 37
            * ((((unsigned int)v7 & (unsigned int)v3) >> 24)
             + 37
             * ((unsigned __int8)(((unsigned int)v7 & (unsigned int)v3) >> 16)
              + 37
              * ((unsigned __int8)((unsigned __int16)(v7 & v3) >> 8) + 37 * ((unsigned __int8)(v7 & v3) + 11623883LL)))))));
      for ( i = (_QWORD *)(*(_QWORD *)(v11 + 280)
                         + 8 * (((_DWORD)v5 + ((v7 & v3) >> 56)) & (unsigned int)((*(_DWORD *)(v11 + 276) >> 5) - 1)));
            ;
            i = (_QWORD *)*i )
      {
        v9 = (_QWORD *)*i;
        if ( (*i & 1) != 0 )
          break;
        if ( (v7 & v9[1]) == (v7 & v3) )
        {
          *i = *v9;
          --*(_DWORD *)(v6 + 272);
          *v9 |= 0x8000000000000002uLL;
          goto LABEL_10;
        }
      }
    }
    v9 = 0LL;
LABEL_10:
    v10 = v9 != 0LL;
    if ( v9 )
      ExFreePoolWithTag(v9, 0x52507454u);
    LOBYTE(v5) = v10;
    TtmiLogSessionPowerRequestDeleted(a1, (unsigned int)v3, v5);
  }
  else
  {
    TtmiLogError("TtmNotifySessionPowerRequestDeleted", 3604, v4, -1);
  }
  if ( v6 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
}
