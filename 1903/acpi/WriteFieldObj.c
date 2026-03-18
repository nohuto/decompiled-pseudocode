/*
 * XREFs of WriteFieldObj @ 0x1C001F6A0
 * Callers:
 *     <none>
 * Callees:
 *     FreeNameSpaceObjects @ 0x1C00137D0 (FreeNameSpaceObjects.c)
 *     PushPreserveWriteObj @ 0x1C001E8F8 (PushPreserveWriteObj.c)
 *     AccessBaseField @ 0x1C00201A0 (AccessBaseField.c)
 *     GetFieldUnitRegionObj @ 0x1C00205D8 (GetFieldUnitRegionObj.c)
 *     WriteBuffField @ 0x1C0020674 (WriteBuffField.c)
 *     PushAccFieldObj @ 0x1C0020858 (PushAccFieldObj.c)
 *     ReadSystemMem @ 0x1C0020984 (ReadSystemMem.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 */

__int64 __fastcall WriteFieldObj(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int FieldUnitRegionObj; // edi
  int v6; // ecx
  int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // r10
  unsigned int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rsi
  size_t v14; // rdi
  __int64 v15; // rbp
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 SystemMem; // r8
  unsigned __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 *v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // r14
  int v25; // eax
  int v26; // ecx
  int v27; // ecx
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  _QWORD *v31; // rsi
  _QWORD *v32; // rbx
  __int64 v33; // r8
  _QWORD *v34; // rax
  _QWORD *i; // rdx
  _QWORD *v36; // rcx
  _QWORD *v37; // r9
  __int64 v38; // rcx
  _QWORD *v39; // rax
  _QWORD *v40; // r9
  _QWORD *v41; // rbx
  __int64 v42; // rdx
  _QWORD *v43; // rax
  int v45; // eax
  int v46; // eax
  __int64 v47; // rcx
  void *v48; // r9
  __int64 v49; // r10
  __int64 v50; // rcx
  _QWORD *v51; // rax
  __int64 v52; // rcx
  unsigned int v53; // ecx
  __int64 v54; // r10
  __int64 v55; // r9
  int v56; // r11d
  __int64 v57; // r9
  unsigned int v58; // ecx
  int v59; // edx
  int v60; // eax
  __int64 v61; // rax
  __int64 v62; // r10
  int (__fastcall *v63)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *); // rax
  unsigned __int64 v64; // rcx
  __int64 v65; // rcx
  _QWORD *v66; // rax
  int v67; // [rsp+20h] [rbp-58h]
  __int64 v68; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v69[8]; // [rsp+38h] [rbp-40h] BYREF
  int v70; // [rsp+90h] [rbp+18h] BYREF

  FieldUnitRegionObj = a3;
  if ( a3 )
  {
    v7 = 3;
LABEL_40:
    v45 = v7 - 1;
    if ( !v45 )
      goto LABEL_7;
    v46 = v45 - 1;
    if ( !v46 )
      goto LABEL_26;
    if ( v46 == 1 )
      goto LABEL_29;
    return FieldUnitRegionObj;
  }
  v6 = *(_DWORD *)(a2 + 16);
  v7 = v6 & 0xF;
  if ( (v6 & 0xF) != 0 )
    goto LABEL_40;
  v8 = *(_DWORD *)(a2 + 80);
  v9 = a2 + 96;
  v10 = *(_DWORD *)(a2 + 60);
  while ( v8 < v10 )
  {
    *(_DWORD *)(a2 + 16) = v6 + 1;
    v11 = *(_QWORD *)(a2 + 32);
    if ( *(_WORD *)(v11 + 2) == 5 )
    {
      v12 = **(_QWORD **)(v11 + 32);
      if ( *(_WORD *)(v12 + 66) == 132 )
        return (unsigned int)PushAccFieldObj(
                               a1,
                               WriteFieldObj,
                               **(_QWORD **)(v12 + 96) + 64LL,
                               *(_QWORD *)(**(_QWORD **)(v12 + 96) + 96LL) + 8LL,
                               v9,
                               4);
    }
LABEL_7:
    ++*(_DWORD *)(a2 + 16);
    v13 = *(_QWORD *)(a2 + 40);
    if ( v13 >= *(_QWORD *)(a2 + 48) )
    {
      SystemMem = 0LL;
    }
    else
    {
      v14 = *(unsigned int *)(a2 + 56);
      v15 = *(_QWORD *)(a2 + 64);
      v70 = 0;
      v68 = 0LL;
      if ( (unsigned int)v14 <= 8 )
      {
        if ( !BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink)
          || (v63 = *(int (__fastcall **)(_QWORD, unsigned __int64, __int64 *, _QWORD, int *))(PmHalDispatchTable + 144)) == 0LL
          || v63(0LL, v13, &v68, (unsigned int)v14, &v70) < 0 )
        {
          if ( v14 == 1 )
            v16 = 0LL;
          else
            v16 = v13 % v14;
          if ( v16 )
          {
            memmove(&v68, (const void *)v13, v14);
          }
          else
          {
            switch ( (_DWORD)v14 )
            {
              case 1:
                v17 = *(unsigned __int8 *)v13;
                goto LABEL_15;
              case 4:
                v17 = *(unsigned int *)v13;
                goto LABEL_15;
              case 2:
                v17 = *(unsigned __int16 *)v13;
                goto LABEL_15;
              case 8:
                v17 = *(_QWORD *)v13;
LABEL_15:
                v68 = v17;
                break;
              default:
                v68 = -1LL;
                break;
            }
          }
        }
        SystemMem = v15 & v68;
        goto LABEL_17;
      }
      SystemMem = -1LL;
    }
