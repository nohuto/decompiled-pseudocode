/*
 * XREFs of RegisterHvIdleStates @ 0x1C00202F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002BEC (WPP_RECORDER_SF_D.c)
 *     GetHvPpmCapabilities @ 0x1C00201C8 (GetHvPpmCapabilities.c)
 *     RegisterHvCStates @ 0x1C00203FC (RegisterHvCStates.c)
 *     RegisterHvLpiStates @ 0x1C00206A4 (RegisterHvLpiStates.c)
 *     RegisterVmIdleStates @ 0x1C00215C8 (RegisterVmIdleStates.c)
 */

__int64 __fastcall RegisterHvIdleStates(__int64 a1)
{
  __int64 v1; // rax
  int v3; // ebx
  unsigned __int16 v4; // r9
  bool v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 264);
  v3 = 0;
  if ( (v1 & 0xE0000000000LL) != 0 )
  {
    v3 = RegisterHvLpiStates(a1);
    if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 10;
LABEL_16:
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        v4,
        (__int64)&WPP_aa6b72db0ffa30e8128541a88ae276d2_Traceguids,
        v3);
    }
  }
  else if ( (v1 & 0x200) != 0 )
  {
    v3 = RegisterHvCStates(a1);
    if ( v3 >= 0 )
    {
      GetHvPpmCapabilities(0LL, &v6, 0LL);
      if ( v6 )
        v3 = RegisterVmIdleStates(a1);
    }
    if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 11;
      goto LABEL_16;
    }
  }
  else if ( (v1 & 0x7F077) != 0 )
  {
    v3 = RegisterHvCStates(a1);
    if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v4 = 12;
      goto LABEL_16;
    }
  }
  return (unsigned int)v3;
}
