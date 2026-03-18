/*
 * XREFs of WriteFieldObj @ 0x1C0023F50
 * Callers:
 *     <none>
 * Callees:
 *     AccessBaseField @ 0x1C00019E0 (AccessBaseField.c)
 *     FreeNameSpaceObjects @ 0x1C0003550 (FreeNameSpaceObjects.c)
 *     PushPreserveWriteObj @ 0x1C0023CD8 (PushPreserveWriteObj.c)
 *     GetFieldUnitRegionObj @ 0x1C0024410 (GetFieldUnitRegionObj.c)
 *     WriteBuffField @ 0x1C00244AC (WriteBuffField.c)
 *     ReadSystemMem @ 0x1C0024690 (ReadSystemMem.c)
 *     PushAccFieldObj @ 0x1C0024724 (PushAccFieldObj.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 */

__int64 __fastcall WriteFieldObj(struct _SLIST_ENTRY *a1, __int64 a2, unsigned int a3, void *a4)
{
  unsigned int FieldUnitRegionObj; // edi
  int v7; // ecx
  int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // r10
  unsigned int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  size_t v15; // rdi
  __int64 v16; // rbp
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int64 SystemMem; // r8
  unsigned __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 *v23; // rcx
  __int64 v24; // rax
  __int64 v25; // r14
  int v26; // eax
  int v27; // ecx
  int v28; // ecx
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  _SLIST_ENTRY *Next; // rsi
  _SLIST_ENTRY *v33; // rbx
  __int64 v34; // r8
  _SLIST_ENTRY *v35; // rax
  _SLIST_ENTRY *i; // rdx
  _SLIST_ENTRY **v37; // rcx
  _SLIST_ENTRY *v38; // r9
  __int64 v39; // rcx
  _SLIST_ENTRY *v40; // rax
  _SLIST_ENTRY *v41; // r9
  _SLIST_ENTRY *v42; // rbx
  _SLIST_ENTRY *v43; // rdx
  _SLIST_ENTRY **v44; // rax
  int v46; // eax
  int v47; // eax
  __int64 v48; // rcx
  __int64 Next_high; // r10
  _SLIST_ENTRY *v50; // rcx
  _SLIST_ENTRY **v51; // rax
  __int64 v52; // rcx
  unsigned int v53; // ecx
  __int64 v54; // r11
  __int64 v55; // r9
  int v56; // r10d
  __int64 v57; // r9
  unsigned int v58; // ecx
  int v59; // edx
  int v60; // eax
  __int64 v61; // rax
  __int64 v62; // rdx
  int (__fastcall *v63)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *); // rax
  unsigned __int64 v64; // rcx
  _SLIST_ENTRY *v65; // rcx
  _SLIST_ENTRY **v66; // rax
  unsigned int v67; // [rsp+20h] [rbp-58h]
  __int64 v68; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v69[8]; // [rsp+38h] [rbp-40h] BYREF
  int v70; // [rsp+90h] [rbp+18h] BYREF

  FieldUnitRegionObj = a3;
  if ( a3 )
  {
    v8 = 3;
LABEL_40:
    v46 = v8 - 1;
    if ( !v46 )
      goto LABEL_7;
    v47 = v46 - 1;
    if ( !v47 )
      goto LABEL_26;
    if ( v47 == 1 )
      goto LABEL_29;
    return FieldUnitRegionObj;
  }
  v7 = *(_DWORD *)(a2 + 16);
  v8 = v7 & 0xF;
  if ( (v7 & 0xF) != 0 )
    goto LABEL_40;
  v9 = *(_DWORD *)(a2 + 80);
  v10 = a2 + 96;
  v11 = *(_DWORD *)(a2 + 60);
  while ( v9 < v11 )
  {
    *(_DWORD *)(a2 + 16) = v7 + 1;
    v12 = *(_QWORD *)(a2 + 32);
    if ( *(_WORD *)(v12 + 2) == 5 )
    {
      v13 = **(_QWORD **)(v12 + 32);
      if ( *(_WORD *)(v13 + 66) == 132 )
        return (unsigned int)PushAccFieldObj(
                               a1,
                               WriteFieldObj,
                               **(_QWORD **)(v13 + 96) + 64LL,
                               *(_QWORD *)(**(_QWORD **)(v13 + 96) + 96LL) + 8LL,
                               v10,
                               4);
    }
LABEL_7:
    ++*(_DWORD *)(a2 + 16);
    v14 = *(_QWORD *)(a2 + 40);
    if ( v14 >= *(_QWORD *)(a2 + 48) )
    {
      SystemMem = 0LL;
    }
    else
    {
      v15 = *(unsigned int *)(a2 + 56);
      v16 = *(_QWORD *)(a2 + 64);
      v70 = 0;
      v68 = 0LL;
      if ( (unsigned int)v15 <= 8 )
      {
        if ( !BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink)
          || (v63 = *(int (__fastcall **)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *))(PmHalDispatchTable + 144)) == 0LL
          || v63(0LL, v14, &v68, (unsigned int)v15, &v70) < 0 )
        {
          if ( v15 == 1 )
            v17 = 0LL;
          else
            v17 = v14 % v15;
          if ( v17 )
          {
            memmove(&v68, (const void *)v14, v15);
          }
          else
          {
            switch ( (_DWORD)v15 )
            {
              case 1:
                v18 = *(unsigned __int8 *)v14;
                goto LABEL_15;
              case 4:
                v18 = *(unsigned int *)v14;
                goto LABEL_15;
              case 2:
                v18 = *(unsigned __int16 *)v14;
                goto LABEL_15;
              case 8:
                v18 = *(_QWORD *)v14;
LABEL_15:
                v68 = v18;
                break;
              default:
                v68 = -1LL;
                break;
            }
          }
        }
        SystemMem = v16 & v68;
        goto LABEL_17;
      }
      SystemMem = -1LL;
    }
