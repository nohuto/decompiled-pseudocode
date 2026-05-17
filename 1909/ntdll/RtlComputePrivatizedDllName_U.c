/*
 * XREFs of RtlComputePrivatizedDllName_U @ 0x1800D5A80
 * Callers:
 *     sxsisol_RespectDotLocal @ 0x1800DE750 (sxsisol_RespectDotLocal.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x18006D908 (NtdllpAllocateStringRoutine.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
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
  unsigned __int64 v18; // rbx
  char *StringRoutine; // rax
  char *v20; // rbp
  char *v21; // r15
  unsigned __int64 v22; // rbx
  unsigned int v23; // ecx
  __int16 v24; // bp
  char *v25; // rax
  char *v26; // r15
  unsigned __int64 v27; // rbx
  char *v28; // rdi
  _WORD *v29; // rdi
  char *v30; // rdi
  unsigned __int64 v31; // rbx
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
  Buffer = (wchar_t *)*((_QWORD *)&LdrpOriginalAppPackagesPath + 1);
  Size = 0;
  v11 = 0;
  v12 = v6 == 0LL ? 8 : 0;
  v35 = v4 + 2 * (1 - ((v7 - v3) >> 1));
  if ( *((_QWORD *)&LdrpOriginalAppPackagesPath + 1) )
  {
    LODWORD(Length) = 0;
    Size = 92;
    if ( (_WORD)LdrpOriginalAppPackagesPath )
    {
      do
      {
        if ( *(_WORD *)(*((_QWORD *)&LdrpOriginalAppPackagesPath + 1) + 2
                                                                      * ((unsigned __int64)(unsigned int)Length >> 1)) == 59 )
          break;
        LODWORD(Length) = Length + 2;
      }
      while ( (unsigned int)Length < (unsigned __int16)LdrpOriginalAppPackagesPath );
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
    v18 = (unsigned __int16)(2 * v16);
    if ( v4 > 0xFFFCu || v35 + v12 + (_DWORD)v18 > 0xFFFE )
      return 3221225734LL;
    v11 = (unsigned __int16)(v35 + v12 + v18);
    StringRoutine = (char *)NtdllpAllocateStringRoutine((unsigned __int16)(v35 + v12 + v18));
    v34 = StringRoutine;
    v20 = StringRoutine;
    if ( !StringRoutine )
      return 3221225495LL;
    memmove(StringRoutine, Buffer, (unsigned int)v18);
    v21 = &v20[2 * (v18 >> 1)];
    memmove(v21, Src, v35 - 2LL);
    v22 = ((unsigned __int64)v35 - 2) >> 1;
    if ( v33 )
    {
      *(_WORD *)&v21[2 * v22] = 0;
    }
    else
    {
      *(_QWORD *)&v21[2 * v22] = *(_QWORD *)L".DLL";
      *(_WORD *)&v21[2 * v22 + 8] = aDll[4];
    }
  }
  v23 = Size + v12 + Length + v35 + 14;
  if ( v23 > 0xFFFE )
    return 3221225734LL;
  v24 = Size + v12 + Length + v35 + 14;
  v25 = (char *)NtdllpAllocateStringRoutine((unsigned __int16)v23);
  v26 = v25;
  if ( !v25 )
    return 3221225495LL;
  memmove(v25, Buffer, (unsigned int)Length);
  v27 = (unsigned __int64)(unsigned int)Length >> 1;
  v28 = &v26[2 * v27];
  if ( Size )
  {
    memmove(&v26[2 * v27], L"\\microsoft.system.package.metadata\\Application", Size);
    v28 += 2 * ((unsigned __int64)Size >> 1);
  }
  *(_QWORD *)v28 = *(_QWORD *)L".Local";
  *((_DWORD *)v28 + 2) = *(_DWORD *)L"al";
  v29 = v28 + 12;
  *v29 = 92;
  v30 = (char *)(v29 + 1);
  memmove(v30, Src, v35 - 2LL);
  v31 = ((unsigned __int64)v35 - 2) >> 1;
  if ( v33 )
  {
    *(_WORD *)&v30[2 * v31] = 0;
  }
  else
  {
    *(_QWORD *)&v30[2 * v31] = *(_QWORD *)L".DLL";
    *(_WORD *)&v30[2 * v31 + 8] = aDll[4];
  }
  *(_QWORD *)(a2 + 8) = v34;
  *(_WORD *)(a2 + 2) = v11;
  *(_WORD *)a2 = v11;
  if ( v11 )
    *(_WORD *)a2 = v11 - 2;
  *(_WORD *)(a3 + 2) = v24;
  *(_WORD *)a3 = v24 - 2;
  *(_QWORD *)(a3 + 8) = v26;
  return 0LL;
}
