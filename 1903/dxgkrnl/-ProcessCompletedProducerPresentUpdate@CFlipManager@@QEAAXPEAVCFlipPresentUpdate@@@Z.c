/*
 * XREFs of ?ProcessCompletedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C0061840
 * Callers:
 *     ?Complete@CFlipPresentUpdate@@UEAAXXZ @ 0x1C0064220 (-Complete@CFlipPresentUpdate@@UEAAXXZ.c)
 * Callees:
 *     ?EnqueueConsumerUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C0061128 (-EnqueueConsumerUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 */

void __fastcall CFlipManager::ProcessCompletedProducerPresentUpdate(PRKEVENT *this, struct CFlipPresentUpdate *a2)
{
  char *v2; // rbx
  char *v4; // rdx
  __int64 v5; // r9
  _QWORD *v6; // r8
  __int64 v7; // rcx
  _QWORD *v8; // rax
  char **v9; // rcx
  char *v10; // rax

  v2 = (char *)(this + 17);
  if ( *((PRKEVENT *)a2 + 8) == this[24] )
  {
    CFlipManager::EnqueueConsumerUpdate(this, a2);
    if ( *(char **)v2 != v2 )
    {
      while ( 1 )
      {
        v4 = *(char **)v2;
        if ( *(char **)v2 == v2 )
          break;
        while ( 1 )
        {
          v5 = (unsigned __int64)(v4 - 24) & -(__int64)(v4 != 0LL);
          if ( *(PRKEVENT *)(v5 + 0x40) == this[24] )
            break;
          v4 = *(char **)v4;
          if ( v4 == v2 )
            return;
        }
        v6 = (_QWORD *)((v5 + 24) & -(__int64)(v5 != -16));
        v7 = *v6;
        if ( *(_QWORD **)(*v6 + 8LL) != v6 )
          goto LABEL_11;
        v8 = *(_QWORD **)(((v5 + 24) & -(__int64)(v5 != -16)) + 8);
        if ( (_QWORD *)*v8 != v6 )
          goto LABEL_11;
        *v8 = v7;
        *(_QWORD *)(v7 + 8) = v8;
        v6[1] = v6;
        *v6 = v6;
        CFlipManager::EnqueueConsumerUpdate(
          this,
          (struct CFlipPresentUpdate *)((unsigned __int64)(v4 - 24) & -(__int64)(v4 != 0LL)));
      }
    }
  }
  else
  {
    v9 = (char **)this[18];
    v10 = (char *)a2 + 24;
    if ( *v9 != v2 )
LABEL_11:
      __fastfail(3u);
    *(_QWORD *)v10 = v2;
    *((_QWORD *)a2 + 4) = v9;
    *v9 = v10;
    *((_QWORD *)v2 + 1) = v10;
  }
}