LABEL_17:
    if ( *(_DWORD *)(a2 + 80) )
    {
      v48 = *(unsigned int *)(a2 + 56);
      v20 = SystemMem >> *(_DWORD *)(a2 + 72);
      *(_QWORD *)(a2 + 40) += v48;
      a4 = *(void **)(a2 + 40);
      *(_QWORD *)(a2 + 88) = v20;
      if ( (unsigned __int64)a4 >= *(_QWORD *)(a2 + 48) )
      {
        SystemMem = 0LL;
      }
      else
      {
        SystemMem = ReadSystemMem(a4, (unsigned int)v48);
        v20 = *(_QWORD *)(a2 + 88);
      }
    }
    else
    {
      *(_QWORD *)(a2 + 88) = 0LL;
      v20 = 0LL;
    }
    v21 = v20 | *(_QWORD *)(a2 + 64) & (SystemMem << *(_DWORD *)(a2 + 76));
    v22 = *(_QWORD *)(a2 + 32);
    *(_QWORD *)(a2 + 88) = v21;
    v23 = *(__int64 **)(v22 + 32);
    if ( *(_WORD *)(v22 + 2) == 14 )
    {
      FieldUnitRegionObj = WriteBuffField(a1, *(_QWORD *)(v22 + 32), a2 + 96, v21);
    }
    else
    {
      v24 = *v23;
      v69[0] = 0LL;
      if ( *(_WORD *)(v24 + 66) == 132 )
      {
        v53 = *(_DWORD *)(a2 + 104);
        v54 = *(_QWORD *)(v24 + 96);
        if ( v53 >= 0x40 )
          v55 = 0LL;
        else
          v55 = 1LL << v53;
        v56 = *(_DWORD *)(a2 + 108);
        v57 = ~((v55 - 1) << *(_DWORD *)(a2 + 100));
        v58 = (v56 & 0xF) - 1;
        v59 = 1 << ((*(_BYTE *)(a2 + 108) & 0xF) - 1);
        if ( v58 > 3 )
          v60 = 1;
        else
          v60 = 1 << ((*(_BYTE *)(a2 + 108) & 0xF) - 1);
        if ( 8 * v60 >= 64 )
        {
          v61 = 0LL;
        }
        else
        {
          if ( v58 > 3 )
            LOBYTE(v59) = 1;
          v61 = 1LL << (8 * (unsigned __int8)v59);
        }
        v62 = *(_QWORD *)(v54 + 8);
        if ( ((v61 - 1) & v57) != 0 && (v56 & 0x60) == 0 )
          FieldUnitRegionObj = PushPreserveWriteObj(a1, v62 + 64, v21, v57);
        else
          FieldUnitRegionObj = PushAccFieldObj(a1, WriteFieldObj, v62 + 64, *(_QWORD *)(v62 + 96) + 8LL, a2 + 88, 4);
      }
      else
      {
        FieldUnitRegionObj = GetFieldUnitRegionObj(v23, v69, v21, a4);
        if ( !FieldUnitRegionObj )
        {
          v25 = v69[0];
          if ( v69[0] )
          {
            LOBYTE(v67) = 0;
            FieldUnitRegionObj = AccessBaseField(
                                   (__int64)a1,
                                   v69[0],
                                   (unsigned int *)(a2 + 96),
                                   (__int64 *)(a2 + 88),
                                   v67);
            if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v25 + 112), 0xFFFFFFFF) == 1 )
            {
              v64 = v69[0];
              *(_WORD *)(v69[0] + 64) |= 4u;
              if ( (*(_WORD *)(v64 + 64) & 0x40) == 0 )
                FreeNameSpaceObjects(v64);
            }
          }
        }
      }
    }
    if ( FieldUnitRegionObj == 32772 || (_SLIST_ENTRY *)a2 != a1[26].Next )
      return FieldUnitRegionObj;
