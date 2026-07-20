/*
 * XREFs of SmpProcessModuleImports @ 0x140009040
 * Callers:
 *     <none>
 * Callees:
 *     SmpSaveRegistryValue_U @ 0x140009410 (SmpSaveRegistryValue_U.c)
 *     __security_check_cookie @ 0x14000D270 (__security_check_cookie.c)
 */

int __fastcall SmpProcessModuleImports(__int16 **a1, const char *a2)
{
  __int16 **v3; // r12
  int result; // eax
  PWSTR Buffer; // r11
  USHORT Length; // di
  _DWORD *v7; // r14
  __int16 *v8; // r15
  unsigned __int64 v9; // rax
  unsigned int v10; // r10d
  PWSTR v11; // rax
  unsigned __int16 v12; // r10
  unsigned int v13; // ebx
  PWSTR v14; // r8
  __int64 v15; // r9
  unsigned __int16 v16; // dx
  unsigned __int16 v17; // cx
  int v18; // r9d
  int v19; // edx
  int v20; // ecx
  __int64 v21; // r8
  unsigned int v22; // eax
  unsigned int *v23; // r13
  unsigned int v24; // edi
  unsigned __int16 v25; // ax
  int v26; // esi
  const WCHAR *v27; // r11
  char *v28; // r15
  unsigned __int16 v29; // ax
  int v30; // edi
  SIZE_T v31; // r10
  int v32; // ebx
  __int64 v33; // r12
  LONG v34; // eax
  PWSTR v35; // rcx
  struct _UNICODE_STRING *v36; // rdx
  struct _UNICODE_STRING v37; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING v38; // [rsp+40h] [rbp-C0h] BYREF
  __int16 **v39; // [rsp+50h] [rbp-B0h]
  SIZE_T v40; // [rsp+58h] [rbp-A8h]
  const WCHAR *v41; // [rsp+60h] [rbp-A0h]
  _STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  char v43; // [rsp+80h] [rbp-80h] BYREF

  v39 = a1;
  v3 = a1;
  result = _stricmp(a2, "ntdll.dll");
  if ( !result )
    return result;
  result = _stricmp(a2, "ntdll32.dll");
  if ( !result )
    return result;
  RtlInitAnsiString(&DestinationString, a2);
  *(_QWORD *)&v37.Length = 34209792LL;
  v37.Buffer = (PWSTR)&v43;
  result = RtlAnsiStringToUnicodeString(&v37, &DestinationString, 0);
  if ( result < 0 )
    return result;
  Buffer = v37.Buffer;
  Length = v37.Length;
  v7 = *(_DWORD **)(*(_QWORD *)&KeGetPcr()->MajorVersion + 104LL);
  v8 = *v3;
  v38 = (struct _UNICODE_STRING)0LL;
  if ( v37.Length < 8u )
    goto LABEL_40;
  v9 = *(_QWORD *)v37.Buffer & 0xFFFFFFDFFFDFFFDFuLL;
  if ( v9 != 0x2D004900500041LL && v9 != 0x2D005400580045LL )
    goto LABEL_40;
  v10 = v37.Length;
  v11 = (PWSTR)((char *)v37.Buffer + v37.Length);
  if ( v37.Length > 1u )
  {
    do
    {
      v10 -= 2;
      --v11;
    }
    while ( *v11 != 45 && v10 > 1 );
  }
  v12 = (unsigned __int16)v10 >> 1;
  if ( !v12 )
    goto LABEL_40;
  v13 = 0;
  v14 = v37.Buffer;
  v15 = v12;
  do
  {
    v16 = *v14++;
    v17 = v16 + 32;
    if ( (unsigned __int16)(v16 - 65) > 0x19u )
      v17 = v16;
    v13 = v17 + v7[6] * v13;
    --v15;
  }
  while ( v15 );
  v18 = 0;
  v19 = v7[3] - 1;
  if ( v19 < 0 )
    goto LABEL_40;
  while ( 1 )
  {
    v20 = (v19 + v18) >> 1;
    v21 = (unsigned int)v7[5] + 8LL * v20;
    v22 = *(_DWORD *)((char *)v7 + v21);
    if ( v13 >= v22 )
      break;
    v19 = v20 - 1;
LABEL_20:
    if ( v18 > v19 )
      goto LABEL_40;
  }
  if ( v13 > v22 )
  {
    v18 = v20 + 1;
    goto LABEL_20;
  }
  v23 = (_DWORD *)((char *)&v7[6 * *(_DWORD *)((char *)v7 + v21 + 4)] + (unsigned int)v7[4]);
  if ( !v23 )
  {
LABEL_40:
    v35 = (PWSTR)((char *)Buffer + Length - 2);
    if ( v35 < Buffer )
      goto LABEL_43;
    while ( *v35 != 46 )
    {
      if ( --v35 < Buffer )
        goto LABEL_43;
    }
    if ( v35 < Buffer )
    {
LABEL_43:
      v36 = &v37;
    }
    else
    {
      v38.Buffer = Buffer;
      v36 = &v38;
      *(&v38.MaximumLength + 2) = 0;
      *(_DWORD *)&v38.MaximumLength = (unsigned __int16)(2 * (v35 - Buffer));
      v38.Length = 2 * (v35 - Buffer);
    }
    return SmpSaveRegistryValue_U(v3[1], v36, &v37, 1LL, 0LL);
  }
  if ( RtlCompareUnicodeStrings(v37.Buffer, v12, (PCWCH)((char *)v7 + v23[1]), v23[3] >> 1, 1u) )
    goto LABEL_39;
  if ( v8 )
  {
    v24 = v23[5];
    if ( v24 > 1 )
    {
      v25 = *v8;
      v26 = 1;
      v27 = (const WCHAR *)*((_QWORD *)v8 + 1);
      v28 = (char *)v7 + v23[4];
      v29 = v25 >> 1;
      v30 = v24 - 1;
      v41 = v27;
      if ( v30 < 1 )
        goto LABEL_37;
      v31 = v29;
      v40 = v29;
      while ( 1 )
      {
        v32 = (v30 + v26) >> 1;
        v33 = (__int64)&v7[5 * v32] + v23[4];
        v34 = RtlCompareUnicodeStrings(
                v27,
                v31,
                (PCWCH)((char *)v7 + *(unsigned int *)(v33 + 4)),
                *(_DWORD *)(v33 + 8) >> 1,
                1u);
        if ( v34 >= 0 )
        {
          if ( v34 <= 0 )
          {
            v28 = (char *)v33;
            v3 = v39;
            goto LABEL_37;
          }
          v26 = v32 + 1;
        }
        else
        {
          v30 = v32 - 1;
        }
        v31 = v40;
        v27 = v41;
        if ( v26 > v30 )
        {
          v3 = v39;
          goto LABEL_37;
        }
      }
    }
  }
  if ( !v23[5] )
  {
LABEL_39:
    Length = v37.Length;
    Buffer = v37.Buffer;
    goto LABEL_40;
  }
  v28 = (char *)v7 + v23[4];
LABEL_37:
  v38.Buffer = (PWSTR)((char *)v7 + *((unsigned int *)v28 + 3));
  v38.MaximumLength = *((_WORD *)v28 + 8);
  result = *((unsigned __int16 *)v28 + 8);
  v38.Length = result;
  if ( (_WORD)result )
  {
    v37 = v38;
    goto LABEL_39;
  }
  return result;
}
