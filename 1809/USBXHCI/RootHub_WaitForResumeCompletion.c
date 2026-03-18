/*
 * XREFs of RootHub_WaitForResumeCompletion @ 0x1C0022CB0
 * Callers:
 *     RootHub_HandleResumedPorts @ 0x1C001E648 (RootHub_HandleResumedPorts.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0006530 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     WPP_RECORDER_SF_d @ 0x1C00091C4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 *     XilRegister_ReadUlong @ 0x1C001D374 (XilRegister_ReadUlong.c)
 */

__int64 __fastcall RootHub_WaitForResumeCompletion(_QWORD *a1, int a2, int *a3)
{
  __int64 v6; // r13
  unsigned int *v7; // r12
  __int64 v8; // r15
  int Ulong; // eax
  __int64 result; // rax
  int v11; // ebx
  unsigned int v12; // esi
  int v13; // edx
  int v14; // edx
  __int64 v15; // [rsp+28h] [rbp-40h]
  __int64 v16; // [rsp+30h] [rbp-38h]

  v6 = *(_QWORD *)(a1[1] + 88LL);
  v7 = (unsigned int *)(a1[5] + 16LL * (unsigned int)(a2 - 1));
  v8 = a1[6] + 80LL * (unsigned int)(a2 - 1);
  Ulong = XilRegister_ReadUlong(v6, v7);
  *a3 = Ulong;
  result = WPP_RECORDER_SF_dd(
             *(_QWORD *)(a1[1] + 72LL),
             4u,
             0xBu,
             0xE0u,
             (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
             a2,
             Ulong);
  v11 = *a3;
  v12 = 0;
  v13 = *a3;
  while ( v13 != -1 )
  {
    if ( !*(_BYTE *)(v8 + 18) )
      break;
    result = v13 & 0x203;
    if ( (_DWORD)result != 515 )
      break;
    if ( (v13 & 0x20000) != 0 )
      break;
    v14 = v13 & 0x1E0;
    if ( v14 != 480 && v14 != 256 )
      break;
    if ( v12 == 3200 )
    {
      MicrosoftTelemetryAssertTriggeredMsgKM();
      ++*(_DWORD *)(a1[1] + 416LL);
      LODWORD(v15) = a2;
      return WPP_RECORDER_SF_d(
               *(_QWORD *)(a1[1] + 72LL),
               2u,
               0xBu,
               0xE1u,
               (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
               v15);
    }
    LODWORD(v16) = v12;
    LODWORD(v15) = a2;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(a1[1] + 72LL),
      4u,
      0xBu,
      0xE2u,
      (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
      v15,
      v16);
    ++v12;
    KeStallExecutionProcessor(0xAu);
    result = XilRegister_ReadUlong(v6, v7);
    *a3 = result;
    v13 = result;
    if ( (_DWORD)result != v11 )
    {
      LODWORD(v16) = result;
      LODWORD(v15) = a2;
      result = WPP_RECORDER_SF_dd(
                 *(_QWORD *)(a1[1] + 72LL),
                 4u,
                 0xBu,
                 0xE3u,
                 (__int64)&WPP_29da58aa2a873170ec8545c9368658c2_Traceguids,
                 v15,
                 v16);
      v13 = *a3;
    }
  }
  if ( v12 > 0x4B0 )
  {
    result = a1[1];
    ++*(_DWORD *)(result + 420);
  }
  return result;
}
