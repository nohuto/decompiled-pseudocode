/*
 * XREFs of RIMReadInput @ 0x1C00E42E0
 * Callers:
 *     NtRIMReadInput @ 0x1C00DFA60 (NtRIMReadInput.c)
 *     ?Read@CBaseInput@@QEAAJXZ @ 0x1C01241A0 (-Read@CBaseInput@@QEAAJXZ.c)
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C000F350 (RawInputManagerObjectResolveHandle.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C000F3BC (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_q @ 0x1C00739CC (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qdqqq @ 0x1C00E61EC (WPP_RECORDER_SF_qdqqq.c)
 *     rimConvertUserToKernelEventHandle @ 0x1C00F2434 (rimConvertUserToKernelEventHandle.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C00FCB10 (rimHandleAnyPnpRemovePendingDevices.c)
 *     rimCompleteReads @ 0x1C00FDEF4 (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C00FE140 (rimIssueReads.c)
 */

__int64 __fastcall RIMReadInput(char *a1, __int64 a2, int a3, __int64 a4, int a5, __int64 a6, __int64 a7, __int64 a8)
{
  int v11; // esi
  char *v12; // rdi
  char *v13; // r13
  char *v14; // r15
  int v15; // edx
  _DWORD *v16; // rbx
  int v17; // r9d
  __int64 v19; // [rsp+28h] [rbp-48h]
  HANDLE Handle; // [rsp+50h] [rbp-20h] BYREF
  PVOID Object; // [rsp+58h] [rbp-18h] BYREF
  _DWORD v22[4]; // [rsp+60h] [rbp-10h] BYREF

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x52u,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
  v11 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v11 >= 0 )
  {
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)v22, 1, 0);
    v12 = (char *)Object;
    v13 = (char *)Object + 96;
    RIMLockExclusive((__int64)Object + 96);
    if ( v12[73] || v12[75] )
    {
      v11 = -1073741637;
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        0x13u,
        0x57u,
        (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
    }
    else
    {
      rimHandleAnyPnpRemovePendingDevices((ULONG_PTR)v12);
      v11 = rimConvertUserToKernelEventHandle(a4, &Handle);
      if ( v11 < 0 )
      {
        WPP_RECORDER_SF_q(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x13u,
          0x56u,
          (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids,
          a4);
      }
      else
      {
        v14 = v12 + 552;
        RIMLockExclusive((__int64)(v12 + 552));
        if ( *((_QWORD *)v12 + 78) && !*((_DWORD *)v12 + 213) )
          rimIssueReads(v12);
        if ( v12[568] )
        {
          if ( *((_QWORD *)v12 + 78) )
          {
            v17 = 85;
          }
          else
          {
            v11 = -1073740682;
            v17 = 84;
          }
          v12 = (char *)Object;
          WPP_RECORDER_SF_qdqqq(
            WPP_GLOBAL_Control->DeviceExtension,
            v15,
            19,
            v17,
            (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids,
            (char)Object,
            *((_DWORD *)Object + 213) != 0,
            a4,
            (char)Handle,
            (char)KeGetCurrentThread());
          ZwClose(Handle);
        }
        else
        {
          v12[568] = 1;
          *((_QWORD *)v12 + 79) = Handle;
          *((_QWORD *)v12 + 82) = a6;
          *((_QWORD *)v12 + 81) = a7;
          *((_QWORD *)v12 + 83) = a8;
          *((_QWORD *)v12 + 84) = a2;
          *((_DWORD *)v12 + 170) = a3;
          *((_DWORD *)v12 + 160) = a5;
          v16 = v12 + 852;
          v12 = (char *)Object;
          WPP_RECORDER_SF_qdqqq(
            WPP_GLOBAL_Control->DeviceExtension,
            v15,
            20,
            83,
            (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids,
            (char)Object,
            *v16 != 0,
            a4,
            (char)Handle,
            (char)KeGetCurrentThread());
          if ( !*v16 )
          {
            rimIssueReads(v12);
            v11 = rimCompleteReads(v12);
          }
        }
        *((_QWORD *)v14 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v14, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    *((_QWORD *)v13 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v13, 0LL);
    KeLeaveCriticalRegion();
    if ( v22[0] && !v22[1] && (int)IsLeaveEditionCritSupported() >= 0 )
      LeaveEditionCrit();
    ObfDereferenceObject(v12);
  }
  LODWORD(v19) = v11;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x58u,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids,
    v19);
  return (unsigned int)v11;
}
