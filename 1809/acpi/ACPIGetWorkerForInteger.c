/*
 * XREFs of ACPIGetWorkerForInteger @ 0x1C0026500
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x1C0002E30 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C0002EB0 (FreeObjData.c)
 *     FreeData @ 0x1C00031E4 (FreeData.c)
 *     AMLIGetNamedChild @ 0x1C00207C0 (AMLIGetNamedChild.c)
 *     ACPIGetProcessorStatus @ 0x1C0026900 (ACPIGetProcessorStatus.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C002BE18 (ACPIBuildSynchronizationRequestInternal.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 *     ACPIGetConvertToClassCode @ 0x1C0053B54 (ACPIGetConvertToClassCode.c)
 */

void __fastcall ACPIGetWorkerForInteger(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // r12
  bool v6; // si
  __int64 v7; // r14
  int v8; // edi
  __int64 v9; // r10
  int v10; // ebp
  ULONG_PTR v11; // r13
  int v12; // r15d
  __int64 v13; // rax
  _DWORD *v14; // rax
  KIRQL v15; // al
  __int64 v16; // rdi
  _DWORD *v17; // rcx
  __int64 v18; // rax
  void (__fastcall *v19)(__int64, _QWORD, _QWORD, _QWORD); // rax
  KIRQL v20; // al
  _QWORD **v21; // r9
  void **v22; // r8
  _DWORD *v23; // rax
  __int64 *v24; // rax
  unsigned __int16 v25; // ax
  int v26; // eax
  __int64 v27; // rcx
  int v29; // [rsp+78h] [rbp+10h] BYREF
  _DWORD *v30; // [rsp+88h] [rbp+20h]

  v4 = (_QWORD *)a4[7];
  v6 = (int)a2 >= 0;
  v7 = a3;
  v8 = a2;
  v9 = a1;
  if ( !v4 )
  {
    v8 = -1073741670;
    goto LABEL_28;
  }
  v10 = *(_DWORD *)a4;
  if ( (*(_DWORD *)a4 & 0x400) != 0 )
  {
    v17 = (_DWORD *)a4[8];
    if ( (v10 & 0x4000000) == 0
      && (a2 = a4[3], a3 = 0x2000000000000000LL, (*(_QWORD *)(a2 + 8) & 0x2000000000000000LL) != 0) )
    {
      v18 = *(_QWORD *)(a2 + 560);
    }
    else
    {
      if ( v8 < 0 )
        goto LABEL_28;
      if ( *(_WORD *)(v7 + 2) != 1 )
      {
        v8 = -1072431089;
        goto LABEL_28;
      }
      v18 = *(_QWORD *)(v7 + 16);
    }
    *v4 = v18;
    if ( v17 )
      *v17 = 8;
    goto LABEL_27;
  }
  if ( (v10 & 0x800) != 0 )
  {
    v11 = a4[3];
    v30 = (_DWORD *)a4[8];
    v12 = 15;
    v29 = 15;
    if ( (v10 & 0x4000000) != 0 )
    {
      if ( (_DWORD)a2 != -1073741772 )
      {
        if ( (int)a2 >= 0 )
        {
          v25 = *(_WORD *)(a3 + 2);
          if ( v25 != 1 )
            KeBugCheckEx(0xA5u, 8uLL, v11, 0LL, v25);
          v12 = *(_DWORD *)(a3 + 16);
        }
        else
        {
          v12 = 0;
        }
        v29 = v12;
      }
      goto LABEL_24;
    }
    v13 = *(_QWORD *)(v11 + 8);
    if ( (v13 & 0x200000000000000LL) != 0 )
    {
      if ( (v13 & 0x400000000LL) == 0 )
        goto LABEL_7;
    }
    else if ( (v13 & 0x8000000000000LL) == 0 )
    {
LABEL_7:
      if ( (v13 & 0x1000000000LL) != 0 )
      {
        if ( (int)ACPIGetProcessorStatus(v11, a2, &v29) < 0 )
        {
          v12 = 0;
          v29 = 0;
        }
        else
        {
          v12 = v29;
        }
      }
      if ( v8 != -1073741772 )
      {
        if ( v8 < 0 )
        {
          v12 = 0;
        }
        else
        {
          if ( *(_WORD *)(v7 + 2) != 1 )
          {
            v24 = AMLIGetNamedChild(*(__int64 **)(v11 + 712), 1096045407);
            KeBugCheckEx(0xA5u, 8uLL, v11, (ULONG_PTR)v24, *(unsigned __int16 *)(v7 + 2));
          }
          v12 = *(_DWORD *)(v7 + 16);
        }
        v29 = v12;
      }
    }
    a2 = *(_QWORD *)(v11 + 8);
    if ( (a2 & 1) != 0 && (v10 & 0x1000) == 0 )
    {
      v12 &= ~1u;
      v29 = v12;
    }
    if ( (a2 & 0x40000000) != 0 )
    {
      v12 &= ~4u;
      v29 = v12;
    }
    if ( (a2 & 0x80000000000LL) != 0 )
    {
      v12 &= ~1u;
      v29 = v12;
    }
    if ( (v12 & 8) != 0 )
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 8), 0xFF7FFFFFFFFFFFFFuLL);
    else
      _InterlockedOr64((volatile signed __int64 *)(v11 + 8), 0x80000000000000uLL);
    if ( (v29 & 4) != 0 )
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 8), 0xFFFFFFFFDFFFFFFFuLL);
    else
      _InterlockedOr64((volatile signed __int64 *)(v11 + 8), 0x20000000uLL);
    if ( (v29 & 2) != 0 )
      _InterlockedOr64((volatile signed __int64 *)(v11 + 8), 0x40000000000000uLL);
    else
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 8), 0xFFBFFFFFFFFFFFFFuLL);
    if ( (v29 & 1) != 0 )
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 8), 0xFFFFFFFFFFFFFFFDuLL);
    else
      _InterlockedOr64((volatile signed __int64 *)(v11 + 8), 2uLL);
    v12 = v29;
    if ( (a2 & 2) == 0 && (v29 & 1) == 0 )
    {
      v15 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
      v16 = *(_QWORD *)(v11 + 744);
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v15);
      if ( v16 )
        ACPIBuildSynchronizationRequestInternal(
          v16,
          (unsigned int)ACPIBuildIssueNotifyInvalidateRelations,
          v16,
          (_DWORD)a4,
          1);
    }
