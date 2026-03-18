/*
 * XREFs of GetNameSpaceObjectNoLock @ 0x1C0008BF0
 * Callers:
 *     CreateNameSpaceObject @ 0x1C0006190 (CreateNameSpaceObject.c)
 *     ParseTerm @ 0x1C0006EE0 (ParseTerm.c)
 *     ParseSuperName @ 0x1C0008DE0 (ParseSuperName.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C000AAE8 (AMLIGetNameSpaceObjectNoLock.c)
 *     ACPIDockIsDockDevice @ 0x1C00206B0 (ACPIDockIsDockDevice.c)
 *     GetNameSpaceObject @ 0x1C0021288 (GetNameSpaceObject.c)
 * Callees:
 *     LogError @ 0x1C0029B44 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002AE60 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002BB94 (PrintDebugMessage.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 */

__int64 __fastcall GetNameSpaceObjectNoLock(const char *Src, __int64 a2, __int64 *a3, __int64 a4)
{
  int v4; // r12d
  __int64 v6; // rbp
  int v7; // r14d
  const char *i; // rsi
  unsigned __int64 v9; // rax
  char v10; // r13
  _QWORD *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  _QWORD *v17; // rax
  unsigned int v18; // edi
  int v20; // [rsp+60h] [rbp+8h] BYREF

  v4 = a4;
  v6 = a2;
  v7 = (int)Src;
  if ( !a2 )
    v6 = gpnsNameSpaceRoot;
  if ( *Src == 92 )
  {
    v6 = gpnsNameSpaceRoot;
    i = Src + 1;
  }
  else
  {
    for ( i = Src; *i == 94; ++i )
    {
      if ( !v6 )
        break;
      v6 = *(_QWORD *)(v6 + 16);
    }
  }
  *a3 = v6;
  if ( !v6 )
  {
    v18 = -1073741772;
    goto LABEL_25;
  }
  if ( !*i )
  {
LABEL_30:
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 112));
    return 0LL;
  }
  if ( (a4 & 1) != 0 )
    goto LABEL_33;
  if ( ((*Src - 92) & 0xFD) == 0 )
    goto LABEL_33;
  v9 = -1LL;
  do
    ++v9;
  while ( Src[v9] );
  if ( v9 > 4 )
LABEL_33:
    v10 = 0;
  else
    v10 = 1;
LABEL_13:
  while ( 1 )
  {
    v11 = (_QWORD *)(v6 + 24);
    if ( (_QWORD *)*v11 != v11 )
      break;
LABEL_22:
    v18 = -1073741772;
    if ( v10 )
    {
      if ( v6 )
      {
        v6 = *(_QWORD *)(v6 + 16);
        if ( v6 )
          continue;
      }
    }
    goto LABEL_25;
  }
  v12 = (__int64)strchr(i, 46);
  if ( v12 )
  {
    LODWORD(v12) = v12 - (_DWORD)i;
  }
  else
  {
    v12 = -1LL;
    do
      ++v12;
    while ( i[v12] );
  }
  if ( (unsigned int)v12 <= 4 )
  {
    v20 = 1600085855;
    v16 = (unsigned int)v12;
    memmove(&v20, i, (unsigned int)v12);
    v17 = (_QWORD *)*v11;
    if ( v11 != (_QWORD *)*v11 )
    {
      while ( v17[2] )
      {
        if ( *((_DWORD *)v17 + 10) == v20 )
        {
          i += v16;
          v6 = (__int64)v17;
          if ( *i == 46 )
          {
            ++i;
            goto LABEL_13;
          }
          if ( *i )
            goto LABEL_13;
          *a3 = (__int64)v17;
          goto LABEL_30;
        }
        v17 = (_QWORD *)*v17;
        if ( v11 == v17 )
          goto LABEL_22;
      }
    }
    goto LABEL_22;
  }
  v18 = -1073741773;
  LogError(3221225523LL, v13, v14, v15);
  AcpiDiagTraceAmlError(0LL, 3221225523LL);
  PrintDebugMessage(57, v7, 0, 0, 0LL);
LABEL_25:
  if ( v4 < 0 && v18 == -1073741772 )
  {
    LogError(3221225524LL, a2, a3, a4);
    AcpiDiagTraceAmlError(0LL, 3221225524LL);
    PrintDebugMessage(58, v7, 0, 0, 0LL);
  }
  *a3 = 0LL;
  return v18;
}
