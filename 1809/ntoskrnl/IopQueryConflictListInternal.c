/*
 * XREFs of IopQueryConflictListInternal @ 0x1408432B4
 * Callers:
 *     IopQueryConflictList @ 0x14084321C (IopQueryConflictList.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopFreeReqList @ 0x14072F8E0 (IopFreeReqList.c)
 *     IopResourceRequirementsListToReqList @ 0x140730064 (IopResourceRequirementsListToReqList.c)
 *     IopCallArbiter @ 0x140730B20 (IopCallArbiter.c)
 *     PnpCmResourcesToIoResources @ 0x1407310C4 (PnpCmResourcesToIoResources.c)
 *     IopQueryConflictFillConflicts @ 0x140842CDC (IopQueryConflictFillConflicts.c)
 */

__int64 __fastcall IopQueryConflictListInternal(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, int a5)
{
  _QWORD *v6; // rdi
  __int64 v9; // rdx
  unsigned int ConflictFillConflicts; // ebx
  int v11; // ecx
  __int64 v12; // r8
  int v13; // eax
  int v14; // eax
  char *v15; // rsi
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r10
  __int64 v20; // rcx
  char v21; // al
  int v22; // eax
  unsigned int v24; // [rsp+30h] [rbp-79h] BYREF
  PVOID P; // [rsp+38h] [rbp-71h] BYREF
  _QWORD *v26; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v27[8]; // [rsp+50h] [rbp-59h] BYREF
  _QWORD v28[4]; // [rsp+90h] [rbp-19h] BYREF

  v6 = 0LL;
  v26 = 0LL;
  a4[2] = 0;
  a4[3] = 0;
  a4[4] = 32;
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
  if ( v15 )
  {
    memset(v27, 0, sizeof(v27));
    HIDWORD(v27[1]) = -1;
    v27[0] = a1;
    v27[3] = v15;
    v16 = IopResourceRequirementsListToReqList((__int64)v27, &v26);
    v6 = v26;
    ConflictFillConflicts = v16;
    if ( v16 >= 0 )
    {
      if ( v26
        && (v17 = v26[5], v26[2] = v26 + 5, *(_DWORD *)(v17 + 20) == 1)
        && (v18 = *(_QWORD *)(v17 + 24), *(_BYTE *)(v18 + 8)) )
      {
        v19 = *(_QWORD *)(v18 + 288);
        v20 = *(_QWORD *)(*(_QWORD *)(v18 + 32) + 64LL);
        v21 = *(_BYTE *)(v20 + 1);
        if ( v21 == (char)0x80 || v21 == -16 )
          v20 += 32LL;
        v24 = 0;
        P = 0LL;
        v28[2] = &v24;
        v28[1] = v20;
        v28[3] = &P;
        v28[0] = a1;
        v22 = IopCallArbiter(v19, 6LL, (__int64)v28);
        ConflictFillConflicts = v22;
        if ( v22 < 0 )
        {
          if ( v22 == -1073741172 )
            ConflictFillConflicts = IopQueryConflictFillConflicts(0LL, 0, 0LL, (__int64)a4, a5, 4);
        }
        else
        {
          ConflictFillConflicts = IopQueryConflictFillConflicts(a1, v24, P, (__int64)a4, a5, 0);
          if ( P )
            ExFreePoolWithTag(P, 0);
        }
      }
      else
      {
        ConflictFillConflicts = -1073741811;
      }
    }
    ExFreePoolWithTag(v15, 0);
  }
  else
  {
    ConflictFillConflicts = -1073741811;
  }
  if ( v6 )
    IopFreeReqList(v6);
  return ConflictFillConflicts;
}
