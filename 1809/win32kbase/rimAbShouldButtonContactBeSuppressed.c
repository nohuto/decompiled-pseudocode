/*
 * XREFs of rimAbShouldButtonContactBeSuppressed @ 0x1C011073C
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0110860 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0110BB0 (rimAbSuppressLowerRankActivityInFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C0111B34 (WPP_RECORDER_SF_dd.c)
 *     RIMGetPointerInputType @ 0x1C0117D70 (RIMGetPointerInputType.c)
 *     RIMCmIsButtonContactActiveAndNotSuppressed @ 0x1C012EB8C (RIMCmIsButtonContactActiveAndNotSuppressed.c)
 */

__int64 __fastcall rimAbShouldButtonContactBeSuppressed(__int64 a1, __int64 a2, int a3)
{
  unsigned int v6; // edi
  int v7; // ebx
  _QWORD **v8; // r14
  _QWORD *i; // rsi
  int v10; // ebx
  int v11; // edx
  __int64 v12; // rax
  int v13; // ecx

  v6 = 0;
  if ( (unsigned int)RIMCmIsButtonContactActiveAndNotSuppressed(a2) )
  {
    v7 = *(_DWORD *)(a2 + 948);
    if ( (unsigned int)RIMCmIsButtonContactActiveAndNotSuppressed(a2) )
      --v7;
    if ( !v7 )
    {
      if ( a3 )
      {
        WPP_RECORDER_SF_(gRimLog, 3u, 0x16u, 0xEu, (__int64)&WPP_1d560ea3071837ea967d085c5b3f1d37_Traceguids);
        return 1;
      }
      else if ( (*(_DWORD *)(a2 + 308) & 0x20) == 0 || (unsigned int)RIMGetPointerInputType(a2) != 5 )
      {
        v8 = (_QWORD **)(a1 + 448);
        for ( i = *v8; i != v8; i = (_QWORD *)*i )
        {
          v10 = RIMGetPointerInputType(*(i - 1));
          if ( v10 != (unsigned int)RIMGetPointerInputType(a2) )
          {
            v12 = *(i - 1);
            v13 = *(_DWORD *)(v12 + 948);
            if ( v13 )
            {
              LOBYTE(v11) = 3;
              WPP_RECORDER_SF_dd(
                gRimLog,
                v11,
                22,
                15,
                (__int64)&WPP_1d560ea3071837ea967d085c5b3f1d37_Traceguids,
                *(_DWORD *)(v12 + 24),
                v13);
              return 1;
            }
          }
        }
      }
    }
  }
  return v6;
}
