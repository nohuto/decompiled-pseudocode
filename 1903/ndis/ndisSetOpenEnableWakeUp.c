/*
 * XREFs of ndisSetOpenEnableWakeUp @ 0x1C0077010
 * Callers:
 *     ndisSetEnableWakeUp @ 0x1C0076A44 (ndisSetEnableWakeUp.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ndisGetCombinedPMConfig @ 0x1C0035188 (ndisGetCombinedPMConfig.c)
 *     WPP_RECORDER_SF_qqDd @ 0x1C0069CEC (WPP_RECORDER_SF_qqDd.c)
 *     ndisConvertWakeUpEnableToPMConfig @ 0x1C0072A6C (ndisConvertWakeUpEnableToPMConfig.c)
 */

__int64 __fastcall ndisSetOpenEnableWakeUp(__int64 a1, __int64 a2, _BYTE *a3)
{
  _DWORD *v3; // rbx
  _BYTE *v4; // r14
  __int64 v5; // rdi
  bool v7; // cf
  unsigned int v8; // ebx
  int v9; // ecx
  char v11; // [rsp+30h] [rbp-38h]
  char v12[4]; // [rsp+40h] [rbp-28h]

  v3 = *(_DWORD **)(a1 + 16);
  v4 = a3;
  v5 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      16,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      a1,
      v11);
  }
  v7 = *(_DWORD *)(v5 + 48) < 4u;
  *v4 = 1;
  if ( v7 )
  {
    *(_DWORD *)(v5 + 56) = 4;
    *(_DWORD *)(v5 + 52) = 0;
    v8 = -1073741823;
  }
  else
  {
    LODWORD(a3) = 2;
    v9 = **(_DWORD **)(v5 + 40);
    if ( (v9 & 1) != 0 && (unsigned int)(v3[275] - 2) > 2
      || (v9 & 2) != 0 && (unsigned int)(v3[276] - 2) > 2
      || (v9 & 4) != 0 && (unsigned int)(v3[277] - 2) > 2 )
    {
      v8 = -1073741811;
    }
    else
    {
      ndisConvertWakeUpEnableToPMConfig(*(_DWORD *)(a1 + 304), a1 + 308, 2);
      ndisGetCombinedPMConfig((__int64)v3, (__int64)(v3 + 280));
      v8 = 0;
      *(_DWORD *)(v5 + 52) = 4;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v12 = (unsigned __int8)*v4;
    WPP_RECORDER_SF_qqDd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      (int)a3,
      0x11u,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      a1,
      v5,
      v8,
      *(_DWORD *)v12);
  }
  return v8;
}
