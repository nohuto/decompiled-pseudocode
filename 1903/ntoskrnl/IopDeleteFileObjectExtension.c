/*
 * XREFs of IopDeleteFileObjectExtension @ 0x1400840D0
 * Callers:
 *     IopDeleteFile @ 0x1405F0850 (IopDeleteFile.c)
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140008290 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     ObDereferenceObjectDeferDelete @ 0x140066860 (ObDereferenceObjectDeferDelete.c)
 *     ExFreeToNPagedLookasideList @ 0x140084098 (ExFreeToNPagedLookasideList.c)
 *     IopCleanupNotifications @ 0x14018D824 (IopCleanupNotifications.c)
 *     PsReleaseSiloHardReference @ 0x140306C00 (PsReleaseSiloHardReference.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140617E20 (FsRtlFreeExtraCreateParameter.c)
 *     PspAdjustKeepAliveCountProcess @ 0x1408C692C (PspAdjustKeepAliveCountProcess.c)
 */

void __fastcall IopDeleteFileObjectExtension(__int64 a1)
{
  PVOID *v1; // rsi
  __int64 i; // rbx
  _QWORD *v3; // rdi
  _QWORD *v4; // r14
  _QWORD *v5; // r14
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  _QWORD *v9; // r14
  void *v10; // rcx
  _BYTE *v11; // rbp
  _QWORD *v12; // r15
  KIRQL v13; // r12
  unsigned __int8 v14; // r13
  _QWORD *v15; // rcx
  _QWORD *v16; // rdi
  int v17; // eax
  void *v18; // rcx
  _QWORD *v19; // rcx
  ULONG v20; // edx
  PVOID *v22; // [rsp+68h] [rbp+10h]

  v1 = *(PVOID **)(a1 + 208);
  v22 = v1;
  if ( v1 == IopRevocationExtension )
    return;
  for ( i = 0LL; i < 9; ++i )
  {
    v3 = v1[i + 1];
    if ( !v3 )
      continue;
    if ( i == 4 )
    {
      v9 = (_QWORD *)*v3;
      while ( v9 != v3 )
      {
        v10 = v9;
        v9 = (_QWORD *)*v9;
        ExFreePoolWithTag(v10, 0);
      }
      goto LABEL_19;
    }
    if ( i )
    {
      if ( i != 5 )
      {
        switch ( i )
        {
          case 1LL:
            v4 = (_QWORD *)v3[2];
            while ( v4 )
            {
              v7 = v4;
              v4 = (_QWORD *)*v4;
              ExFreePoolWithTag(v7, 0);
            }
            v5 = (_QWORD *)v3[3];
            if ( v5 )
            {
              do
              {
                v11 = (_BYTE *)v5[3];
                v12 = v5;
                v5 = (_QWORD *)*v5;
                v13 = KeAcquireSpinLockRaiseToDpc(&qword_140461B10);
                v14 = v11[18];
                if ( v11[16] == 1 )
                  v11[17] = 1;
                else
                  ExFreePoolWithTag(v11, 0);
                KeReleaseSpinLock(&qword_140461B10, v13);
                if ( *((_DWORD *)v12 + 4) )
                {
                  PspAdjustKeepAliveCountProcess(v12[1], 0xFFFFFFFFLL, a1, v14);
                  ObfDereferenceObject((PVOID)v12[1]);
                }
                ExFreePoolWithTag(v12, 0);
              }
              while ( v5 );
              v1 = v22;
            }
            v6 = (void *)v3[1];
            if ( v6 )
              ObfDereferenceObject(v6);
            break;
          case 6LL:
            ExFreeToNPagedLookasideList(&IopOplockFoExtLookasideList, v3);
            continue;
          case 2LL:
            v15 = (_QWORD *)v3[5];
            if ( v15 )
            {
              do
              {
                v16 = (_QWORD *)v15[5];
                ExFreePoolWithTag(v15, 0);
                v15 = v16;
              }
              while ( v16 );
            }
            break;
          case 7LL:
            v17 = *((_DWORD *)v3 + 1);
            if ( (v17 & 1) != 0 )
            {
              v18 = (void *)v3[1];
              *((_DWORD *)v3 + 1) = v17 & 0xFFFFFFFE;
              PsReleaseSiloHardReference(v18);
            }
            v19 = (_QWORD *)v3[1];
            v20 = 1884516169;
LABEL_45:
            ObfDereferenceObjectWithTag(v19, v20);
            break;
          case 8LL:
            v19 = (_QWORD *)*v3;
            v20 = 1866886985;
            goto LABEL_45;
        }
LABEL_19:
        ExFreePoolWithTag(v1[i + 1], 0);
        continue;
      }
      FsRtlFreeExtraCreateParameter(v3);
    }
    else
    {
      v8 = (void *)v3[1];
      if ( !v8 )
        goto LABEL_19;
      ObDereferenceObjectDeferDelete(v8);
      ExFreePoolWithTag(v1[1], 0);
    }
  }
  if ( (*(_DWORD *)v1 & 2) != 0 )
    IopCleanupNotifications(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL), a1);
  ExFreePoolWithTag(v1, 0);
}
