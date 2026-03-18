/*
 * XREFs of MiCreateImageOrDataSection @ 0x1405D7290
 * Callers:
 *     MiCreateSection @ 0x1405D7770 (MiCreateSection.c)
 * Callees:
 *     ObDereferenceObjectEx @ 0x140008694 (ObDereferenceObjectEx.c)
 *     IoGetTopLevelIrp @ 0x14000A2A0 (IoGetTopLevelIrp.c)
 *     IoSetTopLevelIrp @ 0x14000A2C0 (IoSetTopLevelIrp.c)
 *     IoGetFileMemoryPartitionInformation @ 0x14000A374 (IoGetFileMemoryPartitionInformation.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     MiReferenceControlArea @ 0x14005F46C (MiReferenceControlArea.c)
 *     MiDereferenceControlAreaBySection @ 0x140071174 (MiDereferenceControlAreaBySection.c)
 *     ObFastReplaceObject @ 0x14007FED4 (ObFastReplaceObject.c)
 *     IoAllowExecution @ 0x140088A38 (IoAllowExecution.c)
 *     MiGetControlAreaPartition @ 0x1400979D0 (MiGetControlAreaPartition.c)
 *     MiReferenceExistingControlArea @ 0x1400C0370 (MiReferenceExistingControlArea.c)
 *     MiReleaseControlAreaWaiters @ 0x1400C0420 (MiReleaseControlAreaWaiters.c)
 *     PsReferencePartitionSafe @ 0x1400C5438 (PsReferencePartitionSafe.c)
 *     ObReferenceObjectExWithTag @ 0x14010A6B0 (ObReferenceObjectExWithTag.c)
 *     CcWaitForUninitializeCacheMap @ 0x14012387C (CcWaitForUninitializeCacheMap.c)
 *     MiForceSectionClosed @ 0x14012570C (MiForceSectionClosed.c)
 *     MiZeroSectionObjectPointer @ 0x14013D4B4 (MiZeroSectionObjectPointer.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiShareExistingControlArea @ 0x1405D5654 (MiShareExistingControlArea.c)
 *     MiCallCreateSectionFilters @ 0x1405D7070 (MiCallCreateSectionFilters.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     MiCreateNewSection @ 0x14064FBD4 (MiCreateNewSection.c)
 *     MiDereferenceFailedControlArea @ 0x1406F1448 (MiDereferenceFailedControlArea.c)
 */

