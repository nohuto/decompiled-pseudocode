/*
 * XREFs of ?DmmAppendCcdConnectedSetForAdapter@@YAJQEAXPEAU_UNICODE_STRING@@@Z @ 0x1C00D04B8
 * Callers:
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_0_1_ @ 0x1C00EE430 (_BtlPreAcquireSharedAccess_-CCD_BTL_CONNECTIVITY_COLLECTOR--_AppendConnectedSetAdaptersCallback_.c)
 * Callees:
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C0002838 (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00076BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008DC4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     MonitorGetCCDMonitorID @ 0x1C00E84A4 (MonitorGetCCDMonitorID.c)
 */

__int64 __fastcall DmmAppendCcdConnectedSetForAdapter(DXGADAPTER *a1, struct _UNICODE_STRING *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 MaximumLength; // r8
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rdi
  unsigned int v15; // ebp
  __int64 v16; // r15
  __int64 v17; // rax
  unsigned __int16 Length; // ax
  unsigned __int64 v20; // r13
  int CCDMonitorID; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int16 *v26; // [rsp+60h] [rbp+8h]
  unsigned __int64 v27; // [rsp+70h] [rbp+18h] BYREF
  __int64 v28; // [rsp+78h] [rbp+20h] BYREF

  LODWORD(v7) = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v5, v4);
    WdLogEvent5_WdAssertion(v23);
  }
  v8 = *((_QWORD *)a1 + 319);
  if ( !v8 )
    return 0LL;
  v9 = *(_QWORD *)(v8 + 88);
  if ( !v9 )
  {
    v24 = WdLogNewEntry5_WdError(v5, v4, v6);
    *(_QWORD *)(v24 + 24) = a1;
    WdLogEvent5_WdError(v24);
    return 3223192373LL;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v28, v9);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 80) + 72LL));
  v12 = *(_QWORD *)(v9 + 80);
  v13 = *(_QWORD *)(v12 + 24);
  if ( v13 == v12 + 24 )
    goto LABEL_13;
  v14 = v13 - 8;
  if ( !v14 )
    goto LABEL_13;
  v15 = -1073741789;
  while ( 1 )
  {
    if ( !*(_DWORD *)(v14 + 88) )
    {
      v16 = *(_QWORD *)(v14 + 112);
      if ( v16 )
        break;
    }
LABEL_10:
    v17 = *(_QWORD *)(v14 + 8);
    v14 = v17 - 8;
    if ( v17 == v12 + 24 )
      v14 = 0LL;
    if ( !v14 )
      goto LABEL_13;
  }
  Length = a2->Length;
  MaximumLength = a2->MaximumLength;
  if ( a2->Length >= (unsigned __int16)MaximumLength )
    goto LABEL_14;
  v20 = ((unsigned __int16)MaximumLength - (unsigned __int64)Length) >> 1;
  v26 = &a2->Buffer[(unsigned __int64)Length >> 1];
  CCDMonitorID = MonitorGetCCDMonitorID(v16, (unsigned int)v20, v26);
  v7 = CCDMonitorID;
  if ( CCDMonitorID == -2147483643 || CCDMonitorID == -1073741789 )
    goto LABEL_14;
  if ( CCDMonitorID >= 0 )
  {
    RtlStringCchLengthW(v26, (unsigned int)v20, &v27);
    MaximumLength = (unsigned __int16)v27;
    LOWORD(MaximumLength) = 2 * v27;
    a2->Length += 2 * v27;
    if ( a2->Length >= a2->MaximumLength )
      goto LABEL_14;
    v10 = 94LL;
    a2->Buffer[(unsigned __int64)a2->Length >> 1] = 94;
    a2->Length += 2;
    LODWORD(v7) = 0;
    goto LABEL_10;
  }
  v25 = WdLogNewEntry5_WdWarning(v22, v10, MaximumLength);
  *(_QWORD *)(v25 + 24) = v16;
  *(_QWORD *)(v25 + 32) = v7;
  WdLogEvent5_WdWarning(v25);
LABEL_13:
  v15 = v7;
LABEL_14:
  ReferenceCounted::Release((ReferenceCounted *)(v12 + 64), v10, MaximumLength);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v28 + 40));
  return v15;
}
