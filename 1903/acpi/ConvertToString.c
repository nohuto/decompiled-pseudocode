/*
 * XREFs of ConvertToString @ 0x1C006AF00
 * Callers:
 *     ValidateArgTypes @ 0x1C001A610 (ValidateArgTypes.c)
 *     Concat @ 0x1C0068720 (Concat.c)
 *     ToString @ 0x1C006A9F0 (ToString.c)
 * Callees:
 *     HeapAlloc @ 0x1C0003960 (HeapAlloc.c)
 *     RtlStringCchPrintfA @ 0x1C0005788 (RtlStringCchPrintfA.c)
 *     FreeDataBuffs @ 0x1C0013E30 (FreeDataBuffs.c)
 *     IsCompatableDSDTRevision @ 0x1C0020A38 (IsCompatableDSDTRevision.c)
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall ConvertToString(__int64 a1, unsigned int a2, __int64 a3)
{
  size_t v3; // rdi
  unsigned int v6; // ebx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  unsigned int v10; // ecx
  __int64 v11; // r14
  _BYTE *v12; // rax
  _BYTE *v13; // r14
  unsigned int v14; // eax
  _BYTE *v15; // rax
  _BYTE *v16; // r14
  size_t v17; // r14
  _BYTE *v18; // rax
  _BYTE *v19; // rsi
  __int128 v20; // xmm1
  __int64 v21; // xmm0_8
  _BYTE v23[40]; // [rsp+20h] [rbp-50h] BYREF
  char pszDest[8]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v25; // [rsp+50h] [rbp-20h]
  char v26; // [rsp+58h] [rbp-18h]

  v3 = a2;
  *(_QWORD *)pszDest = 0LL;
  v25 = 0LL;
  v6 = 0;
  v26 = 0;
  memset(v23, 0, sizeof(v23));
  v7 = *(unsigned __int16 *)(a1 + 2);
  *(_WORD *)&v23[2] = 2;
  v8 = v7 - 1;
  if ( !v8 )
  {
    if ( IsCompatableDSDTRevision() )
    {
      v17 = 17LL;
      RtlStringCchPrintfA(pszDest, 0x11uLL, "%I64x", *(_QWORD *)(a1 + 16));
    }
    else
    {
      v17 = 9LL;
      RtlStringCchPrintfA(pszDest, 9uLL, "%x", *(_DWORD *)(a1 + 16));
    }
    if ( !(_DWORD)v3 || v3 >= v17 )
      LODWORD(v3) = strnlen(pszDest, v17);
    *(_DWORD *)&v23[24] = v3 + 1;
    v18 = (_BYTE *)HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, (int)v3 + 1);
    *(_QWORD *)&v23[32] = v18;
    v19 = v18;
    if ( v18 )
    {
      memmove(v18, pszDest, (unsigned int)(v3 + 1));
      v19[(unsigned int)v3] = 0;
      goto LABEL_30;
    }
    return (unsigned int)-1073741670;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
    v14 = *(_DWORD *)(a1 + 24) - 1;
    if ( (unsigned int)v3 <= v14 )
    {
      if ( !(_DWORD)v3 )
        v3 = v14;
      *(_DWORD *)&v23[24] = v3 + 1;
      v15 = (_BYTE *)HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, (int)v3 + 1);
      *(_QWORD *)&v23[32] = v15;
      v16 = v15;
      if ( v15 )
      {
        memmove(v15, *(const void **)(a1 + 32), (unsigned int)(v3 + 1));
        v16[v3] = 0;
        goto LABEL_30;
      }
      return (unsigned int)-1073741670;
    }
    return (unsigned int)-1072431098;
  }
  if ( v9 == 1 )
  {
    v10 = *(_DWORD *)(a1 + 24);
    v11 = v10;
    if ( v10 > 0xC9 )
      v11 = 201LL;
    if ( !(_DWORD)v3 )
    {
      if ( v10 )
      {
        LODWORD(v3) = strnlen(*(const char **)(a1 + 32), (unsigned int)v11);
        if ( (unsigned int)v3 == v11 )
          return (unsigned int)-1073741306;
      }
LABEL_13:
      *(_DWORD *)&v23[24] = v3 + 1;
      v12 = (_BYTE *)HeapAlloc((struct _SLIST_ENTRY *)gpheapGlobal, 1381258056, (int)v3 + 1);
      *(_QWORD *)&v23[32] = v12;
      v13 = v12;
      if ( v12 )
      {
        memmove(v12, *(const void **)(a1 + 32), (unsigned int)v3);
        v13[(unsigned int)v3] = 0;
LABEL_30:
        FreeDataBuffs(a3, 1u);
        v20 = *(_OWORD *)&v23[16];
        *(_OWORD *)a3 = *(_OWORD *)v23;
        v21 = *(_QWORD *)&v23[32];
        *(_OWORD *)(a3 + 16) = v20;
        *(_QWORD *)(a3 + 32) = v21;
        return v6;
      }
      return (unsigned int)-1073741670;
    }
    if ( (unsigned int)v3 <= v10 && (unsigned int)v3 <= 0xC8 )
      goto LABEL_13;
    return (unsigned int)-1072431098;
  }
  return (unsigned int)-1072431095;
}
