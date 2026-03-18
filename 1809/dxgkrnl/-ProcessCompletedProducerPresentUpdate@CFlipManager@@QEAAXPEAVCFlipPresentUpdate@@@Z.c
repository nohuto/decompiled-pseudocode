/*
 * XREFs of ?ProcessCompletedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C005A81C
 * Callers:
 *     ?Complete@CFlipPresentUpdate@@UEAAXXZ @ 0x1C005CFF0 (-Complete@CFlipPresentUpdate@@UEAAXXZ.c)
 * Callees:
 *     ?EnqueueConsumerUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C005A108 (-EnqueueConsumerUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 */

void __fastcall CFlipManager::ProcessCompletedProducerPresentUpdate(CFlipManager *this, struct CFlipPresentUpdate *a2)
{
  _QWORD *v2; // rbx
  struct CFlipPresentUpdate *v4; // rsi
  _QWORD *v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  struct CFlipPresentUpdate *v13; // [rsp+30h] [rbp+8h]

  v2 = (_QWORD *)((char *)this + 152);
  if ( *((_QWORD *)a2 + 8) != *((_QWORD *)this + 26) )
  {
    v11 = (_QWORD *)*((_QWORD *)this + 20);
    v12 = (_QWORD *)((char *)a2 + 24);
    if ( (_QWORD *)*v11 == v2 )
    {
      *v12 = v2;
      *((_QWORD *)a2 + 4) = v11;
      *v11 = v12;
      v2[1] = v12;
      return;
    }
LABEL_14:
    __fastfail(3u);
  }
  CFlipManager::EnqueueConsumerUpdate((PRKEVENT *)this, a2);
  if ( (_QWORD *)*v2 == v2 )
    return;
  v4 = v13;
LABEL_4:
  v5 = (_QWORD *)*v2;
  if ( (_QWORD *)*v2 == v2 )
    return;
  v6 = *((_QWORD *)this + 26);
  do
  {
    v7 = *(_QWORD *)(((unsigned __int64)(v5 - 3) & ((unsigned __int128)-(__int128)(unsigned __int64)v5 >> 64)) + 0x40);
    if ( v7 == v6 )
    {
      v4 = (struct CFlipPresentUpdate *)((unsigned __int64)(v5 - 3) & ((unsigned __int128)-(__int128)(unsigned __int64)v5 >> 64));
LABEL_10:
      v8 = (_QWORD *)(((unsigned __int64)v4 + 24) & ((unsigned __int128)-(__int128)((unsigned __int64)v4 + 16) >> 64));
      v9 = *v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8 )
        goto LABEL_14;
      v10 = *(_QWORD **)((((unsigned __int64)v4 + 24) & ((unsigned __int128)-(__int128)((unsigned __int64)v4 + 16) >> 64))
                       + 8);
      if ( (_QWORD *)*v10 != v8 )
        goto LABEL_14;
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      v8[1] = v8;
      *v8 = v8;
      CFlipManager::EnqueueConsumerUpdate((PRKEVENT *)this, v4);
      goto LABEL_4;
    }
    v5 = (_QWORD *)*v5;
  }
  while ( v5 != v2 );
  if ( v7 == v6 )
    goto LABEL_10;
}