__int64 __fastcall MiCreateImageOrDataSection(__int64 a1)
{
  unsigned int v2; // r14d
  char v3; // r13
  int v4; // eax
  __int64 v5; // rbp
  NTSTATUS v6; // eax
  _QWORD **v7; // rsi
  int v8; // edi
  __int64 *FileMemoryPartitionInformation; // rax
  bool v10; // zf
  struct _KTHREAD *CurrentThread; // rbp
  int v12; // eax
  _QWORD *v13; // r15
  int v15; // ecx
  _QWORD **v16; // rdx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  char v23; // dl
  int v24; // ecx
  _QWORD *v25; // r12
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  signed __int64 v29; // rax
  _QWORD v30[16]; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD *v31; // [rsp+F0h] [rbp+8h] BYREF
  __int64 *v32; // [rsp+F8h] [rbp+10h] BYREF
  PVOID Object; // [rsp+100h] [rbp+18h] BYREF

  memset(v30, 0, sizeof(v30));
  v2 = 0;
  v3 = 1;
  if ( *(_BYTE *)(a1 + 192) )
    return 3221225716LL;
  v4 = *(_DWORD *)(a1 + 16);
  if ( (v4 & 0x80000) != 0 )
    return 3221225716LL;
  v5 = *(_QWORD *)(a1 + 48);
  if ( v5 )
  {
    v7 = *(_QWORD ***)(a1 + 48);
    goto LABEL_7;
  }
  if ( v4 >= 0 )
  {
    v6 = ObReferenceObjectByHandle(
           *(HANDLE *)(a1 + 40),
           MmMakeFileAccess[*(_DWORD *)(a1 + 32) & 7],
           (POBJECT_TYPE)IoFileObjectType,
           *(_BYTE *)(a1 + 72),
           &Object,
           0LL);
    v7 = (_QWORD **)Object;
    v8 = v6;
    if ( v6 < 0 )
      goto LABEL_21;
    v2 = 1;
    if ( !*((_QWORD *)Object + 5) )
    {
      v8 = -1073741792;
      goto LABEL_23;
    }
LABEL_7:
    FileMemoryPartitionInformation = (__int64 *)IoGetFileMemoryPartitionInformation((__int64)v7);
    if ( FileMemoryPartitionInformation )
    {
      if ( !PsReferencePartitionSafe(*FileMemoryPartitionInformation) )
      {
        v8 = -1073740640;
        goto LABEL_22;
      }
      *(_QWORD *)(a1 + 176) = v27;
      if ( (*(_DWORD *)(v26 + 8) & 1) != 0 )
        *(_DWORD *)a1 |= 0x800000u;
    }
    if ( !v5 )
    {
      ObfReferenceObject(v7);
      ++v2;
LABEL_10:
      *(_QWORD *)(a1 + 56) = v7;
      LODWORD(v30[7]) = 2;
      if ( v7 )
        v30[8] = v7;
      else
        v30[8] = 0LL;
      v10 = (*(_DWORD *)(a1 + 16) & 0x1000000) == 0;
      v32 = 0LL;
      if ( !v10 )
      {
        if ( (*(_DWORD *)a1 & 0x400) != 0 && !IoAllowExecution((__int64)v7) )
        {
          v8 = -1073741790;
          goto LABEL_22;
        }
        CcWaitForUninitializeCacheMap((__int64)v7);
        if ( (*(_DWORD *)a1 & 0x400) != 0 )
        {
          v23 = *(_BYTE *)(a1 + 24);
          if ( (v23 & 0x10) != 0 )
          {
            v24 = *(_DWORD *)a1 | 0x10;
            *(_DWORD *)a1 = v24;
            if ( (v23 & 0x30) == 0x30 )
              *(_DWORD *)a1 = v24 | 0x1000;
            *(_BYTE *)(a1 + 24) = v23 & 0xF;
          }
        }
        v3 = 2;
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      while ( 1 )
      {
        v8 = MiCallCreateSectionFilters((int *)a1);
        if ( v8 < 0 )
          goto LABEL_41;
        if ( (*(_DWORD *)a1 & 1) == 0 )
        {
          *(_QWORD *)(a1 + 184) = IoGetTopLevelIrp();
          IoSetTopLevelIrp((PIRP)1);
          *(_DWORD *)a1 |= 2u;
        }
        v12 = MiReferenceControlArea(a1, (__int64)v30, (__int64 *)&v31);
        v8 = v12;
        if ( v12 >= 0 )
          break;
        if ( v12 == -1073740277 )
        {
          KeLeaveCriticalRegionThread((__int64)CurrentThread);
          goto LABEL_22;
        }
        if ( v12 == -1073740682 )
        {
          KeLeaveCriticalRegionThread((__int64)CurrentThread);
          goto LABEL_77;
        }
      }
      v13 = v31;
      *(_QWORD *)(a1 + 64) = v31;
      if ( (v13[7] & 2) != 0 )
      {
        v8 = MiCreateNewSection(a1, &v32);
        if ( v8 >= 0 )
        {
          v22 = *v32;
          *(_QWORD *)(a1 + 64) = *v32;
          _InterlockedIncrement64((volatile signed __int64 *)(MiGetControlAreaPartition(v22) + 1288));
          v2 -= 2;
LABEL_41:
          KeLeaveCriticalRegionThread((__int64)CurrentThread);
          goto LABEL_21;
        }
        if ( v32 )
        {
          v13 = (_QWORD *)*v32;
          v31 = v13;
          *(_QWORD *)(a1 + 64) = v13;
        }
        v25 = (_QWORD *)MiZeroSectionObjectPointer((__int64)v7, (__int64)v13, *(_DWORD *)(a1 + 16));
        --v2;
        if ( v13 == v30 )
        {
          ObfDereferenceObject(v7);
          v7 = (_QWORD **)ObFastReplaceObject(v13 + 8, 0LL);
        }
        else
        {
          _InterlockedIncrement64((volatile signed __int64 *)(MiGetControlAreaPartition((__int64)v13) + 1288));
          MiDereferenceControlAreaBySection((__int64)v31, 1u);
        }
        MiReleaseControlAreaWaiters(v25);
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
      }
      else
      {
        KeLeaveCriticalRegionThread((__int64)CurrentThread);
        v8 = MiShareExistingControlArea(a1);
        if ( v8 < 0 )
          MiDereferenceFailedControlArea(a1);
        else
          --v2;
      }
      goto LABEL_21;
    }
    v15 = *(_DWORD *)(a1 + 16) & 0x1000000;
    if ( v15 )
    {
      if ( (*(_DWORD *)a1 & 1) != 0 )
      {
        v8 = -1073741580;
        goto LABEL_22;
      }
      if ( *(_QWORD *)(a1 + 152) )
      {
        v8 = -1073741582;
        goto LABEL_22;
      }
    }
    v16 = *(_QWORD ***)(v5 + 40);
    if ( !v16 )
    {
      v8 = -1073741792;
      goto LABEL_22;
    }
    v17 = *(_QWORD *)(a1 + 8);
    if ( v17 && (*(_DWORD *)(v17 + 24) & 0x200) != 0 )
    {
      *(_BYTE *)(a1 + 72) = 0;
      v16 = *(_QWORD ***)(v5 + 40);
    }
    if ( v15 )
      v16 += 2;
    v8 = -1073741823;
    v31 = *v16;
    if ( !v31 || (v8 = MiReferenceExistingControlArea(a1), v8 < 0) )
    {
      ObReferenceObjectExWithTag((ULONG_PTR)v7, 2);
      v2 += 2;
      if ( v8 == -1073740682 )
      {
LABEL_77:
        if ( (*(_DWORD *)a1 & 1) == 0 )
          CcWaitForUninitializeCacheMap((__int64)v7);
        if ( (unsigned int)MiForceSectionClosed(v7[5], v3) > 1 && (*(_DWORD *)a1 & 0x1000000) != 0 )
        {
          ++dword_140465E98;
          v8 = -1073740277;
        }
LABEL_22:
        if ( !v2 )
          return (unsigned int)v8;
LABEL_23:
        ObDereferenceObjectEx((ULONG_PTR)v7, v2);
        return (unsigned int)v8;
      }
      goto LABEL_10;
    }
    v18 = *(_DWORD *)a1 | 4;
    v10 = (*(_DWORD *)(a1 + 16) & 0x1000000) == 0;
    *(_DWORD *)a1 = v18;
    v19 = *(_QWORD *)(v5 + 40);
    if ( v10 )
    {
      v20 = *(_QWORD **)v19;
      v21 = *(_QWORD *)(a1 + 152);
      *(_QWORD *)(a1 + 128) = v21;
      v31 = v20;
      if ( (v18 & 1) != 0 || v21 )
        goto LABEL_38;
      v28 = *v20;
    }
    else
    {
      v31 = *(_QWORD **)(v19 + 16);
      v28 = *v31;
    }
    v29 = _InterlockedCompareExchange64((volatile signed __int64 *)(v28 + 24), -1LL, -1LL);
    v20 = v31;
    *(_QWORD *)(a1 + 128) = v29;
LABEL_38:
    *(_QWORD *)(a1 + 64) = v20;
LABEL_21:
    if ( v8 != -1073740682 )
      goto LABEL_22;
    goto LABEL_77;
  }
  return 3221225716LL;
}
