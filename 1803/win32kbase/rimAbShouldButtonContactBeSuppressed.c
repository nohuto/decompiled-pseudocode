/*
 * XREFs of rimAbShouldButtonContactBeSuppressed @ 0x1C00E6E60
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C00E6F8C (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C00E72F4 (rimAbSuppressLowerRankActivityInFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00E839C (WPP_RECORDER_SF_dd.c)
 *     RIMGetPointerInputType @ 0x1C00ECA34 (RIMGetPointerInputType.c)
 *     RIMCmIsButtonContactActiveAndNotSuppressed @ 0x1C0106CE8 (RIMCmIsButtonContactActiveAndNotSuppressed.c)
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
    v7 = *(_DWORD *)(a2 + 916);
    if ( (unsigned int)RIMCmIsButtonContactActiveAndNotSuppressed(a2) )
      --v7;
    if ( !v7 )
    {
      if ( a3 )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x15u,
          0xEu,
          (__int64)&WPP_a3c0144a064d3537df819a6648b232ca_Traceguids);
        return 1;
      }
      else if ( (*(_DWORD *)(a2 + 276) & 0x20) == 0 || (unsigned int)RIMGetPointerInputType(a2) != 5 )
      {
        v8 = (_QWORD **)(a1 + 432);
        for ( i = *v8; i != v8; i = (_QWORD *)*i )
        {
          v10 = RIMGetPointerInputType(*(i - 1));
          if ( v10 != (unsigned int)RIMGetPointerInputType(a2) )
          {
            v12 = *(i - 1);
            v13 = *(_DWORD *)(v12 + 916);
            if ( v13 )
            {
              LOBYTE(v11) = 3;
              WPP_RECORDER_SF_dd(
                WPP_GLOBAL_Control->DeviceExtension,
                v11,
                21,
                15,
                (__int64)&WPP_a3c0144a064d3537df819a6648b232ca_Traceguids,
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
