/*
 * XREFs of ndisOidPrePMProtocolOffloadList @ 0x1C0074400
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqqL @ 0x1C0002F40 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 */

char __fastcall ndisOidPrePMProtocolOffloadList(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r15
  char v3; // bl
  __int64 v4; // r14
  unsigned int v5; // ebp
  __int64 v6; // rsi
  int v7; // r12d
  __int64 v9; // r8
  __int64 v10; // rcx
  unsigned __int8 v11; // al
  __int64 v12; // rcx
  unsigned __int8 v13; // al
  int v14; // ecx
  _QWORD *i; // rax
  __int64 j; // r8

  v2 = *a1;
  v3 = 0;
  v4 = a1[3];
  v5 = 0;
  v6 = a1[4];
  v7 = 0;
  v9 = v4;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      105,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      v2,
      v4,
      v6);
    v9 = a1[3];
  }
  if ( v9
    && (v10 = *(_QWORD *)(v9 + 24), v11 = *(_BYTE *)(v10 + 56), v11 <= 6u)
    && (v11 != 6 || *(_BYTE *)(v10 + 57) < 0x14u)
    || (a2 = (__int64 *)a1[1]) != 0LL
    && (*(_DWORD *)(v6 + 88) & 0x4000) == 0
    && (v12 = a2[2], v13 = *(_BYTE *)(v12 + 100), v13 <= 6u)
    && (v13 != 6 || *(_BYTE *)(v12 + 101) < 0x14u)
    || (v14 = *(_DWORD *)(v6 + 4), (v14 & 0xFFFFFFFD) != 0) )
  {
    *((_DWORD *)a1 + 10) = -1073741637;
LABEL_31:
    v3 = 1;
    goto LABEL_32;
  }
  if ( v9 && !v14 )
  {
    a2 = *(__int64 **)(v4 + 512);
LABEL_24:
    for ( i = a2; i; v5 += 240 )
      i = (_QWORD *)*i;
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v6 + 48) >= v5 )
    {
      for ( j = *(_QWORD *)(v6 + 40); a2; a2 = (__int64 *)*a2 )
      {
        v7 += 240;
        *(_OWORD *)j = *((_OWORD *)a2 + 3);
        *(_OWORD *)(j + 16) = *((_OWORD *)a2 + 4);
        *(_OWORD *)(j + 32) = *((_OWORD *)a2 + 5);
        *(_OWORD *)(j + 48) = *((_OWORD *)a2 + 6);
        *(_OWORD *)(j + 64) = *((_OWORD *)a2 + 7);
        *(_OWORD *)(j + 80) = *((_OWORD *)a2 + 8);
        *(_OWORD *)(j + 96) = *((_OWORD *)a2 + 9);
        *(_OWORD *)(j + 112) = *((_OWORD *)a2 + 10);
        *(_OWORD *)(j + 128) = *((_OWORD *)a2 + 11);
        *(_OWORD *)(j + 144) = *((_OWORD *)a2 + 12);
        *(_OWORD *)(j + 160) = *((_OWORD *)a2 + 13);
        *(_OWORD *)(j + 176) = *((_OWORD *)a2 + 14);
        *(_OWORD *)(j + 192) = *((_OWORD *)a2 + 15);
        *(_OWORD *)(j + 208) = *((_OWORD *)a2 + 16);
        *(_OWORD *)(j + 224) = *((_OWORD *)a2 + 17);
        *(_DWORD *)(j + 152) = *a2 != 0 ? v7 : 0;
        j += 240LL;
      }
      *(_DWORD *)(v6 + 52) = v7;
    }
    else
    {
      *(_DWORD *)(v6 + 56) = v5;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
    goto LABEL_31;
  }
  if ( a2 && (*(_DWORD *)(v6 + 88) & 0x4000) == 0 && !v14 )
  {
    a2 = (__int64 *)a2[90];
    goto LABEL_24;
  }
  if ( *a1 && v14 == 2 )
  {
    a2 = *(__int64 **)(v2 + 976);
    goto LABEL_24;
  }
LABEL_32:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (unsigned __int8)a2,
      0xBu,
      0x6Au,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      v2,
      v4,
      v6,
      *((_DWORD *)a1 + 10));
  return v3;
}
