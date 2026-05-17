/*
 * XREFs of RtlpCallQueryRegistryRoutine @ 0x180003870
 * Callers:
 *     RtlpQueryRegistryValues @ 0x180003474 (RtlpQueryRegistryValues.c)
 * Callees:
 *     RtlExpandEnvironmentStrings_U @ 0x1800028C0 (RtlExpandEnvironmentStrings_U.c)
 *     RtlpQueryRegistryDirect @ 0x180003C3C (RtlpQueryRegistryDirect.c)
 *     RtlpValidateKeyTrust @ 0x180003CF8 (RtlpValidateKeyTrust.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 */

__int64 __fastcall RtlpCallQueryRegistryRoutine(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned int v7; // ebx
  __int64 v10; // r9
  _DWORD *v11; // r12
  __int64 v12; // r11
  unsigned int v13; // r13d
  unsigned int v14; // edx
  unsigned int v15; // edi
  char *v16; // r15
  _WORD *v17; // rsi
  int v18; // ecx
  __int64 v19; // rdx
  __int64 result; // rax
  unsigned int v21; // eax
  unsigned int v22; // eax
  bool v23; // zf
  unsigned int v24; // ecx
  unsigned int v25; // edx
  int v26; // edi
  unsigned int v27; // r9d
  __int64 v28; // rax
  unsigned __int64 v29; // r8
  unsigned int v30; // ecx
  _WORD *v31; // rax
  unsigned __int64 v32; // r13
  int v33; // ecx
  _WORD *i; // rdi
  __int64 v36; // rdx
  unsigned int v37; // r12d
  int RegistryDirect; // eax
  _WORD *v39; // rcx
  unsigned __int16 v42; // [rsp+40h] [rbp-28h] BYREF
  __int16 v43; // [rsp+42h] [rbp-26h]
  _WORD *v44; // [rsp+48h] [rbp-20h]
  unsigned __int16 v45[4]; // [rsp+50h] [rbp-18h] BYREF
  _WORD *v46; // [rsp+58h] [rbp-10h]
  unsigned int v48; // [rsp+B8h] [rbp+50h] BYREF
  unsigned __int64 v49; // [rsp+C0h] [rbp+58h]
  _DWORD *v50; // [rsp+C8h] [rbp+60h]

  v50 = a4;
  v7 = 0;
  v49 = a3;
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
          v17 = (_WORD *)((char *)v11 + v22);
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
          v48 = a3 + v10;
          if ( (int)a3 + (int)v10 - (int)v16 < v26 )
          {
            result = 3221225507LL;
            *a4 = v26 + (_DWORD)v16 - a3;
            return result;
          }
          memmove(v16, (const void *)(a3 + 20), v24);
          v27 = v48;
          v12 = a1;
          *(_WORD *)&v16[v11[4]] = 0;
          v13 = v11[1];
          v28 = v26;
          v15 = v11[3];
          v29 = (unsigned __int64)&v16[v28 + 7];
          v22 = v11[2];
          a3 = v29 & 0xFFFFFFFFFFFFFFF8uLL;
          v49 = a3;
          v10 = v27 - (unsigned int)a3;
          goto LABEL_22;
        }
        return 3221225532LL;
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
  v17 = *(_WORD **)(a2 + 40);
  if ( !v15 )
  {
    v39 = *(_WORD **)(a2 + 40);
    if ( v14 - 1 <= 1 )
    {
      if ( !v17 )
        return 3221225532LL;
      while ( *v39++ )
        ;
      v15 = (_DWORD)v39 - (_DWORD)v17;
    }
    else if ( v14 == 7 )
    {
      if ( !v17 )
        return 3221225532LL;
      if ( *v17 )
      {
        do
        {
          while ( *v39++ )
            ;
        }
        while ( *v39 );
      }
      v15 = (_DWORD)v39 - (_DWORD)v17 + 2;
    }
  }
