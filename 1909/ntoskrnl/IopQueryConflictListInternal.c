/*
 * XREFs of IopQueryConflictListInternal @ 0x14087D198
 * Callers:
 *     IopQueryConflictList @ 0x14087D100 (IopQueryConflictList.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopFreeReqList @ 0x140752F80 (IopFreeReqList.c)
 *     IopResourceRequirementsListToReqList @ 0x140753710 (IopResourceRequirementsListToReqList.c)
 *     IopCallArbiter @ 0x14075418C (IopCallArbiter.c)
 *     PnpCmResourcesToIoResources @ 0x140754768 (PnpCmResourcesToIoResources.c)
 *     IopQueryConflictFillConflicts @ 0x14087CBC0 (IopQueryConflictFillConflicts.c)
 */

__int64 __fastcall IopQueryConflictListInternal(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, int a5)
{
  _QWORD *v8; // rdi
  __int64 v9; // rdx
  unsigned int ConflictFillConflicts; // ebx
  int v11; // ecx
  __int64 v12; // r8
  int v13; // eax
  int v14; // eax
  char *v15; // rax
  char *v16; // rsi
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r10
  __int64 v21; // rcx
  char v22; // al
  int v23; // eax
  unsigned int v25; // [rsp+30h] [rbp-79h] BYREF
  PVOID P; // [rsp+38h] [rbp-71h] BYREF
  _QWORD *v27; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v28[8]; // [rsp+50h] [rbp-59h] BYREF
  _QWORD v29[4]; // [rsp+90h] [rbp-19h] BYREF

  memset(v28, 0, sizeof(v28));
  v8 = 0LL;
  a4[4] = 32;
  a4[2] = 0;
  a4[3] = 0;
  v27 = 0LL;
  if ( a1 )
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v9 = 0LL;
  if ( !v9 )
    return (unsigned int)-1073741810;
  if ( *(_BYTE *)(a2 + 20) == 1 )
    goto LABEL_12;
  if ( *(_BYTE *)(a2 + 20) != 2 )
  {
    if ( *(_BYTE *)(a2 + 20) == 3 )
    {
LABEL_12:
      if ( !*(_DWORD *)(a2 + 32) )
        return 0;
      goto LABEL_14;
    }
    if ( *(_BYTE *)(a2 + 20) != 4 )
    {
      if ( *(_BYTE *)(a2 + 20) != 7 )
        return (unsigned int)-1073741811;
      goto LABEL_12;
    }
  }
LABEL_14:
  v11 = *(_DWORD *)(v9 + 456);
  v12 = *(_QWORD *)(v9 + 440);
  if ( v11 == -1 )
  {
    if ( !v12 || (v11 = *(_DWORD *)(v12 + 4), v11 == -1) )
      v11 = 1;
  }
  v13 = v11;
  if ( v11 == 8 )
    v13 = 1;
  *(_DWORD *)(a2 + 4) = v13;
  v14 = *(_DWORD *)(v9 + 460);
  if ( v14 == -1 )
  {
    if ( !v12 || (v14 = *(_DWORD *)(v12 + 8), v14 == -1) )
      v14 = 0;
  }
  *(_DWORD *)(a2 + 8) = v14;
  v15 = PnpCmResourcesToIoResources(0xFFFFFFFFLL, (_DWORD *)a2, 0);
  v16 = v15;
  if ( v15 )
  {
    HIDWORD(v28[1]) = -1;
    v28[0] = a1;
    v28[3] = v15;
    v17 = IopResourceRequirementsListToReqList((__int64)v28, &v27);
    v8 = v27;
    ConflictFillConflicts = v17;
    if ( v17 >= 0 )
    {
      if ( v27
        && (v18 = v27[5], v27[2] = v27 + 5, *(_DWORD *)(v18 + 20) == 1)
        && (v19 = *(_QWORD *)(v18 + 24), *(_BYTE *)(v19 + 8)) )
      {
        v20 = *(_QWORD *)(v19 + 288);
        v21 = *(_QWORD *)(*(_QWORD *)(v19 + 32) + 64LL);
        v22 = *(_BYTE *)(v21 + 1);
        if ( v22 == (char)0x80 || v22 == -16 )
          v21 += 32LL;
        v25 = 0;
        P = 0LL;
        v29[2] = &v25;
        v29[1] = v21;
        v29[3] = &P;
        v29[0] = a1;
        v23 = IopCallArbiter(v20, 6u, (__int64)v29);
        ConflictFillConflicts = v23;
        if ( v23 < 0 )
        {
          if ( v23 == -1073741172 )
            ConflictFillConflicts = IopQueryConflictFillConflicts(0LL, 0, 0LL, (__int64)a4, a5, 4);
        }
        else
        {
          ConflictFillConflicts = IopQueryConflictFillConflicts(a1, v25, P, (__int64)a4, a5, 0);
          if ( P )
            ExFreePoolWithTag(P, 0);
        }
      }
      else
      {
        ConflictFillConflicts = -1073741811;
      }
    }
    ExFreePoolWithTag(v16, 0);
  }
  else
  {
    ConflictFillConflicts = -1073741811;
  }
  if ( v8 )
    IopFreeReqList(v8);
  return ConflictFillConflicts;
}
