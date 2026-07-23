/*
 * XREFs of RtlComputePrivatizedDllName_U @ 0x1800D59C0
 * Callers:
 *     sub_1800DE690 @ 0x1800DE690 (sub_1800DE690.c)
 * Callees:
 *     sub_18006D6B8 @ 0x18006D6B8 (sub_18006D6B8.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

NTSTATUS __cdecl RtlComputePrivatizedDllName_U(
        PUNICODE_STRING DllName,
        PUNICODE_STRING RealName,
        PUNICODE_STRING LocalName)
{
  PWCH Buffer; // r9
  USHORT Length; // r10
  WCHAR *v6; // rdx
  PWCH v7; // r8
  PWCH i; // rcx
  PWCH v9; // rax
  PWCH v10; // rdi
  int v11; // esi
  int v12; // r12d
  unsigned __int64 v13; // r14
  PWCH v14; // rdx
  PWCH j; // rcx
  __int64 v16; // rdx
  unsigned __int64 v18; // rbx
  WCHAR *v19; // rax
  WCHAR *v20; // rbp
  WCHAR *v21; // r15
  unsigned __int64 v22; // rbx
  unsigned int v23; // ecx
  USHORT v24; // bp
  WCHAR *v25; // rax
  WCHAR *v26; // r15
  unsigned __int64 v27; // rbx
  WCHAR *v28; // rdi
  _WORD *v29; // rdi
  char *v30; // rdi
  unsigned __int64 v31; // rbx
  PWCH Src; // [rsp+20h] [rbp-58h]
  PWCH v33; // [rsp+28h] [rbp-50h]
  WCHAR *v34; // [rsp+30h] [rbp-48h]
  unsigned int v35; // [rsp+80h] [rbp+8h]
  unsigned int Size; // [rsp+98h] [rbp+20h]

  Buffer = DllName->Buffer;
  Length = DllName->Length;
  v34 = 0LL;
  v6 = 0LL;
  Src = Buffer;
  v7 = Buffer;
  v33 = 0LL;
  if ( DllName->Length )
  {
    for ( i = &Buffer[((unsigned __int64)Length >> 1) - 1]; i > Buffer; --i )
    {
      if ( *i == 46 )
      {
        v9 = i;
        if ( v6 )
          v9 = v6;
        v6 = v9;
        v33 = v9;
      }
      else if ( *i == 92 || *i == 47 )
      {
        v7 = i + 1;
        Src = i + 1;
        break;
      }
    }
  }
  v10 = (PWCH)*((_QWORD *)&xmmword_180164380 + 1);
  Size = 0;
  v11 = 0;
  v12 = v6 == 0LL ? 8 : 0;
  v35 = Length + 2 * (1 - (v7 - Buffer));
  if ( *((_QWORD *)&xmmword_180164380 + 1) )
  {
    LODWORD(v13) = 0;
    Size = 92;
    if ( (_WORD)xmmword_180164380 )
    {
      do
      {
        if ( *(_WORD *)(*((_QWORD *)&xmmword_180164380 + 1) + 2 * ((unsigned __int64)(unsigned int)v13 >> 1)) == 59 )
          break;
        LODWORD(v13) = v13 + 2;
      }
      while ( (unsigned int)v13 < (unsigned __int16)xmmword_180164380 );
    }
  }
  else
  {
    v13 = NtCurrentPeb()->ProcessParameters->ImagePathName.Length;
    v10 = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
    if ( (NtCurrentPeb()->ProcessParameters->Flags & 1) == 0 )
      v10 = (PWCH)((char *)v10 + (unsigned __int64)NtCurrentPeb()->ProcessParameters);
    v14 = v10;
    for ( j = &v10[(v13 >> 1) - 1]; j > v10; --j )
    {
      if ( *j == 92 || *j == 47 )
      {
        v14 = j + 1;
        break;
      }
    }
    v16 = v14 - v10;
    if ( (unsigned __int64)(2 * v16) > 0xFFFFFFFF )
      return -1073741562;
    if ( (unsigned int)(2 * v16) > 0xFFFE )
      return -1073741562;
    v18 = (unsigned __int16)(2 * v16);
    if ( Length > 0xFFFCu || v35 + v12 + (_DWORD)v18 > 0xFFFE )
      return -1073741562;
    v11 = (unsigned __int16)(v35 + v12 + v18);
    v19 = (WCHAR *)sub_18006D6B8((unsigned __int16)(v35 + v12 + v18));
    v34 = v19;
    v20 = v19;
    if ( !v19 )
      return -1073741801;
    memmove(v19, v10, (unsigned int)v18);
    v21 = &v20[v18 >> 1];
    memmove(v21, Src, v35 - 2LL);
    v22 = ((unsigned __int64)v35 - 2) >> 1;
    if ( v33 )
    {
      v21[v22] = 0;
    }
    else
    {
      *(_QWORD *)&v21[v22] = 0x4C004C0044002ELL;
      v21[v22 + 4] = 0;
    }
  }
  v23 = Size + v12 + v13 + v35 + 14;
  if ( v23 > 0xFFFE )
    return -1073741562;
  v24 = Size + v12 + v13 + v35 + 14;
  v25 = (WCHAR *)sub_18006D6B8((unsigned __int16)v23);
  v26 = v25;
  if ( !v25 )
    return -1073741801;
  memmove(v25, v10, (unsigned int)v13);
  v27 = (unsigned __int64)(unsigned int)v13 >> 1;
  v28 = &v26[v27];
  if ( Size )
  {
    memmove(&v26[v27], L"\\microsoft.system.package.metadata\\Application", Size);
    v28 += (unsigned __int64)Size >> 1;
  }
  *(_QWORD *)v28 = 0x63006F004C002ELL;
  *((_DWORD *)v28 + 2) = 7077985;
  v29 = v28 + 6;
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
    *(_QWORD *)&v30[2 * v31] = 0x4C004C0044002ELL;
    *(_WORD *)&v30[2 * v31 + 8] = 0;
  }
  RealName->Buffer = v34;
  RealName->MaximumLength = v11;
  RealName->Length = v11;
  if ( v11 )
    RealName->Length = v11 - 2;
  LocalName->MaximumLength = v24;
  LocalName->Length = v24 - 2;
  LocalName->Buffer = v26;
  return 0;
}
