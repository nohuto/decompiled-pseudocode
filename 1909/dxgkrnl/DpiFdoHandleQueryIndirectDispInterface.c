/*
 * XREFs of DpiFdoHandleQueryIndirectDispInterface @ 0x1C02AA010
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0008B54 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001D90C (DpiCheckForOutstandingD3Requests.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     DpiQueryMiniportInterface @ 0x1C0167DE0 (DpiQueryMiniportInterface.c)
 */

__int64 __fastcall DpiFdoHandleQueryIndirectDispInterface(__int64 a1, __int16 a2, __int16 a3, _OWORD *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v14; // rax
  int MiniportInterface; // ebx
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int64 v22; // [rsp+20h] [rbp-98h]
  _OWORD v23[7]; // [rsp+30h] [rbp-88h] BYREF

  memset(v23, 0, sizeof(v23));
  v11 = *(_QWORD *)(a1 + 64);
  if ( a3 == 3 )
  {
    if ( (unsigned __int16)a2 >= 0x70u )
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v11 + 484) )
        DpiCheckForOutstandingD3Requests(v11);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v11 + 168), 1u);
      MiniportInterface = DpiQueryMiniportInterface(
                            a1,
                            (__int64)&GUID_DEVINTERFACE_INDIRECT_DISP_KMD,
                            a2,
                            3,
                            v22,
                            (__int64)v23);
      if ( MiniportInterface >= 0 )
      {
        v16 = v23[1];
        *a4 = v23[0];
        v17 = v23[2];
        a4[1] = v16;
        v18 = v23[3];
        a4[2] = v17;
        v19 = v23[4];
        a4[3] = v18;
        v20 = v23[5];
        a4[4] = v19;
        v21 = v23[6];
        a4[5] = v20;
        a4[6] = v21;
      }
      if ( *(_BYTE *)(v11 + 484) )
        DpiEnableD3Requests(*(_QWORD *)(v11 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v11 + 168));
      KeLeaveCriticalRegion();
    }
    else
    {
      v14 = WdLogNewEntry5_WdError(v9, v8, v10);
      MiniportInterface = -1073741789;
      *(_QWORD *)(v14 + 24) = -1073741789LL;
      WdLogEvent5_WdError(v14);
    }
    return (unsigned int)MiniportInterface;
  }
  else
  {
    v12 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    *(_QWORD *)(v12 + 24) = 0LL;
    WdLogEvent5_WdWarning(v12);
    return 3221225659LL;
  }
}
