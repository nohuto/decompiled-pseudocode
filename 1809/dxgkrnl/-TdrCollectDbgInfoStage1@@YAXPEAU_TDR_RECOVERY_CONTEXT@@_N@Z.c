/*
 * XREFs of ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C020A1C0
 * Callers:
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C020B420 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0012650 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00126D0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DpiGetAdapterDebugData @ 0x1C004321C (DpiGetAdapterDebugData.c)
 *     DpiGetDbgInfoAdapters @ 0x1C00432A0 (DpiGetDbgInfoAdapters.c)
 *     DpiGetGlobalDebugData @ 0x1C0043398 (DpiGetGlobalDebugData.c)
 *     ?_DdiCollectDbgInfoNoLocks@DXGADAPTER@@QEAAJPEBU_DXGKARG_COLLECTDBGINFO@@@Z @ 0x1C01D1EB0 (-_DdiCollectDbgInfoNoLocks@DXGADAPTER@@QEAAJPEBU_DXGKARG_COLLECTDBGINFO@@@Z.c)
 *     ??0CTDR_DUMP_BUFFER@@QEAA@GPEAXK@Z @ 0x1C0209AD0 (--0CTDR_DUMP_BUFFER@@QEAA@GPEAXK@Z.c)
 *     ??0CTDR_DUMP_BUFFER_CANARY@@QEAA@PEAXK@Z @ 0x1C0209B3C (--0CTDR_DUMP_BUFFER_CANARY@@QEAA@PEAXK@Z.c)
 *     ?AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z @ 0x1C0209C78 (-AddSegment@CTDR_DUMP_BUFFER@@QEAAPEAXKK@Z.c)
 *     ?Check@CTDR_DUMP_BUFFER_CANARY@@QEBA_NXZ @ 0x1C0209D0C (-Check@CTDR_DUMP_BUFFER_CANARY@@QEBA_NXZ.c)
 *     ?ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ @ 0x1C0209EF8 (-ShrinkLastSegment@CTDR_DUMP_BUFFER@@AEAAXXZ.c)
 *     ?TdrAllocatePool@@YAPEAX_KW4_POOL_TYPE@@@Z @ 0x1C020A024 (-TdrAllocatePool@@YAPEAX_KW4_POOL_TYPE@@@Z.c)
 *     ?TdrIsDisplayOnlyTdr@@YA_NW4_TDR_TIMEOUT_REASON@@@Z @ 0x1C020B3D4 (-TdrIsDisplayOnlyTdr@@YA_NW4_TDR_TIMEOUT_REASON@@@Z.c)
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C020B970 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 */