LABEL_26:
    v26 = *(_DWORD *)(a2 + 56);
    v10 = a2 + 96;
    *(_DWORD *)(a2 + 96) += v26;
    v27 = *(_DWORD *)(a2 + 100);
    v11 = *(_DWORD *)(a2 + 60);
    *(_DWORD *)(a2 + 100) = 0;
    v28 = v27 - 8 * v26;
    v29 = *(_DWORD *)(a2 + 80);
    *(_DWORD *)(a2 + 104) += v28;
    v30 = *(_DWORD *)(a2 + 16);
    v9 = v29 + 1;
    *(_DWORD *)(a2 + 80) = v9;
    if ( v9 >= v11 )
    {
      v31 = v30 + 1;
      goto LABEL_28;
    }
    v7 = v30 - 2;
    *(_DWORD *)(a2 + 16) = v7;
  }
  v31 = v7 + 3;
LABEL_28:
  *(_DWORD *)(a2 + 16) = v31;
LABEL_29:
  Next = a1[26].Next;
  v33 = Next - 1;
  a1[26].Next = (_SLIST_ENTRY *)*((_QWORD *)&Next->Next + 1);
  LODWORD(Next[-1].Next) = 0;
  NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v34 = *((_QWORD *)&Next[-1].Next + 1);
  v35 = *(_SLIST_ENTRY **)(v34 + 40);
  for ( i = (_SLIST_ENTRY *)(v34 + 40); v35 != i; v35 = v35->Next )
  {
    if ( Next < v35 )
      break;
  }
  v37 = (_SLIST_ENTRY **)*((_QWORD *)&v35->Next + 1);
  if ( *v37 != v35 )
    goto LABEL_95;
  *((_QWORD *)&Next->Next + 1) = v37;
  Next->Next = v35;
  *v37 = Next;
  *((_QWORD *)&v35->Next + 1) = Next;
  v38 = Next->Next;
  v39 = (__int64)&Next->Next[-1];
  if ( Next->Next != i )
  {
    Next_high = HIDWORD(v33->Next);
    if ( (_SLIST_ENTRY *)v39 == (_SLIST_ENTRY *)((char *)v33 + Next_high) )
    {
      HIDWORD(v33->Next) = Next_high + *(_DWORD *)(v39 + 4);
      v50 = v38->Next;
      if ( *(&v38->Next->Next + 1) == v38 )
      {
        v51 = (_SLIST_ENTRY **)*((_QWORD *)&v38->Next + 1);
        if ( *v51 == v38 )
        {
          *v51 = v50;
          *((_QWORD *)&v50->Next + 1) = v51;
          goto LABEL_32;
        }
      }
LABEL_95:
      __fastfail(3u);
    }
  }
LABEL_32:
  v40 = (_SLIST_ENTRY *)*((_QWORD *)&v33[1].Next + 1);
  v41 = v40 - 1;
  if ( v40 != i )
  {
    v52 = HIDWORD(v41->Next);
    if ( v33 == (_SLIST_ENTRY *)((char *)v41 + v52) )
    {
      HIDWORD(v41->Next) = HIDWORD(v33->Next) + v52;
      v65 = Next->Next;
      if ( *(&Next->Next->Next + 1) != Next )
        goto LABEL_95;
      v66 = (_SLIST_ENTRY **)*((_QWORD *)&Next->Next + 1);
      if ( *v66 != Next )
        goto LABEL_95;
      *v66 = v65;
      v33 = v41;
      *((_QWORD *)&v65->Next + 1) = v66;
    }
  }
  if ( *(_QWORD *)(v34 + 32) <= (unsigned __int64)v33 + HIDWORD(v33->Next) )
  {
    *(_QWORD *)(v34 + 32) = v33;
    v42 = v33 + 1;
    v43 = v42->Next;
    if ( *(&v42->Next->Next + 1) != v42 )
      goto LABEL_95;
    v44 = (_SLIST_ENTRY **)*((_QWORD *)&v42->Next + 1);
    if ( *v44 != v42 )
      goto LABEL_95;
    *v44 = v43;
    *((_QWORD *)&v43->Next + 1) = v44;
  }
  KeReleaseSpinLock(&gmutHeap, NewIrql);
  return FieldUnitRegionObj;
}
