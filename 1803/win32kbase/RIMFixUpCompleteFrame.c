/*
 * XREFs of RIMFixUpCompleteFrame @ 0x1C00F9078
 * Callers:
 *     rimProcessInput @ 0x1C00FF314 (rimProcessInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     traceFrame @ 0x1C00F8888 (traceFrame.c)
 */

__int64 __fastcall RIMFixUpCompleteFrame(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v4; // r15d
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

  v4 = *(_DWORD *)(a1 + 640);
  v8 = 0;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x3Au,
    (__int64)&WPP_34b087b945883e901c42f3a270515dd0_Traceguids);
  if ( v4 == 1 )
    ProbeForWrite((volatile void *)a3, *(unsigned int *)a4, 8u);
  v9 = *(_QWORD *)(a2 + 344);
  if ( v9 )
  {
    *(_QWORD *)(a3 + 32) = v9;
    v8 = 1;
  }
  v10 = a4[9];
  if ( v10 )
    *(_QWORD *)(a3 + 72) = a3 + v10 - (_QWORD)a4;
  v11 = a4[11];
  if ( v11 )
  {
    v12 = v11 - (_QWORD)a4;
    v13 = (_QWORD *)(v12 + a3);
    *(_QWORD *)(a3 + 88) = v12 + a3;
    if ( v8 )
    {
      for ( i = 0; i < *(_DWORD *)(a3 + 24); v13 += 21 )
      {
        if ( v4 == 1 )
          ProbeForWrite(v13, 0xA8uLL, 8u);
        ++i;
        v13[4] = *(_QWORD *)(a2 + 344);
      }
    }
    traceFrame(a3);
  }
  v15 = a4[10];
  if ( v15 )
  {
    v16 = v15 - (_QWORD)a4;
    v17 = (_QWORD *)(v16 + a3);
    *(_QWORD *)(a3 + 80) = v16 + a3;
    v18 = a4[10];
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
  return WPP_RECORDER_SF_(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           0x14u,
           0x3Bu,
           (__int64)&WPP_34b087b945883e901c42f3a270515dd0_Traceguids);
}
