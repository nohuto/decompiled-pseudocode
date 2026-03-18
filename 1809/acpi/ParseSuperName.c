/*
 * XREFs of ParseSuperName @ 0x1C0008DE0
 * Callers:
 *     ParseTerm @ 0x1C0006EE0 (ParseTerm.c)
 *     ParseArg @ 0x1C0021B5C (ParseArg.c)
 * Callees:
 *     FreeNameSpaceObjects @ 0x1C0003550 (FreeNameSpaceObjects.c)
 *     GetNameSpaceObjectNoLock @ 0x1C0008BF0 (GetNameSpaceObjectNoLock.c)
 *     GetBaseData @ 0x1C000B2B8 (GetBaseData.c)
 *     ParseNameTail @ 0x1C0021070 (ParseNameTail.c)
 *     RtlStringCchCopyA @ 0x1C002292C (RtlStringCchCopyA.c)
 *     PushTerm @ 0x1C0028534 (PushTerm.c)
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     __security_check_cookie @ 0x1C0030A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 *     ConPrintf @ 0x1C0063840 (ConPrintf.c)
 */

__int64 __fastcall ParseSuperName(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v4; // edi
  unsigned __int8 *v7; // rdx
  __int64 v8; // rbx
  unsigned __int8 v10; // cl
  _QWORD *v12; // rsi
  _BYTE *v13; // r9
  int v14; // eax
  int NameSpaceObjectNoLock; // r14d
  __int64 v16; // rcx
  unsigned __int8 v17; // al
  int v18; // r12d
  char *v19; // rdx
  __int64 v20; // r10
  char v21; // al
  size_t v22; // rbx
  _BYTE *PoolWithTag; // rsi
  KIRQL v24; // bl
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 j; // rcx
  char v29; // al
  unsigned __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // r8
  __int64 v33; // r9
  char *v34; // rdx
  _BYTE *v35; // rax
  unsigned int i; // r12d
  _BYTE *v37; // rcx
  __int64 v38; // rbx
  int v39; // esi
  unsigned __int64 v40; // rcx
  char v41; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v42; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+40h] [rbp-C0h]
  char Src; // [rsp+50h] [rbp-B0h] BYREF
  char v45; // [rsp+51h] [rbp-AFh] BYREF
  _BYTE P[128]; // [rsp+150h] [rbp+50h] BYREF

  v4 = 0;
  v41 = a3;
  v7 = (unsigned __int8 *)a1[15];
  v8 = 0LL;
  v42 = 0LL;
  v10 = *v7;
  if ( !*v7 )
  {
    a1[15] = v7 + 1;
    return v4;
  }
  if ( v10 == 91 && v7[1] == 49 )
  {
    a1[15] = v7 + 2;
    *(_WORD *)(a2 + 2) = 16;
    if ( (gDebugger & 0xD0) != 0 )
      ConPrintf("Debug");
    return v4;
  }
  v12 = a1 + 15;
  v13 = *(&OpcodeTable + v10);
  if ( !v13 )
    goto LABEL_91;
  v14 = *((_DWORD *)v13 + 7);
  if ( (v14 & 0x20) != 0 )
  {
    v43 = a1[10];
    if ( v10 == 92 )
    {
      RtlStringCchCopyA(&Src, 0x100uLL, "\\");
      ++*v12;
    }
    else
    {
      if ( v10 != 94 )
      {
        Src = 0;
        NameSpaceObjectNoLock = 0;
        v16 = -1LL;
        do
          ++v16;
        while ( *(&Src + v16) );
        v17 = *v7;
        if ( !*v7 )
        {
          *v12 = v7 + 1;
          goto LABEL_25;
        }
        if ( v17 != 47 )
        {
          if ( v17 == 46 )
          {
            v18 = 2;
            *v12 = v7 + 1;
          }
          else
          {
            v18 = 1;
          }
          while ( 1 )
          {
LABEL_15:
            if ( (unsigned __int64)(unsigned int)v16 + 4 >= 0x100 )
            {
              NameSpaceObjectNoLock = -1073741562;
              LogError(3221225734LL, (unsigned int)v16, a3, v13);
              AcpiDiagTraceAmlError(a1, 3221225734LL);
              PrintDebugMessage(130, (unsigned int)&Src, 0, 0, 0LL);
              goto LABEL_25;
            }
            v13 = (_BYTE *)*v12;
            v19 = &Src + (unsigned int)v16;
            a3 = (unsigned int)(256 - v16);
            if ( (unsigned __int64)(a3 - 1) <= 0x7FFFFFFE )
              break;
            if ( 256 != (_DWORD)v16 )
              goto LABEL_23;
LABEL_24:
            *v12 += 4LL;
            LODWORD(v16) = v16 + 4;
            if ( !--v18 )
              goto LABEL_25;
            v39 = v16 + 1;
            if ( (unsigned int)(v16 + 1) < 0x100 )
            {
              RtlStringCchCopyA(&Src + (unsigned int)v16, (unsigned int)(256 - v16), ".");
              LODWORD(v16) = v39;
            }
            v12 = a1 + 15;
          }
          v20 = 4 - a3;
          v13 -= (__int64)v19;
          while ( v20 + a3 )
          {
            v21 = v19[(_QWORD)v13];
            if ( !v21 )
              break;
            *v19++ = v21;
            if ( !--a3 )
              goto LABEL_74;
          }
          if ( a3 )
            goto LABEL_23;
LABEL_74:
          --v19;
LABEL_23:
          *v19 = 0;
          goto LABEL_24;
        }
        *v12 = v7 + 1;
        v18 = v7[1];
        *v12 = v7 + 2;
        if ( v18 )
          goto LABEL_15;
LABEL_25:
        if ( !NameSpaceObjectNoLock )
        {
          if ( (gDebugger & 0xD0) != 0 )
            ConPrintf("%s");
          v22 = -1LL;
          do
            ++v22;
          while ( *(&Src + v22) );
          if ( v22 + 1 >= 0x80 )
          {
            PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v22 + 1, 0x69706341u);
            if ( !PoolWithTag )
              return (unsigned int)-1073741670;
          }
          else
          {
            PoolWithTag = P;
          }
          memmove(PoolWithTag, &Src, v22);
          PoolWithTag[v22] = 0;
          v24 = ExAcquireSpinLockShared(&ACPINamespaceLock);
          NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(PoolWithTag, v43, (__int64 *)&v42, 0LL);
          ExReleaseSpinLockShared(&ACPINamespaceLock, v24);
          if ( P != PoolWithTag )
            ExFreePoolWithTag(PoolWithTag, 0);
          if ( NameSpaceObjectNoLock == -1073741772 )
          {
            if ( v41 )
              return v4;
            LogError(3221225524LL, v25, v26, v27);
            AcpiDiagTraceAmlError(a1, 3221225524LL);
            PrintDebugMessage(120, (unsigned int)&Src, 0, 0, 0LL);
          }
          v8 = v42;
        }
        goto LABEL_36;
      }
      RtlStringCchCopyA(&Src, 0x100uLL, "^");
      ++*v12;
      v34 = &v45;
      v35 = (_BYTE *)*v12;
      for ( i = 1; i < 0xFF; ++i )
      {
        v37 = v35;
        if ( *v35 != 94 )
          break;
        ++v35;
        *v34++ = 94;
        *v12 = v35;
        v37 = v35;
      }
      *(&Src + i) = 0;
      if ( *v37 == 94 )
      {
        NameSpaceObjectNoLock = -1073741562;
        LogError(3221225734LL, v34, v32, v33);
        AcpiDiagTraceAmlError(a1, 3221225734LL);
        PrintDebugMessage(129, (unsigned int)&Src, 0, 0, 0LL);
LABEL_36:
        v4 = NameSpaceObjectNoLock;
        if ( !NameSpaceObjectNoLock && v8 )
        {
          *(_WORD *)(a2 + 2) = 128;
          for ( j = v8; *(_WORD *)(j + 66) == 128; j = *(_QWORD *)(j + 80) )
            ;
          if ( (gdwfAMLI & 4) != 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(j + 112));
            v8 = v42;
          }
          v29 = gdwfAMLI;
          *(_QWORD *)(a2 + 16) = j;
          if ( (v29 & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 112), 0xFFFFFFFF) == 1 )
          {
            v40 = v42;
            *(_WORD *)(v42 + 64) |= 4u;
            if ( (*(_WORD *)(v40 + 64) & 0x40) == 0 )
              FreeNameSpaceObjects(v40);
          }
          v30 = *(_QWORD *)(a2 + 16);
          if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v30 + 112), 0xFFFFFFFF) == 1 )
          {
            *(_WORD *)(v30 + 64) |= 4u;
            if ( (*(_WORD *)(v30 + 64) & 0x40) == 0 )
              FreeNameSpaceObjects(v30);
          }
        }
        return v4;
      }
    }
    NameSpaceObjectNoLock = ParseNameTail(a1, a1 + 15, &Src);
    goto LABEL_25;
  }
  if ( (v14 & 2) == 0 )
  {
    if ( (v14 & 4) != 0 )
    {
      v31 = (unsigned int)v10 - 96;
      a1[15] = v7 + 1;
      if ( (gDebugger & 0xD0) != 0 )
        ConPrintf("Local%d");
      *(_WORD *)(a2 + 2) = 129;
      *(_QWORD *)(a2 + 16) = a1[12] + 8 * (v31 + 4 * v31 + 9);
      return v4;
    }
    if ( (v14 & 0x80u) != 0 )
    {
      v4 = PushTerm((_DWORD)a1, (_DWORD)v7, a4, (_DWORD)v13, a2);
      a1[15] = *v12 + 1LL;
      return v4;
    }
LABEL_91:
    LogError(3222536199LL, v7, a3, v13);
    AcpiDiagTraceAmlError(a1, 3222536199LL);
    PrintDebugMessage(141, *(unsigned __int8 *)*v12, *v12, 0, 0LL);
    return (unsigned int)-1072431097;
  }
  a1[15] = v7 + 1;
  v38 = (unsigned int)v10 - 104;
  if ( (unsigned int)v38 >= *(_DWORD *)(a1[12] + 60LL) )
  {
    LogError(3222536197LL, v7, a3, v13);
    AcpiDiagTraceAmlError(a1, 3222536197LL);
    PrintDebugMessage(142, v38, 0, 0, 0LL);
    return (unsigned int)-1072431099;
  }
  else
  {
    if ( (gDebugger & 0xD0) != 0 )
      ConPrintf("Arg%d");
    *(_WORD *)(a2 + 2) = 129;
    *(_QWORD *)(a2 + 16) = GetBaseData(*(_QWORD *)(a1[12] + 64LL) + 40 * v38);
  }
  return v4;
}
