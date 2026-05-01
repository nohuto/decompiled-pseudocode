/*
 * XREFs of ?Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPEAV12@@Z @ 0x18006EE68
 * Callers:
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180068A38 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 *     ?RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4_RM_REVOKE_REASON_INTERNAL@@W4_RM_REVOKE_POLICY@@PEAVResourceSet@ExecutionModel@@@Z @ 0x18006EB28 (-RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV-$list@V-$CComPtr@VBaseResourceSet@ExecutionM.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x180011DC0 (TraceLoggingProviderEnabled.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18001D960 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall ExecutionModel::ResourceSet::Revoke(__int64 a1, char a2, int a3, __int64 a4, __int64 a5)
{
  int v5; // eax
  __int64 v9; // rdx
  UCHAR v10; // dl
  int v11; // r14d
  __int64 v12; // rcx
  __int16 v13; // r9
  char v14; // r10
  __int64 v15; // rbx
  char v17; // [rsp+30h] [rbp-D0h] BYREF
  char v18; // [rsp+31h] [rbp-CFh] BYREF
  char v19; // [rsp+32h] [rbp-CEh] BYREF
  unsigned int v20; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v21; // [rsp+38h] [rbp-C8h] BYREF
  int v22; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B0h] BYREF
  char v26[24]; // [rsp+60h] [rbp-A0h] BYREF
  char v27; // [rsp+78h] [rbp-88h] BYREF
  char v28; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v30; // [rsp+D0h] [rbp-30h]
  __int64 v31; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E0h] [rbp-20h] BYREF
  __int64 *v33; // [rsp+F0h] [rbp-10h]
  __int64 v34; // [rsp+F8h] [rbp-8h]
  int *v35; // [rsp+100h] [rbp+0h]
  __int64 v36; // [rsp+108h] [rbp+8h]
  __int64 *v37; // [rsp+110h] [rbp+10h]
  __int64 v38; // [rsp+118h] [rbp+18h]
  __int16 *v39; // [rsp+120h] [rbp+20h]
  __int64 v40; // [rsp+128h] [rbp+28h]
  int *v41; // [rsp+130h] [rbp+30h]
  __int64 v42; // [rsp+138h] [rbp+38h]
  __int64 *v43; // [rsp+140h] [rbp+40h]
  __int64 v44; // [rsp+148h] [rbp+48h]
  unsigned int *v45; // [rsp+150h] [rbp+50h]
  __int64 v46; // [rsp+158h] [rbp+58h]
  char *v47; // [rsp+160h] [rbp+60h]
  __int64 v48; // [rsp+168h] [rbp+68h]
  char *v49; // [rsp+170h] [rbp+70h]
  __int64 v50; // [rsp+178h] [rbp+78h]

  v5 = *(_DWORD *)(a1 + 1284);
  if ( (v5 & 1) != 0 )
  {
    if ( hProvider > 4u )
    {
      LOBYTE(v5) = TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL);
      if ( (_BYTE)v5 )
      {
        v9 = *(_QWORD *)(a1 + 1320);
        v23 = *(_QWORD *)(a1 + 1752);
        v31 = 8LL;
        v30 = &v23;
        TlgCreateWsz(&pDesc, (LPCWSTR)(v9 + 88));
        v24 = *(_QWORD *)(*(_QWORD *)(a1 + 1320) + 32LL);
        v33 = &v24;
        v35 = &v22;
        v37 = (__int64 *)&v17;
        v34 = 8LL;
        v22 = a3;
        v36 = 4LL;
        v17 = a2;
        v38 = 1LL;
        LOBYTE(v5) = TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180095567, 0LL, 0LL, 7u, &pData);
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1284) = v5 | 1;
    *(_DWORD *)(a1 + 1772) = GetTickCount();
    HIBYTE(v20) = 0;
    *(_WORD *)((char *)&v20 + 1) = -1;
    LOBYTE(v20) = a2;
    if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&hProvider, v10, 0LL) )
    {
      RmpSystemMemoryMetricsQuery(
        *(struct _RM_PARTITION **)(*(_QWORD *)(a1 + 1312) + 64LL),
        (struct _RM_SYSTEM_MEMORY_METRICS *)v26);
      if ( a5 )
      {
        v11 = *(_DWORD *)(a5 + 1288);
        v12 = *(_QWORD *)(a5 + 1752);
      }
      else
      {
        LOBYTE(v11) = 101;
        v12 = -1LL;
      }
      v25 = v12;
      if ( hProvider > 4u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000009uLL) )
        {
          v24 = *(_QWORD *)(a1 + 1752);
          v30 = &v24;
          v17 = *(_BYTE *)(a1 + 1288);
          pDesc.Ptr = (ULONGLONG)&v17;
          v33 = (__int64 *)&v18;
          v35 = (int *)&v19;
          v37 = &v25;
          v21 = *(_WORD *)(a1 + 1336);
          v39 = &v21;
          v41 = &v22;
          v43 = &v23;
          v45 = &v20;
          v47 = &v28;
          v49 = &v27;
          v31 = 8LL;
          *(_QWORD *)&pDesc.Size = 1LL;
          v18 = v14;
          v34 = 1LL;
          v19 = v11;
          v36 = 1LL;
          v38 = 8LL;
          v40 = 2LL;
          LOWORD(v22) = v13;
          v42 = 2LL;
          LODWORD(v23) = a3;
          v44 = 4LL;
          v46 = 1LL;
          v48 = 8LL;
          v50 = 8LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800952AF, 0LL, 0LL, 0xDu, &pData);
        }
      }
    }
    v15 = *(_QWORD *)(a1 + 1712);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v15 + 24LL))(v15, *(_QWORD *)(a1 + 1720), v20);
    LOBYTE(v5) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return v5;
}