LABEL_17:
    if ( *(_DWORD *)(a2 + 80) )
    {
      v47 = *(unsigned int *)(a2 + 56);
      v19 = SystemMem >> *(_DWORD *)(a2 + 72);
      *(_QWORD *)(a2 + 40) += v47;
      v48 = *(void **)(a2 + 40);
      *(_QWORD *)(a2 + 88) = v19;
      if ( (unsigned __int64)v48 >= *(_QWORD *)(a2 + 48) )
      {
        SystemMem = 0LL;
      }
      else
      {
        SystemMem = ReadSystemMem(v48, (unsigned int)v47);
        v19 = *(_QWORD *)(a2 + 88);
      }
    }
    else
    {
      v19 = 0LL;
    }
    v20 = v19 | *(_QWORD *)(a2 + 64) & (SystemMem << *(_DWORD *)(a2 + 76));
    v21 = *(_QWORD *)(a2 + 32);
    *(_QWORD *)(a2 + 88) = v20;
    v22 = *(__int64 **)(v21 + 32);
    if ( *(_WORD *)(v21 + 2) == 14 )
    {
      FieldUnitRegionObj = WriteBuffField(a1, *(_QWORD *)(v21 + 32), a2 + 96, v20);
    }
    else
    {
      v23 = *v22;
      v69[0] = 0LL;
      if ( *(_WORD *)(v23 + 66) == 132 )
      {
        v53 = *(_DWORD *)(a2 + 104);
        v54 = *(_QWORD *)(v23 + 96);
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
          FieldUnitRegionObj = PushPreserveWriteObj(a1, v62 + 64, v20, v57);
        else
          FieldUnitRegionObj = PushAccFieldObj(a1, WriteFieldObj, v62 + 64, *(_QWORD *)(v62 + 96) + 8LL, a2 + 88, 4);
      }
      else
      {
        FieldUnitRegionObj = GetFieldUnitRegionObj(v22, v69);
        if ( !FieldUnitRegionObj )
        {
          v24 = v69[0];
          if ( v69[0] )
          {
            LOBYTE(v67) = 0;
            FieldUnitRegionObj = AccessBaseField(a1, v69[0], (int)a2 + 96, (int)a2 + 88, v67);
            if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v24 + 112), 0xFFFFFFFF) == 1 )
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
    if ( FieldUnitRegionObj == 32772 || a2 != *(_QWORD *)(a1 + 416) )
      return FieldUnitRegionObj;
LABEL_26:
    v25 = *(_DWORD *)(a2 + 56);
    v9 = a2 + 96;
    *(_DWORD *)(a2 + 96) += v25;
    v26 = *(_DWORD *)(a2 + 100);
    v10 = *(_DWORD *)(a2 + 60);
    *(_DWORD *)(a2 + 100) = 0;
    v27 = v26 - 8 * v25;
    v28 = *(_DWORD *)(a2 + 80);
    *(_DWORD *)(a2 + 104) += v27;
    v29 = *(_DWORD *)(a2 + 16);
    v8 = v28 + 1;
    *(_DWORD *)(a2 + 80) = v8;
    if ( v8 >= v10 )
    {
      v30 = v29 + 1;
      goto LABEL_28;
    }
    v6 = v29 - 2;
    *(_DWORD *)(a2 + 16) = v6;
  }
  v30 = v6 + 3;
