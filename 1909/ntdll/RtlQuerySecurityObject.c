/*
 * XREFs of RtlQuerySecurityObject @ 0x1800D7090
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1800A3A80 (memmove.c)
 *     RtlpFilterSacl @ 0x1800E63C4 (RtlpFilterSacl.c)
 */

NTSTATUS __cdecl RtlQuerySecurityObject(
        PSECURITY_DESCRIPTOR ObjectDescriptor,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR ResultantDescriptor,
        ULONG DescriptorLength,
        PULONG ReturnLength)
{
  int v6; // ecx
  char v8; // si
  unsigned int v9; // r13d
  unsigned int v10; // r8d
  unsigned __int16 *v11; // rbp
  char *v12; // rbx
  unsigned __int8 *v13; // r15
  SECURITY_INFORMATION v14; // r12d
  char *v15; // rsi
  unsigned int v16; // ecx
  char *v17; // rsi
  __int16 v18; // dx
  __int16 v19; // ax
  __int16 v20; // ax
  int v21; // eax
  __int16 v22; // ax
  __int64 v23; // rbx
  int v24; // eax
  unsigned int v26; // [rsp+20h] [rbp-68h]
  SECURITY_INFORMATION v27; // [rsp+24h] [rbp-64h]
  SECURITY_INFORMATION v28; // [rsp+28h] [rbp-60h]
  void *Src; // [rsp+30h] [rbp-58h]
  unsigned int v30; // [rsp+90h] [rbp+8h] BYREF
  int v31; // [rsp+98h] [rbp+10h]
  size_t Size; // [rsp+A0h] [rbp+18h]
  ULONG v33; // [rsp+A8h] [rbp+20h]

  v33 = DescriptorLength;
  v30 = 0;
  v6 = 0;
  v26 = 0;
  LODWORD(Size) = 0;
  v28 = SecurityInformation & 2;
  v8 = SecurityInformation;
  Src = 0LL;
  v9 = 0;
  v10 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( (SecurityInformation & 2) != 0 )
  {
    if ( *((__int16 *)ObjectDescriptor + 1) >= 0 )
    {
      v13 = (unsigned __int8 *)*((_QWORD *)ObjectDescriptor + 2);
    }
    else
    {
      if ( !*((_DWORD *)ObjectDescriptor + 2) )
        goto LABEL_8;
      v13 = (unsigned __int8 *)ObjectDescriptor + *((unsigned int *)ObjectDescriptor + 2);
    }
    if ( v13 )
      v26 = (4 * v13[1] + 11) & 0xFFFFFFFC;
  }
LABEL_8:
  v27 = SecurityInformation & 4;
  if ( (SecurityInformation & 4) != 0 && (*((_BYTE *)ObjectDescriptor + 2) & 4) != 0 )
  {
    if ( *((__int16 *)ObjectDescriptor + 1) >= 0 )
    {
      v11 = (unsigned __int16 *)*((_QWORD *)ObjectDescriptor + 4);
    }
    else
    {
      if ( !*((_DWORD *)ObjectDescriptor + 4) )
        goto LABEL_16;
      v11 = (unsigned __int16 *)((char *)ObjectDescriptor + *((unsigned int *)ObjectDescriptor + 4));
    }
    if ( v11 )
      v9 = (v11[1] + 3) & 0xFFFFFFFC;
  }
LABEL_16:
  v14 = SecurityInformation & 0x1F8;
  if ( (SecurityInformation & 0x1F8) != 0 && (*((_BYTE *)ObjectDescriptor + 2) & 0x10) != 0 )
  {
    if ( *((__int16 *)ObjectDescriptor + 1) >= 0 )
    {
      v12 = (char *)*((_QWORD *)ObjectDescriptor + 3);
    }
    else
    {
      if ( !*((_DWORD *)ObjectDescriptor + 3) )
        goto LABEL_24;
      v12 = (char *)ObjectDescriptor + *((unsigned int *)ObjectDescriptor + 3);
    }
    if ( v12 )
    {
      RtlpFilterSacl(v12, 0LL, &v30, SecurityInformation & 0x1F8);
      v10 = v30;
      v6 = Size;
      DescriptorLength = v33;
    }
  }
LABEL_24:
  v31 = v8 & 1;
  if ( (v8 & 1) != 0 )
  {
    if ( *((__int16 *)ObjectDescriptor + 1) >= 0 )
    {
      v15 = (char *)*((_QWORD *)ObjectDescriptor + 1);
    }
    else
    {
      if ( !*((_DWORD *)ObjectDescriptor + 1) )
      {
        Src = 0LL;
        goto LABEL_32;
      }
      v15 = (char *)ObjectDescriptor + *((unsigned int *)ObjectDescriptor + 1);
    }
    Src = v15;
    if ( v15 )
    {
      v6 = (4 * (unsigned __int8)v15[1] + 11) & 0xFFFFFFFC;
      LODWORD(Size) = v6;
    }
  }
LABEL_32:
  v16 = v9 + v6 + v10 + v26 + 20;
  *ReturnLength = v16;
  if ( v16 > DescriptorLength || !ResultantDescriptor )
    return -1073741789;
  v17 = (char *)ResultantDescriptor + 20;
  *(_QWORD *)ResultantDescriptor = 0LL;
  *((_QWORD *)ResultantDescriptor + 1) = 0LL;
  *((_DWORD *)ResultantDescriptor + 4) = 0;
  *(_BYTE *)ResultantDescriptor = 1;
  v18 = *((_WORD *)ResultantDescriptor + 1) | 0x8000;
  *((_WORD *)ResultantDescriptor + 1) = v18;
  if ( v14 )
  {
    v19 = v18;
    if ( v10 )
    {
      RtlpFilterSacl(v12, (char *)ResultantDescriptor + 20, &v30, v14);
      *((_DWORD *)ResultantDescriptor + 3) = 20;
      v17 += v30;
      v19 = *((_WORD *)ResultantDescriptor + 1);
    }
    v18 = v19 | *((_WORD *)ObjectDescriptor + 1) & 0x2830;
    *((_WORD *)ResultantDescriptor + 1) = v18;
  }
  if ( v27 )
  {
    v20 = v18;
    if ( v9 )
    {
      memmove(v17, v11, v9);
      v21 = (int)v17;
      v17 += v9;
      *((_DWORD *)ResultantDescriptor + 4) = v21 - (_DWORD)ResultantDescriptor;
      v20 = *((_WORD *)ResultantDescriptor + 1);
    }
    v18 = v20 | *((_WORD *)ObjectDescriptor + 1) & 0x140C;
    *((_WORD *)ResultantDescriptor + 1) = v18;
  }
  if ( v31 )
  {
    v22 = v18;
    if ( (_DWORD)Size )
    {
      v23 = (unsigned int)Size;
      memmove(v17, Src, (unsigned int)Size);
      v24 = (int)v17;
      v17 += v23;
      *((_DWORD *)ResultantDescriptor + 1) = v24 - (_DWORD)ResultantDescriptor;
      v22 = *((_WORD *)ResultantDescriptor + 1);
    }
    v18 = v22 | *((_WORD *)ObjectDescriptor + 1) & 1;
    *((_WORD *)ResultantDescriptor + 1) = v18;
  }
  if ( v28 )
  {
    if ( v26 )
    {
      memmove(v17, v13, v26);
      v18 = *((_WORD *)ResultantDescriptor + 1);
      *((_DWORD *)ResultantDescriptor + 2) = (_DWORD)v17 - (_DWORD)ResultantDescriptor;
    }
    *((_WORD *)ResultantDescriptor + 1) = v18 | *((_WORD *)ObjectDescriptor + 1) & 2;
  }
  return 0;
}
