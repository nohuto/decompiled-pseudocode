/*
 * XREFs of RtlComputePrivatizedDllName_U @ 0x180002B20
 * Callers:
 *     sxsisol_RespectDotLocal @ 0x180002A5C (sxsisol_RespectDotLocal.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x18000EB60 (NtdllpAllocateStringRoutine.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

__int64 __fastcall RtlComputePrivatizedDllName_U(__int16 *a1, __int64 a2, __int64 a3)
{
  char *v3; // r9
  unsigned __int16 v4; // r10
  char *v6; // rdx
  char *v7; // r8
  char *i; // rcx
  char *v9; // rax
  wchar_t *Buffer; // rdi
  int v11; // esi
  int v12; // r12d
  unsigned __int64 Length; // r14
  wchar_t *v14; // rdx
  wchar_t *j; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // rbx
  char *StringRoutine; // rax
  char *v19; // rbp
  char *v20; // r15
  unsigned __int64 v21; // rbx
  unsigned int v22; // ecx
  __int16 v23; // bp
  char *v24; // rax
  char *v25; // r15
  unsigned __int64 v26; // rbx
  char *v27; // rdi
  _WORD *v28; // rdi
  char *v29; // rdi
  unsigned __int64 v30; // rbx
  void *Src; // [rsp+20h] [rbp-58h]
  char *v33; // [rsp+28h] [rbp-50h]
  void *v34; // [rsp+30h] [rbp-48h]
  unsigned int v35; // [rsp+80h] [rbp+8h]
  unsigned int Size; // [rsp+98h] [rbp+20h]

  v3 = (char *)*((_QWORD *)a1 + 1);
  v4 = *a1;
  v34 = 0LL;
  v6 = 0LL;
  Src = v3;
  v7 = v3;
  v33 = 0LL;
  if ( *a1 )
  {
    for ( i = &v3[2 * ((unsigned __int64)v4 >> 1) - 2]; i > v3; i -= 2 )
    {
      if ( *(_WORD *)i == 46 )
      {
        v9 = i;
        if ( v6 )
          v9 = v6;
        v6 = v9;
        v33 = v9;
      }
      else if ( *(_WORD *)i == 92 || *(_WORD *)i == 47 )
      {
        v7 = i + 2;
        Src = i + 2;
        break;
      }
    }
  }
  Buffer = LdrpOriginalAppPackagesPath.Buffer;
  Size = 0;
  v11 = 0;
  v12 = v6 == 0LL ? 8 : 0;
  v35 = v4 + 2 * (1 - ((v7 - v3) >> 1));
  if ( LdrpOriginalAppPackagesPath.Buffer )
  {
    LODWORD(Length) = 0;
    Size = 92;
    if ( LdrpOriginalAppPackagesPath.Length )
    {
      do
      {
        if ( LdrpOriginalAppPackagesPath.Buffer[(unsigned __int64)(unsigned int)Length >> 1] == 59 )
          break;
        LODWORD(Length) = Length + 2;
      }
      while ( (unsigned int)Length < LdrpOriginalAppPackagesPath.Length );
    }
  }
  else
  {
    Length = NtCurrentPeb()->ProcessParameters->ImagePathName.Length;
    Buffer = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
    if ( (NtCurrentPeb()->ProcessParameters->Flags & 1) == 0 )
      Buffer = (wchar_t *)((char *)Buffer + (unsigned __int64)NtCurrentPeb()->ProcessParameters);
    v14 = Buffer;
    for ( j = &Buffer[(Length >> 1) - 1]; j > Buffer; --j )
    {
      if ( *j == 92 || *j == 47 )
      {
        v14 = j + 1;
        break;
      }
    }
    v16 = v14 - Buffer;
    if ( (unsigned __int64)(2 * v16) > 0xFFFFFFFF )
      return 3221225734LL;
    if ( (unsigned int)(2 * v16) > 0xFFFE )
      return 3221225734LL;
    v17 = (unsigned __int16)(2 * v16);
    if ( v4 > 0xFFFCu || v35 + v12 + (_DWORD)v17 > 0xFFFE )
      return 3221225734LL;
    v11 = (unsigned __int16)(v35 + v12 + v17);
    StringRoutine = (char *)NtdllpAllocateStringRoutine((unsigned __int16)(v35 + v12 + v17));
    v34 = StringRoutine;
    v19 = StringRoutine;
    if ( !StringRoutine )
      return 3221225495LL;
    memmove(StringRoutine, Buffer, (unsigned int)v17);
    v20 = &v19[2 * (v17 >> 1)];
    memmove(v20, Src, v35 - 2LL);
    v21 = ((unsigned __int64)v35 - 2) >> 1;
    if ( v33 )
    {
      *(_WORD *)&v20[2 * v21] = 0;
    }
    else
    {
      *(_QWORD *)&v20[2 * v21] = *(_QWORD *)L".DLL";
      *(_WORD *)&v20[2 * v21 + 8] = aDll[4];
    }
  }
  v22 = Size + v12 + Length + v35 + 14;
  if ( v22 > 0xFFFE )
    return 3221225734LL;
  v23 = Size + v12 + Length + v35 + 14;
  v24 = (char *)NtdllpAllocateStringRoutine((unsigned __int16)v22);
  v25 = v24;
  if ( !v24 )
    return 3221225495LL;
  memmove(v24, Buffer, (unsigned int)Length);
  v26 = (unsigned __int64)(unsigned int)Length >> 1;
  v27 = &v25[2 * v26];
  if ( Size )
  {
    memmove(&v25[2 * v26], L"\\microsoft.system.package.metadata\\Application", Size);
    v27 += 2 * ((unsigned __int64)Size >> 1);
  }
  *(_QWORD *)v27 = *(_QWORD *)L".Local";
  *((_DWORD *)v27 + 2) = *(_DWORD *)L"al";
  v28 = v27 + 12;
  *v28 = 92;
  v29 = (char *)(v28 + 1);
  memmove(v29, Src, v35 - 2LL);
  v30 = ((unsigned __int64)v35 - 2) >> 1;
  if ( v33 )
  {
    *(_WORD *)&v29[2 * v30] = 0;
  }
  else
  {
    *(_QWORD *)&v29[2 * v30] = *(_QWORD *)L".DLL";
    *(_WORD *)&v29[2 * v30 + 8] = aDll[4];
  }
  *(_QWORD *)(a2 + 8) = v34;
  *(_WORD *)(a2 + 2) = v11;
  *(_WORD *)a2 = v11;
  if ( v11 )
    *(_WORD *)a2 = v11 - 2;
  *(_WORD *)(a3 + 2) = v23;
  *(_WORD *)a3 = v23 - 2;
  *(_QWORD *)(a3 + 8) = v25;
  return 0LL;
}
