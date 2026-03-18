/*
 * XREFs of DpiReportAdapter @ 0x1C014D500
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014C9EC (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C01BCD04 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C01BEE70 (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     __chkstk_0 @ 0x1C0022D2F (__chkstk_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     McTemplateK0pqUR1qqtqqqqqqx @ 0x1C0043B98 (McTemplateK0pqUR1qqtqqqqqqx.c)
 */

void __fastcall DpiReportAdapter(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  unsigned int v4; // esi
  __int64 v5; // r14
  __int64 v6; // rcx
  _QWORD *PoolWithTag; // rdi
  _QWORD *v8; // rsi
  __int64 v9; // r8
  __int64 v10; // rbx
  __int128 *v11; // rax
  __int64 v12; // rdx
  __int64 (__fastcall *v13)(_QWORD, _QWORD, char *); // rax
  __int64 v14; // rdx
  _OWORD *v15; // rcx
  __int128 v16; // xmm0
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // [rsp+20h] [rbp-E0h]
  __int64 v21; // [rsp+30h] [rbp-D0h]
  __int64 v22; // [rsp+38h] [rbp-C8h]
  __int64 v23; // [rsp+40h] [rbp-C0h]
  __int64 v24; // [rsp+48h] [rbp-B8h]
  __int64 v25; // [rsp+50h] [rbp-B0h]
  __int64 v26; // [rsp+58h] [rbp-A8h]
  __int64 v27; // [rsp+60h] [rbp-A0h]
  __int64 v28; // [rsp+68h] [rbp-98h]
  __int64 v29; // [rsp+70h] [rbp-90h]
  _DWORD v30[1028]; // [rsp+80h] [rbp-80h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  if ( bTracingEnabled )
  {
    v4 = 1;
    if ( *(_DWORD *)(v3 + 2664) )
      v4 = *(_DWORD *)(v3 + 2664);
    v5 = v4;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v4, 0x74727044u);
    if ( PoolWithTag )
    {
      if ( *(_DWORD *)(v3 + 2664) )
      {
        v19 = 0LL;
        do
        {
          PoolWithTag[v19] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 2656) + 8 * v19) + 64LL);
          v19 = (unsigned int)(v19 + 1);
        }
        while ( (unsigned int)v19 < *(_DWORD *)(v3 + 2664) );
      }
      else
      {
        *PoolWithTag = v3;
      }
      v8 = PoolWithTag;
      do
      {
        memset(v30, 0, sizeof(v30));
        v10 = *v8;
        v30[1025] = *(_DWORD *)(*v8 + 500LL);
        v30[1026] = *(_DWORD *)(v10 + 504);
        LOBYTE(v30[1027]) = *(_BYTE *)(v10 + 508);
        v11 = (__int128 *)(v10 + 1104);
        v12 = *(_QWORD *)(v10 + 1104);
        if ( v12 )
        {
          v15 = v30;
          v9 = 2LL;
          do
          {
            v16 = *v11;
            v11 += 8;
            *v15 = v16;
            v15 += 8;
            *(v15 - 7) = *(v11 - 7);
            *(v15 - 6) = *(v11 - 6);
            *(v15 - 5) = *(v11 - 5);
            *(v15 - 4) = *(v11 - 4);
            *(v15 - 3) = *(v11 - 3);
            *(v15 - 2) = *(v11 - 2);
            *(v15 - 1) = *(v11 - 1);
            --v9;
          }
          while ( v9 );
          v30[1024] = 256;
        }
        v13 = *(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(v10 + 616);
        if ( v13 )
        {
          v17 = v13(*(_QWORD *)(v10 + 568), 0LL, (char *)v30 + (v12 != 0 ? 0x100 : 0));
          v14 = (unsigned int)(v17 + v30[1024]);
        }
        else
        {
          v14 = 0LL;
        }
        v30[1024] = v14;
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            LODWORD(v29) = *(_DWORD *)(v10 + 1132);
            LODWORD(v28) = *(_DWORD *)(v10 + 1128);
            LODWORD(v27) = *(_DWORD *)(v10 + 1124);
            LODWORD(v26) = *(_DWORD *)(v10 + 1120);
            LODWORD(v25) = *(_DWORD *)(v10 + 1116);
            LODWORD(v24) = *(_DWORD *)(v10 + 1112);
            LODWORD(v23) = LOBYTE(v30[1027]);
            LODWORD(v22) = v30[1026];
            LODWORD(v21) = v30[1025];
            LODWORD(v20) = v14;
            McTemplateK0pqUR1qqtqqqqqqx(
              LOBYTE(v30[1027]),
              v14,
              (const GUID *)v9,
              a2,
              v20,
              v30,
              v21,
              v22,
              v23,
              v24,
              v25,
              v26,
              v27,
              v28,
              v29,
              *(_QWORD *)(a2 + 276));
          }
        }
        ++v8;
        --v5;
      }
      while ( v5 );
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    else
    {
      v18 = WdLogNewEntry5_WdLowResource(v6);
      *(_QWORD *)(v18 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v18);
    }
  }
}
