/*
 * XREFs of MapChildVaSpace @ 0x1C022B440
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

__int64 __fastcall MapChildVaSpace(
        __int64 a1,
        void *a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        _QWORD *a7,
        _QWORD *a8)
{
  char *PoolWithTag; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  char *v17; // rdi
  __int64 v18; // rax
  char v20; // al
  __int64 v21; // rax
  void **v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  NTSTATUS inserted; // ebx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  int v30; // edx
  int v31; // r9d
  char v32; // al
  __int64 v33; // rcx
  _QWORD *v34; // rcx
  void *v35; // rcx
  __int64 v36; // rax
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-88h] BYREF

  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x4B677844u);
  v17 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v18 = WdLogNewEntry5_WdLowResource(v14, v13, v15, v16);
    *(_QWORD *)(v18 + 24) = 9879LL;
    WdLogEvent5_WdLowResource(v18);
    return 3221225495LL;
  }
  memset(PoolWithTag, 0, 0x30uLL);
  v20 = *(_BYTE *)(a1 + 299);
  if ( (v20 & 8) != 0 )
    v21 = *(_QWORD *)(a1 + 432);
  else
    v21 = a1 & -(__int64)((v20 & 4) != 0);
  *((_QWORD *)v17 + 5) = *(_QWORD *)(*(_QWORD *)(v21 + 432) + 192LL);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*((PRKPROCESS *)v17 + 5), &ApcState);
  v22 = (void **)(v17 + 16);
  if ( !a2 )
  {
    v30 = a6;
    v31 = a5;
LABEL_11:
    *a8 = 0LL;
    v32 = *(_BYTE *)(a1 + 299);
    if ( (v32 & 8) != 0 )
    {
      v33 = *(_QWORD *)(*(_QWORD *)(a1 + 432) + 432LL);
    }
    else
    {
      if ( (v32 & 4) == 0 )
      {
        v34 = 0LL;
        goto LABEL_17;
      }
      v33 = *(_QWORD *)(a1 + 432);
    }
    v34 = (_QWORD *)(v33 + 88);
LABEL_17:
    inserted = ((__int64 (__fastcall *)(_QWORD, __int64, unsigned __int64, char *, int, int, char *, _QWORD *))qword_1C00A3E98)(
                 *v34,
                 a3,
                 a4 >> 12,
                 v17 + 16,
                 v31,
                 v30,
                 v17,
                 a8);
    goto LABEL_18;
  }
  ObfReferenceObject(a2);
  inserted = ObInsertObject(a2, 0LL, 0, 0, 0LL, (PHANDLE)v17 + 2);
  if ( inserted >= 0 )
  {
    v30 = 0;
    v31 = 0;
    *((_DWORD *)v17 + 6) = a6;
    goto LABEL_11;
  }
  v27 = WdLogNewEntry5_WdError(v24, v23, v26);
  *(_QWORD *)(v27 + 24) = 9907LL;
  WdLogEvent5_WdError(v27);
LABEL_18:
  if ( inserted >= 0 )
  {
    *a7 = v17;
    _InterlockedIncrement(&g_VgpuNumVaToGpaMappings);
    _InterlockedExchangeAdd64(&g_VgpuSizeVaToGpaMappings, a4);
  }
  else
  {
    v35 = *v22;
    if ( *v22 )
      ObCloseHandle(v35, 0);
    v36 = WdLogNewEntry5_WdError(v35, v28, v29);
    *(_QWORD *)(v36 + 24) = inserted;
    WdLogEvent5_WdError(v36);
    ExFreePoolWithTag(v17, 0x4B677844u);
  }
  KeUnstackDetachProcess(&ApcState);
  return (unsigned int)inserted;
}
