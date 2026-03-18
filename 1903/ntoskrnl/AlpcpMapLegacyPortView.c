/*
 * XREFs of AlpcpMapLegacyPortView @ 0x14068CDB8
 * Callers:
 *     AlpcpFormatConnectionRequest @ 0x1406470B4 (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x140648064 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     AlpcpUnlockBlob @ 0x1405E4790 (AlpcpUnlockBlob.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     AlpcpCreateSectionView @ 0x1406495FC (AlpcpCreateSectionView.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14064A878 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14064B150 (AlpcpDereferenceBlobEx.c)
 *     AlpcpCreateSection @ 0x14068A9E8 (AlpcpCreateSection.c)
 *     MmGetSectionInformation @ 0x14068D080 (MmGetSectionInformation.c)
 */

__int64 __fastcall AlpcpMapLegacyPortView(char *Object, __int64 a2, __int64 a3)
{
  void *v3; // r14
  int SectionInformation; // edi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // r15
  __int64 v11; // r12
  __int64 v12; // rbx
  ULONG_PTR v13; // rbx
  __int64 v14; // rax
  ULONG_PTR v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h] BYREF
  __int64 v18; // [rsp+40h] [rbp-10h]
  __int64 v19; // [rsp+48h] [rbp-8h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp+48h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+50h]
  PVOID Objecta; // [rsp+A8h] [rbp+58h] BYREF

  v21 = a3;
  v3 = *(void **)(a2 + 8);
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  if ( !v3 )
    return 3221225480LL;
  SectionInformation = ObReferenceObjectByHandle(
                         v3,
                         6u,
                         MmSectionObjectType,
                         KeGetCurrentThread()->PreviousMode,
                         &Objecta,
                         0LL);
  if ( SectionInformation >= 0 )
  {
    SectionInformation = MmGetSectionInformation(Objecta, 0LL, &v17);
    if ( SectionInformation >= 0 )
    {
      if ( (v18 & 0x800000) != 0 )
      {
        SectionInformation = -1073741637;
      }
      else
      {
        v7 = v19;
        v8 = (unsigned int)(AlpcpViewGranularity - 1);
        v9 = ~((unsigned int)AlpcpViewGranularity - 1LL);
        v10 = v9 & (v8 + *(unsigned int *)(a2 + 16));
        v11 = v9 & (v8 + *(_QWORD *)(a2 + 24));
        if ( v11 + v10 < v10 )
        {
          SectionInformation = -1073741811;
        }
        else if ( v11 + v10 > v19 )
        {
          SectionInformation = -1073741670;
        }
        else
        {
          SectionInformation = AlpcpCreateSection(Object, 0, 0, v3, v19, &BugCheckParameter2);
          if ( SectionInformation >= 0 )
          {
            v12 = v7 - v10;
            if ( v11 )
              v12 = v11;
            SectionInformation = AlpcpCreateSectionView(BugCheckParameter2, (signed __int64 *)Object, v10, v12, &v16);
            if ( SectionInformation < 0 )
            {
              AlpcpDereferenceBlobEx(BugCheckParameter2, 1);
            }
            else
            {
              v13 = v16;
              *(_DWORD *)a2 = 48;
              *(_QWORD *)(a2 + 32) = *(_QWORD *)(v13 + 40);
              v14 = *(_QWORD *)(v13 + 48);
              *(_QWORD *)(a2 + 40) = 0LL;
              *(_QWORD *)(a2 + 24) = v14;
              *(_QWORD *)(v21 + 40) = v13;
              AlpcpLockForCachedReferenceBlob(*(_QWORD *)(v13 + 16));
              ++*(_DWORD *)(v13 + 76);
              AlpcpUnlockBlob(*(_QWORD *)(v13 + 16));
            }
          }
        }
      }
    }
    ObfDereferenceObject(Objecta);
  }
  return (unsigned int)SectionInformation;
}
