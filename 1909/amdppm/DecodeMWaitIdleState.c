/*
 * XREFs of DecodeMWaitIdleState @ 0x1C001C2B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000138C (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall DecodeMWaitIdleState(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 *a5,
        _BYTE *a6,
        _BYTE *a7,
        __int64 a8)
{
  unsigned int v8; // ebx
  __int64 v11; // rax
  __int128 v13; // [rsp+30h] [rbp-28h]
  __int64 v14; // [rsp+40h] [rbp-18h]

  v8 = 0;
  HIDWORD(v14) = 0;
  if ( *(_BYTE *)a2 != 127 || *(_BYTE *)(a2 + 1) != 2 || *(_BYTE *)(a2 + 2) != 2 )
    return (unsigned int)-1073741823;
  v11 = *(_QWORD *)(a1 + 264);
  if ( a3 == -1 )
  {
    if ( (v11 & 0x20000000000LL) != 0 )
    {
LABEL_6:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          3u,
          0xBu,
          (__int64)&WPP_cd3900718fa236a9b5561841211da977_Traceguids);
      *((_QWORD *)&v13 + 1) = *(_QWORD *)(a1 + 200);
      LODWORD(v13) = *(_DWORD *)(a2 + 4);
      DWORD1(v13) = (*(_DWORD *)(a1 + 272) & 0x80000) != 0;
      LODWORD(v14) = 0;
      if ( a5 )
        *a5 = *(unsigned int *)(a2 + 4) | 0x30000000000000LL;
      if ( a8 )
      {
        *(_BYTE *)(a8 + 80) = 1;
        *(_QWORD *)(a8 + 24) = MWaitIdle;
        *(_OWORD *)(a8 + 32) = v13;
        *(_QWORD *)(a8 + 64) = DecodeMWaitContext;
        *(_QWORD *)(a8 + 48) = v14;
        *(_QWORD *)(a8 + 16) = 0LL;
      }
      if ( a6 )
        *a6 = 0;
      if ( a7 )
        *a7 = 1;
      return v8;
    }
  }
  else if ( (v11 & 0x7F000) != 0 )
  {
    goto LABEL_6;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0xAu,
      (__int64)&WPP_cd3900718fa236a9b5561841211da977_Traceguids);
  return (unsigned int)-1073741637;
}
