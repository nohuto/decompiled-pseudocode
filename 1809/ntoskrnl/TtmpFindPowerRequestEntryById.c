/*
 * XREFs of TtmpFindPowerRequestEntryById @ 0x140881BDC
 * Callers:
 *     TtmiSetDisplayPowerRequest @ 0x140881584 (TtmiSetDisplayPowerRequest.c)
 *     TtmpSetDisplayRequestEnded @ 0x14088253C (TtmpSetDisplayRequestEnded.c)
 *     TtmpUpdateDisplayRequiredPowerRequest @ 0x140882730 (TtmpUpdateDisplayRequiredPowerRequest.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x1408827FC (TtmpUpdatePowerRequestAttribute.c)
 * Callees:
 *     TtmiLogError @ 0x1407628CC (TtmiLogError.c)
 *     TtmpPowerRequestEntryComparator @ 0x14088215C (TtmpPowerRequestEntryComparator.c)
 */

bool __fastcall TtmpFindPowerRequestEntryById(__int64 a1, int a2, __int64 *a3)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 i; // rax
  unsigned int v8; // edx
  __int64 v9; // r11
  __int64 v10; // r9
  unsigned __int64 v11; // r8

  v3 = 0LL;
  v4 = a2;
  v5 = 0LL;
  for ( i = a1; ; i = a1 )
  {
    v8 = *(_DWORD *)(i + 276);
    v9 = -1LL << (*(_BYTE *)(i + 276) & 0x1F);
    v10 = v9 & v4;
    v11 = (v9 & v4) >> 48;
    if ( v5 )
      goto LABEL_5;
    if ( v8 < 0x20 )
      break;
    v5 = *(_QWORD *)(a1 + 280)
       + 8
       * ((((v9 & v4) >> 56)
         + 37
         * ((unsigned __int8)v11
          + 37
          * ((unsigned __int8)((unsigned __int16)((v9 & v4) >> 32) >> 8)
           + 37
           * ((unsigned __int8)((v9 & v4) >> 32)
            + 37
            * ((((unsigned int)v9 & (unsigned int)v4) >> 24)
             + 37
             * ((unsigned __int8)(((unsigned int)v9 & (unsigned int)v4) >> 16)
              + 37 * ((unsigned __int8)((unsigned __int16)(v9 & v4) >> 8) + 37 * ((unsigned __int8)v10 + 11623883)))))))) & ((v8 >> 5) - 1));
LABEL_5:
    while ( 1 )
    {
      v5 = *(_QWORD *)v5;
      if ( (v5 & 1) != 0 )
        break;
      if ( v10 == (v9 & *(_QWORD *)(v5 + 8)) )
        goto LABEL_9;
    }
    v5 = 0LL;
LABEL_9:
    if ( !v5 )
      goto LABEL_14;
    if ( (unsigned int)TtmpPowerRequestEntryComparator(v5, v4, v11) )
      goto LABEL_13;
  }
  v5 = 0LL;
LABEL_13:
  if ( !v5 )
  {
LABEL_14:
    TtmiLogError("TtmpFindPowerRequestEntryById", 421, -1073741275, -1);
    goto LABEL_16;
  }
  v3 = v5;
LABEL_16:
  if ( a3 )
    *a3 = v3;
  return v3 != 0;
}
