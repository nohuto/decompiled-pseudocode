/*
 * XREFs of ?xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020AFA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     ?FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z @ 0x1C02098A0 (-FreeListAdd@@YAHPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C0209AAC (-PopState@@YAXPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C020A624 (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z @ 0x1C020ACD0 (-xxxFreeDDEHandle@@YAXPEAUtagDDECONV@@PEAXK@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020B580 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 */

unsigned int __fastcall xxxPokeAck(unsigned int *a1, void **a2, struct tagDDECONV *a3)
{
  void **v4; // rsi
  int v7; // edi
  int v8; // edx
  __int64 v9; // rdi
  struct tagDDECONV *v10; // rcx
  int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  struct tagINTDDEINFO *v15; // [rsp+50h] [rbp+8h] BYREF

  v4 = a2;
  if ( *a1 != 996 )
    return xxxUnexpectedServerPost(a1, (__int64 *)a2, a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)a1, (_DWORD)a2, 14, 43, (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids);
  }
  v7 = xxxCopyAckIn(a1, v4, a3, &v15);
  if ( (*(_BYTE *)(_HMPheFromObject(a3) + 25) & 1) != 0 )
    v7 = 0;
  if ( v7 != 2 )
    return v7;
  v9 = *((_QWORD *)a3 + 7);
  v10 = (struct tagDDECONV *)*(unsigned int *)v15;
  if ( ((unsigned __int16)v10 & 0x8000) != 0 )
  {
    v11 = *(_DWORD *)(v9 + 64);
    if ( (v11 & 0x400) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 4;
        WPP_RECORDER_SF_((_DWORD)v10, v8, 14, 44, (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids);
        v11 = *(_DWORD *)(v9 + 64);
      }
      FreeListAdd(*((PETHREAD ***)a3 + 4), *(void **)(v9 + 40), v11 & 0xFFFFFFFE);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_((_DWORD)v10, v8, 14, 45, (__int64)&WPP_750226f5e6783e90d756865f46aaf029_Traceguids);
    }
    xxxFreeDDEHandle(v10, *(void **)(v9 + 48), *(_DWORD *)(v9 + 64) & 0xFFFFFFFE);
  }
  if ( (*(_BYTE *)(_HMPheFromObject(a3) + 25) & 1) != 0 )
    return 0;
  PopState(a3, v12, v13, v14);
  return 2;
}
