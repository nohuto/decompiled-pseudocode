/*
 * XREFs of ProcessEvalObj @ 0x1C0001620
 * Callers:
 *     <none>
 * Callees:
 *     GetObjectPath @ 0x1C0006C18 (GetObjectPath.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     ConPrintf @ 0x1C0065888 (ConPrintf.c)
 *     DumpObject @ 0x1C0067204 (DumpObject.c)
 */

__int64 __fastcall ProcessEvalObj(__int64 a1, __int64 a2, unsigned int a3)
{
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  _QWORD *i; // r8
  _QWORD *v11; // rcx
  _QWORD *v12; // r9
  __int64 v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // r9
  _QWORD *v16; // rbx
  __int64 v17; // rdx
  _QWORD *v18; // rax
  __int64 ObjectPath; // rax
  void *v21; // rdx
  void *v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // r10
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  _QWORD *v29; // rax

  if ( (gDebugger & 0xD0) != 0 && !a3 )
  {
    ObjectPath = GetObjectPath(*(_QWORD *)(a2 + 32));
    v21 = &unk_1C006FE7D;
    v22 = (void *)ObjectPath;
    if ( ObjectPath )
      LODWORD(v21) = ObjectPath;
    PrintDebugMessage(45, (_DWORD)v21, 0, 0, 0LL);
    if ( v22 )
      ExFreePoolWithTag(v22, 0);
    DumpObject(*(_QWORD *)(a2 + 48), v23, 0LL);
    ConPrintf("\n");
  }
  v6 = *(_QWORD **)(a1 + 416);
  *(_QWORD *)(a1 + 416) = v6[1];
  v7 = v6 - 2;
  *((_DWORD *)v6 - 4) = 0;
  byte_1C0082B28 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v8 = *(v6 - 1);
  v9 = *(_QWORD **)(v8 + 40);
  for ( i = (_QWORD *)(v8 + 40); v9 != i; v9 = (_QWORD *)*v9 )
  {
    if ( v6 < v9 )
      break;
  }
  v11 = (_QWORD *)v9[1];
  if ( (_QWORD *)*v11 != v9 )
    goto LABEL_11;
  v6[1] = v11;
  *v6 = v9;
  *v11 = v6;
  v9[1] = v6;
  v12 = (_QWORD *)*v6;
  v13 = *v6 - 16LL;
  if ( (_QWORD *)*v6 != i )
  {
    v24 = *((unsigned int *)v7 + 1);
    if ( (_QWORD *)v13 == (_QWORD *)((char *)v7 + v24) )
    {
      *((_DWORD *)v7 + 1) = v24 + *(_DWORD *)(v13 + 4);
      v25 = *v12;
      if ( *(_QWORD **)(*v12 + 8LL) != v12 )
        goto LABEL_11;
      v26 = (_QWORD *)v12[1];
      if ( (_QWORD *)*v26 != v12 )
        goto LABEL_11;
      *v26 = v25;
      *(_QWORD *)(v25 + 8) = v26;
    }
  }
  v14 = (_QWORD *)v7[3];
  v15 = v14 - 2;
  if ( v14 != i )
  {
    v27 = *((unsigned int *)v15 + 1);
    if ( v7 == (_QWORD *)((char *)v15 + v27) )
    {
      *((_DWORD *)v15 + 1) = *((_DWORD *)v7 + 1) + v27;
      v28 = *v6;
      if ( *(_QWORD **)(*v6 + 8LL) != v6 )
        goto LABEL_11;
      v29 = (_QWORD *)v6[1];
      if ( (_QWORD *)*v29 != v6 )
        goto LABEL_11;
      *v29 = v28;
      v7 = v15;
      *(_QWORD *)(v28 + 8) = v29;
    }
  }
  if ( *(_QWORD *)(v8 + 32) <= (unsigned __int64)v7 + *((unsigned int *)v7 + 1) )
  {
    *(_QWORD *)(v8 + 32) = v7;
    v16 = v7 + 2;
    v17 = *v16;
    if ( *(_QWORD **)(*v16 + 8LL) == v16 )
    {
      v18 = (_QWORD *)v16[1];
      if ( (_QWORD *)*v18 == v16 )
      {
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        goto LABEL_10;
      }
    }
LABEL_11:
    __fastfail(3u);
  }
LABEL_10:
  KeReleaseSpinLock(&gmutHeap, byte_1C0082B28);
  return a3;
}
