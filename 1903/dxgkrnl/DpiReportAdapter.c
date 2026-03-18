/*
 * XREFs of DpiReportAdapter @ 0x1C015ED50
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015DEE0 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C01EC2F4 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C01EE3E0 (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     __chkstk_0 @ 0x1C0024E6F (__chkstk_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     McTemplateK0pqUR1qqtqqqqqqx @ 0x1C004B080 (McTemplateK0pqUR1qqtqqqqqqx.c)
 */

void __fastcall DpiReportAdapter(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned int v4; // esi
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *PoolWithTag; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rsi
  __int64 v12; // r8
  __int64 v13; // rbx
  __int128 *v14; // rax
  __int64 v15; // rdx
  __int64 (__fastcall *v16)(_QWORD, _QWORD, char *); // rax
  __int64 v17; // rdx
  _OWORD *v18; // rcx
  __int128 v19; // xmm0
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // [rsp+20h] [rbp-E0h]
  __int64 v24; // [rsp+30h] [rbp-D0h]
  __int64 v25; // [rsp+38h] [rbp-C8h]
  __int64 v26; // [rsp+40h] [rbp-C0h]
  __int64 v27; // [rsp+48h] [rbp-B8h]
  __int64 v28; // [rsp+50h] [rbp-B0h]
  __int64 v29; // [rsp+58h] [rbp-A8h]
  __int64 v30; // [rsp+60h] [rbp-A0h]
  __int64 v31; // [rsp+68h] [rbp-98h]
  __int64 v32; // [rsp+70h] [rbp-90h]
  _DWORD v33[1028]; // [rsp+80h] [rbp-80h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  if ( bTracingEnabled )
  {
    v4 = 1;
    if ( *(_DWORD *)(v3 + 2736) )
      v4 = *(_DWORD *)(v3 + 2736);
    v5 = v4;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v4, 0x74727044u);
    if ( PoolWithTag )
    {
      if ( *(_DWORD *)(v3 + 2736) )
      {
        v22 = 0LL;
        do
        {
          PoolWithTag[v22] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 2728) + 8 * v22) + 64LL);
          v22 = (unsigned int)(v22 + 1);
        }
        while ( (unsigned int)v22 < *(_DWORD *)(v3 + 2736) );
      }
      else
      {
        *PoolWithTag = v3;
      }
      v11 = PoolWithTag;
      do
      {
        memset(v33, 0, sizeof(v33));
        v13 = *v11;
        v33[1025] = *(_DWORD *)(*v11 + 500LL);
        v33[1026] = *(_DWORD *)(v13 + 504);
        LOBYTE(v33[1027]) = *(_BYTE *)(v13 + 508);
        v14 = (__int128 *)(v13 + 1112);
        v15 = *(_QWORD *)(v13 + 1112);
        if ( v15 )
        {
          v18 = v33;
          v12 = 2LL;
          do
          {
            v19 = *v14;
            v14 += 8;
            *v18 = v19;
            v18 += 8;
            *(v18 - 7) = *(v14 - 7);
            *(v18 - 6) = *(v14 - 6);
            *(v18 - 5) = *(v14 - 5);
            *(v18 - 4) = *(v14 - 4);
            *(v18 - 3) = *(v14 - 3);
            *(v18 - 2) = *(v14 - 2);
            *(v18 - 1) = *(v14 - 1);
            --v12;
          }
          while ( v12 );
          v33[1024] = 256;
        }
        v16 = *(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(v13 + 616);
        if ( v16 )
        {
          v20 = v16(*(_QWORD *)(v13 + 568), 0LL, (char *)v33 + (v15 != 0 ? 0x100 : 0));
          v17 = (unsigned int)(v20 + v33[1024]);
        }
        else
        {
          v17 = 0LL;
        }
        v33[1024] = v17;
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(v32) = *(_DWORD *)(v13 + 1140);
            LODWORD(v31) = *(_DWORD *)(v13 + 1136);
            LODWORD(v30) = *(_DWORD *)(v13 + 1132);
            LODWORD(v29) = *(_DWORD *)(v13 + 1128);
            LODWORD(v28) = *(_DWORD *)(v13 + 1124);
            LODWORD(v27) = *(_DWORD *)(v13 + 1120);
            LODWORD(v26) = LOBYTE(v33[1027]);
            LODWORD(v25) = v33[1026];
            LODWORD(v24) = v33[1025];
            LODWORD(v23) = v17;
            McTemplateK0pqUR1qqtqqqqqqx(
              LOBYTE(v33[1027]),
              v17,
              (const GUID *)v12,
              a2,
              v23,
              v33,
              v24,
              v25,
              v26,
              v27,
              v28,
              v29,
              v30,
              v31,
              v32,
              *(_QWORD *)(a2 + 276));
          }
        }
        ++v11;
        --v5;
      }
      while ( v5 );
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    else
    {
      v21 = WdLogNewEntry5_WdLowResource(v7, v6, v9, v10);
      *(_QWORD *)(v21 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v21);
    }
  }
}
