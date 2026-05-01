/*
 * XREFs of ?Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPEAV12@@Z @ 0x180061E90
 * Callers:
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@@Z @ 0x18005BA38 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 *     ?RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4_RM_REVOKE_REASON_INTERNAL@@W4_RM_REVOKE_POLICY@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180061B48 (-RmpPolicyRevokeResourceSetsForPoolAcquire@@YAXPEAV-$list@V-$CComPtr@VBaseResourceSet@ExecutionM.c)
 * Callees:
 *     TraceLoggingProviderEnabled @ 0x18000CBD4 (TraceLoggingProviderEnabled.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     _TlgCreateSid @ 0x180017BB0 (_TlgCreateSid.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18001B000 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

char __fastcall ExecutionModel::ResourceSet::Revoke(__int64 a1, char a2, int a3, unsigned __int64 a4, __int64 a5)
{
  DWORD TickCount; // eax
  const WCHAR *v10; // rdx
  int v11; // ecx
  __int64 v12; // r10
  UCHAR v13; // dl
  __int64 v14; // rsi
  int v15; // r12d
  int v16; // esi
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // r15d
  const WCHAR *v20; // rdx
  __int64 v21; // r10
  const WCHAR *v22; // rdx
  int v23; // ecx
  __int64 v24; // r10
  char v26; // [rsp+30h] [rbp-D0h] BYREF
  char v27; // [rsp+31h] [rbp-CFh] BYREF
  char v28; // [rsp+32h] [rbp-CEh] BYREF
  unsigned int v29; // [rsp+34h] [rbp-CCh] BYREF
  int v30; // [rsp+38h] [rbp-C8h] BYREF
  int v31; // [rsp+3Ch] [rbp-C4h] BYREF
  int v32; // [rsp+40h] [rbp-C0h] BYREF
  int v33; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v34; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+58h] [rbp-A8h] BYREF
  char v37[24]; // [rsp+60h] [rbp-A0h] BYREF
  char v38; // [rsp+78h] [rbp-88h] BYREF
  char v39; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v41; // [rsp+D0h] [rbp-30h]
  __int64 v42; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+F0h] [rbp-10h] BYREF
  int *v45; // [rsp+100h] [rbp+0h]
  __int64 v46; // [rsp+108h] [rbp+8h]
  int *v47; // [rsp+110h] [rbp+10h]
  __int64 v48; // [rsp+118h] [rbp+18h]
  char *v49; // [rsp+120h] [rbp+20h]
  __int64 v50; // [rsp+128h] [rbp+28h]
  int *v51; // [rsp+130h] [rbp+30h]
  __int64 v52; // [rsp+138h] [rbp+38h]
  __int64 *v53; // [rsp+140h] [rbp+40h]
  __int64 v54; // [rsp+148h] [rbp+48h]
  int *v55; // [rsp+150h] [rbp+50h]
  __int64 v56; // [rsp+158h] [rbp+58h]
  int *v57; // [rsp+160h] [rbp+60h]
  __int64 v58; // [rsp+168h] [rbp+68h]
  __int64 *v59; // [rsp+170h] [rbp+70h]
  __int64 v60; // [rsp+178h] [rbp+78h]
  unsigned int *v61; // [rsp+180h] [rbp+80h]
  __int64 v62; // [rsp+188h] [rbp+88h]
  char *v63; // [rsp+190h] [rbp+90h]
  __int64 v64; // [rsp+198h] [rbp+98h]
  char *v65; // [rsp+1A0h] [rbp+A0h]
  __int64 v66; // [rsp+1A8h] [rbp+A8h]

  TickCount = *(_DWORD *)(a1 + 1404);
  v33 = a3;
  if ( (TickCount & 1) != 0 )
  {
    if ( dword_18009B0B0 > 4u )
    {
      LOBYTE(TickCount) = TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 9uLL);
      if ( (_BYTE)TickCount )
      {
        v10 = *(const WCHAR **)(a1 + 32);
        v34 = *(_QWORD *)(a1 + 1872);
        v41 = &v34;
        v42 = 8LL;
        TlgCreateWsz(&pDesc, v10);
        TlgCreateSid(&v44, (const SID *)(a1 + 64));
        v11 = *(_DWORD *)(a1 + 132);
        v45 = &v32;
        v31 = *(_DWORD *)(a1 + 136);
        v47 = &v31;
        v49 = (char *)(a1 + 144);
        v51 = &v30;
        v53 = (__int64 *)&v26;
        v32 = v11;
        v46 = v12;
        v48 = v12;
        v50 = 8LL;
        v30 = a3;
        v52 = v12;
        v26 = a2;
        v54 = 1LL;
        LOBYTE(TickCount) = TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_18008785E, 0LL, 0LL, 0xAu, &pData);
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 1404) = TickCount | 1;
    TickCount = GetTickCount();
    v14 = *(_QWORD *)(a1 + 1832);
    *(_DWORD *)(a1 + 1892) = TickCount;
    if ( v14 )
    {
      HIBYTE(v29) = 0;
      *(_WORD *)((char *)&v29 + 1) = -1;
      LOBYTE(v29) = a2;
      if ( TraceLoggingProviderEnabled((TraceLoggingHProvider)&dword_18009B0B0, v13, 0LL) )
      {
        RmpSystemMemoryMetricsQuery(
          *(struct _RM_PARTITION **)(*(_QWORD *)(a1 + 1432) + 64LL),
          (struct _RM_SYSTEM_MEMORY_METRICS *)v37);
        if ( a5 )
        {
          v15 = *(_DWORD *)(a5 + 1408);
          v16 = *(_DWORD *)(a5 + 1456);
          v17 = *(_QWORD *)(a5 + 1872);
        }
        else
        {
          LOWORD(v16) = -1;
          LOBYTE(v15) = 101;
          v17 = -1LL;
        }
        v18 = *(_QWORD *)(a1 + 1440);
        v36 = v17;
        if ( a4 > *(_QWORD *)(v18 + 1288) )
          v19 = *(_DWORD *)(a1 + 1412);
        else
          v19 = *(_DWORD *)(a1 + 1408);
        if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 0x400000000009uLL) )
        {
          v20 = *(const WCHAR **)(a1 + 32);
          v35 = *(_QWORD *)(a1 + 1872);
          v41 = &v35;
          v42 = 8LL;
          TlgCreateWsz(&pDesc, v20);
          v30 = *(_DWORD *)(a1 + 136);
          v45 = &v30;
          v26 = *(_BYTE *)(a1 + 1408);
          v47 = (int *)&v26;
          v49 = &v27;
          v51 = (int *)&v28;
          v53 = &v36;
          LOWORD(v31) = *(_WORD *)(a1 + 1456);
          v55 = &v31;
          v57 = &v32;
          LODWORD(v34) = v33;
          v59 = &v34;
          v61 = &v29;
          v63 = &v39;
          v65 = &v38;
          v44.Ptr = a1 + 144;
          *(_QWORD *)&v44.Size = 8LL;
          v46 = v21;
          v48 = 1LL;
          v27 = v19;
          v50 = 1LL;
          v28 = v15;
          v52 = 1LL;
          v54 = 8LL;
          v56 = 2LL;
          LOWORD(v32) = v16;
          v58 = 2LL;
          v60 = v21;
          v62 = 1LL;
          v64 = 8LL;
          v66 = 8LL;
          TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_1800875C0, 0LL, 0LL, 0x10u, &pData);
        }
        v14 = *(_QWORD *)(a1 + 1832);
      }
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v14 + 24LL))(v14, *(_QWORD *)(a1 + 1840), v29);
      LOBYTE(TickCount) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    else if ( dword_18009B0B0 > 4u )
    {
      LOBYTE(TickCount) = TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 0x400000000009uLL);
      if ( (_BYTE)TickCount )
      {
        v22 = *(const WCHAR **)(a1 + 32);
        v35 = *(_QWORD *)(a1 + 1872);
        v41 = &v35;
        v42 = 8LL;
        TlgCreateWsz(&pDesc, v22);
        TlgCreateSid(&v44, (const SID *)(a1 + 64));
        v23 = *(_DWORD *)(a1 + 132);
        v45 = (int *)&v34;
        v33 = *(_DWORD *)(a1 + 136);
        v47 = &v33;
        v49 = (char *)(a1 + 144);
        v51 = &v30;
        LODWORD(v34) = v23;
        v46 = v24;
        v48 = v24;
        v50 = 8LL;
        v30 = a3;
        v52 = v24;
        LOBYTE(TickCount) = TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_18008754D, 0LL, 0LL, 9u, &pData);
      }
    }
  }
  return TickCount;
}
