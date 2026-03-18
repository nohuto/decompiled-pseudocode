/*
 * XREFs of ?DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C023F494
 * Callers:
 *     DxgkEscape @ 0x1C0106440 (DxgkEscape.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
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
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  _QWORD **v17; // rax
  _QWORD *v18; // r14
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+30h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v22[8]; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v23[64]; // [rsp+48h] [rbp-A0h] BYREF
  _BYTE v24[72]; // [rsp+88h] [rbp-60h] BYREF

  LODWORD(v2) = 0;
  hProcess = a1->SuspendProcess.hProcess;
  if ( hProcess )
  {
    HandleInformation = 0LL;
    v4 = ObReferenceObjectByHandle(
           hProcess,
           0x20000u,
           g_pDxgkSharedAllocationObjectType,
           1,
           &Object,
           &HandleInformation);
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
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v22, *(struct DXGADAPTER *const *)(v11 + 16), 0LL);
        LODWORD(v2) = COREADAPTERACCESS::AcquireShared((__int64)v22, 0xFFFFFFFFLL, v12);
        if ( (int)v2 < 0 )
        {
          ObfDereferenceObject(v9);
LABEL_10:
          COREACCESS::~COREACCESS((COREACCESS *)v24);
          COREACCESS::~COREACCESS((COREACCESS *)v23);
          return (unsigned int)v2;
        }
        v15 = *(_QWORD *)(*(_QWORD *)(v10 + 72) + 16LL);
        if ( *(int *)(v15 + 2452) >= 2000 )
        {
          v16 = WdLogNewEntry5_WdError(v15, v13, v14);
          *(_QWORD *)(v16 + 24) = 506LL;
          WdLogEvent5_WdError(v16);
          ObfDereferenceObject(v9);
          LODWORD(v2) = -1073741595;
          goto LABEL_10;
        }
        v17 = (_QWORD **)(v9[2] + 128LL);
        v18 = *v17;
        while ( v18 != v17 )
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 72) + 544LL)
                                                                             + 8LL)
                                                                 + 720LL))(
            *(_QWORD *)(*(_QWORD *)(v10 + 72) + 552LL),
            0LL,
            *(v18 - 5),
            0LL);
          v18 = (_QWORD *)*v18;
          v17 = (_QWORD **)(v9[2] + 128LL);
        }
        COREACCESS::~COREACCESS((COREACCESS *)v24);
        COREACCESS::~COREACCESS((COREACCESS *)v23);
      }
    }
    ObfDereferenceObject(v9);
  }
  return (unsigned int)v2;
}
