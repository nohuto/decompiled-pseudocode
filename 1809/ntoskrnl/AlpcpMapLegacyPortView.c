/*
 * XREFs of AlpcpMapLegacyPortView @ 0x14061DCE4
 * Callers:
 *     AlpcpFormatConnectionRequest @ 0x140615A64 (AlpcpFormatConnectionRequest.c)
 *     AlpcpAcceptConnectPort @ 0x14061ACD8 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     AlpcpCreateSectionView @ 0x14061767C (AlpcpCreateSectionView.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140617E4C (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDeleteBlob @ 0x140619BF4 (AlpcpDeleteBlob.c)
 *     AlpcpCreateSection @ 0x14061BF74 (AlpcpCreateSection.c)
 *     AlpcpUnlockBlob @ 0x140638060 (AlpcpUnlockBlob.c)
 *     MmGetSectionInformation @ 0x14066EA10 (MmGetSectionInformation.c)
 *     AlpcpDereferenceView @ 0x14084AB74 (AlpcpDereferenceView.c)
 */

__int64 __fastcall AlpcpMapLegacyPortView(char *Object, __int64 a2, __int64 a3)
{
  void *v3; // rsi
  int SectionInformation; // edi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rbp
  __int64 v13; // r15
  __int64 v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v19[8]; // [rsp+38h] [rbp-50h] BYREF
  int v20; // [rsp+40h] [rbp-48h]
  __int64 v21; // [rsp+48h] [rbp-40h]
  PVOID v22; // [rsp+98h] [rbp+10h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+20h] BYREF

  v3 = *(void **)(a2 + 8);
  if ( !v3 )
    return 3221225480LL;
  SectionInformation = ObReferenceObjectByHandle(
                         v3,
                         6u,
                         MmSectionObjectType,
                         KeGetCurrentThread()->PreviousMode,
                         &v22,
                         0LL);
  if ( SectionInformation >= 0 )
  {
    SectionInformation = MmGetSectionInformation(v22, 0LL, v19);
    if ( SectionInformation >= 0 )
    {
      if ( (v20 & 0x800000) != 0 )
      {
        SectionInformation = -1073741637;
      }
      else
      {
        v9 = v21;
        v10 = (unsigned int)(AlpcpViewGranularity - 1);
        v11 = ~((unsigned int)AlpcpViewGranularity - 1LL);
        v12 = v11 & (v10 + *(unsigned int *)(a2 + 16));
        v13 = v11 & (v10 + *(_QWORD *)(a2 + 24));
        if ( v13 + v12 >= v12 )
        {
          if ( v13 + v12 <= v21 )
          {
            SectionInformation = AlpcpCreateSection(Object, 0, 0, v3, v21, (ULONG_PTR *)&v23);
            if ( SectionInformation >= 0 )
            {
              v14 = v23;
              v15 = v9 - v12;
              if ( v13 )
                v15 = v13;
              SectionInformation = AlpcpCreateSectionView(v23, (signed __int64 *)Object, v12, v15, &v18);
              if ( SectionInformation >= 0 )
              {
                v16 = v18;
                *(_DWORD *)a2 = 48;
                *(_QWORD *)(a2 + 32) = *(_QWORD *)(v16 + 40);
                v17 = *(_QWORD *)(v16 + 48);
                *(_QWORD *)(a2 + 40) = 0LL;
                *(_QWORD *)(a2 + 24) = v17;
                *(_QWORD *)(a3 + 40) = v16;
                AlpcpLockForCachedReferenceBlob(*(_QWORD *)(v16 + 16));
                ++*(_DWORD *)(v16 + 76);
                AlpcpUnlockBlob(*(_QWORD *)(v16 + 16));
              }
              else if ( AlpcpDeleteBlob(v14) )
              {
                AlpcpDereferenceView(v14);
              }
              AlpcpDereferenceView(v14);
            }
          }
          else
          {
            SectionInformation = -1073741670;
          }
        }
        else
        {
          SectionInformation = -1073741811;
        }
      }
    }
    ObfDereferenceObject(v22);
  }
  return (unsigned int)SectionInformation;
}
