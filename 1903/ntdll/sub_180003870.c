/*
 * XREFs of sub_180003870 @ 0x180003870
 * Callers:
 *     sub_180003474 @ 0x180003474 (sub_180003474.c)
 * Callees:
 *     RtlExpandEnvironmentStrings_U @ 0x1800028C0 (RtlExpandEnvironmentStrings_U.c)
 *     sub_180003C3C @ 0x180003C3C (sub_180003C3C.c)
 *     sub_180003CF8 @ 0x180003CF8 (sub_180003CF8.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

NTSTATUS __fastcall sub_180003870(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        _DWORD *a4,
        __int64 a5,
        PVOID Environment,
        char a7)
{
  int v7; // ebx
  __int64 v10; // r9
  _DWORD *v11; // r12
  __int64 v12; // r11
  unsigned int v13; // r13d
  unsigned int v14; // edx
  unsigned int v15; // edi
  char *v16; // r15
  PWCH Buffer; // rsi
  int v18; // ecx
  __int64 v19; // rdx
  NTSTATUS result; // eax
  int v21; // eax
  unsigned int v22; // eax
  bool v23; // zf
  unsigned int v24; // ecx
  unsigned int v25; // edx
  int v26; // edi
  ULONG v27; // r9d
  __int64 v28; // rax
  unsigned __int64 v29; // r8
  unsigned int v30; // ecx
  PWCH v31; // rax
  unsigned __int64 v32; // r13
  int v33; // ecx
  WCHAR *i; // rdi
  __int64 v36; // rdx
  unsigned int v37; // r12d
  int v38; // eax
  _WORD *v39; // rcx
  _UNICODE_STRING Destination; // [rsp+40h] [rbp-28h] BYREF
  _UNICODE_STRING Source; // [rsp+50h] [rbp-18h] BYREF
  ULONG ReturnedLength; // [rsp+B8h] [rbp+50h] BYREF
  unsigned __int64 v46; // [rsp+C0h] [rbp+58h]
  _DWORD *v47; // [rsp+C8h] [rbp+60h]

  v47 = a4;
  v7 = 0;
  v46 = a3;
  v10 = (unsigned int)*a4;
  v11 = (_DWORD *)a3;
  v12 = a1;
  *a4 = 0;
  v13 = *(_DWORD *)(a3 + 4);
  v14 = *(unsigned __int8 *)(a2 + 32);
  if ( v13 )
  {
    v22 = *(_DWORD *)(a3 + 8);
    if ( v22 != -1 )
    {
      v15 = *(_DWORD *)(a3 + 12);
      if ( v15 || v13 != v14 )
      {
        if ( (*(_BYTE *)(a2 + 8) & 0x20) != 0 )
        {
          v16 = *(char **)(a2 + 16);
LABEL_22:
          Buffer = (PWCH)((char *)v11 + v22);
          goto LABEL_4;
        }
        v24 = *(_DWORD *)(a3 + 16);
        v25 = v22 + v15;
        if ( !v15 )
          v25 = v24 + 20;
        v26 = v24 + 2;
        v16 = (char *)((v25 + a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        if ( v24 + 2 >= 2 )
        {
          ReturnedLength = a3 + v10;
          if ( (int)a3 + (int)v10 - (int)v16 < v26 )
          {
            result = -1073741789;
            *a4 = v26 + (_DWORD)v16 - a3;
            return result;
          }
          memmove(v16, (const void *)(a3 + 20), v24);
          v27 = ReturnedLength;
          v12 = a1;
          *(_WORD *)&v16[v11[4]] = 0;
          v13 = v11[1];
          v28 = v26;
          v15 = v11[3];
          v29 = (unsigned __int64)&v16[v28 + 7];
          v22 = v11[2];
          a3 = v29 & 0xFFFFFFFFFFFFFFF8uLL;
          v46 = a3;
          v10 = v27 - (unsigned int)a3;
          goto LABEL_22;
        }
        return -1073741764;
      }
    }
  }
  if ( !v14 )
  {
    v23 = (*(_BYTE *)(a2 + 8) & 4) == 0;
    goto LABEL_26;
  }
  v15 = *(_DWORD *)(a2 + 48);
  v13 = v14;
  v16 = *(char **)(a2 + 16);
  Buffer = *(PWCH *)(a2 + 40);
  if ( !v15 )
  {
    v39 = *(_WORD **)(a2 + 40);
    if ( v14 - 1 <= 1 )
    {
      if ( !Buffer )
        return -1073741764;
      while ( *v39++ )
        ;
      v15 = (_DWORD)v39 - (_DWORD)Buffer;
    }
    else if ( v14 == 7 )
    {
      if ( !Buffer )
        return -1073741764;
      if ( *Buffer )
      {
        do
        {
          while ( *v39++ )
            ;
        }
        while ( *v39 );
      }
      v15 = (_DWORD)v39 - (_DWORD)Buffer + 2;
    }
  }
LABEL_4:
  v18 = *(_DWORD *)(a2 + 8);
  if ( (v18 & 0x20) != 0 )
  {
    if ( (v18 & 0x100) != 0 )
    {
      if ( *(unsigned __int8 *)(a2 + 35) != v13 )
        return -1073741788;
    }
    else if ( (v18 & 0x80u) != 0 && (v13 - 1 <= 1 || v13 == 7) )
    {
      v23 = (v18 & 4) == 0;
LABEL_26:
      if ( v23 )
        return 0;
      else
        return -1073741772;
    }
  }
  if ( (v18 & 0x10) == 0 )
  {
    if ( v13 == 7 )
    {
      v32 = (unsigned __int64)Buffer + v15 - 4;
      v33 = 0;
      for ( i = Buffer; (unsigned __int64)i < v32; Buffer = i )
      {
        while ( *i++ )
          ;
        v36 = *(unsigned int *)(a2 + 8);
        v37 = (_DWORD)i - (_DWORD)Buffer;
        if ( (v36 & 0x20) != 0 )
        {
          if ( a7 )
          {
            v33 = sub_180003CF8(v12, v36, a3, v10);
            if ( v33 < 0 )
              return v33;
          }
          v38 = sub_180003C3C(1LL, Buffer, v37, *(_QWORD *)(a2 + 24));
          *(_QWORD *)(a2 + 24) += 16LL;
        }
        else
        {
          v38 = (*(__int64 (__fastcall **)(char *, __int64, PWCH, _QWORD, __int64, _QWORD))a2)(
                  v16,
                  1LL,
                  Buffer,
                  v37,
                  a5,
                  *(_QWORD *)(a2 + 24));
        }
        v33 = 0;
        if ( v38 != -1073741789 )
          v33 = v38;
        if ( v33 < 0 )
          break;
        v12 = a1;
      }
      return v33;
    }
    if ( v13 == 2 && v15 - 2 <= 0xFFFA )
    {
      v30 = v15 - 2;
      v31 = Buffer;
      if ( v15 != 2 )
      {
        while ( *v31 != 37 )
        {
          ++v31;
          v30 -= 2;
          if ( !v30 )
            goto LABEL_10;
        }
        Source.Buffer = Buffer;
        Source.MaximumLength = v15;
        Source.Length = v15 - 2;
        Destination.Buffer = (PWCH)a3;
        Destination.Length = 0;
        if ( (int)v10 <= 0 )
        {
          Destination.MaximumLength = 0;
        }
        else if ( (unsigned __int64)(int)v10 > 0xFFFE )
        {
          Destination.MaximumLength = -2;
          *(_WORD *)(a3 + 65532) = 0;
        }
        else
        {
          Destination.MaximumLength = v10;
          *(_WORD *)(a3 + 2 * ((unsigned __int64)(int)v10 >> 1) - 2) = 0;
        }
        result = RtlExpandEnvironmentStrings_U(Environment, &Source, &Destination, &ReturnedLength);
        v13 = 1;
        if ( result < 0 )
        {
          if ( result == -1073741789 )
            *v47 = ReturnedLength + v46 - (_DWORD)v11;
          if ( result != -2147483643
            && (result != -1073741789 || Destination.MaximumLength != 0xFFFE && ReturnedLength <= 0xFFFC) )
          {
            return result;
          }
        }
        else
        {
          Buffer = Destination.Buffer;
          v15 = Destination.Length + 2;
        }
      }
    }
  }
LABEL_10:
  v19 = *(unsigned int *)(a2 + 8);
  if ( (v19 & 0x20) != 0 )
  {
    if ( a7 )
    {
      result = sub_180003CF8(a1, v19, a3, v10);
      if ( result < 0 )
        return result;
    }
    v21 = sub_180003C3C(v13, Buffer, v15, *(_QWORD *)(a2 + 24));
  }
  else
  {
    v21 = (*(__int64 (__fastcall **)(char *, _QWORD, PWCH, _QWORD, __int64, _QWORD))a2)(
            v16,
            v13,
            Buffer,
            v15,
            a5,
            *(_QWORD *)(a2 + 24));
  }
  if ( v21 != -1073741789 )
    return v21;
  return v7;
}
