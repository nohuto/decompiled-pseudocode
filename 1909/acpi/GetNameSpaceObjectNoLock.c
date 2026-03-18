/*
 * XREFs of GetNameSpaceObjectNoLock @ 0x1C00193E0
 * Callers:
 *     ACPIDockIsDockDevice @ 0x1C0017620 (ACPIDockIsDockDevice.c)
 *     CreateNameSpaceObject @ 0x1C0017B60 (CreateNameSpaceObject.c)
 *     ParseTerm @ 0x1C0017FB0 (ParseTerm.c)
 *     ParseSuperName @ 0x1C00195D0 (ParseSuperName.c)
 *     AMLIGetNameSpaceObjectNoLock @ 0x1C001A770 (AMLIGetNameSpaceObjectNoLock.c)
 *     GetNameSpaceObject @ 0x1C001AD04 (GetNameSpaceObject.c)
 * Callees:
 *     PrintDebugMessage @ 0x1C0020B04 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0020C1C (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0020D64 (LogError.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 */

__int64 __fastcall GetNameSpaceObjectNoLock(const char *Src, __int64 a2, __int64 *a3, int a4)
{
  __int64 v6; // rbp
  int v7; // r14d
  const char *i; // rsi
  unsigned __int64 v9; // rax
  char v10; // r13
  _QWORD *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdi
  _QWORD *v14; // rax
  unsigned int v15; // edi
  int v17; // [rsp+60h] [rbp+8h] BYREF

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
    v15 = -1073741772;
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
    v15 = -1073741772;
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
    v17 = 1600085855;
    v13 = (unsigned int)v12;
    memmove(&v17, i, (unsigned int)v12);
    v14 = (_QWORD *)*v11;
    if ( v11 != (_QWORD *)*v11 )
    {
      while ( v14[2] )
      {
        if ( *((_DWORD *)v14 + 10) == v17 )
        {
          i += v13;
          v6 = (__int64)v14;
          if ( *i == 46 )
          {
            ++i;
            goto LABEL_13;
          }
          if ( *i )
            goto LABEL_13;
          *a3 = (__int64)v14;
          goto LABEL_30;
        }
        v14 = (_QWORD *)*v14;
        if ( v11 == v14 )
          goto LABEL_22;
      }
    }
    goto LABEL_22;
  }
  v15 = -1073741773;
  LogError(3221225523LL);
  AcpiDiagTraceAmlError(0LL, 3221225523LL);
  PrintDebugMessage(57, v7, 0, 0, 0LL);
LABEL_25:
  if ( a4 < 0 && v15 == -1073741772 )
  {
    LogError(3221225524LL);
    AcpiDiagTraceAmlError(0LL, 3221225524LL);
    PrintDebugMessage(58, v7, 0, 0, 0LL);
  }
  *a3 = 0LL;
  return v15;
}
