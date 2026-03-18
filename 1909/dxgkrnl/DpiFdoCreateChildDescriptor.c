/*
 * XREFs of DpiFdoCreateChildDescriptor @ 0x1C017B9A4
 * Callers:
 *     DpiFdoEnumChildDevices @ 0x1C017B670 (DpiFdoEnumChildDevices.c)
 *     DpiFdoHandleTargetConnectionState @ 0x1C02A1890 (DpiFdoHandleTargetConnectionState.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0003E4C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     DpiAcpiGetAcpiChildName @ 0x1C017BB54 (DpiAcpiGetAcpiChildName.c)
 *     DpiFdoReleaseChildDescriptor @ 0x1C02A2710 (DpiFdoReleaseChildDescriptor.c)
 */

__int64 __fastcall DpiFdoCreateChildDescriptor(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, __int128 *a5, int a6)
{
  unsigned int v6; // edi
  char v8; // bp
  int v9; // r15d
  char *PoolWithTag; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char *v16; // rbx
  __int16 v17; // ax
  __int128 v18; // xmm0
  struct _KMUTANT *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // eax
  _QWORD *v25; // rbx
  _QWORD *v26; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax

  v6 = 0;
  v8 = a3;
  v9 = a2;
  if ( (_BYTE)a3 || *a4 == 1 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x74727044u);
    v16 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x80uLL);
      *((_DWORD *)v16 + 5) = a6;
      *((_DWORD *)v16 + 14) = 1;
      *((_DWORD *)v16 + 6) = v9;
      v16[67] = v8;
      if ( *a4 == 3 )
      {
        *(_DWORD *)v16 = 1;
        *(_OWORD *)(v16 + 4) = *a5;
        *((_DWORD *)v16 + 1) = 0x80000000;
        *((_DWORD *)v16 + 2) = 1;
        v16[12] = 0;
        *((_DWORD *)v16 + 22) = *(_DWORD *)a5;
        v17 = *((_WORD *)a5 + 2);
      }
      else
      {
        *(_DWORD *)v16 = *a4;
        v17 = 0;
        v18 = *a5;
        *(_DWORD *)(v16 + 94) = 0;
        *(_OWORD *)(v16 + 4) = v18;
      }
      *((_WORD *)v16 + 46) = v17;
      *((_DWORD *)v16 + 17) = 1;
      v19 = (struct _KMUTANT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x74727044u);
      *((_QWORD *)v16 + 9) = v19;
      if ( v19 )
      {
        KeInitializeMutex(v19, 0);
        if ( v8 && *(_BYTE *)(a1 + 1157) == 1 )
          *((_QWORD *)v16 + 10) = DpiAcpiGetAcpiChildName(a1);
        if ( *(_DWORD *)v16 == 1 )
        {
          v24 = *(_DWORD *)(a1 + 3480) + 1;
          *(_DWORD *)(a1 + 3480) = v24;
          if ( *(_BYTE *)(a1 + 1152) )
          {
            if ( v24 == 1 || IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)a5) )
              dword_1C00A2A8C = v9;
          }
        }
        v25 = v16 + 32;
        v26 = *(_QWORD **)(a1 + 3472);
        if ( *v26 != a1 + 3464 )
          __fastfail(3u);
        *v25 = a1 + 3464;
        v25[1] = v26;
        *v26 = v25;
        *(_QWORD *)(a1 + 3472) = v25;
      }
      else
      {
        v6 = -1073741801;
        v30 = WdLogNewEntry5_WdLowResource(v21, v20, v22, v23);
        *(_QWORD *)(v30 + 24) = -1073741801LL;
        WdLogEvent5_WdLowResource(v30);
        DpiFdoReleaseChildDescriptor(v16);
      }
    }
    else
    {
      v6 = -1073741801;
      v29 = WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
      *(_QWORD *)(v29 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v29);
    }
  }
  else
  {
    v6 = -1073741811;
    v28 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v28 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v28);
  }
  return v6;
}
