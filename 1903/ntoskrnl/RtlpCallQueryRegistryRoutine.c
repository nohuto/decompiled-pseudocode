/*
 * XREFs of RtlpCallQueryRegistryRoutine @ 0x1405C1D14
 * Callers:
 *     RtlpQueryRegistryValues @ 0x1405C1848 (RtlpQueryRegistryValues.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     RtlpQueryRegistryDirect @ 0x1406D7E74 (RtlpQueryRegistryDirect.c)
 *     RtlpValidateKeyTrust @ 0x1406E69A8 (RtlpValidateKeyTrust.c)
 */

__int64 __fastcall RtlpCallQueryRegistryRoutine(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        int *a4,
        __int64 a5,
        int a6,
        char a7)
{
  int v7; // r12d
  unsigned int v8; // ebx
  unsigned int v10; // r13d
  int v12; // eax
  __int64 v13; // r11
  unsigned __int64 v14; // r10
  unsigned int v15; // r8d
  unsigned int v16; // esi
  unsigned int v17; // ecx
  __int64 v18; // rax
  signed int v19; // edi
  char *v20; // r15
  int v21; // r12d
  _WORD *v22; // rdi
  int v23; // edx
  unsigned int v24; // eax
  __int64 result; // rax
  _WORD *v26; // rcx
  bool v27; // zf
  unsigned __int64 v28; // r12
  int v29; // ecx
  _WORD *i; // rsi
  unsigned int v32; // ebp
  int RegistryDirect; // eax
  unsigned int v35; // eax
  _WORD *v36; // rcx

  v7 = *a4;
  v8 = 0;
  *a4 = 0;
  v10 = a3[1];
  v12 = *(_DWORD *)(a2 + 32);
  v13 = a1;
  v14 = (unsigned __int64)a3;
  if ( v10 )
  {
    v15 = a3[2];
    if ( v15 != -1 )
    {
      v16 = *(_DWORD *)(v14 + 12);
      if ( v16 || v10 != (unsigned __int8)v12 )
      {
        if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
        {
          v20 = *(char **)(a2 + 16);
LABEL_10:
          v22 = (_WORD *)((char *)a3 + v15);
          goto LABEL_11;
        }
        v17 = a3[4];
        v18 = v16 + v15;
        if ( !v16 )
          v18 = v17 + 20;
        v19 = v17 + 2;
        v20 = (char *)(((unsigned __int64)a3 + v18 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        if ( v17 < 0xFFFFFFFE )
        {
          v21 = (_DWORD)a3 + v7;
          if ( v21 - (int)v20 < v19 )
          {
            result = 3221225507LL;
            *a4 = v19 + (_DWORD)v20 - (_DWORD)a3;
            return result;
          }
          memmove(v20, a3 + 5, v17);
          v13 = a1;
          *(_WORD *)&v20[a3[4]] = 0;
          v10 = a3[1];
          v15 = a3[2];
          v16 = a3[3];
          v14 = (unsigned __int64)&v20[v19 + 7] & 0xFFFFFFFFFFFFFFF8uLL;
          v7 = v21 - v14;
          goto LABEL_10;
        }
        return 3221225532LL;
      }
    }
  }
  if ( !(_BYTE)v12 )
  {
    v27 = (*(_DWORD *)(a2 + 8) & 4) == 0;
    goto LABEL_35;
  }
  v16 = *(_DWORD *)(a2 + 48);
  v10 = (unsigned __int8)v12;
  v20 = *(char **)(a2 + 16);
  v22 = *(_WORD **)(a2 + 40);
  if ( !v16 )
  {
    v26 = *(_WORD **)(a2 + 40);
    if ( (unsigned int)(unsigned __int8)v12 - 1 <= 1 )
    {
      if ( !v22 )
        return 3221225532LL;
      while ( *v26++ )
        ;
      v16 = (_DWORD)v26 - (_DWORD)v22;
    }
    else if ( (unsigned __int8)v12 == 7 )
    {
      if ( !v22 )
        return 3221225532LL;
      if ( *v22 )
      {
        do
        {
          while ( *v26++ )
            ;
        }
        while ( *v26 );
      }
      v16 = (_DWORD)v26 - (_DWORD)v22 + 2;
    }
  }
LABEL_11:
  v23 = *(_DWORD *)(a2 + 8);
  if ( (v23 & 0x20) == 0 )
    goto LABEL_12;
  if ( (v23 & 0x100) == 0 )
  {
    if ( (v23 & 0x80u) == 0 || v10 - 1 > 1 && v10 != 7 )
      goto LABEL_12;
    v27 = (v23 & 4) == 0;
LABEL_35:
    if ( v27 )
      return 0LL;
    else
      return 3221225524LL;
  }
  if ( *(unsigned __int8 *)(a2 + 35) != v10 )
    return 3221225508LL;
LABEL_12:
  if ( (v23 & 0x10) == 0 )
  {
    if ( v10 == 7 )
    {
      v28 = (unsigned __int64)v22 + v16 - 4;
      v29 = 0;
      for ( i = v22; (unsigned __int64)i < v28; v22 = i )
      {
        while ( *i++ )
          ;
        v32 = (_DWORD)i - (_DWORD)v22;
        if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
        {
          if ( a7 )
          {
            v29 = RtlpValidateKeyTrust(v13);
            if ( v29 < 0 )
              return (unsigned int)v29;
          }
          RegistryDirect = RtlpQueryRegistryDirect(1LL, v22, v32, *(_QWORD *)(a2 + 24));
          *(_QWORD *)(a2 + 24) += 16LL;
        }
        else
        {
          RegistryDirect = (*(__int64 (__fastcall **)(char *, __int64, _WORD *, _QWORD, __int64, _QWORD))a2)(
                             v20,
                             1LL,
                             v22,
                             v32,
                             a5,
                             *(_QWORD *)(a2 + 24));
        }
        v29 = 0;
        if ( RegistryDirect != -1073741789 )
          v29 = RegistryDirect;
        if ( v29 < 0 )
          break;
        v13 = a1;
      }
      return (unsigned int)v29;
    }
    if ( v10 == 2 )
    {
      v35 = v16 - 2;
      if ( v16 - 2 <= 0xFFFA )
      {
        v36 = v22;
        if ( v16 != 2 )
        {
          while ( *v36 != 37 )
          {
            ++v36;
            v35 -= 2;
            if ( !v35 )
              goto LABEL_15;
          }
          if ( v7 > 0 )
          {
            if ( (unsigned __int64)v7 > 0xFFFE )
              *(_WORD *)(v14 + 65532) = 0;
            else
              *(_WORD *)(v14 + 2 * ((unsigned __int64)v7 >> 1) - 2) = 0;
          }
          return 3221225485LL;
        }
      }
    }
  }
LABEL_15:
  if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
  {
    if ( a7 )
    {
      result = RtlpValidateKeyTrust(v13);
      if ( (int)result < 0 )
        return result;
    }
    v24 = RtlpQueryRegistryDirect(v10, v22, v16, *(_QWORD *)(a2 + 24));
  }
  else
  {
    v24 = (*(__int64 (__fastcall **)(char *, _QWORD, _WORD *, _QWORD, __int64, _QWORD))a2)(
            v20,
            v10,
            v22,
            v16,
            a5,
            *(_QWORD *)(a2 + 24));
  }
  if ( v24 != -1073741789 )
    return v24;
  return v8;
}
