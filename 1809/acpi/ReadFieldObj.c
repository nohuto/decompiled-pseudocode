/*
 * XREFs of ReadFieldObj @ 0x1C00013A0
 * Callers:
 *     <none>
 * Callees:
 *     AccessBaseField @ 0x1C00019E0 (AccessBaseField.c)
 *     FreeNameSpaceObjects @ 0x1C0003550 (FreeNameSpaceObjects.c)
 *     GetObjectPath @ 0x1C0023478 (GetObjectPath.c)
 *     ReadBuffField @ 0x1C0023EB8 (ReadBuffField.c)
 *     GetFieldUnitRegionObj @ 0x1C0024410 (GetFieldUnitRegionObj.c)
 *     PushAccFieldObj @ 0x1C0024724 (PushAccFieldObj.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 */

__int64 __fastcall ReadFieldObj(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int BuffField; // r12d
  __int64 v5; // r11
  int v6; // ecx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int16 v12; // ax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  unsigned int v17; // ecx
  __int64 v18; // rdi
  unsigned int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // r15
  unsigned __int64 v23; // r13
  __int64 v24; // rdi
  __int64 v25; // rcx
  char v26; // r8
  unsigned __int64 v27; // rdx
  int v28; // r8d
  unsigned int v29; // edx
  __int64 v30; // r14
  unsigned int v31; // ecx
  __int64 v32; // rdi
  __int64 v33; // rsi
  unsigned __int64 v34; // r10
  __int64 v35; // rdi
  __int64 v36; // rcx
  __int64 v37; // r13
  unsigned __int64 v38; // rdx
  int v39; // eax
  int v40; // ecx
  int v41; // ecx
  unsigned int v42; // eax
  int v43; // ecx
  __int64 v44; // rax
  __int64 v45; // rax
  int v46; // eax
  _QWORD *v47; // rdi
  _QWORD *v48; // rbx
  __int64 v49; // r8
  _QWORD *v50; // rax
  _QWORD *i; // rdx
  _QWORD *v52; // rcx
  _QWORD *v53; // r9
  __int64 v54; // rcx
  _QWORD *v55; // rax
  _QWORD *v56; // r9
  _QWORD *v57; // rbx
  __int64 v58; // rdx
  _QWORD *v59; // rax
  __int64 v61; // rax
  __int64 v62; // r10
  __int64 v63; // rcx
  _QWORD *v64; // rax
  __int64 v65; // rcx
  unsigned int FieldUnitRegionObj; // eax
  __int64 ObjectPath; // rax
  int v68; // r8d
  void *v69; // rdx
  void *v70; // r13
  int (__fastcall *v71)(_QWORD, unsigned __int64, __int64 *, _QWORD, _BYTE *); // rax
  __int64 v72; // rax
  _BYTE *v73; // rcx
  int (__fastcall *v74)(_QWORD, unsigned __int64, __int64 *, _QWORD, _BYTE *); // rax
  __int64 v75; // rax
  _BYTE *v76; // rcx
  __int64 v77; // rcx
  _QWORD *v78; // rax
  signed __int32 v79[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v80; // [rsp+20h] [rbp-E0h]
  char v81; // [rsp+30h] [rbp-D0h]
  __int64 v82; // [rsp+38h] [rbp-C8h]
  __int64 Src; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v84; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v85; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE *v86; // [rsp+58h] [rbp-A8h]
  _BYTE v87[4]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v88[12]; // [rsp+64h] [rbp-9Ch] BYREF
  _QWORD v89[10]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v90[10]; // [rsp+C0h] [rbp-40h] BYREF

  BuffField = a3;
  v82 = a1;
  v5 = a1;
  if ( a3 )
  {
    v7 = 3;
  }
  else
  {
    v6 = *(_DWORD *)(a2 + 16);
    v7 = v6 & 0xF;
    if ( (v6 & 0xF) == 0 )
      goto LABEL_54;
  }
  v8 = v7 - 1;
  if ( !v8 )
    goto LABEL_6;
  v9 = v8 - 1;
  if ( v9 )
  {
    if ( v9 == 1 )
      goto LABEL_60;
    return BuffField;
  }
  while ( 1 )
  {
    if ( !*(_DWORD *)(a2 + 80) )
      goto LABEL_40;
    v17 = *(_DWORD *)(a2 + 76);
    if ( v17 >= 0x40 )
      v18 = 0LL;
    else
      v18 = 1LL << v17;
    v19 = *(_DWORD *)(a2 + 72);
    if ( v19 >= 0x40 )
      v20 = 0LL;
    else
      v20 = *(_QWORD *)(a2 + 88) << v19;
    v21 = *(unsigned int *)(a2 + 56);
    v22 = v20 & *(_QWORD *)(a2 + 64);
    v23 = *(_QWORD *)(a2 + 40);
    v24 = (v18 - 1) << v19;
    v25 = 0LL;
    v89[4] = 0xFFFFFFFFLL;
    v26 = 0;
    Src = 0LL;
    v89[0] = 0LL;
    v89[1] = 255LL;
    v89[2] = 0xFFFFLL;
    v89[3] = 0LL;
    memset(&v89[5], 0, 24);
    v89[8] = -1LL;
    v81 = 0;
    if ( (unsigned int)v21 > 8 )
      goto LABEL_39;
    if ( v24 == v89[v21] )
    {
      v26 = 1;
      v81 = 1;
    }
    if ( BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink) )
    {
      v71 = *(int (__fastcall **)(_QWORD, unsigned __int64, __int64 *, _QWORD, _BYTE *))(PmHalDispatchTable + 144);
      if ( v71 )
      {
        if ( !v26 )
        {
          if ( v71(0LL, v23, &Src, (unsigned int)v21, v87) < 0 )
          {
LABEL_117:
            v25 = Src;
            v26 = v81;
            v5 = v82;
            goto LABEL_32;
          }
          v25 = Src;
        }
        v72 = v22 | v25 & ~v24;
        v73 = v87;
        Src = v72;
        LOBYTE(v73) = 1;
        if ( (*(int (__fastcall **)(_BYTE *, unsigned __int64, __int64 *, _QWORD, _BYTE *))(PmHalDispatchTable + 144))(
               v73,
               v23,
               &Src,
               (unsigned int)v21,
               v87) >= 0 )
          goto LABEL_121;
        goto LABEL_117;
      }
    }
LABEL_32:
    if ( (unsigned int)v21 == 1LL )
      v27 = 0LL;
    else
      v27 = v23 % (unsigned int)v21;
    if ( v27 )
    {
      if ( !v26 )
      {
        memmove(&Src, (const void *)v23, (unsigned int)v21);
        v25 = Src;
      }
      Src = v22 | v25 & ~v24;
      memmove((void *)v23, &Src, (unsigned int)v21);
      goto LABEL_121;
    }
    switch ( (_DWORD)v21 )
    {
      case 1:
        if ( !v26 )
          v25 = *(unsigned __int8 *)v23;
        Src = v22 | v25 & ~v24;
        *(_BYTE *)v23 = Src;
        _InterlockedOr(v79, 0);
        break;
      case 2:
        if ( !v26 )
          v25 = *(unsigned __int16 *)v23;
        Src = v22 | v25 & ~v24;
        *(_WORD *)v23 = Src;
        _InterlockedOr(v79, 0);
        break;
      case 4:
        if ( !v26 )
          v25 = *(unsigned int *)v23;
        Src = v22 | v25 & ~v24;
        *(_DWORD *)v23 = Src;
        _InterlockedOr(v79, 0);
        break;
      case 8:
        if ( !v26 )
          v25 = *(_QWORD *)v23;
        Src = v22 | v25 & ~v24;
        *(_QWORD *)v23 = Src;
        KeFlushWriteBuffer();
LABEL_121:
        v5 = v82;
        break;
      default:
        break;
    }
LABEL_39:
    *(_QWORD *)(a2 + 40) += *(unsigned int *)(a2 + 56);
    if ( *(_QWORD *)(a2 + 40) >= *(_QWORD *)(a2 + 48) )
    {
      ++*(_DWORD *)(a2 + 16);
      goto LABEL_60;
    }
LABEL_40:
    v28 = *(_DWORD *)(a2 + 76);
    v29 = *(_DWORD *)(a2 + 72);
    v30 = *(_QWORD *)(a2 + 88) >> v28;
    v31 = *(_DWORD *)(a2 + 104);
    *(_QWORD *)(a2 + 88) = v30;
    if ( v31 < v29 )
    {
      if ( v31 >= 0x40 )
        v61 = 0LL;
      else
        v61 = 1LL << v31;
      v30 &= v61 - 1;
      *(_QWORD *)(a2 + 88) = v30;
    }
    if ( v29 >= 0x40 )
      v32 = 0LL;
    else
      v32 = 1LL << v29;
    v33 = *(unsigned int *)(a2 + 56);
    v34 = *(_QWORD *)(a2 + 40);
    v35 = (v32 - 1) >> v28;
    v86 = (_BYTE *)v34;
    v36 = 0LL;
    v84 = 0LL;
    v90[0] = 0LL;
    v90[1] = 255LL;
    v90[2] = 0xFFFFLL;
    v90[3] = 0LL;
    v90[4] = 0xFFFFFFFFLL;
    memset(&v90[5], 0, 24);
    v90[8] = -1LL;
    if ( (unsigned int)v33 > 8 )
      goto LABEL_52;
    v37 = v90[v33];
    if ( BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink) )
    {
      v74 = *(int (__fastcall **)(_QWORD, unsigned __int64, __int64 *, _QWORD, _BYTE *))(PmHalDispatchTable + 144);
      if ( v74 )
      {
        if ( v35 == v37 )
        {
LABEL_140:
          v75 = v30 | v36 & ~v35;
          v76 = v88;
          v84 = v75;
          LOBYTE(v76) = 1;
          if ( (*(int (__fastcall **)(_BYTE *, unsigned __int64, __int64 *, _QWORD, _BYTE *))(PmHalDispatchTable + 144))(
                 v76,
                 v34,
                 &v84,
                 (unsigned int)v33,
                 v88) >= 0 )
            goto LABEL_149;
        }
        else if ( v74(0LL, v34, &v84, (unsigned int)v33, v88) >= 0 )
        {
          v36 = v84;
          v34 = (unsigned __int64)v86;
          goto LABEL_140;
        }
        v36 = v84;
        v34 = (unsigned __int64)v86;
        v5 = v82;
      }
    }
    if ( (unsigned int)v33 == 1LL )
      v38 = 0LL;
    else
      v38 = v34 % (unsigned int)v33;
    if ( v38 )
    {
      if ( v35 != v37 )
      {
        memmove(&v84, (const void *)v34, (unsigned int)v33);
        v36 = v84;
        v34 = (unsigned __int64)v86;
      }
      v84 = v30 | v36 & ~v35;
      memmove((void *)v34, &v84, (unsigned int)v33);
LABEL_149:
      v5 = v82;
      goto LABEL_52;
    }
    if ( (_DWORD)v33 == 1 )
    {
      if ( v35 != v37 )
        v36 = *(unsigned __int8 *)v34;
      v84 = v30 | v36 & ~v35;
      *(_BYTE *)v34 = v84;
      _InterlockedOr(v79, 0);
      goto LABEL_52;
    }
    if ( (_DWORD)v33 == 4 )
    {
      if ( v35 != v37 )
        v36 = *(unsigned int *)v34;
      v84 = v30 | v36 & ~v35;
      *(_DWORD *)v34 = v84;
      _InterlockedOr(v79, 0);
      goto LABEL_52;
    }
    if ( (_DWORD)v33 != 2 )
    {
      if ( (_DWORD)v33 != 8 )
        goto LABEL_52;
      if ( v35 != v37 )
        v36 = *(_QWORD *)v34;
      v84 = v30 | v36 & ~v35;
      *(_QWORD *)v34 = v84;
      KeFlushWriteBuffer();
      goto LABEL_149;
    }
    if ( v35 != v37 )
      v36 = *(unsigned __int16 *)v34;
    v84 = v30 | v36 & ~v35;
    *(_WORD *)v34 = v84;
    _InterlockedOr(v79, 0);
LABEL_52:
    v39 = *(_DWORD *)(a2 + 56);
    *(_DWORD *)(a2 + 96) += v39;
    v40 = *(_DWORD *)(a2 + 100);
    ++*(_DWORD *)(a2 + 80);
    *(_DWORD *)(a2 + 100) = 0;
    v41 = v40 - 8 * v39;
    v42 = *(_DWORD *)(a2 + 80);
    *(_DWORD *)(a2 + 104) += v41;
    v43 = *(_DWORD *)(a2 + 16);
    if ( v42 >= *(_DWORD *)(a2 + 60) )
    {
      v46 = v43 + 1;
      goto LABEL_59;
    }
    v6 = v43 - 2;
    *(_DWORD *)(a2 + 16) = v6;
LABEL_54:
    if ( *(_DWORD *)(a2 + 80) >= *(_DWORD *)(a2 + 60) )
      break;
    *(_DWORD *)(a2 + 16) = v6 + 1;
    v44 = *(_QWORD *)(a2 + 32);
    if ( *(_WORD *)(v44 + 2) == 5 )
    {
      v45 = **(_QWORD **)(v44 + 32);
      if ( *(_WORD *)(v45 + 66) == 132 )
        return (unsigned int)PushAccFieldObj(
                               v5,
                               WriteFieldObj,
                               **(_QWORD **)(v45 + 96) + 64LL,
                               *(_QWORD *)(**(_QWORD **)(v45 + 96) + 96LL) + 8LL,
                               a2 + 96,
                               4);
    }
LABEL_6:
    v10 = *(_QWORD *)(a2 + 32);
    ++*(_DWORD *)(a2 + 16);
    if ( *(_WORD *)(v10 + 2) == 14 )
    {
      BuffField = ReadBuffField(v5, *(_QWORD *)(v10 + 32), a2 + 96, a2 + 88);
      goto LABEL_20;
    }
    v11 = **(_QWORD **)(v10 + 32);
    v85 = 0LL;
    v12 = *(_WORD *)(v11 + 66);
    if ( v12 == 132 )
    {
      BuffField = PushAccFieldObj(
                    v5,
                    ReadFieldObj,
                    *(_QWORD *)(*(_QWORD *)(v11 + 96) + 8LL) + 64LL,
                    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 96) + 8LL) + 96LL) + 8LL,
                    a2 + 88,
                    4);
      goto LABEL_20;
    }
    v13 = v12;
    BuffField = 0;
    if ( v12 == 131 || (v13 = (unsigned int)v12 - 130, v12 == 130) )
    {
      v14 = **(_QWORD **)(v11 + 96);
      v85 = v14;
    }
    else
    {
      if ( v12 != 132 )
      {
        LogError(3222536195LL, v13, 0xFFFFFFFFLL, 0LL);
        AcpiDiagTraceAmlError(0LL, 3222536195LL);
        PrintDebugMessage(56, MEMORY[0x42], 0, 0, 0LL);
        BuffField = -1072431101;
LABEL_100:
        v5 = v82;
        goto LABEL_101;
      }
      FieldUnitRegionObj = GetFieldUnitRegionObj(
                             *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 96) + 8LL) + 96LL),
                             &v85,
                             0xFFFFFFFFLL,
                             0LL);
      v5 = v82;
      BuffField = FieldUnitRegionObj;
      v14 = v85;
    }
    if ( v14 && *(_WORD *)(v14 + 66) != 10 )
    {
      LogError(3222536195LL, v13, 0xFFFFFFFFLL, 0LL);
      AcpiDiagTraceAmlError(0LL, 3222536195LL);
      ObjectPath = GetObjectPath(v14);
      v68 = *(unsigned __int16 *)(v14 + 66);
      v69 = &unk_1C006E28A;
      v80 = 0LL;
      v70 = (void *)ObjectPath;
      if ( ObjectPath )
        LODWORD(v69) = ObjectPath;
      PrintDebugMessage(55, (_DWORD)v69, v68, 0, v80);
      BuffField = -1072431101;
      if ( v70 )
        ExFreePoolWithTag(v70, 0);
      goto LABEL_100;
    }
    if ( (BuffField & 0x80000000) == 0 && v14 )
    {
      if ( (gdwfAMLI & 4) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v14 + 112));
        v14 = v85;
      }
      v15 = v14;
      v16 = v14;
      goto LABEL_17;
    }
