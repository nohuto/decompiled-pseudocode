/*
 * XREFs of RootHub_WaitForResumeCompletion @ 0x1C0027218
 * Callers:
 *     RootHub_HandleResumedPorts @ 0x1C0022124 (RootHub_HandleResumedPorts.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C00082F0 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000B350 (WPP_RECORDER_SF_dd.c)
 *     XilRegister_ReadUlong @ 0x1C0020D1C (XilRegister_ReadUlong.c)
 */

__int64 __fastcall RootHub_WaitForResumeCompletion(_QWORD *a1, int a2, int *a3)
{
  __int64 v6; // r13
  __int64 v7; // r12
  unsigned int *v8; // r15
  __int64 result; // rax
  int v10; // ebx
  unsigned int v11; // esi
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // [rsp+28h] [rbp-40h]
  __int64 v16; // [rsp+30h] [rbp-38h]

  v6 = *(_QWORD *)(a1[1] + 88LL);
  v7 = a1[6] + 88LL * (unsigned int)(a2 - 1);
  v8 = (unsigned int *)(a1[5] + 16LL * (unsigned int)(a2 - 1));
  result = XilRegister_ReadUlong(v6, v8);
  *a3 = result;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = WPP_RECORDER_SF_dd(
               *(_QWORD *)(a1[1] + 72LL),
               4u,
               0xBu,
               0xE0u,
               (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
               a2,
               result);
  v10 = *a3;
  v11 = 0;
  v12 = *a3;
  while ( v12 != -1 )
  {
    if ( !*(_BYTE *)(v7 + 18) )
      break;
    result = v12 & 0x203;
    if ( (_DWORD)result != 515 )
      break;
    if ( (v12 & 0x20000) != 0 )
      break;
    v13 = v12 & 0x1E0;
    if ( v13 != 480 && v13 != 256 )
      break;
    if ( v11 == 6400 )
    {
      MicrosoftTelemetryAssertTriggeredMsgKM();
      v14 = a1[1];
      ++*(_DWORD *)(v14 + 484);
      *(_BYTE *)(v14 + 472) = 1;
      result = (__int64)&WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v15) = a2;
        return WPP_RECORDER_SF_d(
                 *(_QWORD *)(a1[1] + 72LL),
                 2u,
                 0xBu,
                 0xE1u,
                 (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
                 v15);
      }
      return result;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v16) = v11;
      LODWORD(v15) = a2;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xBu,
        0xE2u,
        (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
        v15,
        v16);
    }
    ++v11;
    KeStallExecutionProcessor(0xAu);
    result = XilRegister_ReadUlong(v6, v8);
    *a3 = result;
    v12 = result;
    if ( (_DWORD)result != v10 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v16) = result;
      LODWORD(v15) = a2;
      result = WPP_RECORDER_SF_dd(
                 *(_QWORD *)(a1[1] + 72LL),
                 4u,
                 0xBu,
                 0xE3u,
                 (__int64)&WPP_223dc363e53139f363ea3f17c3b83c15_Traceguids,
                 v15,
                 v16);
      v12 = *a3;
    }
  }
  if ( v11 > 0x4B0 )
  {
    result = a1[1];
    ++*(_DWORD *)(result + 488);
    *(_BYTE *)(result + 472) = 1;
  }
  return result;
}