LABEL_28:
  *(_DWORD *)(a2 + 16) = v30;
LABEL_29:
  v31 = *(_QWORD **)(a1 + 416);
  v32 = v31 - 2;
  *(_QWORD *)(a1 + 416) = v31[1];
  *((_DWORD *)v31 - 4) = 0;
  byte_1C0082B28 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v33 = *(v31 - 1);
  v34 = *(_QWORD **)(v33 + 40);
  for ( i = (_QWORD *)(v33 + 40); v34 != i; v34 = (_QWORD *)*v34 )
  {
    if ( v31 < v34 )
      break;
  }
  v36 = (_QWORD *)v34[1];
  if ( (_QWORD *)*v36 != v34 )
    goto LABEL_95;
  v31[1] = v36;
  *v31 = v34;
  *v36 = v31;
  v34[1] = v31;
  v37 = (_QWORD *)*v31;
  v38 = *v31 - 16LL;
  if ( (_QWORD *)*v31 != i )
  {
    v49 = *((unsigned int *)v32 + 1);
    if ( (_QWORD *)v38 == (_QWORD *)((char *)v32 + v49) )
    {
      *((_DWORD *)v32 + 1) = v49 + *(_DWORD *)(v38 + 4);
      v50 = *v37;
      if ( *(_QWORD **)(*v37 + 8LL) == v37 )
      {
        v51 = (_QWORD *)v37[1];
        if ( (_QWORD *)*v51 == v37 )
        {
          *v51 = v50;
          *(_QWORD *)(v50 + 8) = v51;
          goto LABEL_32;
        }
      }
LABEL_95:
      __fastfail(3u);
    }
  }
LABEL_32:
  v39 = (_QWORD *)v32[3];
  v40 = v39 - 2;
  if ( v39 != i )
  {
    v52 = *((unsigned int *)v40 + 1);
    if ( v32 == (_QWORD *)((char *)v40 + v52) )
    {
      *((_DWORD *)v40 + 1) = *((_DWORD *)v32 + 1) + v52;
      v65 = *v31;
      if ( *(_QWORD **)(*v31 + 8LL) != v31 )
        goto LABEL_95;
      v66 = (_QWORD *)v31[1];
      if ( (_QWORD *)*v66 != v31 )
        goto LABEL_95;
      *v66 = v65;
      v32 = v40;
      *(_QWORD *)(v65 + 8) = v66;
    }
  }
  if ( *(_QWORD *)(v33 + 32) <= (unsigned __int64)v32 + *((unsigned int *)v32 + 1) )
  {
    *(_QWORD *)(v33 + 32) = v32;
    v41 = v32 + 2;
    v42 = *v41;
    if ( *(_QWORD **)(*v41 + 8LL) != v41 )
      goto LABEL_95;
    v43 = (_QWORD *)v41[1];
    if ( (_QWORD *)*v43 != v41 )
      goto LABEL_95;
    *v43 = v42;
    *(_QWORD *)(v42 + 8) = v43;
  }
  KeReleaseSpinLock(&gmutHeap, byte_1C0082B28);
  return FieldUnitRegionObj;
}
