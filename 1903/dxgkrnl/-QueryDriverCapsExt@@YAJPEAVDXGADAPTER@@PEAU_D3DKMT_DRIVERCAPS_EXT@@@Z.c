/*
 * XREFs of ?QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z @ 0x1C0201068
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00EAD1C (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BD80 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000BEB0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C00E2644 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 */

__int64 __fastcall QueryDriverCapsExt(struct DXGADAPTER *this, struct _D3DKMT_DRIVERCAPS_EXT *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  const GUID *v9; // r8
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v13; // edi
  __int64 v14; // rax
  unsigned int v16; // [rsp+20h] [rbp-99h] BYREF
  struct _DXGKARG_QUERYADAPTERINFO v17; // [rsp+28h] [rbp-91h] BYREF
  char v18[8]; // [rsp+60h] [rbp-59h] BYREF
  char v19[64]; // [rsp+68h] [rbp-51h] BYREF
  char v20[72]; // [rsp+A8h] [rbp-11h] BYREF

  v2 = 0;
  if ( !this || !a2 )
    return 3221225485LL;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v18, this, 0LL);
  v6 = COREADAPTERACCESS::AcquireShared((__int64)v18, 0xFFFFFFFFLL, v5);
  if ( v6 >= 0 )
  {
    *(_QWORD *)&v17.Type = 16LL;
    v17.pOutputData = &v16;
    *(_QWORD *)&v17.InputDataSize = 0LL;
    *(_QWORD *)&v17.Flags.0 = 0LL;
    HIDWORD(v17.hKmdProcessHandle) = 0;
    v16 = 0;
    v17.pInputData = 0LL;
    v17.OutputDataSize = 4;
    v13 = DXGADAPTER::DdiQueryAdapterInfo(this, &v17, v9);
    if ( v13 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v12, v11);
      *(_QWORD *)(v14 + 24) = 2222LL;
      WdLogEvent5_WdAssertion(v14);
    }
    v2 = v13;
    a2->Value ^= (a2->Value ^ (v16 >> 1)) & 1;
  }
  else if ( v6 == -1073741130 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7);
    v10[3] = this;
    v10[4] = *((int *)this + 70);
    v10[5] = *((unsigned int *)this + 69);
  }
  else
  {
    v2 = v6;
  }
  COREACCESS::~COREACCESS((COREACCESS *)v20);
  COREACCESS::~COREACCESS((COREACCESS *)v19);
  return v2;
}
