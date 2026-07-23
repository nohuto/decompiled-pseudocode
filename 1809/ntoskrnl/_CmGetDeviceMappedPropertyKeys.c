/*
 * XREFs of _CmGetDeviceMappedPropertyKeys @ 0x1408FED80
 * Callers:
 *     _PnpDispatchDevice @ 0x14059BFF0 (_PnpDispatchDevice.c)
 *     _CmDeleteDeviceWorker @ 0x1408F887C (_CmDeleteDeviceWorker.c)
 * Callees:
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x14059CFC8 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14059D504 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     _CmGetDeviceMappedPropertyFromInstanceKeyRegValue @ 0x1406DD49C (_CmGetDeviceMappedPropertyFromInstanceKeyRegValue.c)
 */

__int64 __fastcall CmGetDeviceMappedPropertyKeys(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // rbx
  __int64 *v8; // r14
  __int64 result; // rax
  unsigned int v11; // ebp
  __int64 v12; // rsi
  char v13; // di
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // edx
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // ebp
  __int64 *v20; // r14
  __int64 v21; // rsi
  char v22; // di
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // edx
  int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // ebp
  __int64 *v29; // rsi
  __int64 v30; // r14
  char v31; // di
  __int64 v32; // rax
  __int64 v33; // rcx
  unsigned int v34; // edx
  int v35; // eax
  unsigned int v36; // ecx
  int v37[18]; // [rsp+50h] [rbp-48h] BYREF
  __int64 v38; // [rsp+A0h] [rbp+8h]
  const wchar_t *v39; // [rsp+A8h] [rbp+10h]
  void *v40; // [rsp+B0h] [rbp+18h]

  v40 = (void *)a3;
  v39 = (const wchar_t *)a2;
  v38 = a1;
  v7 = a7;
  v8 = (__int64 *)&CmDeviceRegPropMap;
  result = 0LL;
  v11 = 0;
  *a7 = 0;
  while ( 1 )
  {
    v12 = *v8;
    v13 = 0;
    if ( !*v8 )
      goto LABEL_17;
    if ( a4 )
      goto LABEL_61;
    result = CmGetDeviceMappedPropertyFromRegProp(a1, a2, a3, v12, v37, 0LL, 0, (int *)&a7, 0);
    if ( (_DWORD)result == -1073741789 || !(_DWORD)result )
    {
      v13 = 1;
    }
    else if ( (_DWORD)result == -1073741632 )
    {
LABEL_7:
      *v7 = 0;
      return result;
    }
    result = 0LL;
    if ( v13 )
    {
LABEL_61:
      if ( a5 )
      {
        v14 = *v7;
        if ( (unsigned int)v14 < a6 )
        {
          v15 = 5 * v14;
          *(_OWORD *)(a5 + 4 * v15) = *(_OWORD *)v12;
          *(_DWORD *)(a5 + 4 * v15 + 16) = *(_DWORD *)(v12 + 16);
        }
      }
      v16 = *v7;
      v17 = -1;
      v18 = *v7 + 1;
      if ( v18 >= *v7 )
        v17 = *v7 + 1;
      *v7 = v17;
      result = v18 < v16 ? 0xC0000095 : 0;
      if ( v18 < v16 )
        break;
    }
    a1 = v38;
    a2 = (__int64)v39;
LABEL_17:
    ++v11;
    v8 += 3;
    if ( v11 >= 0x21 )
      goto LABEL_20;
    a3 = (__int64)v40;
  }
  *v7 = 0;
LABEL_20:
  if ( (int)result >= 0 )
  {
    v19 = 0;
    v20 = (__int64 *)&off_14090A5C0;
    while ( 1 )
    {
      v21 = *v20;
      v22 = 0;
      if ( *v20 )
      {
        if ( a4 )
          goto LABEL_62;
        result = CmGetDeviceMappedPropertyFromInstanceKeyRegValue(
                   v38,
                   (__int64)v39,
                   v40,
                   v21,
                   (__int64)v37,
                   0LL,
                   0,
                   &a7);
        if ( (_DWORD)result == -1073741789 || !(_DWORD)result )
        {
          v22 = 1;
        }
        else if ( (_DWORD)result == -1073741632 )
        {
          goto LABEL_7;
        }
        result = 0LL;
        if ( v22 )
        {
LABEL_62:
          if ( a5 )
          {
            v23 = *v7;
            if ( (unsigned int)v23 < a6 )
            {
              v24 = 5 * v23;
              *(_OWORD *)(a5 + 4 * v24) = *(_OWORD *)v21;
              *(_DWORD *)(a5 + 4 * v24 + 16) = *(_DWORD *)(v21 + 16);
            }
          }
          v25 = *v7;
          v26 = -1;
          v27 = *v7 + 1;
          if ( v27 >= *v7 )
            v26 = *v7 + 1;
          *v7 = v26;
          result = v27 < v25 ? 0xC0000095 : 0;
          if ( v27 < v25 )
            break;
        }
      }
      ++v19;
      v20 += 4;
      if ( v19 >= 2 )
        goto LABEL_39;
    }
    *v7 = 0;
LABEL_39:
    if ( (int)result >= 0 )
    {
      v28 = 0;
      v29 = (__int64 *)&off_14090C4C0;
      while ( 1 )
      {
        v30 = *v29;
        v31 = 0;
        if ( a4 )
          goto LABEL_63;
        result = CmGetDeviceMappedPropertyFromComposite(v38, v39, (size_t)v40, v30, v37, 0LL, 0, (int *)&a7, 0);
        if ( (_DWORD)result == -1073741789 || !(_DWORD)result )
        {
          v31 = 1;
        }
        else if ( (_DWORD)result == -1073741632 )
        {
          goto LABEL_7;
        }
        result = 0LL;
        if ( v31 )
        {
LABEL_63:
          if ( a5 )
          {
            v32 = *v7;
            if ( (unsigned int)v32 < a6 )
            {
              v33 = 5 * v32;
              *(_OWORD *)(a5 + 4 * v33) = *(_OWORD *)v30;
              *(_DWORD *)(a5 + 4 * v33 + 16) = *(_DWORD *)(v30 + 16);
            }
          }
          v34 = *v7;
          v35 = -1;
          v36 = *v7 + 1;
          if ( v36 >= *v7 )
            v35 = *v7 + 1;
          *v7 = v35;
          result = v36 < v34 ? 0xC0000095 : 0;
          if ( v36 < v34 )
            break;
        }
        ++v28;
        v29 += 2;
        if ( v28 >= 0x19 )
          goto LABEL_57;
      }
      *v7 = 0;
LABEL_57:
      if ( (int)result >= 0 )
        return a6 < *v7 ? 0xC0000023 : 0;
    }
  }
  return result;
}
