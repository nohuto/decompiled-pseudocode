/*
 * XREFs of MiCreateImageOrDataSection @ 0x1405DF390
 * Callers:
 *     MiCreateSection @ 0x1405DEAC0 (MiCreateSection.c)
 * Callees:
 *     IoAllowExecution @ 0x140019D84 (IoAllowExecution.c)
 *     CcWaitForUninitializeCacheMap @ 0x14001B334 (CcWaitForUninitializeCacheMap.c)
 *     IoGetFileMemoryPartitionInformation @ 0x14001C334 (IoGetFileMemoryPartitionInformation.c)
 *     MiReferenceControlArea @ 0x14001C358 (MiReferenceControlArea.c)
 *     IoSetTopLevelIrp @ 0x14001C5F0 (IoSetTopLevelIrp.c)
 *     IoGetTopLevelIrp @ 0x14001C610 (IoGetTopLevelIrp.c)
 *     ObDereferenceObjectEx @ 0x14001CD54 (ObDereferenceObjectEx.c)
 *     MiReleaseControlAreaWaiters @ 0x14001E3A8 (MiReleaseControlAreaWaiters.c)
 *     MiReferenceControlAreaForCacheManager @ 0x14001E9BC (MiReferenceControlAreaForCacheManager.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     MiDereferenceControlAreaBySection @ 0x14007644C (MiDereferenceControlAreaBySection.c)
 *     PsReferencePartitionSafe @ 0x140090C28 (PsReferencePartitionSafe.c)
 *     MiGetControlAreaPartition @ 0x1400937E8 (MiGetControlAreaPartition.c)
 *     ObFastReplaceObject @ 0x140094864 (ObFastReplaceObject.c)
 *     ObReferenceObjectExWithTag @ 0x140111F40 (ObReferenceObjectExWithTag.c)
 *     MiForceSectionClosed @ 0x14012219C (MiForceSectionClosed.c)
 *     MiZeroSectionObjectPointer @ 0x14013B0E8 (MiZeroSectionObjectPointer.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiCallCreateSectionFilters @ 0x1405DF7D8 (MiCallCreateSectionFilters.c)
 *     MiShareExistingControlArea @ 0x1405DFC94 (MiShareExistingControlArea.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     MiCreateNewSection @ 0x14061C7E0 (MiCreateNewSection.c)
 *     MiDereferenceFailedControlArea @ 0x1406D15C4 (MiDereferenceFailedControlArea.c)
 */