LABEL_24:
    v14 = v30;
    *(_DWORD *)v4 = v12;
    if ( v14 )
      *v14 = 4;
    v9 = a1;
LABEL_27:
    v8 = 0;
    goto LABEL_28;
  }
  if ( (v10 & 0x8000) != 0 )
  {
    v26 = ACPIGetConvertToClassCode(a1, a2, a3, (_DWORD)a4, (__int64)v4, a4[8]);
    v9 = a1;
    v8 = v26;
  }
  else if ( (int)a2 >= 0 )
  {
    if ( (v10 & 0x4000) == 0 || *(_WORD *)(a3 + 2) == 1 )
    {
      *(_DWORD *)v4 = *(_DWORD *)(a3 + 16);
      v23 = (_DWORD *)a4[8];
      if ( v23 )
        *v23 = 4;
      goto LABEL_27;
    }
    v8 = -1072431089;
  }
LABEL_28:
  *((_DWORD *)a4 + 18) = v8;
  if ( !v6 )
    goto LABEL_32;
  dword_1C0080868 = 0;
  pszDest = 0;
  if ( (*(_BYTE *)v7 & 1) != 0 )
  {
    v27 = *(_QWORD *)(v7 + 8);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v27 + 8), 0xFFFFFFFF) != 1 || (*(_BYTE *)v27 & 8) == 0 )
      goto LABEL_31;
    FreeData(v27, a2, a3, (__int64)a4);
    goto LABEL_89;
  }
  if ( *(_QWORD *)(v7 + 32) )
  {
    if ( *(int *)(v7 + 8) > 0 )
    {
      *(_WORD *)v7 |= 8u;
      goto LABEL_31;
    }
    if ( *(_WORD *)(v7 + 2) == 4 )
      FreeDataBuffs(*(_QWORD *)(v7 + 32) + 8LL, **(_DWORD **)(v7 + 32));
    FreeObjData(v7, a2, a3, (__int64)a4);
LABEL_89:
    v9 = a1;
  }
LABEL_31:
  *(_QWORD *)v7 = 0LL;
  *(_QWORD *)(v7 + 8) = 0LL;
  *(_QWORD *)(v7 + 16) = 0LL;
  *(_QWORD *)(v7 + 24) = 0LL;
  *(_QWORD *)(v7 + 32) = 0LL;
LABEL_32:
  if ( (*(_DWORD *)a4 & 0x10000000) == 0 )
  {
    v19 = (void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))a4[5];
    if ( v19 )
      v19(v9, (unsigned int)v8, 0LL, a4[6]);
    v20 = KeAcquireSpinLockRaiseToDpc(&AcpiGetLock);
    v21 = (_QWORD **)a4[1];
    if ( v21[1] != a4 + 1 || (v22 = (void **)a4[2], *v22 != a4 + 1) )
      __fastfail(3u);
    *v22 = v21;
    v21[1] = v22;
    KeReleaseSpinLock(&AcpiGetLock, v20);
    ExFreePoolWithTag(a4, 0);
  }
}
