/*
 * XREFs of DpiFdoHandleQueryIndirectDispInterface @ 0x1C026CFF0
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000F734 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001DE80 (DpiCheckForOutstandingD3Requests.c)
 *     DxgkStartCoreDripsBlockerTracking @ 0x1C0141A18 (DxgkStartCoreDripsBlockerTracking.c)
 *     DxgkStopCoreDripsBlockerTracking @ 0x1C0141BAC (DxgkStopCoreDripsBlockerTracking.c)
 *     DpiQueryMiniportInterface @ 0x1C014C220 (DpiQueryMiniportInterface.c)
 */

__int64 __fastcall DpiFdoHandleQueryIndirectDispInterface(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int16 v6; // si
  __int64 v8; // rax
  __int64 v10; // rax
  int MiniportInterface; // esi
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // [rsp+20h] [rbp-88h]
  _OWORD v18[6]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v19; // [rsp+90h] [rbp-18h]

  v4 = *(_QWORD *)(a1 + 64);
  v6 = a2;
  if ( (_WORD)a3 == 2 )
  {
    if ( (unsigned __int16)a2 >= 0x68u )
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v4 + 483) )
      {
        DxgkStartCoreDripsBlockerTracking(*(_QWORD *)(v4 + 3816), 4023LL);
        DpiCheckForOutstandingD3Requests(v4);
      }
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v4 + 168), 1u);
      MiniportInterface = DpiQueryMiniportInterface(
                            a1,
                            (__int64)&GUID_DEVINTERFACE_INDIRECT_DISP_KMD,
                            v6,
                            2,
                            v17,
                            (__int64)v18);
      if ( MiniportInterface >= 0 )
      {
        v12 = v18[1];
        *(_OWORD *)a4 = v18[0];
        v13 = v18[2];
        *(_OWORD *)(a4 + 16) = v12;
        v14 = v18[3];
        *(_OWORD *)(a4 + 32) = v13;
        v15 = v18[4];
        *(_OWORD *)(a4 + 48) = v14;
        v16 = v18[5];
        *(_OWORD *)(a4 + 64) = v15;
        *(_QWORD *)&v15 = v19;
        *(_OWORD *)(a4 + 80) = v16;
        *(_QWORD *)(a4 + 96) = v15;
      }
      if ( *(_BYTE *)(v4 + 483) )
      {
        DxgkStopCoreDripsBlockerTracking(*(_QWORD *)(v4 + 3816), 4023LL);
        DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
      KeLeaveCriticalRegion();
      return (unsigned int)MiniportInterface;
    }
    else
    {
      v10 = WdLogNewEntry5_WdError(a1);
      *(_QWORD *)(v10 + 24) = -1073741789LL;
      WdLogEvent5_WdError(v10);
      return 3221225507LL;
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v8 + 24) = 0LL;
    WdLogEvent5_WdWarning(v8);
    return 3221225659LL;
  }
}
