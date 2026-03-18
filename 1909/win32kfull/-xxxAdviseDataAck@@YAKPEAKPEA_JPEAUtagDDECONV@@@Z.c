/*
 * XREFs of ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020A0B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C002BE9C (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D084 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C007230C (WPP_RECORDER_SF_qqq.c)
 *     ?FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z @ 0x1C02095F0 (-FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C02097FC (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C020A374 (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z @ 0x1C020AA20 (-xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020B1F0 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 */

unsigned int __fastcall xxxAdviseDataAck(unsigned int *a1, __int64 *a2, struct tagDDECONV *a3)
{
  __int64 *v4; // rsi
  unsigned int v7; // ebx
  __int64 v8; // rdx
  struct tagDDECONV *v9; // rcx
  __int64 v10; // rbx
  struct tagINTDDEINFO *v11; // rsi
  int v12; // r8d
  int v13; // r9d
  __int64 v14; // rdx
  __int64 v15; // r8
  struct tagINTDDEINFO *v16; // [rsp+60h] [rbp+8h] BYREF

  v4 = a2;
  if ( *a1 != 996 )
    return xxxUnexpectedClientPost(a1, a2, a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)a1, (_DWORD)a2, 14, 32, (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids);
  }
  v7 = xxxCopyAckIn(a1, v4, a3, &v16);
  if ( (*(_BYTE *)(_HMPheFromObject(a3) + 25) & 1) != 0 )
    v7 = 0;
  if ( v7 != 2 )
    return v7;
  v10 = *((_QWORD *)a3 + 7);
  v11 = v16;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      (__int64)v9,
      v8,
      0xEu,
      0x21u,
      (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids,
      *(_QWORD *)(v10 + 40),
      *(_QWORD *)(v10 + 48),
      *(_QWORD *)v16);
  if ( (*(_DWORD *)v11 & 0x8000LL) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_21:
      v12 = *(_DWORD *)(v10 + 64);
      goto LABEL_22;
    }
    v13 = 36;
LABEL_20:
    WPP_RECORDER_SF_q(
      (_DWORD)v9,
      v8,
      14,
      v13,
      (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids,
      *(_QWORD *)(v10 + 40));
    goto LABEL_21;
  }
  v12 = *(_DWORD *)(v10 + 64);
  if ( (v12 & 0x400) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_((_DWORD)v9, v8, 14, 34, (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids);
      v12 = *(_DWORD *)(v10 + 64);
    }
    FreeListAdd(*((PETHREAD ***)a3 + 4), *(void **)(v10 + 48), v12 & 0xFFFFFFFE);
    goto LABEL_23;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = 35;
    goto LABEL_20;
  }
LABEL_22:
  xxxFreeDDEHandle(v9, *(void **)(v10 + 40), v12 & 0xFFFFFFFE);
LABEL_23:
  if ( (*(_BYTE *)(_HMPheFromObject(a3) + 25) & 1) != 0 )
    return 0;
  PopState(a3, v14, v15);
  return 2;
}
