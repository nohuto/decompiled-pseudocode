/*
 * XREFs of ReadFieldObj @ 0x1C001FB60
 * Callers:
 *     <none>
 * Callees:
 *     GetObjectPath @ 0x1C0006C18 (GetObjectPath.c)
 *     FreeNameSpaceObjects @ 0x1C00137D0 (FreeNameSpaceObjects.c)
 *     ReadBuffField @ 0x1C001F608 (ReadBuffField.c)
 *     AccessBaseField @ 0x1C00201A0 (AccessBaseField.c)
 *     GetFieldUnitRegionObj @ 0x1C00205D8 (GetFieldUnitRegionObj.c)
 *     PushAccFieldObj @ 0x1C0020858 (PushAccFieldObj.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
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
  __int16 v12; // ax
  __int64 v13; // rdi
  unsigned __int64 v14; // rsi
  __int64 v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // rdi
  unsigned int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // r15
  unsigned __int64 v22; // r13
  __int64 v23; // rdi
  __int64 v24; // rcx
  char v25; // r8
  unsigned __int64 v26; // rdx
  int v27; // r8d
  unsigned int v28; // edx
  __int64 v29; // r14
  unsigned int v30; // ecx
  __int64 v31; // rdi
  __int64 v32; // rsi
  unsigned __int64 v33; // r10
  __int64 v34; // rdi
  __int64 v35; // rcx
  __int64 v36; // r13
  unsigned __int64 v37; // rdx
  int v38; // eax
  int v39; // ecx
  int v40; // ecx
  unsigned int v41; // eax
  int v42; // ecx
  __int64 v43; // rax
  __int64 v44; // rax
  int v45; // eax
  _QWORD *v46; // rdi
  _QWORD *v47; // rbx
  __int64 v48; // r8
  _QWORD *v49; // rax
  _QWORD *i; // rdx
  _QWORD *v51; // rcx
  _QWORD *v52; // r9
  __int64 v53; // rcx
  _QWORD *v54; // rax
  _QWORD *v55; // r9
  _QWORD *v56; // rbx
  __int64 v57; // rdx
  _QWORD *v58; // rax
  __int64 v60; // rax
  __int64 v61; // r10
  __int64 v62; // rcx
  _QWORD *v63; // rax
  __int64 v64; // rcx
  unsigned int FieldUnitRegionObj; // eax
  _QWORD *ObjectPath; // rax
  int v67; // r8d
  void *v68; // rdx
  void *v69; // r13
  int (__fastcall *v70)(_QWORD, unsigned __int64, __int64 *, _QWORD, _BYTE *); // rax
  __int64 v71; // rax
  _BYTE *v72; // rcx
  int (__fastcall *v73)(_QWORD, unsigned __int64, __int64 *, _QWORD, _BYTE *); // rax
  __int64 v74; // rax
  _BYTE *v75; // rcx
  __int64 v76; // rcx
  _QWORD *v77; // rax
  signed __int32 v78[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v79; // [rsp+20h] [rbp-E0h]
  char v80; // [rsp+30h] [rbp-D0h]
  __int64 v81; // [rsp+38h] [rbp-C8h]
  __int64 Src; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v83; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v84; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE *v85; // [rsp+58h] [rbp-A8h]
  _BYTE v86[4]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v87[12]; // [rsp+64h] [rbp-9Ch] BYREF
  _QWORD v88[10]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v89[10]; // [rsp+C0h] [rbp-40h] BYREF

  BuffField = a3;
  v81 = a1;
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
    v16 = *(_DWORD *)(a2 + 76);
    if ( v16 >= 0x40 )
      v17 = 0LL;
    else
      v17 = 1LL << v16;
    v18 = *(_DWORD *)(a2 + 72);
    if ( v18 >= 0x40 )
      v19 = 0LL;
    else
      v19 = *(_QWORD *)(a2 + 88) << v18;
    v20 = *(unsigned int *)(a2 + 56);
    v21 = v19 & *(_QWORD *)(a2 + 64);
    v22 = *(_QWORD *)(a2 + 40);
    v23 = (v17 - 1) << v18;
    v24 = 0LL;
    v88[4] = 0xFFFFFFFFLL;
    v25 = 0;
    Src = 0LL;
    v88[0] = 0LL;
    v88[1] = 255LL;
    v88[2] = 0xFFFFLL;
    v88[3] = 0LL;
    memset(&v88[5], 0, 24);
    v88[8] = -1LL;
    v80 = 0;
    if ( (unsigned int)v20 > 8 )
      goto LABEL_39;
    if ( v23 == v88[v20] )
    {
      v25 = 1;
      v80 = 1;
    }
    if ( BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink) )
    {
      v70 = *(int (__fastcall **)(_QWORD, unsigned __int64, __int64 *, _QWORD, _BYTE *))(PmHalDispatchTable + 144);
      if ( v70 )
      {
        if ( !v25 )
        {
          if ( v70(0LL, v22, &Src, (unsigned int)v20, v86) < 0 )
          {
LABEL_117:
            v24 = Src;
            v25 = v80;
            v5 = v81;
            goto LABEL_32;
          }
          v24 = Src;
        }
        v71 = v21 | v24 & ~v23;
        v72 = v86;
        Src = v71;
        LOBYTE(v72) = 1;
        if ( (*(int (__fastcall **)(_BYTE *, unsigned __int64, __int64 *, _QWORD, _BYTE *))(PmHalDispatchTable + 144))(
               v72,
               v22,
               &Src,
               (unsigned int)v20,
               v86) >= 0 )
          goto LABEL_121;
        goto LABEL_117;
      }
    }
LABEL_32:
    if ( (unsigned int)v20 == 1LL )
      v26 = 0LL;
    else
      v26 = v22 % (unsigned int)v20;
    if ( v26 )
    {
      if ( !v25 )
      {
        memmove(&Src, (const void *)v22, (unsigned int)v20);
        v24 = Src;
      }
      Src = v21 | v24 & ~v23;
      memmove((void *)v22, &Src, (unsigned int)v20);
      goto LABEL_121;
    }
    switch ( (_DWORD)v20 )
    {
      case 1:
        if ( !v25 )
          v24 = *(unsigned __int8 *)v22;
        Src = v21 | v24 & ~v23;
        *(_BYTE *)v22 = Src;
        _InterlockedOr(v78, 0);
        break;
      case 2:
        if ( !v25 )
          v24 = *(unsigned __int16 *)v22;
        Src = v21 | v24 & ~v23;
        *(_WORD *)v22 = Src;
        _InterlockedOr(v78, 0);
        break;
      case 4:
        if ( !v25 )
          v24 = *(unsigned int *)v22;
        Src = v21 | v24 & ~v23;
        *(_DWORD *)v22 = Src;
        _InterlockedOr(v78, 0);
        break;
      case 8:
        if ( !v25 )
          v24 = *(_QWORD *)v22;
        Src = v21 | v24 & ~v23;
        *(_QWORD *)v22 = Src;
        KeFlushWriteBuffer();
LABEL_121:
        v5 = v81;
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
    v27 = *(_DWORD *)(a2 + 76);
    v28 = *(_DWORD *)(a2 + 72);
    v29 = *(_QWORD *)(a2 + 88) >> v27;
    v30 = *(_DWORD *)(a2 + 104);
    *(_QWORD *)(a2 + 88) = v29;
    if ( v30 < v28 )
    {
      if ( v30 >= 0x40 )
        v60 = 0LL;
      else
        v60 = 1LL << v30;
      v29 &= v60 - 1;
      *(_QWORD *)(a2 + 88) = v29;
    }
    if ( v28 >= 0x40 )
      v31 = 0LL;
    else
      v31 = 1LL << v28;
    v32 = *(unsigned int *)(a2 + 56);
    v33 = *(_QWORD *)(a2 + 40);
    v34 = (v31 - 1) >> v27;
    v85 = (_BYTE *)v33;
    v35 = 0LL;
    v83 = 0LL;
    v89[0] = 0LL;
    v89[1] = 255LL;
    v89[2] = 0xFFFFLL;
    v89[3] = 0LL;
    v89[4] = 0xFFFFFFFFLL;
    memset(&v89[5], 0, 24);
    v89[8] = -1LL;
    if ( (unsigned int)v32 > 8 )
      goto LABEL_52;
    v36 = v89[v32];
    if ( BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink) )
    {
      v73 = *(int (__fastcall **)(_QWORD, unsigned __int64, __int64 *, _QWORD, _BYTE *))(PmHalDispatchTable + 144);
      if ( v73 )
      {
        if ( v34 == v36 )
        {
LABEL_140:
          v74 = v29 | v35 & ~v34;
          v75 = v87;
          v83 = v74;
          LOBYTE(v75) = 1;
          if ( (*(int (__fastcall **)(_BYTE *, unsigned __int64, __int64 *, _QWORD, _BYTE *))(PmHalDispatchTable + 144))(
                 v75,
                 v33,
                 &v83,
                 (unsigned int)v32,
                 v87) >= 0 )
            goto LABEL_149;
        }
        else if ( v73(0LL, v33, &v83, (unsigned int)v32, v87) >= 0 )
        {
          v35 = v83;
          v33 = (unsigned __int64)v85;
          goto LABEL_140;
        }
        v35 = v83;
        v33 = (unsigned __int64)v85;
        v5 = v81;
      }
    }
    if ( (unsigned int)v32 == 1LL )
      v37 = 0LL;
    else
      v37 = v33 % (unsigned int)v32;
    if ( v37 )
    {
      if ( v34 != v36 )
      {
        memmove(&v83, (const void *)v33, (unsigned int)v32);
        v35 = v83;
        v33 = (unsigned __int64)v85;
      }
      v83 = v29 | v35 & ~v34;
      memmove((void *)v33, &v83, (unsigned int)v32);
LABEL_149:
      v5 = v81;
      goto LABEL_52;
    }
    if ( (_DWORD)v32 == 1 )
    {
      if ( v34 != v36 )
        v35 = *(unsigned __int8 *)v33;
      v83 = v29 | v35 & ~v34;
      *(_BYTE *)v33 = v83;
      _InterlockedOr(v78, 0);
      goto LABEL_52;
    }
    if ( (_DWORD)v32 == 4 )
    {
      if ( v34 != v36 )
        v35 = *(unsigned int *)v33;
      v83 = v29 | v35 & ~v34;
      *(_DWORD *)v33 = v83;
      _InterlockedOr(v78, 0);
      goto LABEL_52;
    }
    if ( (_DWORD)v32 != 2 )
    {
      if ( (_DWORD)v32 != 8 )
        goto LABEL_52;
      if ( v34 != v36 )
        v35 = *(_QWORD *)v33;
      v83 = v29 | v35 & ~v34;
      *(_QWORD *)v33 = v83;
      KeFlushWriteBuffer();
      goto LABEL_149;
    }
    if ( v34 != v36 )
      v35 = *(unsigned __int16 *)v33;
    v83 = v29 | v35 & ~v34;
    *(_WORD *)v33 = v83;
    _InterlockedOr(v78, 0);
LABEL_52:
    v38 = *(_DWORD *)(a2 + 56);
    *(_DWORD *)(a2 + 96) += v38;
    v39 = *(_DWORD *)(a2 + 100);
    ++*(_DWORD *)(a2 + 80);
    *(_DWORD *)(a2 + 100) = 0;
    v40 = v39 - 8 * v38;
    v41 = *(_DWORD *)(a2 + 80);
    *(_DWORD *)(a2 + 104) += v40;
    v42 = *(_DWORD *)(a2 + 16);
    if ( v41 >= *(_DWORD *)(a2 + 60) )
    {
      v45 = v42 + 1;
      goto LABEL_59;
    }
    v6 = v42 - 2;
    *(_DWORD *)(a2 + 16) = v6;
LABEL_54:
    if ( *(_DWORD *)(a2 + 80) >= *(_DWORD *)(a2 + 60) )
      break;
    *(_DWORD *)(a2 + 16) = v6 + 1;
    v43 = *(_QWORD *)(a2 + 32);
    if ( *(_WORD *)(v43 + 2) == 5 )
    {
      v44 = **(_QWORD **)(v43 + 32);
      if ( *(_WORD *)(v44 + 66) == 132 )
        return (unsigned int)PushAccFieldObj(
                               v5,
                               WriteFieldObj,
                               **(_QWORD **)(v44 + 96) + 64LL,
                               *(_QWORD *)(**(_QWORD **)(v44 + 96) + 96LL) + 8LL,
                               a2 + 96,
                               4);
    }
LABEL_6:
    v10 = *(_QWORD *)(a2 + 32);
    ++*(_DWORD *)(a2 + 16);
    if ( *(_WORD *)(v10 + 2) == 14 )
    {
      BuffField = ReadBuffField(v5, *(_QWORD *)(v10 + 32), (unsigned int *)(a2 + 96), (_QWORD *)(a2 + 88));
      goto LABEL_20;
    }
    v11 = **(_QWORD **)(v10 + 32);
    v84 = 0LL;
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
    BuffField = 0;
    if ( v12 == 131 || v12 == 130 )
    {
      v13 = **(_QWORD **)(v11 + 96);
      v84 = v13;
    }
    else
    {
      if ( v12 != 132 )
      {
        LogError(3222536195LL);
        AcpiDiagTraceAmlError(0LL, 3222536195LL);
        PrintDebugMessage(56, MEMORY[0x42], 0, 0, 0LL);
        BuffField = -1072431101;
LABEL_100:
        v5 = v81;
        goto LABEL_101;
      }
      FieldUnitRegionObj = GetFieldUnitRegionObj(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 96) + 8LL) + 96LL), &v84);
      v5 = v81;
      BuffField = FieldUnitRegionObj;
      v13 = v84;
    }
    if ( v13 && *(_WORD *)(v13 + 66) != 10 )
    {
      LogError(3222536195LL);
      AcpiDiagTraceAmlError(0LL, 3222536195LL);
      ObjectPath = GetObjectPath(v13);
      v67 = *(unsigned __int16 *)(v13 + 66);
      v68 = &unk_1C006FE7D;
      v79 = 0LL;
      v69 = ObjectPath;
      if ( ObjectPath )
        LODWORD(v68) = (_DWORD)ObjectPath;
      PrintDebugMessage(55, (_DWORD)v68, v67, 0, v79);
      BuffField = -1072431101;
      if ( v69 )
        ExFreePoolWithTag(v69, 0);
      goto LABEL_100;
    }
    if ( (BuffField & 0x80000000) == 0 && v13 )
    {
      if ( (gdwfAMLI & 4) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 112));
        v13 = v84;
      }
      v14 = v13;
      v15 = v13;
      goto LABEL_17;
    }
LABEL_101:
    v84 = 0LL;
    LODWORD(v13) = 0;
    v14 = 0LL;
    v15 = 0LL;
LABEL_17:
    if ( BuffField )
      return BuffField;
    if ( !v15 )
      goto LABEL_21;
    LOBYTE(v79) = 1;
    BuffField = AccessBaseField(v5, v13, (int)a2 + 96, (int)a2 + 88, v79);
    if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 112), 0xFFFFFFFF) == 1 )
    {
      *(_WORD *)(v14 + 64) |= 4u;
      if ( (*(_WORD *)(v14 + 64) & 0x40) == 0 )
        FreeNameSpaceObjects(v14);
    }
LABEL_20:
    v5 = v81;
LABEL_21:
    if ( BuffField || a2 != *(_QWORD *)(v5 + 416) )
      return BuffField;
  }
  v45 = v6 + 3;
LABEL_59:
  *(_DWORD *)(a2 + 16) = v45;
LABEL_60:
  v46 = *(_QWORD **)(v5 + 416);
  v47 = v46 - 2;
  *(_QWORD *)(v5 + 416) = v46[1];
  *((_DWORD *)v46 - 4) = 0;
  byte_1C0082B28 = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
  v48 = *(v46 - 1);
  v49 = *(_QWORD **)(v48 + 40);
  for ( i = (_QWORD *)(v48 + 40); v49 != i; v49 = (_QWORD *)*v49 )
  {
    if ( v46 < v49 )
      break;
  }
  v51 = (_QWORD *)v49[1];
  if ( (_QWORD *)*v51 != v49 )
    goto LABEL_155;
  v46[1] = v51;
  *v46 = v49;
  *v51 = v46;
  v49[1] = v46;
  v52 = (_QWORD *)*v46;
  v53 = *v46 - 16LL;
  if ( (_QWORD *)*v46 != i )
  {
    v61 = *((unsigned int *)v47 + 1);
    if ( (_QWORD *)v53 == (_QWORD *)((char *)v47 + v61) )
    {
      *((_DWORD *)v47 + 1) = v61 + *(_DWORD *)(v53 + 4);
      v62 = *v52;
      if ( *(_QWORD **)(*v52 + 8LL) == v52 )
      {
        v63 = (_QWORD *)v52[1];
        if ( (_QWORD *)*v63 == v52 )
        {
          *v63 = v62;
          *(_QWORD *)(v62 + 8) = v63;
          goto LABEL_63;
        }
      }
LABEL_155:
      __fastfail(3u);
    }
  }
LABEL_63:
  v54 = (_QWORD *)v47[3];
  v55 = v54 - 2;
  if ( v54 != i )
  {
    v64 = *((unsigned int *)v55 + 1);
    if ( v47 == (_QWORD *)((char *)v55 + v64) )
    {
      *((_DWORD *)v55 + 1) = *((_DWORD *)v47 + 1) + v64;
      v76 = *v46;
      if ( *(_QWORD **)(*v46 + 8LL) != v46 )
        goto LABEL_155;
      v77 = (_QWORD *)v46[1];
      if ( (_QWORD *)*v77 != v46 )
        goto LABEL_155;
      *v77 = v76;
      v47 = v55;
      *(_QWORD *)(v76 + 8) = v77;
    }
  }
  if ( *(_QWORD *)(v48 + 32) <= (unsigned __int64)v47 + *((unsigned int *)v47 + 1) )
  {
    *(_QWORD *)(v48 + 32) = v47;
    v56 = v47 + 2;
    v57 = *v56;
    if ( *(_QWORD **)(*v56 + 8LL) != v56 )
      goto LABEL_155;
    v58 = (_QWORD *)v56[1];
    if ( (_QWORD *)*v58 != v56 )
      goto LABEL_155;
    *v58 = v57;
    *(_QWORD *)(v57 + 8) = v58;
  }
  KeReleaseSpinLock(&gmutHeap, byte_1C0082B28);
  return BuffField;
}
