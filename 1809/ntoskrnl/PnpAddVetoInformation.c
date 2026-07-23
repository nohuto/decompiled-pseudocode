/*
 * XREFs of PnpAddVetoInformation @ 0x140833FA4
 * Callers:
 *     PnpCollectOpenHandlesCallBack @ 0x140834190 (PnpCollectOpenHandlesCallBack.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall PnpAddVetoInformation(PVOID Object, _QWORD *a2, unsigned int a3)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rsi
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  char v9; // r8
  __int64 v10; // rdx
  unsigned int v11; // eax
  _QWORD *v12; // rax
  PVOID *v13; // rcx
  _QWORD *v14; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  _QWORD *v18; // rsi
  _QWORD *v19; // rax
  _QWORD *v20; // rcx

  v3 = (_QWORD *)*a2;
  v4 = a2;
  v5 = 0LL;
  v6 = 0LL;
  v9 = 1;
  v10 = *a2 - 24LL;
  if ( v4 == v3 )
    goto LABEL_15;
  while ( 1 )
  {
    v11 = *(_DWORD *)(v10 + 16);
    if ( v11 == a3 )
    {
      v12 = *(_QWORD **)v10;
      v6 = (_QWORD *)v10;
      v9 = 0;
      while ( 1 )
      {
        v13 = (PVOID *)(v12 - 1);
        if ( (_QWORD *)v10 == v12 )
          goto LABEL_11;
        if ( *v13 == Object )
          return;
        if ( *v13 > Object )
        {
          v6 = v12;
          goto LABEL_11;
        }
        v12 = (_QWORD *)*v12;
      }
    }
    if ( v11 > a3 )
      break;
LABEL_11:
    v14 = *(_QWORD **)(v10 + 24);
    v10 = (__int64)(v14 - 3);
    if ( v4 == v14 )
      goto LABEL_14;
  }
  v4 = (_QWORD *)(v10 + 24);
LABEL_14:
  if ( v9 )
  {
LABEL_15:
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x4F706E50u);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      *((_DWORD *)PoolWithTag + 4) = a3;
      v16 = PoolWithTag + 3;
      v17 = (_QWORD *)v4[1];
      if ( (_QWORD *)*v17 == v4 )
      {
        *v16 = v4;
        v6 = v5;
        v16[1] = v17;
        *v17 = v16;
        v4[1] = v16;
        v5[1] = v5;
        *v5 = v5;
        goto LABEL_18;
      }
LABEL_24:
      __fastfail(3u);
    }
  }
  else
  {
LABEL_18:
    v18 = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x50706E50u);
    if ( v18 )
    {
      ObfReferenceObject(Object);
      *v18 = Object;
      v19 = v18 + 1;
      v20 = (_QWORD *)v6[1];
      if ( (_QWORD *)*v20 != v6 )
        goto LABEL_24;
      *v19 = v6;
      v18[2] = v20;
      *v20 = v19;
      v6[1] = v19;
    }
    else if ( v5 )
    {
      ExFreePoolWithTag(v5, 0x4F706E50u);
    }
  }
}
