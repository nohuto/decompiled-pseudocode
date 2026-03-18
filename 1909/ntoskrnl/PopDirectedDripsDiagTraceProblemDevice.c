/*
 * XREFs of PopDirectedDripsDiagTraceProblemDevice @ 0x1408B82D4
 * Callers:
 *     PopDirectedDripsNotifyTransitionFailed @ 0x1408A3F98 (PopDirectedDripsNotifyTransitionFailed.c)
 *     PopDirectedDripsBuildBroadcastTreeFull @ 0x1408B89CC (PopDirectedDripsBuildBroadcastTreeFull.c)
 *     PopDirectedDripsBuildPs4BroadcastTree @ 0x1408B8C9C (PopDirectedDripsBuildPs4BroadcastTree.c)
 *     PopDirectedDripsVisitPs4Device @ 0x1408B9058 (PopDirectedDripsVisitPs4Device.c)
 * Callees:
 *     EtwWrite @ 0x140036670 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

void __fastcall PopDirectedDripsDiagTraceProblemDevice(__int64 a1, int a2)
{
  __int64 v2; // rbx
  REGHANDLE v3; // rdi
  __int64 v4; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-38h] BYREF
  __int64 *v6; // [rsp+48h] [rbp-28h]
  int v7; // [rsp+50h] [rbp-20h]
  int v8; // [rsp+54h] [rbp-1Ch]
  int *v9; // [rsp+58h] [rbp-18h]
  int v10; // [rsp+60h] [rbp-10h]
  int v11; // [rsp+64h] [rbp-Ch]
  int v12; // [rsp+88h] [rbp+18h] BYREF

  v12 = a2;
  v4 = a1;
  v2 = *(_QWORD *)(a1 + 776);
  if ( v2 )
  {
    *(_DWORD *)(v2 + 124) |= 1 << a2;
    if ( PopDiagHandleRegistered )
    {
      v3 = PopDiagHandle;
      if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_PROBLEM_DEVICE) )
      {
        UserData.Reserved = 0;
        v8 = 0;
        v11 = 0;
        UserData.Ptr = v2 + 120;
        UserData.Size = 4;
        v6 = &v4;
        v9 = &v12;
        v10 = 4;
        v7 = 8;
        EtwWrite(v3, &POP_ETW_EVENT_DIRECTED_DRIPS_PROBLEM_DEVICE, 0LL, 3u, &UserData);
      }
    }
  }
}