void __fastcall TdrCollectDbgInfoStage1(struct _TDR_RECOVERY_CONTEXT *a1, char a2)
{
  PVOID Pool; // rax
  CTDR_DUMP_BUFFER *v5; // rax
  __int64 v6; // rdx
  unsigned int *v7; // rbx
  void *v8; // rcx
  PVOID v9; // rax
  void *v10; // rax
  void *v11; // rbx
  unsigned int *v12; // rbx
  unsigned __int16 v13; // r14
  unsigned int v14; // esi
  unsigned int v15; // r12d
  unsigned int RecentEvents; // ebx
  void *v17; // rax
  unsigned int *v18; // rbx
  char *v19; // rax
  char *v20; // r14
  bool v21; // zf
  UINT v22; // ecx
  char *v23; // rdx
  DXGKARG_COLLECTDBGINFO_EXT *v24; // rax
  DXGADAPTER *v25; // rsi
  const GUID *v26; // r8
  int v27; // ebx
  const GUID *v28; // r8
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rax
  unsigned int *v33; // rbx
  char *v34; // rax
  char *v35; // rbx
  unsigned int v36; // r8d
  int SmbiosInfo; // eax
  __int64 v38; // rcx
  _QWORD *v39; // rax
  unsigned int *v40; // rbx
  char *v41; // rax
  __int64 v42; // rbx
  int AdapterDebugData; // eax
  __int64 v44; // rcx
  _QWORD *v45; // rax
  unsigned int *v46; // rbx
  char IsDisplayOnlyTdr; // al
  int v48; // ecx
  int v49; // r15d
  unsigned int v50; // esi
  unsigned int v51; // ebx
  char *v52; // rax
  char *v53; // r14
  __int64 v54; // r15
  int v55; // ebx
  __int64 v56; // rcx
  _QWORD *v57; // rax
  unsigned int *v58; // rbx
  __int64 v59; // rcx
  CTDR_DUMP_BUFFER *v60; // rbx
  unsigned int v61; // ebx
  char *v62; // rax
  char *v63; // rsi
  __int64 v64; // rax
  __int64 v65; // r9
  __int64 v66; // rcx
  _QWORD *v67; // rax
  unsigned int *v68; // rbx
  char *v69; // rax
  __int64 v70; // rbx
  int GlobalDebugData; // eax
  __int64 v72; // rcx
  _QWORD *v73; // rax
  unsigned int *v74; // rbx
  unsigned __int16 i; // si
  int v76; // r15d
  char *v77; // rax
  char *v78; // rbx
  int v79; // ecx
  __int64 v80; // rcx
  _DWORD *v81; // rax
  unsigned int *v82; // rbx
  _QWORD *v83; // rax
  _DWORD *v84; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD *v85; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD *v86; // [rsp+58h] [rbp-B0h] BYREF
  _DXGKARG_COLLECTDBGINFO v87; // [rsp+60h] [rbp-A8h] BYREF
  int v88; // [rsp+80h] [rbp-88h]
  __int64 v89; // [rsp+84h] [rbp-84h]
  _DWORD v90[28]; // [rsp+98h] [rbp-70h] BYREF

  LODWORD(v85) = *((_DWORD *)a1 + 4);
  if ( !*((_QWORD *)a1 + 355) )
  {
    Pool = TdrAllocatePool(0x260804uLL, PagedPool);
    *((_QWORD *)a1 + 355) = Pool;
    if ( Pool )
    {
      v5 = (CTDR_DUMP_BUFFER *)TdrAllocatePool(0x20uLL, PagedPool);
      if ( v5 )
        v7 = (unsigned int *)CTDR_DUMP_BUFFER::CTDR_DUMP_BUFFER(v5, v6, *((_DWORD **)a1 + 355));
      else
        v7 = 0LL;
      *((_QWORD *)a1 + 357) = v7;
      if ( v7 )
      {
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v7);
        *((_QWORD *)a1 + 356) = v7[6];
        v9 = TdrAllocatePool(0x24uLL, PagedPool);
        *((_QWORD *)a1 + 358) = v9;
        if ( !v9 )
          *((_DWORD *)a1 + 29) |= 2u;
        *((_DWORD *)a1 + 39) = *((_DWORD *)a1 + 4);
        *((_QWORD *)a1 + 20) = *((_QWORD *)a1 + 3);
        *((_DWORD *)a1 + 42) = *((_DWORD *)a1 + 14);
        *((_QWORD *)a1 + 22) = *((_QWORD *)a1 + 8);
        *((_QWORD *)a1 + 23) = *((_QWORD *)a1 + 9);
        *((_QWORD *)a1 + 24) = *((_QWORD *)a1 + 13);
        memmove((char *)a1 + 200, &g_TdrHistory, 0xA18uLL);
        v10 = CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 357), 0xFFFF, 0xAA0u);
        v11 = v10;
        if ( v10 )
        {
          memmove(v10, (char *)a1 + 112, 0xAA0uLL);
          *((_QWORD *)a1 + 359) = v11;
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v12 = (unsigned int *)*((_QWORD *)a1 + 357);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v12);
        *((_QWORD *)a1 + 356) = v12[6];
        *((_DWORD *)a1 + 36) = 0xFFFF;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        *(&v87.Reason + 1) = 32;
        v87.pBuffer = (void *)0x4000000020LL;
        v13 = 0;
        v87.pExtension = (DXGKARG_COLLECTDBGINFO_EXT *)0x4000000020LL;
        v88 = 32;
        v14 = 0;
        v87.BufferSize = 0x4000000040LL;
        v89 = 64LL;
        v87.Reason = 1;
        do
        {
          if ( v14 >= 0x5000 )
            break;
          v15 = *(&v87.Reason + v13);
          RecentEvents = WdLogGetRecentEvents(v13, v15, 0LL, 0LL);
          if ( RecentEvents + v14 > 0x5000 )
            RecentEvents = 20480 - v14;
          if ( RecentEvents )
          {
            v17 = CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 357), (unsigned int)v13 + 16, RecentEvents);
            if ( v17 )
              RecentEvents = WdLogGetRecentEvents(v13, v15, v17, RecentEvents);
            else
              *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          v14 += RecentEvents;
          ++v13;
        }
        while ( v13 < 0xBu );
        v18 = (unsigned int *)*((_QWORD *)a1 + 357);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v18);
        *((_QWORD *)a1 + 356) = v18[6];
        *((_DWORD *)a1 + 36) = 27;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        v19 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 357), 1, 0x200004u);
        v20 = v19;
        if ( v19 )
        {
          v21 = *((_DWORD *)a1 + 4) == 6;
          v22 = 279;
          v23 = v19;
          v87.pBuffer = v19;
          if ( v21 )
            v22 = 321;
          v24 = (DXGKARG_COLLECTDBGINFO_EXT *)*((_QWORD *)a1 + 358);
          v87.Reason = v22;
          v87.BufferSize = 0x200000LL;
          v87.pExtension = v24;
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v84, v23, 0x200000);
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v86, *((char **)a1 + 358), 32);
          v25 = (DXGADAPTER *)*((_QWORD *)a1 + 4);
          if ( (unsigned __int8)TdrIsDisplayOnlyTdr(*((unsigned int *)a1 + 4)) )
          {
            v27 = DXGADAPTER::_DdiCollectDbgInfoNoLocks(v25, &v87, v26);
          }
          else
          {
            DXGADAPTER::AcquireDdiSync((__int64)v25, 1);
            v27 = DXGADAPTER::_DdiCollectDbgInfoNoLocks(v25, &v87, v28);
            DXGADAPTER::ReleaseDdiSync(v25);
          }
          if ( v27 == -2147483643 )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
          }
          else if ( v27 == -1073741822 )
          {
            *((_DWORD *)a1 + 29) |= 4u;
          }
          else if ( v27 < 0 )
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v84) )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            v30 = (_QWORD *)WdLogNewEntry5_WdAssertion(v29);
            v30[3] = a1;
            v30[4] = v20;
            v30[5] = 0x200000LL;
            WdLogEvent5_WdAssertion(v30);
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v86) )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            v32 = (_QWORD *)WdLogNewEntry5_WdAssertion(v31);
            v32[3] = a1;
            v32[4] = *((_QWORD *)a1 + 358);
            v32[5] = 32LL;
            WdLogEvent5_WdAssertion(v32);
          }
          if ( v86 )
            *v86 = 0;
          if ( v84 )
            *v84 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v33 = (unsigned int *)*((_QWORD *)a1 + 357);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v33);
        *((_QWORD *)a1 + 356) = v33[6];
        *((_DWORD *)a1 + 36) = 1;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        v34 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 357), 2, 0x4004u);
        v35 = v34;
        if ( v34 )
        {
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v84, v34, 0x4000);
          SmbiosInfo = DMgrGetSmbiosInfo(v35, v36);
          if ( SmbiosInfo == -2147483643 )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
          }
          else if ( SmbiosInfo < 0 )
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v84) )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            v39 = (_QWORD *)WdLogNewEntry5_WdAssertion(v38);
            v39[3] = a1;
            v39[4] = v35;
            v39[5] = 0x4000LL;
            WdLogEvent5_WdAssertion(v39);
          }
          if ( v84 )
            *v84 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v40 = (unsigned int *)*((_QWORD *)a1 + 357);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v40);
        *((_QWORD *)a1 + 356) = v40[6];
        *((_DWORD *)a1 + 36) = 2;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        v41 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 357), 6, 0x404u);
        v42 = (__int64)v41;
        if ( v41 )
        {
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v84, v41, 1024);
          AdapterDebugData = DpiGetAdapterDebugData(*(_QWORD *)(*((_QWORD *)a1 + 4) + 192LL), v42);
          if ( AdapterDebugData == -2147483643 )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
          }
          else if ( AdapterDebugData < 0 )
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v84) )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            v45 = (_QWORD *)WdLogNewEntry5_WdAssertion(v44);
            v45[3] = a1;
            v45[4] = v42;
            v45[5] = 1024LL;
            WdLogEvent5_WdAssertion(v45);
          }
          if ( v84 )
            *v84 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v46 = (unsigned int *)*((_QWORD *)a1 + 357);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v46);
        *((_QWORD *)a1 + 356) = v46[6];
        *((_DWORD *)a1 + 36) = 6;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        IsDisplayOnlyTdr = TdrIsDisplayOnlyTdr(*((unsigned int *)a1 + 4));
        v49 = (int)v85;
        if ( !IsDisplayOnlyTdr && (_DWORD)v85 != 6 )
        {
          v50 = 8;
          if ( v48 != 3 )
            v50 = 3;
          v51 = 195072;
          if ( v48 != 3 )
            v51 = 0x2000;
          v52 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 357), v50, v51 + 4);
          v53 = v52;
          if ( v52 )
          {
            CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v84, v52, v51);
            v54 = v51;
            v55 = (*(__int64 (__fastcall **)(struct _TDR_RECOVERY_CONTEXT *, char *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 2528LL) + 520LL) + 8LL)
                                                                                            + 600LL))(
                    a1,
                    v53,
                    v51);
            if ( v55 == -2147483643 )
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
            }
            else if ( v55 < 0 )
            {
              *((_DWORD *)a1 + 29) |= 0x80000000;
            }
            if ( CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v84) )
            {
              if ( v55 < 0 )
                *((_DWORD *)a1 + 29) |= 0x40000000u;
            }
            else
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
              v57 = (_QWORD *)WdLogNewEntry5_WdAssertion(v56);
              v57[6] = v50;
              v57[3] = a1;
              v57[4] = v53;
              v57[5] = v54;
              WdLogEvent5_WdAssertion(v57);
            }
            v49 = (int)v85;
            if ( v84 )
              *v84 = 0;
          }
          else
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          v58 = (unsigned int *)*((_QWORD *)a1 + 357);
          CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v58);
          *((_QWORD *)a1 + 356) = v58[6];
          *((_DWORD *)a1 + 36) = v50;
          if ( a2 )
            TdrUpdateDbgReport(a1, 1);
        }
        v59 = *((unsigned int *)a1 + 4);
        if ( (_DWORD)v59 != 3 && !(unsigned __int8)TdrIsDisplayOnlyTdr(v59) && v49 != 6 )
        {
          v60 = (CTDR_DUMP_BUFFER *)*((_QWORD *)a1 + 357);
          CTDR_DUMP_BUFFER::ShrinkLastSegment(v60);
          v61 = *((_DWORD *)v60 + 4) - *((_DWORD *)v60 + 6) - 10248;
          v62 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 357), 4, v61 + 4);
          v63 = v62;
          if ( v62 )
          {
            CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v84, v62, v61);
            v64 = *((_QWORD *)a1 + 358);
            if ( v64 )
              v65 = *(unsigned int *)(v64 + 4);
            else
              v65 = 0LL;
            if ( !(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, char *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 2528LL) + 544LL) + 8LL)
                                                                                             + 344LL))(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 2528LL) + 552LL),
                    *((unsigned int *)a1 + 14),
                    *((_QWORD *)a1 + 8),
                    v65,
                    v63,
                    v61) )
              *((_DWORD *)a1 + 29) |= 0x40000000u;
            if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v84) )
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
              v67 = (_QWORD *)WdLogNewEntry5_WdAssertion(v66);
              v67[3] = a1;
              v67[4] = v63;
              v67[5] = v61;
              WdLogEvent5_WdAssertion(v67);
            }
            if ( v84 )
              *v84 = 0;
          }
          else
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          v68 = (unsigned int *)*((_QWORD *)a1 + 357);
          CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v68);
          *((_QWORD *)a1 + 356) = v68[6];
          *((_DWORD *)a1 + 36) = 4;
          if ( a2 )
            TdrUpdateDbgReport(a1, 1);
        }
        v69 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 357), 9, 0xCu);
        v70 = (__int64)v69;
        if ( v69 )
        {
          CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v84, v69, 8);
          GlobalDebugData = DpiGetGlobalDebugData(v70);
          if ( GlobalDebugData == -2147483643 )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
          }
          else if ( GlobalDebugData < 0 )
          {
            *((_DWORD *)a1 + 29) |= 0x80000000;
          }
          if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v84) )
          {
            *((_DWORD *)a1 + 29) |= 0x40000000u;
            v73 = (_QWORD *)WdLogNewEntry5_WdAssertion(v72);
            v73[3] = a1;
            v73[4] = v70;
            v73[5] = 8LL;
            WdLogEvent5_WdAssertion(v73);
          }
          if ( v84 )
            *v84 = 0;
        }
        else
        {
          *((_DWORD *)a1 + 29) |= 0x80000000;
        }
        v74 = (unsigned int *)*((_QWORD *)a1 + 357);
        CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v74);
        *((_QWORD *)a1 + 356) = v74[6];
        *((_DWORD *)a1 + 36) = 9;
        if ( a2 )
          TdrUpdateDbgReport(a1, 1);
        memset(v90, 0, sizeof(v90));
        if ( (int)DpiGetDbgInfoAdapters((__int64)v90) >= 0 )
        {
          for ( i = 0; i < 7u; ++i )
          {
            v76 = v90[4 * i];
            if ( !v76 )
              break;
            v77 = (char *)CTDR_DUMP_BUFFER::AddSegment(*((CTDR_DUMP_BUFFER **)a1 + 357), (unsigned int)i + 32, 0x14u);
            v78 = v77;
            if ( !v77 )
            {
              *((_DWORD *)a1 + 29) |= 0x80000000;
              return;
            }
            CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY((CTDR_DUMP_BUFFER_CANARY *)&v85, v77, 16);
            *((_DWORD *)v78 + 1) = v90[4 * i + 1];
            *((_DWORD *)v78 + 2) = v90[4 * i + 2];
            v79 = (*((_DWORD *)v78 + 3) ^ v90[4 * i + 3]) & 3;
            *(_DWORD *)v78 = v76;
            *((_DWORD *)v78 + 3) ^= v79;
            if ( !CTDR_DUMP_BUFFER_CANARY::Check((const void **)&v85) )
            {
              *((_DWORD *)a1 + 29) |= 0x40000000u;
              v83 = (_QWORD *)WdLogNewEntry5_WdAssertion(v80);
              v83[3] = a1;
              v83[4] = v78;
              v83[5] = 16LL;
              WdLogEvent5_WdAssertion(v83);
              if ( v85 )
                *v85 = 0;
              return;
            }
            v81 = v85;
            if ( v85 )
            {
              v85 = 0LL;
              *v81 = 0;
            }
            v82 = (unsigned int *)*((_QWORD *)a1 + 357);
            CTDR_DUMP_BUFFER::ShrinkLastSegment((CTDR_DUMP_BUFFER *)v82);
            *((_QWORD *)a1 + 356) = v82[6];
            *((_DWORD *)a1 + 36) = i + 32;
            if ( a2 )
              TdrUpdateDbgReport(a1, 1);
          }
        }
      }
      else
      {
        *((_DWORD *)a1 + 29) |= 2u;
        v8 = (void *)*((_QWORD *)a1 + 355);
        if ( v8 )
          ExFreePoolWithTag(v8, 0x52445476u);
        *((_QWORD *)a1 + 355) = 0LL;
      }
    }
    else
    {
      *((_DWORD *)a1 + 29) |= 2u;
    }
  }
}