LABEL_101:
    v85 = 0LL;
    LODWORD(v14) = 0;
    v15 = 0LL;
    v16 = 0LL;
LABEL_17:
    if ( BuffField )
      return BuffField;
    if ( !v16 )
      goto LABEL_21;
    LOBYTE(v80) = 1;
    BuffField = AccessBaseField(v5, v14, (int)a2 + 96, (int)a2 + 88, v80);
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 112), 0xFFFFFFFF) == 1 )
    {
      *(_WORD *)(v15 + 64) |= 4u;
      if ( (*(_WORD *)(v15 + 64) & 0x40) == 0 )
        FreeNameSpaceObjects(v15);
    }
LABEL_20:
    v5 = v82;
LABEL_21:
    if ( BuffField || a2 != *(_QWORD *)(v5 + 416) )
      return BuffField;
  }
  v46 = v6 + 3;
LABEL_59:
  *(_DWORD *)(a2 + 16) = v46;
LABEL_60:
  v47 = *(_QWORD **)(v5 + 416);
  v48 = v47 - 2;
  *(_QWORD *)(v5 + 416) = v47[1];
  *((_DWORD *)v47 - 4) = 0;
  NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v49 = *(v47 - 1);
  v50 = *(_QWORD **)(v49 + 40);
  for ( i = (_QWORD *)(v49 + 40); v50 != i; v50 = (_QWORD *)*v50 )
  {
    if ( v47 < v50 )
      break;
  }
  v52 = (_QWORD *)v50[1];
  if ( (_QWORD *)*v52 != v50 )
    goto LABEL_155;
  v47[1] = v52;
  *v47 = v50;
  *v52 = v47;
  v50[1] = v47;
  v53 = (_QWORD *)*v47;
  v54 = *v47 - 16LL;
  if ( (_QWORD *)*v47 != i )
  {
    v62 = *((unsigned int *)v48 + 1);
    if ( (_QWORD *)v54 == (_QWORD *)((char *)v48 + v62) )
    {
      *((_DWORD *)v48 + 1) = v62 + *(_DWORD *)(v54 + 4);
      v63 = *v53;
      if ( *(_QWORD **)(*v53 + 8LL) == v53 )
      {
        v64 = (_QWORD *)v53[1];
        if ( (_QWORD *)*v64 == v53 )
        {
          *v64 = v63;
          *(_QWORD *)(v63 + 8) = v64;
          goto LABEL_63;
        }
      }
LABEL_155:
      __fastfail(3u);
    }
  }