__int64 __fastcall MiCreateImageOrDataSection(__int64 a1)
{
  unsigned int v1; // esi
  char v3; // r12
  int v4; // eax
  __int64 v5; // rbp
  _QWORD **v6; // r14
  __int64 *FileMemoryPartitionInformation; // rax
  int v8; // ecx
  _QWORD **v9; // rdx
  __int64 v10; // rax
  int v11; // edi
  int v12; // eax
  bool v13; // zf
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  struct _KTHREAD *CurrentThread; // rbp
  int v18; // eax
  _QWORD *v19; // r15
  NTSTATUS v21; // eax
  char v22; // dl
  int v23; // ecx
  __int64 v24; // rcx
  _QWORD *v25; // r13
  __int64 v26; // r8
  ULONG_PTR **v27; // r9
  int v28; // ecx
  __int64 v29; // rcx
  signed __int64 v30; // rax
  _QWORD v31[16]; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD *v32; // [rsp+F0h] [rbp+8h] BYREF
  __int64 *v33; // [rsp+F8h] [rbp+10h] BYREF
  PVOID Object; // [rsp+100h] [rbp+18h] BYREF

  v1 = 0;
  v3 = 1;
  if ( *(_BYTE *)(a1 + 192) )
    return 3221225716LL;
  v4 = *(_DWORD *)(a1 + 16);
  if ( (v4 & 0x80000) != 0 )
    return 3221225716LL;
  v5 = *(_QWORD *)(a1 + 48);
  if ( v5 )
  {
    v6 = *(_QWORD ***)(a1 + 48);
    goto LABEL_5;
  }
  if ( v4 >= 0 )
  {
    v21 = ObReferenceObjectByHandle(
            *(HANDLE *)(a1 + 40),
            MmMakeFileAccess[*(_DWORD *)(a1 + 32) & 7],
            (POBJECT_TYPE)IoFileObjectType,
            *(_BYTE *)(a1 + 72),
            &Object,
            0LL);
    v6 = (_QWORD **)Object;
    v11 = v21;
    if ( v21 < 0 )
    {
LABEL_29:
      if ( v11 != -1073740682 )
        goto LABEL_30;
      goto LABEL_81;
    }
    v1 = 1;
    if ( !*((_QWORD *)Object + 5) )
    {
      v11 = -1073741792;
      goto LABEL_36;
    }
LABEL_5:
    FileMemoryPartitionInformation = (__int64 *)IoGetFileMemoryPartitionInformation((__int64)v6);
    if ( FileMemoryPartitionInformation )
    {
      if ( !PsReferencePartitionSafe(*FileMemoryPartitionInformation) )
      {
        v11 = -1073740640;
        goto LABEL_30;
      }
      v28 = *(_DWORD *)a1;
      if ( (*(_DWORD *)a1 & 0x10000) != 0 && *v27 != &MiSystemPartition )
      {
        v28 &= ~0x10000u;
        *(_DWORD *)a1 = v28;
      }
      *(_QWORD *)(a1 + 176) = v27;
      if ( (*(_DWORD *)(v26 + 8) & 1) != 0 )
        *(_DWORD *)a1 = v28 | 0x200000;
    }
    if ( v5 )
    {
      v8 = *(_DWORD *)(a1 + 16) & 0x1000000;
      if ( v8 )
      {
        if ( (*(_DWORD *)a1 & 1) != 0 )
        {
          v11 = -1073741580;
          goto LABEL_30;
        }
        if ( *(_QWORD *)(a1 + 152) )
        {
          v11 = -1073741582;
          goto LABEL_30;
        }
      }
      v9 = *(_QWORD ***)(v5 + 40);
      if ( !v9 )
      {
        v11 = -1073741792;
        goto LABEL_30;
      }
      v10 = *(_QWORD *)(a1 + 8);
      if ( v10 && (*(_DWORD *)(v10 + 24) & 0x200) != 0 )
      {
        *(_BYTE *)(a1 + 72) = 0;
        v9 = *(_QWORD ***)(v5 + 40);
      }
      if ( v8 )
        v9 += 2;
      v11 = -1073741823;
      v32 = *v9;
      if ( v32 )
      {
        v11 = MiReferenceControlAreaForCacheManager(a1);
        if ( v11 >= 0 )
        {
          v12 = *(_DWORD *)a1 | 4;
          v13 = (*(_DWORD *)(a1 + 16) & 0x1000000) == 0;
          *(_DWORD *)a1 = v12;
          v14 = *(_QWORD *)(v5 + 40);
          if ( v13 )
          {
            v15 = *(_QWORD **)v14;
            v16 = *(_QWORD *)(a1 + 152);
            *(_QWORD *)(a1 + 128) = v16;
            v32 = v15;
            if ( (v12 & 1) != 0 || v16 )
              goto LABEL_16;
            v29 = *v15;
          }
          else
          {
            v32 = *(_QWORD **)(v14 + 16);
            v29 = *v32;
          }
          v30 = _InterlockedCompareExchange64((volatile signed __int64 *)(v29 + 24), -1LL, -1LL);
          v15 = v32;
          *(_QWORD *)(a1 + 128) = v30;
LABEL_16:
          *(_QWORD *)(a1 + 64) = v15;
          goto LABEL_29;
        }
      }
      ObReferenceObjectExWithTag((ULONG_PTR)v6, 2);
      v1 += 2;
      if ( v11 == -1073740682 )
      {
LABEL_81:
        if ( (*(_DWORD *)a1 & 1) == 0 )
          CcWaitForUninitializeCacheMap((__int64)v6);
        if ( (unsigned int)MiForceSectionClosed(v6[5], v3) > 1 && (*(_DWORD *)a1 & 0x400000) != 0 )
        {
          ++dword_14043B818;
          v11 = -1073740277;
        }
LABEL_30:
        if ( !v1 )
          return (unsigned int)v11;
LABEL_36:
        ObDereferenceObjectEx((ULONG_PTR)v6, v1);
        return (unsigned int)v11;
      }
    }
    else
    {
      ObfReferenceObject(v6);
      ++v1;
    }
    *(_QWORD *)(a1 + 56) = v6;
    memset(v31, 0, sizeof(v31));
    LODWORD(v31[7]) = 2;
    if ( v6 )
      v31[8] = v6;
    else
      v31[8] = 0LL;
    v13 = (*(_DWORD *)(a1 + 16) & 0x1000000) == 0;
    v33 = 0LL;
    if ( !v13 )
    {
      if ( (*(_DWORD *)a1 & 0x400) != 0 && !IoAllowExecution((__int64)v6) )
      {
        v11 = -1073741790;
        goto LABEL_30;
      }
      CcWaitForUninitializeCacheMap((__int64)v6);
      if ( (*(_DWORD *)a1 & 0x400) != 0 )
      {
        v22 = *(_BYTE *)(a1 + 24);
        if ( (v22 & 0x10) != 0 )
        {
          v23 = *(_DWORD *)a1 | 0x10;
          *(_DWORD *)a1 = v23;
          if ( (v22 & 0x30) == 0x30 )
            *(_DWORD *)a1 = v23 | 0x1000;
          *(_BYTE *)(a1 + 24) = v22 & 0xF;
        }
      }
      v3 = 2;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    while ( 1 )
    {
      if ( (*(_DWORD *)a1 & 1) == 0 )
      {
        v11 = MiCallCreateSectionFilters(a1);
        if ( v11 < 0 )
          goto LABEL_48;
        *(_QWORD *)(a1 + 184) = IoGetTopLevelIrp();
        IoSetTopLevelIrp((PIRP)1);
        *(_DWORD *)a1 |= 2u;
      }
      v18 = MiReferenceControlArea(a1, (__int64)v31, &v32);
      v11 = v18;
      if ( v18 >= 0 )
        break;
      if ( v18 == -1073740277 )
      {
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        goto LABEL_30;
      }
      if ( v18 == -1073740682 )
      {
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        goto LABEL_81;
      }
    }
    v19 = v32;
    *(_QWORD *)(a1 + 64) = v32;
    if ( (v19[7] & 2) != 0 )
    {
      v11 = MiCreateNewSection(a1, &v33);
      if ( v11 < 0 )
      {
        if ( v33 )
        {
          v19 = (_QWORD *)*v33;
          v32 = v19;
          *(_QWORD *)(a1 + 64) = v19;
        }
        v25 = (_QWORD *)MiZeroSectionObjectPointer((__int64)v6, (__int64)v19, *(_DWORD *)(a1 + 16));
        --v1;
        if ( v19 == v31 )
        {
          ObfDereferenceObject(v6);
          v6 = (_QWORD **)ObFastReplaceObject(v19 + 8, 0LL);
        }
        else
        {
          _InterlockedIncrement64((volatile signed __int64 *)(MiGetControlAreaPartition((__int64)v19) + 1288));
          MiDereferenceControlAreaBySection((__int64)v32, 1u);
        }
        MiReleaseControlAreaWaiters(v25);
      }
      else
      {
        v24 = *v33;
        *(_QWORD *)(a1 + 64) = *v33;
        _InterlockedIncrement64((volatile signed __int64 *)(MiGetControlAreaPartition(v24) + 1288));
        v1 -= 2;
      }
LABEL_48:
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      goto LABEL_29;
    }
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    v11 = MiShareExistingControlArea(a1);
    if ( v11 < 0 )
      MiDereferenceFailedControlArea(a1);
    else
      --v1;
    goto LABEL_29;
  }
  return 3221225716LL;
}
