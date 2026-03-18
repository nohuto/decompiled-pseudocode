/*
 * XREFs of DpQueryServices @ 0x1C0182AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DpQueryServices(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned int v3; // edi
  __int64 v4; // rbp
  unsigned __int16 *v5; // rbx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 (__fastcall *v10)(); // rax
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 (__fastcall *v14)(); // rax
  __int64 v15; // rax
  __int64 v16; // rax

  v3 = 0;
  v4 = (int)a2;
  v5 = a3;
  if ( !a1
    || !a3
    || (a3 = *(unsigned __int16 **)(a1 + 64)) == 0LL
    || *((_DWORD *)a3 + 4) != 1953656900
    || (a2 = 1LL, (unsigned int)(*((_DWORD *)a3 + 5) - 2) > 1) )
  {
    v3 = -1073741811;
LABEL_53:
    v16 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v16 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v16);
    return v3;
  }
  if ( KeGetCurrentIrql() )
  {
    v3 = -1073741811;
    if ( *(_DWORD *)(*((_QWORD *)a3 + 5) + 28LL) >= 0x2003u )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, 1LL);
      v11[3] = 275LL;
      v11[4] = 21LL;
      v11[5] = -1073741811LL;
      WdLogEvent5_WdCriticalError(v11);
    }
    goto LABEL_53;
  }
  v7 = (unsigned int)v4;
  if ( !(_DWORD)v4 )
  {
    if ( v5[1] != 1 )
      goto LABEL_48;
    if ( *v5 == 56 )
    {
      if ( !*((_QWORD *)a3 + 85) )
      {
        v3 = -1073741823;
        v13 = WdLogNewEntry5_WdWarning((unsigned int)v4, 1LL, a3);
        *(_QWORD *)(v13 + 24) = -1073741823LL;
        goto LABEL_32;
      }
      v8 = *((_QWORD *)a3 + 3);
      *((_QWORD *)v5 + 2) = WdpInterfaceReferenceNop;
      *((_QWORD *)v5 + 3) = WdpInterfaceReferenceNop;
      *((_QWORD *)v5 + 6) = DpiAgpSetAgpCommand;
      *((_QWORD *)v5 + 4) = &DpiAgpAllocatePool;
      v10 = DpiAgpFreePool;
LABEL_23:
      *((_QWORD *)v5 + 5) = v10;
      goto LABEL_16;
    }
LABEL_49:
    v3 = -1073741811;
    v12 = WdLogNewEntry5_WdWarning(v7, 1LL, a3);
    v15 = *v5;
    goto LABEL_50;
  }
  v7 = (unsigned int)(v4 - 1);
  if ( (_DWORD)v4 == 1 )
  {
    if ( v5[1] != 1 )
      goto LABEL_48;
    if ( *v5 != 56 )
      goto LABEL_49;
    *((_QWORD *)v5 + 2) = WdpInterfaceReferenceNop;
    *((_QWORD *)v5 + 3) = WdpInterfaceReferenceNop;
    *((_QWORD *)v5 + 4) = DpiDbgReportCreate;
    *((_QWORD *)v5 + 5) = DpiDbgReportSecondaryData;
    v14 = DpiDbgReportComplete;
    goto LABEL_43;
  }
  v7 = (unsigned int)(v4 - 2);
  if ( (_DWORD)v4 == 2 )
  {
    if ( v5[1] != 1 )
      goto LABEL_48;
    if ( *v5 != 56 )
      goto LABEL_49;
    *((_QWORD *)v5 + 2) = WdpInterfaceReferenceNop;
    *((_QWORD *)v5 + 3) = WdpInterfaceReferenceNop;
    *((_QWORD *)v5 + 4) = TdrTimedOperationStart;
    *((_QWORD *)v5 + 5) = TdrTimedOperationDelay;
    v14 = (__int64 (__fastcall *)())TdrTimedOperationWaitForSingleObject;
LABEL_43:
    *((_QWORD *)v5 + 1) = 0LL;
    *((_QWORD *)v5 + 6) = v14;
    goto LABEL_17;
  }
  v7 = (unsigned int)(v4 - 3);
  if ( (_DWORD)v4 == 3 )
  {
    if ( v5[1] != 1 )
      goto LABEL_48;
    if ( *v5 == 72 )
    {
      v8 = *((_QWORD *)a3 + 3);
      *((_QWORD *)v5 + 2) = WdpInterfaceReferenceNop;
      *((_QWORD *)v5 + 3) = WdpInterfaceReferenceNop;
      *((_QWORD *)v5 + 4) = &DpOpenSpbResource;
      *((_QWORD *)v5 + 5) = DpCloseSpbResource;
      *((_QWORD *)v5 + 6) = &DpReadSpbResource;
      *((_QWORD *)v5 + 7) = &DpWriteSpbResource;
      *((_QWORD *)v5 + 8) = &DpSpbResourceIoControl;
      goto LABEL_16;
    }
    goto LABEL_49;
  }
  v7 = (unsigned int)(v4 - 4);
  if ( (_DWORD)v4 != 4 )
  {
    v7 = (unsigned int)(v4 - 5);
    if ( (_DWORD)v4 != 5 )
    {
      if ( (_DWORD)v4 != 6 )
      {
        v3 = -1073741811;
        v12 = WdLogNewEntry5_WdWarning(v7, 1LL, a3);
        *(_QWORD *)(v12 + 24) = v4;
LABEL_33:
        WdLogEvent5_WdWarning(v12);
        return v3;
      }
      if ( *((_BYTE *)a3 + 1159) )
      {
        if ( *v5 == 80 )
        {
          v8 = *((_QWORD *)a3 + 3);
          *((_QWORD *)v5 + 2) = WdpInterfaceReferenceNop;
          *((_QWORD *)v5 + 3) = WdpInterfaceReferenceNop;
          *((_QWORD *)v5 + 4) = &DpiIndirectCbSendMessage;
          *((_QWORD *)v5 + 5) = DpiIndirectCbForceDisplaySwitch;
          *((_QWORD *)v5 + 6) = DpiIndirectCbDisableRenderD3Requests;
          *((_QWORD *)v5 + 7) = DpiIndirectCbNotifyCursorSupportChange;
          *((_QWORD *)v5 + 8) = DpiIndirectCbOpmSetSrmList;
          *((_QWORD *)v5 + 9) = DpiIndirectCbOpmGetSrmListVersion;
          goto LABEL_16;
        }
        goto LABEL_49;
      }
      goto LABEL_31;
    }
    if ( v5[1] != 1 )
      goto LABEL_48;
    if ( *v5 == 48 )
    {
      v8 = *((_QWORD *)a3 + 3);
      *((_QWORD *)v5 + 2) = WdpInterfaceReferenceNop;
      *((_QWORD *)v5 + 3) = WdpInterfaceReferenceNop;
      *((_QWORD *)v5 + 4) = &DpiEnumSystemFirmwareTables;
      v10 = (__int64 (__fastcall *)())DpiReadSystemFirmwareTable;
      goto LABEL_23;
    }
    goto LABEL_49;
  }
  if ( !*((_BYTE *)a3 + 1155) )
  {
LABEL_31:
    v3 = -1073741816;
    v13 = WdLogNewEntry5_WdWarning(v7, 1LL, a3);
    *(_QWORD *)(v13 + 24) = a1;
LABEL_32:
    v12 = v13;
    goto LABEL_33;
  }
  if ( *v5 != 40 )
    goto LABEL_49;
  if ( v5[1] != 1 )
  {
LABEL_48:
    v3 = -1073741811;
    v12 = WdLogNewEntry5_WdWarning(v7, 1LL, a3);
    v15 = v5[1];
LABEL_50:
    *(_QWORD *)(v12 + 24) = v15;
    goto LABEL_33;
  }
  v8 = *((_QWORD *)a3 + 3);
  *((_QWORD *)v5 + 2) = WdpInterfaceReferenceNop;
  *((_QWORD *)v5 + 3) = WdpInterfaceReferenceNop;
  *((_QWORD *)v5 + 4) = DpGetPostDisplayInfoPlusEdid;
LABEL_16:
  *((_QWORD *)v5 + 1) = v8;
LABEL_17:
  WdpInterfaceReferenceNop();
  return v3;
}
