/*
 * XREFs of NtDrawText @ 0x1403198F0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1401D1440 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140612160 (SeSinglePrivilegeCheck.c)
 *     BgkDrawText @ 0x1409532CC (BgkDrawText.c)
 */

__int64 __fastcall NtDrawText(int *a1)
{
  int v2; // edi
  void *v3; // rsi
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v6; // rax
  int v7; // ecx
  void *v8; // r14
  unsigned __int64 v9; // rax
  PVOID PoolWithTag; // rax
  unsigned __int16 v11; // cx
  int v12; // [rsp+20h] [rbp-28h] BYREF
  void *v13; // [rsp+28h] [rbp-20h]
  int v14; // [rsp+58h] [rbp+10h]

  v2 = 0;
  v3 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
    return 3221225569LL;
  if ( !a1 )
    return 3221225485LL;
  if ( !PreviousMode )
    goto LABEL_17;
  v6 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
    v6 = (__int64)a1;
  v7 = *(_DWORD *)v6;
  v14 = *(_DWORD *)v6;
  v12 = *(_DWORD *)v6;
  v8 = *(void **)(v6 + 8);
  v13 = v8;
  if ( !v8 || !HIWORD(v7) )
    goto LABEL_24;
  v9 = (unsigned __int64)v8 + HIWORD(v14);
  if ( v9 > 0x7FFFFFFF0000LL || v9 < (unsigned __int64)v8 )
    MEMORY[0x7FFFFFFF0000] = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, HIWORD(v14), 0x67727453u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, v8, HIWORD(v14));
    v13 = v3;
    a1 = &v12;
LABEL_17:
    v2 = -1073741811;
    v11 = *((_WORD *)a1 + 1) >> 1;
    if ( v11 )
    {
      while ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * v11 - 2) )
      {
        if ( !--v11 )
          goto LABEL_22;
      }
      v2 = 0;
    }
LABEL_22:
    if ( v2 >= 0 )
      v2 = BgkDrawText(*((_QWORD *)a1 + 1));
    goto LABEL_24;
  }
  v2 = -1073741801;
LABEL_24:
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return (unsigned int)v2;
}
