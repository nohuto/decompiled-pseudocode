/*
 * XREFs of ?Initialize@DXGPROCESS@@QEAAJXZ @ 0x1C00E0B54
 * Callers:
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C00E97AC (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000E5B4 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C00104E0 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0012060 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGPROCESS_NONPAGED@@QEAA@XZ @ 0x1C0017540 (--0DXGPROCESS_NONPAGED@@QEAA@XZ.c)
 *     ?SetupValidationForProcess@DXGVALIDATION@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C0018870 (-SetupValidationForProcess@DXGVALIDATION@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ @ 0x1C00CD9C0 (-GetMaximumAdapterCount@DXGGLOBAL@@QEAAKXZ.c)
 *     ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x1C012C70C (-DeferredInitialize@DXGPROCESS@@QEAAJI@Z.c)
 *     ?DxgkIsExpandedResourceApplication@@YA_NPEAU_EPROCESS@@@Z @ 0x1C0228F24 (-DxgkIsExpandedResourceApplication@@YA_NPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall DXGPROCESS::Initialize(DXGPROCESS *this)
{
  __int64 CurrentProcess; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rax
  void *v5; // rcx
  _QWORD *v6; // rax
  DXGPROCESS_NONPAGED *v7; // rax
  DXGPROCESS_NONPAGED *v8; // rax
  _QWORD *v9; // rax
  __int64 ProcessImageFileName; // rax
  const void *v11; // rsi
  size_t v12; // rdi
  __int64 v13; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v15; // rcx
  DXGGLOBAL *v16; // rax
  unsigned int MaximumAdapterCount; // eax
  __int64 v18; // rcx
  unsigned __int64 v19; // rdi
  SIZE_T v20; // rax
  PVOID v21; // rax
  PVOID v22; // rax
  PVOID v23; // rax
  struct DXGGLOBAL *v24; // rax
  __int64 v25; // rcx
  int v26; // eax
  _QWORD *v27; // rsi
  unsigned int v28; // edi
  __int64 result; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  bool v34; // zf

  if ( *((_DWORD *)this + 10) )
    return 3221225485LL;
  if ( *((_QWORD *)this + 14) )
  {
    v30 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v30 + 24) = 1262LL;
    WdLogEvent5_WdAssertion(v30);
  }
  if ( *((_QWORD *)this + 39) )
  {
    v31 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v31 + 24) = 1263LL;
    WdLogEvent5_WdAssertion(v31);
  }
  *((_BYTE *)this + 321) = *((_QWORD *)this + 7) == (_QWORD)PsInitialSystemProcess;
  CurrentProcess = PsGetCurrentProcess();
  LOBYTE(v3) = PsGetProcessWow64Process(CurrentProcess) != 0;
  *((_BYTE *)this + 323) = v3 | *((_BYTE *)this + 323) & 0xFE;
  if ( !*((_BYTE *)this + 321) && *((_BYTE *)DXGGLOBAL::GetGlobal(v3) + 20264) )
    *((_BYTE *)this + 434) = DxgkIsExpandedResourceApplication(*((PEPROCESS *)this + 7));
  v4 = operator new(0x28uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v4 )
  {
    *v4 = 0LL;
    v4[1] = 0LL;
    *((_DWORD *)v4 + 6) = 0;
    *((_DWORD *)v4 + 7) = 4;
    *((_DWORD *)v4 + 8) = 27;
    v4[2] = 0LL;
  }
  else
  {
    v4 = 0LL;
  }
  *((_QWORD *)this + 14) = v4;
  if ( !v4 )
    goto LABEL_38;
  v6 = operator new(0x28uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v6 )
  {
    *v6 = 0LL;
    v6[1] = 0LL;
    *((_DWORD *)v6 + 6) = 0;
    *((_DWORD *)v6 + 7) = 6;
    *((_DWORD *)v6 + 8) = 19;
    v6[2] = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  *((_QWORD *)this + 39) = v6;
  if ( !v6 )
    goto LABEL_38;
  v7 = (DXGPROCESS_NONPAGED *)operator new(0x70uLL, 0x4B677844u, 1, (POOL_TYPE)512);
  v8 = v7 ? DXGPROCESS_NONPAGED::DXGPROCESS_NONPAGED(v7) : 0LL;
  *((_QWORD *)this + 9) = v8;
  if ( !v8 )
    goto LABEL_38;
  *((_QWORD *)v8 + 4) = this;
  *(_QWORD *)(*((_QWORD *)this + 9) + 72LL) = *((_QWORD *)this + 8);
  v9 = (_QWORD *)*((_QWORD *)this + 9);
  v9[7] = DxgkpProcessStatusChangeWork;
  v9[8] = this;
  v9[5] = 0LL;
  ProcessImageFileName = PsGetProcessImageFileName(*((_QWORD *)this + 7));
  v11 = (const void *)ProcessImageFileName;
  v12 = -1LL;
  do
    ++v12;
  while ( *(_BYTE *)(ProcessImageFileName + v12) );
  *(_QWORD *)(*((_QWORD *)this + 9) + 80LL) = operator new[](v12 + 1, 0x4B677844u, (POOL_TYPE)512);
  v5 = *(void **)(*((_QWORD *)this + 9) + 80LL);
  if ( !v5 )
    goto LABEL_38;
  memmove(v5, v11, v12);
  v13 = *(_QWORD *)(*((_QWORD *)this + 9) + 80LL);
  *(_BYTE *)(v12 + v13) = 0;
  Global = DXGGLOBAL::GetGlobal(v13);
  DXGVALIDATION::SetupValidationForProcess((struct DXGGLOBAL *)((char *)Global + 1316), this);
  v16 = DXGGLOBAL::GetGlobal(v15);
  MaximumAdapterCount = DXGGLOBAL::GetMaximumAdapterCount(v16);
  v19 = MaximumAdapterCount;
  if ( !MaximumAdapterCount )
  {
    v33 = WdLogNewEntry5_WdAssertion(v18);
    *(_QWORD *)(v33 + 24) = 1325LL;
    WdLogEvent5_WdAssertion(v33);
  }
  v20 = 8 * v19;
  if ( !is_mul_ok(v19, 8uLL) )
    v20 = -1LL;
  v21 = operator new[](v20, 0x4B677844u, PagedPool);
  *((_QWORD *)this + 6) = v21;
  if ( v21
    && (memset(v21, 0, 8 * v19),
        v22 = operator new(0x30uLL, 0x4B677844u, 1, PagedPool),
        (*((_QWORD *)this + 10) = v22) != 0LL)
    && (v23 = operator new(0x30uLL, 0x4B677844u, 1, PagedPool), (*((_QWORD *)this + 11) = v23) != 0LL) )
  {
    v24 = DXGGLOBAL::GetGlobal((__int64)v5);
    if ( !*((_DWORD *)v24 + 430) || (v34 = *((_DWORD *)v24 + 431) == 0, v26 = 1, v34) )
      v26 = 0;
    *((_DWORD *)this + 24) = v26;
    v27 = &DXGGLOBAL::m_pDxgmmsExport;
    v28 = 0;
    while ( 1 )
    {
      DXGGLOBAL::GetGlobal(v25);
      if ( *v27 )
      {
        result = DXGPROCESS::DeferredInitialize(this, v28);
        if ( (int)result < 0 )
          break;
      }
      ++v28;
      ++v27;
      if ( v28 >= 2 )
      {
        DXGPROCESS::AcquireReference(this);
        result = 0LL;
        *((_DWORD *)this + 10) = 1;
        return result;
      }
    }
  }
  else
  {
LABEL_38:
    v32 = WdLogNewEntry5_WdLowResource(v5);
    *(_QWORD *)(v32 + 24) = this;
    WdLogEvent5_WdLowResource(v32);
    return 3221225495LL;
  }
  return result;
}
