/*
 * XREFs of FilterEvalStrict @ 0x140592808
 * Callers:
 *     FilterEvalStrict @ 0x140592808 (FilterEvalStrict.c)
 *     FilterEval @ 0x140596454 (FilterEval.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     FilterEvalStrict @ 0x140592808 (FilterEvalStrict.c)
 *     PropertyEval @ 0x140592A70 (PropertyEval.c)
 *     FindFilterOperatorClose @ 0x140595DB4 (FindFilterOperatorClose.c)
 */

__int64 __fastcall FilterEvalStrict(
        __int64 (__fastcall *a1)(__int64, unsigned int *, unsigned int *, unsigned int *, __int64 *),
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5)
{
  int v8; // r14d
  _DWORD *v9; // r15
  __int64 result; // rax
  __int64 v11; // rdx
  unsigned int v12; // ebx
  unsigned int *v13; // rdi
  unsigned int v14; // r12d
  unsigned int v15; // eax
  unsigned int v16; // esi
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  int v21; // ecx
  int v22; // eax
  bool v23; // zf
  unsigned int v24; // r13d
  unsigned int v25; // r12d
  __int64 v26; // [rsp+20h] [rbp-50h]
  __int64 v27; // [rsp+20h] [rbp-50h]
  unsigned int v28; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v29; // [rsp+44h] [rbp-2Ch] BYREF
  int v30; // [rsp+48h] [rbp-28h]
  int v31; // [rsp+4Ch] [rbp-24h]
  unsigned int v32; // [rsp+50h] [rbp-20h]
  __int64 v33; // [rsp+58h] [rbp-18h] BYREF
  unsigned int *v34; // [rsp+60h] [rbp-10h]
  unsigned int v37; // [rsp+C0h] [rbp+50h] BYREF

  v31 = 1;
  v37 = 0;
  v30 = 0;
  v28 = 0;
  v33 = 0LL;
  v29 = 0;
  if ( a3 < 3 )
    return 3221225485LL;
  v8 = *(_DWORD *)a4 & 0xFF00000;
  if ( !v8 )
    return 3221225485LL;
  v9 = a5;
  *a5 = 0;
  result = FindFilterOperatorClose(a3, a4, &v37);
  v12 = result;
  if ( (_DWORD)result )
    return result;
  v13 = (unsigned int *)(a4 + 56);
  v14 = -1073741823;
  v34 = (unsigned int *)(v11 + 56LL * v37);
  v15 = a3 - v37;
  v16 = a3 - 1;
  v32 = v15;
  if ( v8 == 3145728 || v8 == 0x100000 )
  {
    while ( 1 )
    {
      if ( v16 <= 1 )
        goto LABEL_14;
      v37 = 0;
      *v9 = 0;
      if ( (*v13 & 0xFF00000) != 0 )
      {
        result = FindFilterOperatorClose(v16, v13, &v37);
        v24 = v37 + 1;
        if ( (_DWORD)result )
          return result;
        result = FilterEvalStrict((_DWORD)a1, a2, v24, (_DWORD)v13, (__int64)v9);
        v12 = result;
        if ( (_DWORD)result == -1073741823 )
        {
          v31 = 0;
        }
        else if ( (_DWORD)result )
        {
          return result;
        }
        v16 -= v24;
        v20 = 56LL * v24;
      }
      else
      {
        v12 = a1(a2, v13 + 2, &v28, &v29, &v33);
        if ( v12 == -1073741275 )
        {
          v12 = 0;
          if ( (*v13 & 0xFFF) != 1 )
          {
            v31 = 0;
            v20 = 56LL;
            --v16;
            goto LABEL_13;
          }
          v17 = 0LL;
          v19 = 0LL;
          v18 = 0LL;
          v28 = 0;
          v33 = 0LL;
          v29 = 0;
        }
        else
        {
          v17 = v28;
          v18 = v33;
          v19 = v29;
        }
        if ( v12 )
          return v12;
        LODWORD(v26) = v13[10];
        PropertyEval(v17, v18, v19, *v13, v26, *((_QWORD *)v13 + 6), v13[11], v9);
        --v16;
        v20 = 56LL;
      }
      if ( *v9 == (v8 == 3145728) )
      {
        v13 = v34;
        v21 = 1;
        v16 = v32;
        goto LABEL_15;
      }
LABEL_13:
      v13 = (unsigned int *)((char *)v13 + v20);
    }
  }
  if ( v8 != 5242880 )
    return 3221225485LL;
  if ( (*v13 & 0xFF00000) != 0 )
  {
    result = FindFilterOperatorClose(v16, v13, &v37);
    v25 = v37 + 1;
    if ( !(_DWORD)result )
    {
      result = FilterEvalStrict((_DWORD)a1, a2, v25, (_DWORD)v13, (__int64)v9);
      v12 = result;
      if ( !(_DWORD)result )
      {
        v13 += 14 * v25;
        v16 -= v25;
        v14 = -1073741823;
LABEL_46:
        *v9 = *v9 == 0;
LABEL_14:
        v21 = v30;
LABEL_15:
        if ( !v16 )
          return 3221225485LL;
        v22 = *v13 & 0xFF00000;
        switch ( v22 )
        {
          case 4194304:
            v23 = v8 == 3145728;
            break;
          case 2097152:
            if ( v8 == 0x100000 )
              goto LABEL_19;
            return 3221225485LL;
          case 6291456:
            v23 = v8 == 5242880;
            break;
          default:
            return 3221225485LL;
        }
        if ( v23 )
        {
LABEL_19:
          if ( v21 || v31 || v12 )
            return v12;
          return v14;
        }
        return 3221225485LL;
      }
    }
  }
  else
  {
    result = a1(a2, (unsigned int *)(a4 + 64), &v28, &v29, &v33);
    v12 = result;
    if ( (_DWORD)result == -1073741275 )
      return v14;
    if ( !(_DWORD)result )
    {
      LODWORD(v27) = *(_DWORD *)(a4 + 96);
      PropertyEval(v28, v33, v29, *v13, v27, *(_QWORD *)(a4 + 104), *(_DWORD *)(a4 + 100), v9);
      --v16;
      v13 = (unsigned int *)(a4 + 112);
      goto LABEL_46;
    }
  }
  return result;
}