LABEL_4:
  v18 = *(_DWORD *)(a2 + 8);
  if ( (v18 & 0x20) != 0 )
  {
    if ( (v18 & 0x100) != 0 )
    {
      if ( *(unsigned __int8 *)(a2 + 35) != v13 )
        return 3221225508LL;
    }
    else if ( (v18 & 0x80u) != 0 && (v13 - 1 <= 1 || v13 == 7) )
    {
      v23 = (v18 & 4) == 0;
LABEL_26:
      if ( v23 )
        return 0LL;
      else
        return 3221225524LL;
    }
  }
  if ( (v18 & 0x10) == 0 )
  {
    if ( v13 == 7 )
    {
      v32 = (unsigned __int64)v17 + v15 - 4;
      v33 = 0;
      for ( i = v17; (unsigned __int64)i < v32; v17 = i )
      {
        while ( *i++ )
          ;
        v36 = *(unsigned int *)(a2 + 8);
        v37 = (_DWORD)i - (_DWORD)v17;
        if ( (v36 & 0x20) != 0 )
        {
          if ( a7 )
          {
            v33 = RtlpValidateKeyTrust(v12, v36, a3, v10);
            if ( v33 < 0 )
              return (unsigned int)v33;
          }
          RegistryDirect = RtlpQueryRegistryDirect(1LL, v17, v37, *(_QWORD *)(a2 + 24));
          *(_QWORD *)(a2 + 24) += 16LL;
        }
        else
        {
          RegistryDirect = (*(__int64 (__fastcall **)(char *, __int64, _WORD *, _QWORD, __int64, _QWORD))a2)(
                             v16,
                             1LL,
                             v17,
                             v37,
                             a5,
                             *(_QWORD *)(a2 + 24));
        }
        v33 = 0;
        if ( RegistryDirect != -1073741789 )
          v33 = RegistryDirect;
        if ( v33 < 0 )
          break;
        v12 = a1;
      }
      return (unsigned int)v33;
    }
    if ( v13 == 2 && v15 - 2 <= 0xFFFA )
    {
      v30 = v15 - 2;
      v31 = v17;
      if ( v15 != 2 )
      {
        while ( *v31 != 37 )
        {
          ++v31;
          v30 -= 2;
          if ( !v30 )
            goto LABEL_10;
        }
        v46 = v17;
        v45[1] = v15;
        v45[0] = v15 - 2;
        v44 = (_WORD *)a3;
        v42 = 0;
        if ( (int)v10 <= 0 )
        {
          v43 = 0;
        }
        else if ( (unsigned __int64)(int)v10 > 0xFFFE )
        {
          v43 = -2;
          *(_WORD *)(a3 + 65532) = 0;
        }
        else
        {
          v43 = v10;
          *(_WORD *)(a3 + 2 * ((unsigned __int64)(int)v10 >> 1) - 2) = 0;
        }
        result = RtlExpandEnvironmentStrings_U(a6, v45, (__int64)&v42, &v48);
        v13 = 1;
        if ( (int)result < 0 )
        {
          if ( (_DWORD)result == -1073741789 )
            *v50 = v48 + v49 - (_DWORD)v11;
          if ( (_DWORD)result != -2147483643 && ((_DWORD)result != -1073741789 || v43 != -2 && v48 <= 0xFFFC) )
            return result;
        }
        else
        {
          v17 = v44;
          v15 = v42 + 2;
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
      result = RtlpValidateKeyTrust(a1, v19, a3, v10);
      if ( (int)result < 0 )
        return result;
    }
    v21 = RtlpQueryRegistryDirect(v13, v17, v15, *(_QWORD *)(a2 + 24));
  }
  else
  {
    v21 = (*(__int64 (__fastcall **)(char *, _QWORD, _WORD *, _QWORD, __int64, _QWORD))a2)(
            v16,
            v13,
            v17,
            v15,
            a5,
            *(_QWORD *)(a2 + 24));
  }
  if ( v21 != -1073741789 )
    return v21;
  return v7;
}
