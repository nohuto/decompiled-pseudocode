/*
 * XREFs of ?DmmAppendCcdConnectedSetForAdapter@@YAJQEAXPEAU_UNICODE_STRING@@@Z @ 0x1C00C30F0
 * Callers:
 *     _BtlPreAcquireSharedAccess_&CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_0_1_ @ 0x1C00BF370 (_BtlPreAcquireSharedAccess_-CCD_BTL_CONNECTIVITY_COLLECTOR--_AppendConnectedSetAdaptersCallback_.c)
 * Callees:
 *     ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C0004C10 (-RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000E1D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000EC58 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     MonitorGetCCDMonitorID @ 0x1C00C3268 (MonitorGetCCDMonitorID.c)
 */

__int64 __fastcall DmmAppendCcdConnectedSetForAdapter(DXGADAPTER *a1, struct _UNICODE_STRING *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rdi
  unsigned int v11; // ebp
  __int64 v12; // r15
  __int64 v13; // rax
  unsigned __int16 Length; // ax
  unsigned __int16 MaximumLength; // r8
  unsigned __int64 v17; // r13
  int CCDMonitorID; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int16 *v25; // [rsp+60h] [rbp+8h]
  unsigned __int64 v26; // [rsp+70h] [rbp+18h] BYREF
  __int64 v27; // [rsp+78h] [rbp+20h] BYREF

  LODWORD(v5) = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v22);
  }
  v6 = *((_QWORD *)a1 + 315);
  if ( !v6 )
    return 0LL;
  v7 = *(_QWORD *)(v6 + 88);
  if ( !v7 )
  {
    v23 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v23 + 24) = a1;
    WdLogEvent5_WdError(v23);
    return 3223192373LL;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v27, v7);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v7 + 80) + 72LL));
  v8 = *(_QWORD *)(v7 + 80);
  v9 = *(_QWORD *)(v8 + 24);
  if ( v9 == v8 + 24 )
    goto LABEL_13;
  v10 = v9 - 8;
  if ( !v10 )
    goto LABEL_13;
  v11 = -1073741789;
  while ( 1 )
  {
    if ( !*(_DWORD *)(v10 + 88) )
    {
      v12 = *(_QWORD *)(v10 + 112);
      if ( v12 )
        break;
    }
LABEL_10:
    v13 = *(_QWORD *)(v10 + 8);
    v10 = v13 - 8;
    if ( v13 == v8 + 24 )
      v10 = 0LL;
    if ( !v10 )
      goto LABEL_13;
  }
  Length = a2->Length;
  MaximumLength = a2->MaximumLength;
  if ( a2->Length >= MaximumLength )
    goto LABEL_14;
  v17 = (MaximumLength - (unsigned __int64)Length) >> 1;
  v25 = &a2->Buffer[(unsigned __int64)Length >> 1];
  CCDMonitorID = MonitorGetCCDMonitorID(v12, (unsigned int)v17, v25);
  v5 = CCDMonitorID;
  if ( CCDMonitorID == -2147483643 || CCDMonitorID == -1073741789 )
    goto LABEL_14;
  if ( CCDMonitorID >= 0 )
  {
    RtlStringCchLengthW(v25, (unsigned int)v17, &v26);
    a2->Length += 2 * v26;
    if ( a2->Length >= a2->MaximumLength )
      goto LABEL_14;
    a2->Buffer[(unsigned __int64)a2->Length >> 1] = 94;
    a2->Length += 2;
    LODWORD(v5) = 0;
    goto LABEL_10;
  }
  v24 = WdLogNewEntry5_WdWarning(v20, v19, v21);
  *(_QWORD *)(v24 + 24) = v12;
  *(_QWORD *)(v24 + 32) = v5;
  WdLogEvent5_WdWarning(v24);
LABEL_13:
  v11 = v5;
LABEL_14:
  ReferenceCounted::Release((ReferenceCounted *)(v8 + 64));
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v27 + 40));
  return v11;
}
