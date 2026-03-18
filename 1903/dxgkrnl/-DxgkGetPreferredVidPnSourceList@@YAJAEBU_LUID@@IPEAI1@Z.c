/*
 * XREFs of ?DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z @ 0x1C00D0C2C
 * Callers:
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00D09F0 (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x1C000382C (-MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FBA60 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkGetPreferredVidPnSourceList(const struct _LUID *a1, __int64 a2, char *a3, char *a4)
{
  __int64 v5; // r13
  const struct _LUID *v7; // rdi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  DXGADAPTER *v13; // rsi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rbx
  ADAPTER_DISPLAY *v19; // r15
  int v20; // ebp
  __int64 v21; // rdx
  int v22; // r11d
  __int64 v23; // rcx
  char *v24; // rbx
  __int64 v25; // r12
  unsigned __int64 v26; // rdi
  unsigned int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned int v30; // esi
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned int v34; // eax
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  unsigned __int64 v39; // [rsp+20h] [rbp-E8h] BYREF
  const struct _LUID *v40; // [rsp+28h] [rbp-E0h]
  _BYTE v41[8]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v42[64]; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v43[72]; // [rsp+78h] [rbp-90h] BYREF

  v5 = (unsigned int)a2;
  v40 = a1;
  v7 = a1;
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
  v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *v7, &v39);
  v13 = v9;
  if ( !v9 )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10, v12);
    LODWORD(v18) = -1073741811;
    v35[3] = v7->HighPart;
    v35[4] = v7->LowPart;
    v35[5] = -1073741811LL;
    WdLogEvent5_WdError(v35);
    return (unsigned int)v18;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v41, v9, 0LL);
  DXGADAPTER::ReleaseReferenceNoTracking(v13);
  v14 = COREADAPTERACCESS::AcquireShared((__int64)v41, 0xFFFFFFFFLL, 0LL);
  v18 = v14;
  if ( v14 < 0 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15, v17);
    goto LABEL_35;
  }
  v19 = (ADAPTER_DISPLAY *)*((_QWORD *)v13 + 319);
  if ( !v19 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15, v17);
    v18 = -1073741811LL;
    goto LABEL_35;
  }
  v20 = 0;
  v21 = 0LL;
  v22 = -1;
  if ( (_DWORD)v5 )
  {
    do
    {
      v23 = *(unsigned int *)&a4[4 * v21];
      v18 = (unsigned int)v21;
      if ( (_DWORD)v23 != -1 )
      {
        if ( (unsigned int)v23 >= *((_DWORD *)v19 + 20) )
        {
          v36 = (_QWORD *)WdLogNewEntry5_WdError(v23, v21, v17);
          v37 = *(unsigned int *)&a4[4 * v18];
          LODWORD(v18) = -1071774972;
          v36[3] = v37;
          v36[4] = v7->HighPart;
          v36[5] = v7->LowPart;
          v36[6] = -1071774972LL;
          goto LABEL_36;
        }
        v20 |= 1 << v23;
      }
      v21 = (unsigned int)(v21 + 1);
    }
    while ( (unsigned int)v21 < (unsigned int)v5 );
    v24 = a4;
    v39 = a3 - a4;
    v25 = v5;
    v26 = v39;
    do
    {
      if ( *(_DWORD *)v24 == v22 )
      {
        v27 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(v19, *(_DWORD *)&v24[v26]);
        v30 = v27;
        if ( v27 != v22 )
        {
          if ( v27 >= *((_DWORD *)v19 + 20) )
          {
            v38 = WdLogNewEntry5_WdAssertion(v29, v28);
            *(_QWORD *)(v38 + 24) = 8250LL;
            WdLogEvent5_WdAssertion(v38);
            v22 = -1;
          }
          if ( ((1 << v30) & v20) == 0 )
          {
            *(_DWORD *)v24 = v30;
            v20 |= 1 << v30;
          }
        }
      }
      v24 += 4;
      --v25;
    }
    while ( v25 );
    v7 = v40;
  }
  v31 = 0LL;
  v32 = 0LL;
  if ( !(_DWORD)v5 )
  {
LABEL_19:
    LODWORD(v18) = 0;
    goto LABEL_20;
  }
  while ( *(_DWORD *)a4 != v22 )
  {
LABEL_18:
    v32 = (unsigned int)(v32 + 1);
    a4 += 4;
    if ( (unsigned int)v32 >= (unsigned int)v5 )
      goto LABEL_19;
  }
  v34 = *((_DWORD *)v19 + 20);
  while ( (unsigned int)v31 < v34 && _bittest(&v20, v31) )
    v31 = (unsigned int)(v31 + 1);
  if ( (unsigned int)v31 < v34 )
  {
    *(_DWORD *)a4 = v31;
    v20 |= 1 << v31;
    v31 = (unsigned int)(v31 + 1);
    goto LABEL_18;
  }
  v36 = (_QWORD *)WdLogNewEntry5_WdError(v31, v32, v17);
  v18 = -1071774975LL;
LABEL_35:
  v36[3] = v7->HighPart;
  v36[4] = v7->LowPart;
  v36[5] = v18;
LABEL_36:
  WdLogEvent5_WdError(v36);
LABEL_20:
  COREACCESS::~COREACCESS((COREACCESS *)v43);
  COREACCESS::~COREACCESS((COREACCESS *)v42);
  return (unsigned int)v18;
}
