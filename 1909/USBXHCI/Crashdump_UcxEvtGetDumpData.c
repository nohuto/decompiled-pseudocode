/*
 * XREFs of Crashdump_UcxEvtGetDumpData @ 0x1C0040E60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00021E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0008A40 (memmove.c)
 *     memset @ 0x1C0008D80 (memset.c)
 *     CommonBuffer_ReleaseBuffer @ 0x1C000CE9C (CommonBuffer_ReleaseBuffer.c)
 *     Crashdump_CommonBufferAcquire @ 0x1C003FCC8 (Crashdump_CommonBufferAcquire.c)
 *     Crashdump_FreeDeviceContext @ 0x1C003FF0C (Crashdump_FreeDeviceContext.c)
 *     Crashdump_InitializeDeviceContext @ 0x1C0040290 (Crashdump_InitializeDeviceContext.c)
 *     Crashdump_Register_Initialize @ 0x1C00414D0 (Crashdump_Register_Initialize.c)
 *     Crashdump_EventRing_InitializeForDump @ 0x1C00420B4 (Crashdump_EventRing_InitializeForDump.c)
 */

__int64 __fastcall Crashdump_UcxEvtGetDumpData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r12
  _QWORD *v8; // rax
  POOL_TYPE v9; // ecx
  _QWORD *v10; // r13
  unsigned int v11; // esi
  __int64 v12; // rdi
  __int64 v13; // rbp
  _QWORD *PoolWithTag; // rax
  _QWORD *v15; // rbx
  int v16; // edi
  _QWORD **v17; // r14
  int v18; // edx
  int v19; // eax
  POOL_TYPE v20; // ecx
  PVOID v21; // rax
  void *v22; // rcx
  _QWORD *v23; // rdx
  _QWORD *v24; // rax
  unsigned int v25; // ecx
  unsigned int v26; // ebp
  __int64 v27; // r8
  int v28; // edx
  int v29; // edx
  __int64 v32; // [rsp+38h] [rbp-80h]
  _DWORD v33[10]; // [rsp+40h] [rbp-78h] BYREF

  memset(v33, 0, 0x24uLL);
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UcxEvtGetDumpData: Begin\n");
  v7 = (*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
         WPP_MAIN_CB.Dpc.ProcessorHistory,
         a2,
         off_1C00562C0);
  v8 = (_QWORD *)(*(__int64 (__fastcall **)(unsigned __int64, __int64, void *))(WdfFunctions_01023 + 1616))(
                   WPP_MAIN_CB.Dpc.ProcessorHistory,
                   a1,
                   off_1C0056428);
  v9 = *(&WPP_MAIN_CB.AlignmentRequirement + 1);
  v10 = v8;
  v11 = 0;
  v12 = v8[11];
  v13 = v8[15];
  v32 = v8[17];
  *(_QWORD *)(a4 + 16) = Crashdump_Initialize;
  *(_QWORD *)(a4 + 56) = Crashdump_Cleanup;
  *(_QWORD *)(a4 + 24) = Crashdump_SendUrb;
  *(_QWORD *)(a4 + 48) = Crashdump_ResetDevice;
  *(_QWORD *)(a4 + 32) = Crashdump_SendUrbAsync;
  *(_QWORD *)(a4 + 40) = Crashdump_PollForCompletion;
  *(_BYTE *)(a4 + 84) = 0;
  PoolWithTag = ExAllocatePoolWithTag(v9, 0x278uLL, 0x43434858u);
  v15 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v16 = -1073741670;
    goto LABEL_35;
  }
  memset(PoolWithTag, 0, 0x278uLL);
  v17 = (_QWORD **)(v15 + 62);
  v15[63] = v15 + 62;
  v15[62] = v15 + 62;
  v15[61] = v13;
  Crashdump_Register_Initialize(v15, v12, v10);
  v16 = Crashdump_EventRing_InitializeForDump(v15 + 9, v15);
  if ( v16 >= 0 )
  {
    v15[25] = v15;
    v15[26] = v15;
    v15[27] = *(_QWORD *)(*v15 + 40LL) + 32LL;
    v15[41] = v15;
    v15[42] = v15;
    v15[43] = *(_QWORD *)(*v15 + 32LL) + 24LL;
    v16 = Crashdump_CommonBufferAcquire((__int64)v15, 32, (__int64)(v15 + 44));
    if ( v16 >= 0 )
    {
      v18 = *(_DWORD *)(a4 + 80);
      if ( !v18 )
        goto LABEL_8;
      v16 = Crashdump_CommonBufferAcquire((__int64)v15, v18, (__int64)(v15 + 74));
      if ( v16 >= 0 )
      {
        *(_QWORD *)(a4 + 64) = v15[75];
        *(_QWORD *)(a4 + 72) = v15[74];
LABEL_8:
        *((_DWORD *)v15 + 131) = *(_DWORD *)(v7 + 20);
        *(_OWORD *)((char *)v15 + 532) = *(_OWORD *)(v7 + 32);
        *(_OWORD *)((char *)v15 + 548) = *(_OWORD *)(v7 + 48);
        *((_DWORD *)v15 + 141) = *(_DWORD *)(v7 + 64);
        v19 = 20;
        v20 = *(&WPP_MAIN_CB.AlignmentRequirement + 1);
        if ( *(_BYTE *)(88LL * (unsigned int)(*((_DWORD *)v15 + 136) - 1) + *(_QWORD *)(v10[19] + 48LL) + 13) != 2 )
          v19 = 30;
        *((_DWORD *)v15 + 132) = v19;
        v21 = ExAllocatePoolWithTag(v20, 376LL * *((unsigned int *)v15 + 134), 0x43434858u);
        v15[71] = v21;
        if ( v21 )
        {
          memset(v21, 0, 376LL * *((unsigned int *)v15 + 134));
          v25 = *((_DWORD *)v15 + 134);
          if ( v25 )
          {
            v26 = 1;
            while ( 1 )
            {
              memset(v33, 0, 0x24uLL);
              v33[1] = v26;
              memmove(&v33[3], v15 + 68, 4LL * v26);
              v27 = a3;
              if ( v26 != *((_DWORD *)v15 + 134) )
                v27 = 0LL;
              v16 = Crashdump_InitializeDeviceContext(v32, (int)v15, v27, (__int64)v33, v15[71] + 376LL * (v26 - 1));
              if ( v16 < 0 )
                break;
              v25 = *((_DWORD *)v15 + 134);
              if ( v26++ >= v25 )
                goto LABEL_27;
            }
          }
          else
          {
LABEL_27:
            v15[72] = v15[71] + 376LL * (v25 - 1);
            v16 = Crashdump_CommonBufferAcquire((__int64)v15, 64, (__int64)(v15 + 55));
            if ( v16 >= 0 )
            {
              v28 = 2112;
              if ( (*(_DWORD *)(*v15 + 100LL) & 4) == 0 )
                v28 = 1056;
              v16 = Crashdump_CommonBufferAcquire((__int64)v15, v28, (__int64)(v15 + 58));
              if ( v16 >= 0 )
              {
                v29 = *((_DWORD *)v15 + 134);
                *((_DWORD *)v15 + 102) = v29;
                v16 = Crashdump_CommonBufferAcquire((__int64)v15, 8 * v29 + 8, (__int64)(v15 + 52));
                if ( v16 >= 0 )
                {
                  DbgPrintEx(
                    0x93u,
                    3u,
                    "XHCIDUMP: CommonBuffer: Allocated %u pages, %u bytes. Used %u bytes\n",
                    *((_DWORD *)v15 + 128),
                    *((_DWORD *)v15 + 128) << 12,
                    *((_DWORD *)v15 + 129));
                  *((_DWORD *)v15 + 146) = 0;
                  v16 = 0;
                  *(_QWORD *)(a4 + 8) = v15;
                  v15[77] = v10;
                  v10[53] = v15;
                  goto LABEL_35;
                }
              }
            }
          }
        }
        else
        {
          v16 = -1073741670;
        }
      }
    }
  }
  v22 = (void *)v15[71];
  if ( v22 )
  {
    if ( *((_DWORD *)v15 + 134) )
    {
      do
        Crashdump_FreeDeviceContext(v15[71] + 376LL * v11++);
      while ( v11 < *((_DWORD *)v15 + 134) );
      v22 = (void *)v15[71];
    }
    ExFreePoolWithTag(v22, 0x43434858u);
  }
  while ( 1 )
  {
    v23 = *v17;
    if ( *v17 == v17 )
      break;
    if ( (_QWORD **)v23[1] != v17 || (v24 = (_QWORD *)*v23, *(_QWORD **)(*v23 + 8LL) != v23) )
      __fastfail(3u);
    *v17 = v24;
    v24[1] = v17;
    CommonBuffer_ReleaseBuffer(v15[61], v23);
  }
  ExFreePoolWithTag(v15, 0x43434858u);
LABEL_35:
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UcxEvtGetDumpData: End 0x%X\n", v16);
  return (unsigned int)v16;
}
