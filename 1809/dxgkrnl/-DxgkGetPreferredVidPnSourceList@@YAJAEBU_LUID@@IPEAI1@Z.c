/*
 * XREFs of ?DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z @ 0x1C00BC10C
 * Callers:
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C00BBECC (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x1C0004034 (-MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00E2938 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkGetPreferredVidPnSourceList(const struct _LUID *a1, unsigned int a2, char *a3, char *a4)
{
  __int64 v5; // r15
  const struct _LUID *v6; // rdi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v8; // rax
  __int64 v9; // rcx
  DXGADAPTER *v10; // rsi
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  ADAPTER_DISPLAY *v14; // r14
  int v15; // esi
  __int64 v16; // rdx
  int v17; // r11d
  __int64 v18; // rcx
  char *v19; // rbx
  __int64 v20; // r13
  unsigned int v21; // eax
  __int64 v22; // rcx
  unsigned int v23; // ebp
  __int64 v24; // rcx
  __int64 v25; // rdx
  unsigned int v27; // eax
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned __int64 v32; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v33[8]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v34[32]; // [rsp+38h] [rbp-80h] BYREF
  _BYTE v35[96]; // [rsp+58h] [rbp-60h] BYREF

  v5 = a2;
  v6 = a1;
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  v8 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *v6, &v32);
  v10 = v8;
  if ( !v8 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v9);
    LODWORD(v13) = -1073741811;
    v28[3] = v6->HighPart;
    v28[4] = v6->LowPart;
    v28[5] = -1073741811LL;
    WdLogEvent5_WdError(v28);
    return (unsigned int)v13;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v33, v8, 0LL);
  DXGADAPTER::ReleaseReference(v10);
  v11 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v33);
  v13 = v11;
  if ( v11 < 0 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    goto LABEL_35;
  }
  v14 = (ADAPTER_DISPLAY *)*((_QWORD *)v10 + 315);
  if ( !v14 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v13 = -1073741811LL;
    goto LABEL_35;
  }
  v15 = 0;
  v16 = 0LL;
  v17 = -1;
  if ( (_DWORD)v5 )
  {
    do
    {
      v18 = *(unsigned int *)&a4[4 * v16];
      v13 = (unsigned int)v16;
      if ( (_DWORD)v18 != -1 )
      {
        if ( (unsigned int)v18 >= *((_DWORD *)v14 + 20) )
        {
          v29 = (_QWORD *)WdLogNewEntry5_WdError(v18);
          v30 = *(unsigned int *)&a4[4 * v13];
          LODWORD(v13) = -1071774972;
          v29[3] = v30;
          v29[4] = v6->HighPart;
          v29[5] = v6->LowPart;
          v29[6] = -1071774972LL;
          goto LABEL_36;
        }
        v15 |= 1 << v18;
      }
      v16 = (unsigned int)(v16 + 1);
    }
    while ( (unsigned int)v16 < (unsigned int)v5 );
    v19 = a4;
    v20 = v5;
    do
    {
      if ( *(_DWORD *)v19 == v17 )
      {
        v21 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(v14, *(_DWORD *)&v19[a3 - a4]);
        v23 = v21;
        if ( v21 != v17 )
        {
          if ( v21 >= *((_DWORD *)v14 + 20) )
          {
            v31 = WdLogNewEntry5_WdAssertion(v22);
            *(_QWORD *)(v31 + 24) = 8064LL;
            WdLogEvent5_WdAssertion(v31);
            v17 = -1;
          }
          if ( ((1 << v23) & v15) == 0 )
          {
            *(_DWORD *)v19 = v23;
            v15 |= 1 << v23;
          }
        }
      }
      v19 += 4;
      --v20;
    }
    while ( v20 );
    v6 = a1;
  }
  v24 = 0LL;
  v25 = 0LL;
  if ( !(_DWORD)v5 )
  {
LABEL_19:
    LODWORD(v13) = 0;
    goto LABEL_20;
  }
  while ( *(_DWORD *)&a4[4 * v25] != v17 )
  {
LABEL_18:
    v25 = (unsigned int)(v25 + 1);
    if ( (unsigned int)v25 >= (unsigned int)v5 )
      goto LABEL_19;
  }
  v27 = *((_DWORD *)v14 + 20);
  while ( (unsigned int)v24 < v27 && _bittest(&v15, v24) )
    v24 = (unsigned int)(v24 + 1);
  if ( (unsigned int)v24 < v27 )
  {
    *(_DWORD *)&a4[4 * v25] = v24;
    v15 |= 1 << v24;
    v24 = (unsigned int)(v24 + 1);
    goto LABEL_18;
  }
  v29 = (_QWORD *)WdLogNewEntry5_WdError(v24);
  v13 = -1071774975LL;
LABEL_35:
  v29[3] = v6->HighPart;
  v29[4] = v6->LowPart;
  v29[5] = v13;
LABEL_36:
  WdLogEvent5_WdError(v29);
LABEL_20:
  COREACCESS::~COREACCESS((COREACCESS *)v35);
  COREACCESS::~COREACCESS((COREACCESS *)v34);
  return (unsigned int)v13;
}
