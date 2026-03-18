/*
 * XREFs of ParseField @ 0x1C00217F0
 * Callers:
 *     ParseFieldList @ 0x1C00216F8 (ParseFieldList.c)
 * Callees:
 *     FreeNameSpaceObjects @ 0x1C0003550 (FreeNameSpaceObjects.c)
 *     DereferenceObjectEx @ 0x1C00038B0 (DereferenceObjectEx.c)
 *     CreateNameSpaceObject @ 0x1C0006190 (CreateNameSpaceObject.c)
 *     HeapAlloc @ 0x1C00088C0 (HeapAlloc.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     ConPrintf @ 0x1C0063840 (ConPrintf.c)
 *     PrintIndent @ 0x1C00643FC (PrintIndent.c)
 *     ParseFieldConnection @ 0x1C0069484 (ParseFieldConnection.c)
 */

__int64 __fastcall ParseField(__int64 a1, unsigned __int64 a2, __int64 a3, _DWORD *a4, _BYTE *a5, _DWORD **a6)
{
  unsigned __int64 v8; // rbp
  unsigned int v10; // esi
  unsigned __int8 *v11; // r9
  __int64 v12; // r8
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int8 v17; // r8
  unsigned __int8 *v18; // rax
  unsigned int v19; // r14d
  __int64 v20; // r8
  unsigned __int64 v21; // rdi
  unsigned int v22; // r8d
  void *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r9
  unsigned int v28; // eax
  int v29; // ecx
  int v30; // ecx
  _BYTE *v31; // rax
  char v33; // cl
  char v34; // cl
  unsigned int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  _DWORD *v39; // r8
  const char *v40; // rcx
  unsigned __int64 v41; // rcx
  bool v42; // di
  char v43; // cl
  int v44; // eax
  _BYTE *v45; // rax
  int v46; // [rsp+30h] [rbp-78h]
  unsigned __int64 v47; // [rsp+38h] [rbp-70h] BYREF
  _BYTE *v48; // [rsp+40h] [rbp-68h]
  unsigned __int8 v49[8]; // [rsp+48h] [rbp-60h] BYREF

  v48 = a5;
  v8 = a2;
  v10 = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 112));
  v11 = *(unsigned __int8 **)(a1 + 120);
  v12 = *v11;
  if ( (((_BYTE)v12 - 1) & 0xFD) == 0 )
  {
    *(_QWORD *)(a1 + 120) = v11 + 1;
    v42 = (_BYTE)v12 == 3;
    *(_DWORD *)a3 &= 0xFFFFFFF0;
    *(_DWORD *)a3 |= **(_BYTE **)(a1 + 120) & 0xF;
    if ( (_BYTE)v12 == 3 || (**(_BYTE **)(a1 + 120) & 0xC0) == 0 )
    {
      ++*(_QWORD *)(a1 + 120);
      *(_BYTE *)(a3 + 1) = 0;
      *(_DWORD *)a3 |= *(unsigned __int8 *)(*(_QWORD *)(a1 + 120))++ << 8;
      v45 = *(_BYTE **)(a1 + 120);
      if ( (_BYTE)v12 != 3 )
      {
        *a5 = 0;
LABEL_59:
        if ( (gDebugger & 0xD0) != 0 )
        {
          PrintIndent(a1, a2, v12, v11);
          ConPrintf("AccessAs(0x%x,0x%x");
          if ( v42 )
            ConPrintf(",0x%x)\n");
          else
            ConPrintf(")\n");
        }
        goto LABEL_25;
      }
    }
    else
    {
      *(_BYTE *)(a3 + 1) = 0;
      v43 = **(_BYTE **)(a1 + 120) & 0xC0;
      if ( v43 == 64 )
      {
        v44 = 2816;
      }
      else
      {
        v44 = 3840;
        v12 = 3584LL;
        if ( v43 == (char)0x80 )
          v44 = 3584;
      }
      *(_DWORD *)a3 |= v44;
      v42 = 1;
      v45 = (_BYTE *)++*(_QWORD *)(a1 + 120);
    }
    *a5 = *v45;
    ++*(_QWORD *)(a1 + 120);
    goto LABEL_59;
  }
  if ( (_BYTE)v12 == 2 )
  {
    *(_QWORD *)(a1 + 120) = v11 + 1;
    v35 = ParseFieldConnection(a1, a6);
    v10 = v35;
    if ( v35 )
    {
      LogError(v35, v36, v37, v38);
      AcpiDiagTraceAmlError(a1, v10);
      PrintDebugMessage(125, 0, 0, 0, 0LL);
    }
    else
    {
      v39 = *a6;
      (*a6)[1] = *a4;
      if ( (gDebugger & 0xD0) != 0 )
      {
        PrintIndent(a1, (unsigned int)gDebugger, v39, v38);
        if ( **a6 == 1 )
          ConPrintf("Connection(%s)");
        else
          ConPrintf("Connection(%02x %02x %02x %02x ...)");
      }
    }
  }
  else
  {
    v13 = *(_DWORD *)a3 & 0xF;
    v14 = 1LL;
    if ( (unsigned int)(v13 - 1) <= 3 )
    {
      v33 = v13 - 1;
      a2 = (unsigned int)(1 << v33);
      v46 = 1 << v33;
    }
    else
    {
      v46 = 1;
    }
    v15 = 5LL;
    if ( (_BYTE)v12 )
    {
      a2 = (unsigned __int64)v49;
      while ( 1 )
      {
        v16 = v15 - 1;
        if ( v15 == 1 )
          break;
        v17 = *(_BYTE *)(v11 - v49 + a2);
        if ( !v17 )
          break;
        *(_BYTE *)a2 = v17;
        --v15;
        ++a2;
        if ( !v16 )
          goto LABEL_39;
      }
      if ( v15 )
        goto LABEL_14;
LABEL_39:
      --a2;
LABEL_14:
      *(_BYTE *)a2 = 0;
      v14 = 4LL;
    }
    else
    {
      v49[0] = 0;
    }
    v18 = &v11[v14];
    *(_QWORD *)(a1 + 120) = v18;
    v19 = *v18;
    *(_QWORD *)(a1 + 120) = v18 + 1;
    v20 = v19 >> 6;
    if ( (_BYTE)v20 )
    {
      v19 &= 0xFu;
      LOBYTE(v11) = 0;
      do
      {
        a2 = *(_QWORD *)(a1 + 120);
        v34 = (char)v11;
        LOBYTE(v11) = (_BYTE)v11 + 1;
        v19 |= *(unsigned __int8 *)a2 << (8 * v34 + 4);
        *(_QWORD *)(a1 + 120) = a2 + 1;
      }
      while ( (unsigned __int8)v11 < (unsigned __int8)v20 );
    }
    if ( (gDebugger & 0xD0) != 0 )
    {
      PrintIndent(a1, a2, v20, v11);
      if ( v49[0] )
      {
        ConPrintf("%s,%d");
      }
      else
      {
        if ( v19 <= 0x20 || (((_BYTE)v19 + *(_BYTE *)a4) & 7) != 0 )
          v40 = ",%d";
        else
          v40 = "Offset(0x%x)";
        ConPrintf(v40);
      }
    }
    v10 = CreateNameSpaceObject(
            *(_QWORD *)(a1 + 320),
            v49,
            *(_QWORD *)(a1 + 80),
            *(struct _EX_RUNDOWN_REF **)(a1 + 88),
            &v47,
            0);
    if ( !v10 )
    {
      v21 = v47;
      v22 = 40;
      *(_WORD *)(v47 + 66) = 5;
      *(_DWORD *)(v21 + 88) = 40;
      if ( *a6 )
      {
        v22 = (*a6)[3] + 40;
        *(_DWORD *)(v21 + 88) = v22;
      }
      v23 = (void *)HeapAlloc(*(struct _SLIST_ENTRY **)(a1 + 320), 1430537800, v22);
      *(_QWORD *)(v21 + 96) = v23;
      if ( v23 )
      {
        memset(v23, 0, *(unsigned int *)(v21 + 88));
        v27 = *(_QWORD *)(v21 + 96);
        *(_QWORD *)v27 = v8;
        v8 = 0LL;
        *(_DWORD *)(v27 + 20) = *(_DWORD *)a3;
        v28 = v46 * (*a4 / (unsigned int)(8 * v46));
        *(_DWORD *)(v27 + 8) = v28;
        v29 = *a4;
        *(_DWORD *)(v27 + 16) = v19;
        v30 = v29 - 8 * v28;
        v31 = v48;
        *(_DWORD *)(v27 + 12) = v30;
        *(_BYTE *)(v27 + 24) = *v31;
        if ( *a6 )
        {
          *(_DWORD *)(v27 + 28) = **a6;
          *(_DWORD *)(v27 + 32) = (*a6)[1];
          *(_DWORD *)(v27 + 36) = (*a6)[3];
          memmove((void *)(v27 + 40), *a6 + 4, (unsigned int)(*a6)[3]);
        }
        *a4 += v19;
      }
      else
      {
        v10 = -1073741670;
        LogError(3221225626LL, v24, v25, v26);
        AcpiDiagTraceAmlError(a1, 3221225626LL);
        PrintDebugMessage(124, 0, 0, 0, 0LL);
      }
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 112), 0xFFFFFFFF) == 1 )
      {
        v41 = v47;
        *(_WORD *)(v47 + 64) |= 4u;
        if ( (*(_WORD *)(v41 + 64) & 0x40) == 0 )
          FreeNameSpaceObjects(v41);
      }
    }
  }
LABEL_25:
  if ( v8 )
    DereferenceObjectEx(v8);
  return v10;
}
