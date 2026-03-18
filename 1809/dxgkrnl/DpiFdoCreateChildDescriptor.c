/*
 * XREFs of DpiFdoCreateChildDescriptor @ 0x1C0146674
 * Callers:
 *     DpiFdoEnumChildDevices @ 0x1C0146340 (DpiFdoEnumChildDevices.c)
 *     DpiFdoHandleTargetConnectionState @ 0x1C0265BE4 (DpiFdoHandleTargetConnectionState.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000411C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DpiAcpiGetAcpiChildName @ 0x1C0146824 (DpiAcpiGetAcpiChildName.c)
 *     DpiFdoReleaseChildDescriptor @ 0x1C0266A30 (DpiFdoReleaseChildDescriptor.c)
 */

__int64 __fastcall DpiFdoCreateChildDescriptor(__int64 a1, int a2, char a3, _DWORD *a4, __int128 *a5, int a6)
{
  unsigned int v6; // edi
  char *PoolWithTag; // rax
  __int64 v12; // rcx
  char *v13; // rbx
  __int16 v14; // ax
  __int128 v15; // xmm0
  struct _KMUTANT *v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  _QWORD *v19; // rbx
  _QWORD *v20; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax

  v6 = 0;
  if ( a3 || *a4 == 1 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x80uLL, 0x74727044u);
    v13 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x80uLL);
      *((_DWORD *)v13 + 5) = a6;
      *((_DWORD *)v13 + 14) = 1;
      *((_DWORD *)v13 + 6) = a2;
      v13[67] = a3;
      if ( *a4 == 3 )
      {
        *(_DWORD *)v13 = 1;
        *(_OWORD *)(v13 + 4) = *a5;
        *((_DWORD *)v13 + 1) = 0x80000000;
        *((_DWORD *)v13 + 2) = 1;
        v13[12] = 0;
        *((_DWORD *)v13 + 22) = *(_DWORD *)a5;
        v14 = *((_WORD *)a5 + 2);
      }
      else
      {
        *(_DWORD *)v13 = *a4;
        v14 = 0;
        v15 = *a5;
        *(_DWORD *)(v13 + 94) = 0;
        *(_OWORD *)(v13 + 4) = v15;
      }
      *((_WORD *)v13 + 46) = v14;
      *((_DWORD *)v13 + 17) = 1;
      v16 = (struct _KMUTANT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x74727044u);
      *((_QWORD *)v13 + 9) = v16;
      if ( v16 )
      {
        KeInitializeMutex(v16, 0);
        if ( a3 && *(_BYTE *)(a1 + 1149) == 1 )
          *((_QWORD *)v13 + 10) = DpiAcpiGetAcpiChildName(a1);
        if ( *(_DWORD *)v13 == 1 )
        {
          v18 = *(_DWORD *)(a1 + 3408) + 1;
          *(_DWORD *)(a1 + 3408) = v18;
          if ( *(_BYTE *)(a1 + 1144) )
          {
            if ( v18 == 1 || IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)a5) )
              dword_1C008EA8C = a2;
          }
        }
        v19 = v13 + 32;
        v20 = *(_QWORD **)(a1 + 3400);
        if ( *v20 != a1 + 3392 )
          __fastfail(3u);
        *v19 = a1 + 3392;
        v19[1] = v20;
        *v20 = v19;
        *(_QWORD *)(a1 + 3400) = v19;
      }
      else
      {
        v6 = -1073741801;
        v24 = WdLogNewEntry5_WdLowResource(v17);
        *(_QWORD *)(v24 + 24) = -1073741801LL;
        WdLogEvent5_WdLowResource(v24);
        DpiFdoReleaseChildDescriptor(v13);
      }
    }
    else
    {
      v6 = -1073741801;
      v23 = WdLogNewEntry5_WdLowResource(v12);
      *(_QWORD *)(v23 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v23);
    }
  }
  else
  {
    v6 = -1073741811;
    v22 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v22 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v22);
  }
  return v6;
}
