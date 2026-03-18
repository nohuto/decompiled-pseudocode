/*
 * XREFs of RIMFixUpCompleteFrame @ 0x1C014F828
 * Callers:
 *     rimProcessInput @ 0x1C0153D98 (rimProcessInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     traceFrame @ 0x1C014EDD4 (traceFrame.c)
 */

_UNKNOWN **__fastcall RIMFixUpCompleteFrame(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v4; // r15d
  __int64 v7; // r14
  int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rdi
  unsigned int i; // ebp
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rbp
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 *v20; // r14
  __int64 v21; // rdi
  _UNKNOWN **result; // rax

  v4 = *(_DWORD *)(a1 + 656);
  v7 = a2;
  v8 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 59, (__int64)&WPP_4c08b8ea70cc366fc12be9021bcffb81_Traceguids);
  }
  if ( v4 == 1 )
    ProbeForWrite((volatile void *)a3, *(unsigned int *)a4, 8u);
  v9 = *(_QWORD *)(v7 + 344);
  if ( v9 )
  {
    *(_QWORD *)(a3 + 32) = v9;
    v8 = 1;
  }
  v10 = a4[12];
  if ( v10 )
    *(_QWORD *)(a3 + 96) = a3 + v10 - (_QWORD)a4;
  v11 = a4[14];
  if ( v11 )
  {
    v12 = v11 - (_QWORD)a4;
    v13 = (_QWORD *)(v12 + a3);
    *(_QWORD *)(a3 + 112) = v12 + a3;
    if ( v8 )
    {
      for ( i = 0; i < *(_DWORD *)(a3 + 24); v13 += 24 )
      {
        if ( v4 == 1 )
          ProbeForWrite(v13, 0xC0uLL, 8u);
        ++i;
        v13[4] = *(_QWORD *)(v7 + 344);
      }
    }
    traceFrame(a3);
  }
  v15 = a4[13];
  if ( v15 )
  {
    v16 = v15 - (_QWORD)a4;
    v17 = (_QWORD *)(v16 + a3);
    *(_QWORD *)(a3 + 104) = v16 + a3;
    v18 = a4[13];
    if ( v18 )
    {
      do
      {
        v19 = *(_QWORD *)(v18 + 8);
        if ( v19 )
        {
          if ( v4 == 1 )
          {
            ProbeForWrite(v17, 0x18uLL, 8u);
            v19 = *(_QWORD *)(v18 + 8);
          }
          v17[1] = a3 + v19 - (_QWORD)a4;
        }
        v20 = (__int64 *)(v18 + 16);
        v21 = *(_QWORD *)(v18 + 16);
        if ( !v21 )
          break;
        if ( v4 == 1 )
        {
          ProbeForWrite(v17, 0x18uLL, 8u);
          v21 = *v20;
        }
        v17[2] = v21 - (_QWORD)a4 + a3;
        v17 = (_QWORD *)(v21 - (_QWORD)a4 + a3);
        v18 = *v20;
      }
      while ( *v20 );
    }
  }
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    return (_UNKNOWN **)WPP_RECORDER_SF_(
                          (_DWORD)gRimLog,
                          a2,
                          1,
                          60,
                          (__int64)&WPP_4c08b8ea70cc366fc12be9021bcffb81_Traceguids);
  }
  return result;
}
