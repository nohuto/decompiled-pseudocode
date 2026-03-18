/*
 * XREFs of ?DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C020C1F0
 * Callers:
 *     DxgkEscape @ 0x1C01124E0 (DxgkEscape.c)
 * Callees:
 *     ?GetDriverVersion@DXGADAPTER@@QEBA?AW4_QAI_DRIVERVERSION@@XZ @ 0x1C000E0E8 (-GetDriverVersion@DXGADAPTER@@QEBA-AW4_QAI_DRIVERVERSION@@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00123A4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@PEAU_D3DKMT_EVICTION_CRITERIA@@@Z @ 0x1C0038E4C (-VidMmEvictAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDMM_MU.c)
 */

__int64 __fastcall DxgEscapeEvictByNtHandle(struct _D3DKMT_VIDMM_ESCAPE *a1)
{
  __int64 v2; // rbx
  HANDLE hProcess; // rcx
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  _QWORD **v14; // rax
  _QWORD *v15; // r14
  _BYTE v17[8]; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v18[32]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v19[64]; // [rsp+58h] [rbp-40h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+8h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v21; // [rsp+A8h] [rbp+10h] BYREF

  LODWORD(v2) = 0;
  hProcess = a1->SuspendProcess.hProcess;
  if ( hProcess )
  {
    v4 = ObReferenceObjectByHandle(hProcess, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, &v21);
    v2 = v4;
    if ( v4 < 0 )
    {
      v8 = WdLogNewEntry5_WdWarning(v6, v5, v7);
      *(_QWORD *)(v8 + 24) = a1->EvictByNtHandle.NtHandle;
      *(_QWORD *)(v8 + 32) = v2;
      WdLogEvent5_WdWarning(v8);
      return (unsigned int)v2;
    }
    v9 = Object;
    v10 = *((_QWORD *)Object + 2);
    if ( v10 )
    {
      v11 = *(_QWORD *)(v10 + 72);
      if ( v11 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v17, *(struct DXGADAPTER *const *)(v11 + 16), 0LL);
        LODWORD(v2) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v17);
        if ( (int)v2 < 0 )
        {
          ObfDereferenceObject(v9);
LABEL_10:
          COREACCESS::~COREACCESS((COREACCESS *)v19);
          COREACCESS::~COREACCESS((COREACCESS *)v18);
          return (unsigned int)v2;
        }
        if ( (int)DXGADAPTER::GetDriverVersion(*(DXGADAPTER **)(*(_QWORD *)(v10 + 72) + 16LL)) >= 2000 )
        {
          v13 = WdLogNewEntry5_WdError(v12);
          *(_QWORD *)(v13 + 24) = 506LL;
          WdLogEvent5_WdError(v13);
          ObfDereferenceObject(v9);
          LODWORD(v2) = -1073741595;
          goto LABEL_10;
        }
        v14 = (_QWORD **)(v9[2] + 128LL);
        v15 = *v14;
        while ( v15 != v14 )
        {
          VIDMM_EXPORT::VidMmEvictAllocation(
            *(VIDMM_EXPORT **)(*(_QWORD *)(v10 + 72) + 544LL),
            *(struct VIDMM_GLOBAL **)(*(_QWORD *)(v10 + 72) + 552LL),
            0LL,
            (struct _VIDMM_MULTI_GLOBAL_ALLOC *)*(v15 - 5),
            0LL);
          v15 = (_QWORD *)*v15;
          v14 = (_QWORD **)(v9[2] + 128LL);
        }
        COREACCESS::~COREACCESS((COREACCESS *)v19);
        COREACCESS::~COREACCESS((COREACCESS *)v18);
      }
    }
    ObfDereferenceObject(v9);
  }
  return (unsigned int)v2;
}
