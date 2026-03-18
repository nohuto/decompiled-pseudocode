/*
 * XREFs of CmpCleanupLightWeightPrepare @ 0x1406E20D8
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x1406E1D34 (CmpCommitLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x1406E2234 (CmpPrepareLightWeightTransaction.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14008BCE0 (CmSiFreeMemory.c)
 *     CmpFreeTransientPoolWithTag @ 0x140092A90 (CmpFreeTransientPoolWithTag.c)
 *     CmpFreeValue @ 0x14062ED1C (CmpFreeValue.c)
 *     CmpFreeKeyByCell @ 0x140631398 (CmpFreeKeyByCell.c)
 *     CmListGetNextElement @ 0x140633584 (CmListGetNextElement.c)
 *     CmpCleanupDiscardReplaceContext @ 0x140638A70 (CmpCleanupDiscardReplaceContext.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x1406E285C (CmpLightWeightCleanupSetValueKeyUoW.c)
 *     CmpFreeUnitOfWork @ 0x14083CE40 (CmpFreeUnitOfWork.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x14083CE5C (CmpLightWeightCleanupModifyKeyDataUoW.c)
 */

void __fastcall CmpCleanupLightWeightPrepare(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD **v3; // rdi
  char *NextElement; // rax
  __int64 v6; // r8
  char *v7; // rbx
  __int64 v8; // rdx
  int v9; // eax
  _QWORD *v10; // rcx
  unsigned int *v11; // rcx
  ULONG_PTR v12; // rdx
  _QWORD *v13; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v13 = 0LL;
    v3 = (_QWORD **)(a1 + 16);
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          NextElement = CmListGetNextElement(v3, &v13, 0);
          v7 = NextElement;
          if ( !NextElement )
            return;
          v8 = *((_QWORD *)NextElement + 13);
        }
        while ( !v8 );
        v9 = *((_DWORD *)NextElement + 17);
        if ( !v9 )
        {
LABEL_16:
          CmpFreeKeyByCell(*(_QWORD *)(*((_QWORD *)v7 + 6) + 32LL), *(unsigned int *)(*((_QWORD *)v7 + 6) + 40LL), v6);
          v8 = *((_QWORD *)v7 + 13);
          goto LABEL_17;
        }
        if ( v9 != 1 )
          break;
LABEL_27:
        *((_QWORD *)v7 + 13) &= v6;
      }
      if ( v9 == 2 )
      {
LABEL_17:
        if ( v8 )
        {
          CmpLightWeightCleanupModifyKeyDataUoW(*(_QWORD *)(*((_QWORD *)v7 + 6) + 32LL));
          *((_QWORD *)v7 + 13) = 0LL;
        }
        v10 = (_QWORD *)*((_QWORD *)v7 + 14);
        if ( v10 )
        {
          CmpCleanupDiscardReplaceContext(v10, a3);
          CmSiFreeMemory(*((PPRIVILEGE_SET *)v7 + 14));
          goto LABEL_21;
        }
      }
      else
      {
        if ( v9 == 3 )
          goto LABEL_27;
        if ( v9 > 3 )
        {
          if ( v9 <= 6 )
          {
            CmpLightWeightCleanupSetValueKeyUoW(*(_QWORD *)(*((_QWORD *)v7 + 6) + 32LL));
            v11 = (unsigned int *)*((_QWORD *)v7 + 14);
            *((_QWORD *)v7 + 13) = 0LL;
            if ( v11 )
            {
              v12 = *v11;
              if ( (_DWORD)v12 != -1 )
              {
                CmpFreeValue(*(_QWORD *)(*((_QWORD *)v7 + 6) + 32LL), v12);
                v11 = (unsigned int *)*((_QWORD *)v7 + 14);
              }
              CmpFreeTransientPoolWithTag(v11, 0x77554D43u);
LABEL_21:
              *((_QWORD *)v7 + 14) = 0LL;
            }
          }
          else
          {
            switch ( v9 )
            {
              case 9:
                CmpFreeUnitOfWork(v8);
                *((_QWORD *)v7 + 13) = 0LL;
                break;
              case 10:
                goto LABEL_27;
              case 12:
                goto LABEL_16;
            }
          }
        }
      }
    }
  }
}
