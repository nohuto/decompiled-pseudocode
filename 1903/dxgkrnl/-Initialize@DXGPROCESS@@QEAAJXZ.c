/*
 * XREFs of ?Initialize@DXGPROCESS@@QEAAJXZ @ 0x1C00FB240
 * Callers:
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C00F4554 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00088AC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?SetupValidationForProcess@DXGVALIDATION@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C0009CA4 (-SetupValidationForProcess@DXGVALIDATION@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     ??0DXGPROCESS_NONPAGED@@QEAA@XZ @ 0x1C0009CE0 (--0DXGPROCESS_NONPAGED@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x1C00FC4C0 (-DeferredInitialize@DXGPROCESS@@QEAAJI@Z.c)
 *     ?DxgkIsExpandedResourceApplication@@YA_NPEAU_EPROCESS@@@Z @ 0x1C025D918 (-DxgkIsExpandedResourceApplication@@YA_NPEAU_EPROCESS@@@Z.c)
 *     ?DxgkIsGraphisPartitionApplication@@YA_NXZ @ 0x1C025DA28 (-DxgkIsGraphisPartitionApplication@@YA_NXZ.c)
 */

__int64 __fastcall DXGPROCESS::Initialize(DXGPROCESS *this, __int64 a2)
{
  __int64 CurrentProcess; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  void *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rax
  DXGPROCESS_NONPAGED *v12; // rax
  DXGPROCESS_NONPAGED *v13; // rax
  _QWORD *v14; // rax
  __int64 ProcessImageFileName; // rax
  const void *v16; // rsi
  size_t v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rdx
  struct DXGGLOBAL *Global; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct DXGGLOBAL *v25; // rsi
  unsigned __int64 v26; // rdi
  SIZE_T v27; // rax
  PVOID v28; // rax
  PVOID v29; // rax
  struct DXGGLOBAL *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // eax
  _QWORD *v34; // rsi
  unsigned int v35; // edi
  __int64 result; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  bool v44; // zf
  __int64 v45; // rax

  if ( *((_DWORD *)this + 10) )
    return 3221225485LL;
  if ( *((_QWORD *)this + 13) )
  {
    v37 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v37 + 24) = 1320LL;
    WdLogEvent5_WdAssertion(v37);
  }
  if ( *((_QWORD *)this + 36) )
  {
    v38 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v38 + 24) = 1321LL;
    WdLogEvent5_WdAssertion(v38);
  }
  *((_BYTE *)this + 297) = *((_QWORD *)this + 7) == (_QWORD)PsInitialSystemProcess;
  CurrentProcess = PsGetCurrentProcess(PsInitialSystemProcess, a2);
  LOBYTE(v5) = PsGetProcessWow64Process(CurrentProcess) != 0;
  *((_BYTE *)this + 299) = v5 | *((_BYTE *)this + 299) & 0xFE;
  if ( !*((_BYTE *)this + 297) && *((_BYTE *)DXGGLOBAL::GetGlobal(v5, v4) + 303928) )
  {
    *((_BYTE *)this + 414) = DxgkIsExpandedResourceApplication(*((PEPROCESS *)this + 7));
    *((_BYTE *)this + 415) = DxgkIsGraphisPartitionApplication();
  }
  v6 = operator new[](0x28uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v6 )
  {
    *v6 = 0LL;
    v6[1] = 0LL;
    v6[2] = 0LL;
    *((_DWORD *)v6 + 6) = 0;
    *((_DWORD *)v6 + 7) = 4;
    *((_DWORD *)v6 + 8) = 27;
  }
  else
  {
    v6 = 0LL;
  }
  *((_QWORD *)this + 13) = v6;
  if ( !v6 )
    goto LABEL_38;
  v11 = operator new[](0x28uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v11 )
  {
    *v11 = 0LL;
    v11[1] = 0LL;
    v11[2] = 0LL;
    *((_DWORD *)v11 + 6) = 0;
    *((_DWORD *)v11 + 7) = 6;
    *((_DWORD *)v11 + 8) = 19;
  }
  else
  {
    v11 = 0LL;
  }
  *((_QWORD *)this + 36) = v11;
  if ( !v11 )
    goto LABEL_38;
  v12 = (DXGPROCESS_NONPAGED *)operator new(0x70uLL, 0x4B677844u, 1, (POOL_TYPE)512);
  v13 = v12 ? DXGPROCESS_NONPAGED::DXGPROCESS_NONPAGED(v12) : 0LL;
  *((_QWORD *)this + 9) = v13;
  if ( !v13 )
    goto LABEL_38;
  *((_QWORD *)v13 + 4) = this;
  *(_QWORD *)(*((_QWORD *)this + 9) + 72LL) = *((_QWORD *)this + 8);
  v14 = (_QWORD *)*((_QWORD *)this + 9);
  v14[7] = DxgkpProcessStatusChangeWork;
  v14[8] = this;
  v14[5] = 0LL;
  ProcessImageFileName = PsGetProcessImageFileName(*((_QWORD *)this + 7));
  v16 = (const void *)ProcessImageFileName;
  v17 = -1LL;
  do
    ++v17;
  while ( *(_BYTE *)(ProcessImageFileName + v17) );
  *(_QWORD *)(*((_QWORD *)this + 9) + 80LL) = operator new[](v17 + 1, 0x4B677844u, (POOL_TYPE)512);
  v8 = *(void **)(*((_QWORD *)this + 9) + 80LL);
  if ( !v8 )
    goto LABEL_38;
  memmove(v8, v16, v17);
  v18 = *(_QWORD *)(*((_QWORD *)this + 9) + 80LL);
  *(_BYTE *)(v17 + v18) = 0;
  Global = DXGGLOBAL::GetGlobal(v18, v19);
  DXGVALIDATION::SetupValidationForProcess((struct DXGGLOBAL *)((char *)Global + 1284), this);
  v25 = DXGGLOBAL::GetGlobal(v22, v21);
  v26 = *((unsigned int *)v25 + 248);
  if ( !(_DWORD)v26 )
  {
    v40 = WdLogNewEntry5_WdAssertion(v24, v23);
    *(_QWORD *)(v40 + 24) = 2435LL;
    WdLogEvent5_WdAssertion(v40);
    v26 = *((unsigned int *)v25 + 248);
    if ( !(_DWORD)v26 )
    {
      v43 = WdLogNewEntry5_WdAssertion(v42, v41);
      *(_QWORD *)(v43 + 24) = 1384LL;
      WdLogEvent5_WdAssertion(v43);
    }
  }
  v27 = 8 * v26;
  if ( !is_mul_ok(v26, 8uLL) )
    v27 = -1LL;
  v28 = operator new[](v27, 0x4B677844u, PagedPool);
  *((_QWORD *)this + 6) = v28;
  if ( v28
    && (memset(v28, 0, 8 * v26),
        v29 = operator new(0x30uLL, 0x4B677844u, 1, PagedPool),
        (*((_QWORD *)this + 10) = v29) != 0LL) )
  {
    v30 = DXGGLOBAL::GetGlobal((__int64)v8, v7);
    if ( !*((_DWORD *)v30 + 422) || (v44 = *((_BYTE *)v30 + 303824) == 0, v33 = 1, v44) )
      v33 = 0;
    *((_DWORD *)this + 22) = v33;
    v34 = &DXGGLOBAL::m_pDxgmmsExport;
    v35 = 0;
    while ( 1 )
    {
      DXGGLOBAL::GetGlobal(v32, v31);
      if ( *v34 )
      {
        result = DXGPROCESS::DeferredInitialize(this, v35);
        if ( (int)result < 0 )
          break;
      }
      ++v35;
      ++v34;
      if ( v35 >= 2 )
      {
        if ( (__int64)++*((_QWORD *)this + 4) <= 0 )
        {
          v45 = WdLogNewEntry5_WdAssertion(v32, v31);
          *(_QWORD *)(v45 + 24) = 849LL;
          WdLogEvent5_WdAssertion(v45);
        }
        *((_DWORD *)this + 10) = 1;
        return 0LL;
      }
    }
  }
  else
  {
LABEL_38:
    v39 = WdLogNewEntry5_WdLowResource(v8, v7, v9, v10);
    *(_QWORD *)(v39 + 24) = this;
    WdLogEvent5_WdLowResource(v39);
    return 3221225495LL;
  }
  return result;
}