LABEL_63:
  v55 = (_QWORD *)v48[3];
  v56 = v55 - 2;
  if ( v55 != i )
  {
    v65 = *((unsigned int *)v56 + 1);
    if ( v48 == (_QWORD *)((char *)v56 + v65) )
    {
      *((_DWORD *)v56 + 1) = *((_DWORD *)v48 + 1) + v65;
      v77 = *v47;
      if ( *(_QWORD **)(*v47 + 8LL) != v47 )
        goto LABEL_155;
      v78 = (_QWORD *)v47[1];
      if ( (_QWORD *)*v78 != v47 )
        goto LABEL_155;
      *v78 = v77;
      v48 = v56;
      *(_QWORD *)(v77 + 8) = v78;
    }
  }
  if ( *(_QWORD *)(v49 + 32) <= (unsigned __int64)v48 + *((unsigned int *)v48 + 1) )
  {
    *(_QWORD *)(v49 + 32) = v48;
    v57 = v48 + 2;
    v58 = *v57;
    if ( *(_QWORD **)(*v57 + 8LL) != v57 )
      goto LABEL_155;
    v59 = (_QWORD *)v57[1];
    if ( (_QWORD *)*v59 != v57 )
      goto LABEL_155;
    *v59 = v58;
    *(_QWORD *)(v58 + 8) = v59;
  }
  KeReleaseSpinLock(&gmutHeap, NewIrql);
  return BuffField;
}
