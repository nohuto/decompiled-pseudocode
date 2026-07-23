/*
 * XREFs of AuthzBasepCopyoutSecurityAttributes @ 0x1400A56B0
 * Callers:
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1400A6AB0 (AuthzBasepQuerySecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepCopyoutSecurityAttributeValues @ 0x1400A5938 (AuthzBasepCopyoutSecurityAttributeValues.c)
 *     AuthzBasepFindSecurityAttribute @ 0x1400A7130 (AuthzBasepFindSecurityAttribute.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall AuthzBasepCopyoutSecurityAttributes(
        _DWORD *a1,
        __int64 a2,
        unsigned int a3,
        _DWORD *a4,
        size_t Size)
{
  size_t v5; // r12
  _DWORD *v9; // r13
  unsigned __int64 v10; // rbp
  _DWORD *v11; // rcx
  unsigned int v12; // r8d
  __int64 v13; // r9
  char *v14; // rdi
  __int64 result; // rax
  unsigned int v16; // r15d
  _DWORD *v17; // r14
  __int64 SecurityAttribute; // r13
  char *v19; // rdi
  int v20; // ecx
  __int64 v21; // rcx
  char *v22; // rdi
  _QWORD *v23; // r13
  _QWORD *v24; // r14
  _DWORD *v25; // r15
  char *v26; // rdi
  __int64 v27; // rcx
  char *v28; // rdi
  __int64 v32; // [rsp+98h] [rbp+20h] BYREF

  v5 = Size;
  v9 = a1;
  if ( !a4 || !Size )
  {
    result = 3221225485LL;
    goto LABEL_16;
  }
  v10 = (unsigned __int64)a4 + Size;
  if ( (_DWORD *)((char *)a4 + Size) < a4 )
  {
    result = 3221225485LL;
  }
  else
  {
    memset(a4, 0, Size);
    v11 = a4 + 4;
    if ( (unsigned __int64)(a4 + 4) > v10 )
    {
      result = 3221225507LL;
    }
    else
    {
      v12 = a3;
      if ( !a2 )
        v12 = *v9;
      v13 = 10LL * v12;
      if ( is_mul_ok(0x28uLL, v12) )
      {
        v14 = (char *)&v11[v13];
        result = 0LL;
        if ( (unsigned __int64)&v11[v13] <= v10 )
        {
          *a4 = 1;
          a4[1] = v12;
          *((_QWORD *)a4 + 1) = v11;
          if ( a2 )
          {
            v16 = 0;
            if ( a3 )
            {
              v17 = a4 + 10;
              while ( 1 )
              {
                SecurityAttribute = AuthzBasepFindSecurityAttribute(v9, a2 + 16LL * v16);
                if ( !SecurityAttribute )
                  break;
                *((_WORD *)v17 - 4) = *(_WORD *)(SecurityAttribute + 48);
                v19 = (char *)((unsigned __int64)(v14 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
                v20 = *(_DWORD *)(SecurityAttribute + 60);
                *((_WORD *)v17 - 3) = 0;
                *v17 = v20;
                *(v17 - 1) = *(_DWORD *)(SecurityAttribute + 52);
                v21 = *(unsigned __int16 *)(SecurityAttribute + 32);
                v32 = v21;
                if ( (unsigned __int64)&v19[v21] > v10 )
                  goto LABEL_28;
                *((_WORD *)v17 - 12) = v21;
                *((_WORD *)v17 - 11) = v21;
                *((_QWORD *)v17 - 2) = v19;
                memmove(v19, *(const void **)(SecurityAttribute + 40), (unsigned int)v21);
                v22 = &v19[v32];
                result = AuthzBasepCopyoutSecurityAttributeValues(
                           SecurityAttribute,
                           (int)v17 - 24,
                           (_DWORD)v22,
                           (int)v10 - (int)v22,
                           (__int64)&v32);
                if ( (int)result < 0 )
                  goto LABEL_25;
                v14 = &v22[v32];
                ++v16;
                v9 = a1;
                v17 += 10;
                if ( v16 >= a3 )
                  goto LABEL_16;
              }
              result = 3221226021LL;
              goto LABEL_25;
            }
LABEL_16:
            if ( (int)result >= 0 )
              return result;
            goto LABEL_25;
          }
          v23 = v9 + 2;
          v24 = (_QWORD *)*v23;
          if ( (_QWORD *)*v23 == v23 )
            goto LABEL_16;
          v25 = a4 + 10;
          while ( 1 )
          {
            *((_WORD *)v25 - 4) = *((_WORD *)v24 + 24);
            v26 = (char *)((unsigned __int64)(v14 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
            *v25 = *((_DWORD *)v24 + 15);
            *((_WORD *)v25 - 3) = 0;
            *(v25 - 1) = *((_DWORD *)v24 + 13);
            v27 = *((unsigned __int16 *)v24 + 16);
            v32 = v27;
            if ( (unsigned __int64)&v26[v27] > v10 )
              break;
            *((_WORD *)v25 - 12) = v27;
            *((_WORD *)v25 - 11) = v27;
            *((_QWORD *)v25 - 2) = v26;
            memmove(v26, (const void *)v24[5], (unsigned int)v27);
            v28 = &v26[v32];
            result = AuthzBasepCopyoutSecurityAttributeValues(
                       (_DWORD)v24,
                       (int)v25 - 24,
                       (_DWORD)v28,
                       (int)v10 - (int)v28,
                       (__int64)&v32);
            if ( (int)result < 0 )
              goto LABEL_25;
            v14 = &v28[v32];
            v25 += 10;
            v24 = (_QWORD *)*v24;
            if ( v24 == v23 )
              goto LABEL_16;
          }
        }
LABEL_28:
        result = 2147483653LL;
      }
      else
      {
        result = 3221225621LL;
      }
    }
  }
LABEL_25:
  if ( v5 >= 0x10 )
  {
    *(_QWORD *)a4 = 0LL;
    *((_QWORD *)a4 + 1) = 0LL;
  }
  return result;
}
