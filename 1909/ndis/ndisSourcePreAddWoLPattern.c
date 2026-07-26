/*
 * XREFs of ndisSourcePreAddWoLPattern @ 0x1C001CF98
 * Callers:
 *     ndisOidPrePMAddWOLPattern @ 0x1C001CCF0 (ndisOidPrePMAddWOLPattern.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_LL @ 0x1C001D55C (WPP_RECORDER_SF_LL.c)
 *     ndisIsWoLPacketTypeSupported @ 0x1C001D630 (ndisIsWoLPacketTypeSupported.c)
 *     ndisCompareWoLPatterns @ 0x1C001D6A0 (ndisCompareWoLPatterns.c)
 *     ndisCreateWoLPatternEntry @ 0x1C00352BC (ndisCreateWoLPatternEntry.c)
 */

__int64 __fastcall ndisSourcePreAddWoLPattern(__int64 a1, __int64 a2, _QWORD *a3, char *a4)
{
  __int64 v6; // r14
  unsigned int v8; // ebx
  unsigned int *v9; // rbp
  __int64 v10; // rdx
  int v11; // edx
  _QWORD *v12; // rdi
  __int64 WoLPatternEntry; // rcx

  v6 = a2;
  v8 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      54,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      (char)a3);
  }
  v9 = (unsigned int *)a3[5];
  *a4 = 1;
  if ( a1 )
    v10 = *(_QWORD *)(a1 + 16);
  else
    v10 = *(_QWORD *)(v6 + 32);
  if ( (unsigned __int8)ndisIsWoLPacketTypeSupported(v9[3], v10) )
  {
    if ( a1 )
      v12 = *(_QWORD **)(a1 + 504);
    else
      v12 = *(_QWORD **)(v6 + 720);
    if ( !v12 )
      goto LABEL_9;
    do
    {
      if ( (unsigned __int8)ndisCompareWoLPatterns(v12 + 6, v9) )
        break;
      v12 = (_QWORD *)*v12;
    }
    while ( v12 );
    if ( v12 )
    {
      v8 = -1073676267;
    }
    else
    {
LABEL_9:
      WoLPatternEntry = ndisCreateWoLPatternEntry(v9);
      if ( WoLPatternEntry )
      {
        *(_QWORD *)(WoLPatternEntry + 24) = a3[13];
        a3[20] = WoLPatternEntry;
        *a4 = 0;
      }
      else
      {
        v8 = -1073741670;
      }
    }
  }
  else
  {
    v8 = -1073741637;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_LL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      11,
      55,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      *a4,
      v8);
  }
  return v8;
}
