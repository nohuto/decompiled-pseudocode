/*
 * XREFs of AlpcpCreateRegion @ 0x1406496F0
 * Callers:
 *     AlpcpCreateSectionView @ 0x1406495FC (AlpcpCreateSectionView.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     AlpcpReferenceBlob @ 0x14064B920 (AlpcpReferenceBlob.c)
 *     AlpcpAllocateBlob @ 0x14064B994 (AlpcpAllocateBlob.c)
 */

__int64 __fastcall AlpcpCreateRegion(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // r14
  _QWORD *v13; // rcx
  _QWORD *v14; // rdx
  unsigned __int64 v15; // r9
  __int64 v16; // r8
  _QWORD *Blob; // rax
  _QWORD *v18; // rsi
  _QWORD *v19; // rax
  __int64 v21; // r10
  unsigned __int64 v22; // rax
  __int64 v23; // rbx

  CurrentThread = KeGetCurrentThread();
  *a4 = 0LL;
  if ( *(_KPROCESS **)(BugCheckParameter2 + 32) == CurrentThread->ApcState.Process )
  {
    v8 = (_QWORD *)(BugCheckParameter2 + 56);
    v9 = ~((unsigned int)AlpcpViewGranularity - 1LL) & (a3 + (unsigned int)(AlpcpViewGranularity - 1));
    v10 = (unsigned int)(AlpcpRegionGranularity - 1);
    v11 = ~((unsigned int)AlpcpRegionGranularity - 1LL);
    v12 = v11 & (v10 + a3);
    if ( a2 )
    {
      a2 = v11 & (v10 + a2);
    }
    else
    {
      v13 = (_QWORD *)*v8;
      v14 = 0LL;
      v15 = 0LL;
      v16 = 0LL;
      if ( (_QWORD *)*v8 == v8 )
      {
LABEL_4:
        if ( *(_QWORD *)(BugCheckParameter2 + 8) - a2 < v12 )
          return 3221225626LL;
      }
      else
      {
        do
        {
          v21 = v13[3];
          v22 = v21 - a2;
          if ( v21 - a2 == v12 )
          {
            v8 = v13;
            goto LABEL_5;
          }
          if ( v22 > v12 && (!v14 || v15 > v22) )
          {
            v14 = v13;
            v16 = a2;
            v15 = v13[3] - a2;
          }
          v23 = v13[4];
          v13 = (_QWORD *)*v13;
          a2 = v21 + v23;
        }
        while ( v13 != v8 );
        if ( !v14 )
          goto LABEL_4;
        v8 = v14;
        a2 = v16;
      }
    }
LABEL_5:
    Blob = (_QWORD *)AlpcpAllocateBlob(&AlpcRegionType, 88LL, 0LL);
    v18 = Blob;
    if ( Blob )
    {
      memset(Blob, 0, 0x58uLL);
      v18[8] = v18 + 7;
      v18[7] = v18 + 7;
      *((_DWORD *)v18 + 12) &= ~1u;
      v18[3] = a2;
      v18[4] = v12;
      v18[5] = v9;
      AlpcpReferenceBlob(BugCheckParameter2);
      v18[2] = BugCheckParameter2;
      v18[1] = v8[1];
      *v18 = v8;
      v19 = (_QWORD *)v8[1];
      *a4 = v18;
      *v19 = v18;
      v8[1] = v18;
      ++*(_DWORD *)(BugCheckParameter2 + 52);
      return 0LL;
    }
    return 3221225626LL;
  }
  return 3221225506LL;
}
