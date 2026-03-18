/*
 * XREFs of ParseField @ 0x1C00178D0
 * Callers:
 *     ParseFieldList @ 0x1C00177D8 (ParseFieldList.c)
 * Callees:
 *     HeapAlloc @ 0x1C0003960 (HeapAlloc.c)
 *     FreeNameSpaceObjects @ 0x1C00137D0 (FreeNameSpaceObjects.c)
 *     DereferenceObjectEx @ 0x1C0013B20 (DereferenceObjectEx.c)
 *     CreateNameSpaceObject @ 0x1C0017B60 (CreateNameSpaceObject.c)
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     ConPrintf @ 0x1C0065888 (ConPrintf.c)
 *     PrintIndent @ 0x1C00663D8 (PrintIndent.c)
 *     ParseFieldConnection @ 0x1C006B4D8 (ParseFieldConnection.c)
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
  __int64 v24; // r9
  unsigned int v25; // eax
  int v26; // ecx
  int v27; // ecx
  _BYTE *v28; // rax
  char v30; // cl
  char v31; // cl
  unsigned int v32; // eax
  __int64 v33; // r9
  _DWORD *v34; // r8
  const char *v35; // rcx
  unsigned __int64 v36; // rcx
  bool v37; // di
  char v38; // cl
  int v39; // eax
  _BYTE *v40; // rax
  int v41; // [rsp+30h] [rbp-78h]
  unsigned __int64 v42; // [rsp+38h] [rbp-70h] BYREF
  _BYTE *v43; // [rsp+40h] [rbp-68h]
  char v44[8]; // [rsp+48h] [rbp-60h] BYREF

  v43 = a5;
  v8 = a2;
  v10 = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 112));
  v11 = *(unsigned __int8 **)(a1 + 120);
  v12 = *v11;
  if ( (((_BYTE)v12 - 1) & 0xFD) == 0 )
  {
    *(_QWORD *)(a1 + 120) = v11 + 1;
    v37 = (_BYTE)v12 == 3;
    *(_DWORD *)a3 &= 0xFFFFFFF0;
    *(_DWORD *)a3 |= **(_BYTE **)(a1 + 120) & 0xF;
    if ( (_BYTE)v12 == 3 || (**(_BYTE **)(a1 + 120) & 0xC0) == 0 )
    {
      ++*(_QWORD *)(a1 + 120);
      *(_BYTE *)(a3 + 1) = 0;
      *(_DWORD *)a3 |= *(unsigned __int8 *)(*(_QWORD *)(a1 + 120))++ << 8;
      v40 = *(_BYTE **)(a1 + 120);
      if ( (_BYTE)v12 != 3 )
      {
        *a5 = 0;
LABEL_59:
        if ( (gDebugger & 0xD0) != 0 )
        {
          PrintIndent(a1, a2, v12, v11);
          ConPrintf("AccessAs(0x%x,0x%x");
          if ( v37 )
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
      v38 = **(_BYTE **)(a1 + 120) & 0xC0;
      if ( v38 == 64 )
      {
        v39 = 2816;
      }
      else
      {
        v39 = 3840;
        v12 = 3584LL;
        if ( v38 == (char)0x80 )
          v39 = 3584;
      }
      *(_DWORD *)a3 |= v39;
      v37 = 1;
      v40 = (_BYTE *)++*(_QWORD *)(a1 + 120);
    }
    *a5 = *v40;
    ++*(_QWORD *)(a1 + 120);
    goto LABEL_59;
  }
  if ( (_BYTE)v12 == 2 )
  {
    *(_QWORD *)(a1 + 120) = v11 + 1;
    v32 = ParseFieldConnection(a1, a6);
    v10 = v32;
    if ( v32 )
    {
      LogError(v32);
      AcpiDiagTraceAmlError(a1, v10);
      PrintDebugMessage(125, 0, 0, 0, 0LL);
    }
    else
    {
      v34 = *a6;
      (*a6)[1] = *a4;
      if ( (gDebugger & 0xD0) != 0 )
      {
        PrintIndent(a1, (unsigned int)gDebugger, v34, v33);
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
      v30 = v13 - 1;
      a2 = (unsigned int)(1 << v30);
      v41 = 1 << v30;
    }
    else
    {
      v41 = 1;
    }
    v15 = 5LL;
    if ( (_BYTE)v12 )
    {
      a2 = (unsigned __int64)v44;
      while ( 1 )
      {
        v16 = v15 - 1;
        if ( v15 == 1 )
          break;
        v17 = *(_BYTE *)(v11 - (unsigned __int8 *)v44 + a2);
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
      v44[0] = 0;
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
        v31 = (char)v11;
        LOBYTE(v11) = (_BYTE)v11 + 1;
        v19 |= *(unsigned __int8 *)a2 << (8 * v31 + 4);
        *(_QWORD *)(a1 + 120) = a2 + 1;
      }
      while ( (unsigned __int8)v11 < (unsigned __int8)v20 );
    }
    if ( (gDebugger & 0xD0) != 0 )
    {
      PrintIndent(a1, a2, v20, v11);
      if ( v44[0] )
      {
        ConPrintf("%s,%d");
      }
      else
      {
        if ( v19 <= 0x20 || (((_BYTE)v19 + *(_BYTE *)a4) & 7) != 0 )
          v35 = ",%d";
        else
          v35 = "Offset(0x%x)";
        ConPrintf(v35);
      }
    }
    v10 = CreateNameSpaceObject(*(_QWORD *)(a1 + 320), v44, *(_QWORD *)(a1 + 80), *(_QWORD *)(a1 + 88), &v42, 0);
    if ( !v10 )
    {
      v21 = v42;
      v22 = 40;
      *(_WORD *)(v42 + 66) = 5;
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
        v24 = *(_QWORD *)(v21 + 96);
        *(_QWORD *)v24 = v8;
        v8 = 0LL;
        *(_DWORD *)(v24 + 20) = *(_DWORD *)a3;
        v25 = v41 * (*a4 / (unsigned int)(8 * v41));
        *(_DWORD *)(v24 + 8) = v25;
        v26 = *a4;
        *(_DWORD *)(v24 + 16) = v19;
        v27 = v26 - 8 * v25;
        v28 = v43;
        *(_DWORD *)(v24 + 12) = v27;
        *(_BYTE *)(v24 + 24) = *v28;
        if ( *a6 )
        {
          *(_DWORD *)(v24 + 28) = **a6;
          *(_DWORD *)(v24 + 32) = (*a6)[1];
          *(_DWORD *)(v24 + 36) = (*a6)[3];
          memmove((void *)(v24 + 40), *a6 + 4, (unsigned int)(*a6)[3]);
        }
        *a4 += v19;
      }
      else
      {
        v10 = -1073741670;
        LogError(3221225626LL);
        AcpiDiagTraceAmlError(a1, 3221225626LL);
        PrintDebugMessage(124, 0, 0, 0, 0LL);
      }
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 112), 0xFFFFFFFF) == 1 )
      {
        v36 = v42;
        *(_WORD *)(v42 + 64) |= 4u;
        if ( (*(_WORD *)(v36 + 64) & 0x40) == 0 )
          FreeNameSpaceObjects(v36);
      }
    }
  }
LABEL_25:
  if ( v8 )
    DereferenceObjectEx(v8);
  return v10;
}
