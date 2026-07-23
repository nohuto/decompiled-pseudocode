/*
 * XREFs of PopDirectedDripsDiagTraceProblemDevice @ 0x14087D118
 * Callers:
 *     PopDirectedDripsBuildBroadcastTree @ 0x14087D1F8 (PopDirectedDripsBuildBroadcastTree.c)
 *     PopDirectedDripsBuildPs4BroadcastTree @ 0x14087D478 (PopDirectedDripsBuildPs4BroadcastTree.c)
 *     PopDirectedDripsVisitPs4Device @ 0x14087D6EC (PopDirectedDripsVisitPs4Device.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
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
    *(_DWORD *)(v2 + 108) |= 1 << a2;
    if ( PopDiagHandleRegistered )
    {
      v3 = PopDiagHandle;
      if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DIRECTED_DRIPS_PROBLEM_DEVICE) )
      {
        UserData.Reserved = 0;
        v8 = 0;
        v11 = 0;
        UserData.Ptr = v2 + 104;
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
