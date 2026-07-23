/*
 * XREFs of IopDeleteFileObjectExtension @ 0x140092090
 * Callers:
 *     IopDeleteFile @ 0x14063C3E0 (IopDeleteFile.c)
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x140092218 (ExFreeToNPagedLookasideList.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400BF8F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     IopCleanupNotifications @ 0x14016AB38 (IopCleanupNotifications.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     PsReleaseSiloHardReference @ 0x1402E9810 (PsReleaseSiloHardReference.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14060DFB0 (FsRtlFreeExtraCreateParameter.c)
 *     PspAdjustKeepAliveCountProcess @ 0x140889C84 (PspAdjustKeepAliveCountProcess.c)
 */

void __fastcall IopDeleteFileObjectExtension(__int64 a1)
{
  _DWORD *v1; // rsi
  __int64 i; // rbx
  _QWORD *v3; // rdi
  _QWORD *v4; // r14
  _QWORD *v5; // r14
  void *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rax
  void *v9; // rcx
  _QWORD **v10; // r14
  _QWORD *v11; // rdi
  void *v12; // rcx
  _BYTE *v13; // rbp
  _QWORD *v14; // r15
  KIRQL v15; // r12
  unsigned __int8 v16; // r13
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD *v18; // rcx
  _QWORD *v19; // rdi
  __int64 v20; // rdi
  int v21; // eax
  void *v22; // rcx
  ULONG v23; // edx

  v1 = *(_DWORD **)(a1 + 208);
  if ( v1 == IopRevocationExtension )
    return;
  for ( i = 0LL; i < 9; ++i )
  {
    if ( !*(_QWORD *)&v1[2 * i + 2] )
      continue;
    if ( i == 4 )
    {
      v10 = (_QWORD **)*((_QWORD *)v1 + 5);
      v11 = *v10;
      while ( v11 != v10 )
      {
        v12 = v11;
        v11 = (_QWORD *)*v11;
        ExFreePoolWithTag(v12, 0);
      }
      goto LABEL_18;
    }
    if ( i )
    {
      if ( i != 5 )
      {
        switch ( i )
        {
          case 1LL:
            v3 = (_QWORD *)*((_QWORD *)v1 + 2);
            v4 = (_QWORD *)v3[2];
            while ( v4 )
            {
              v7 = v4;
              v4 = (_QWORD *)*v4;
              ExFreePoolWithTag(v7, 0);
            }
            v5 = (_QWORD *)v3[3];
            while ( v5 )
            {
              v13 = (_BYTE *)v5[3];
              v14 = v5;
              v5 = (_QWORD *)*v5;
              v15 = KeAcquireSpinLockRaiseToDpc(&qword_140437010);
              v16 = v13[18];
              if ( v13[16] == 1 )
                v13[17] = 1;
              else
                ExFreePoolWithTag(v13, 0);
              KxReleaseSpinLock(&qword_140437010);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v15 < 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
              __writecr8(v15);
              if ( *((_DWORD *)v14 + 4) )
              {
                PspAdjustKeepAliveCountProcess(v14[1], 0xFFFFFFFFLL, a1, v16);
                ObfDereferenceObjectWithTag((PVOID)v14[1], 0x746C6644u);
              }
              ExFreePoolWithTag(v14, 0);
            }
            v6 = (void *)v3[1];
            if ( !v6 )
              goto LABEL_18;
            v23 = 1953261124;
            break;
          case 6LL:
            ExFreeToNPagedLookasideList(&IopOplockFoExtLookasideList, *((PVOID *)v1 + 7));
            continue;
          case 2LL:
            v18 = *(_QWORD **)(*((_QWORD *)v1 + 3) + 40LL);
            if ( v18 )
            {
              do
              {
                v19 = (_QWORD *)v18[5];
                ExFreePoolWithTag(v18, 0);
                v18 = v19;
              }
              while ( v19 );
            }
            goto LABEL_18;
          case 7LL:
            v20 = *((_QWORD *)v1 + 8);
            v21 = *(_DWORD *)(v20 + 4);
            if ( (v21 & 1) != 0 )
            {
              v22 = *(void **)(v20 + 8);
              *(_DWORD *)(v20 + 4) = v21 & 0xFFFFFFFE;
              PsReleaseSiloHardReference(v22);
            }
            v6 = *(void **)(v20 + 8);
            v23 = 1884516169;
            break;
          case 8LL:
            v23 = 1866886985;
            v6 = (void *)**((_QWORD **)v1 + 9);
            break;
          default:
LABEL_18:
            ExFreePoolWithTag(*(PVOID *)&v1[2 * i + 2], 0);
            continue;
        }
        ObfDereferenceObjectWithTag(v6, v23);
        goto LABEL_18;
      }
      FsRtlFreeExtraCreateParameter(*((PVOID *)v1 + 6));
    }
    else
    {
      v8 = *((_QWORD *)v1 + 1);
      if ( !v8 )
        goto LABEL_18;
      v9 = *(void **)(v8 + 8);
      if ( !v9 )
        goto LABEL_18;
      ObDereferenceObjectDeferDeleteWithTag(v9, 0x746C6644u);
      ExFreePoolWithTag(*((PVOID *)v1 + 1), 0);
    }
  }
  if ( (*v1 & 2) != 0 )
    IopCleanupNotifications(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL), a1);
  ExFreePoolWithTag(v1, 0);
}
