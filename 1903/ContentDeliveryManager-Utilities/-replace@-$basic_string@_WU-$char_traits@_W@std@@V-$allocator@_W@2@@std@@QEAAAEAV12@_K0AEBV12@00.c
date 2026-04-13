/*
 * XREFs of ?replace@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0AEBV12@00@Z @ 0x180077000
 * Callers:
 *     ?replace@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W0@Z @ 0x180076DD4 (-replace@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W0@Z.c)
 * Callees:
 *     ?_Xran@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAXXZ @ 0x1800145A8 (-_Xran@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAXXZ.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x18001481C (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_K0@Z @ 0x180067DE4 (-_Copy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_K0@Z.c)
 *     memcpy_0 @ 0x1800CB058 (memcpy_0.c)
 *     memmove_0 @ 0x1800CB064 (memmove_0.c)
 */

_QWORD *__fastcall std::wstring::replace(
        _QWORD *Src,
        unsigned __int64 a2,
        unsigned __int64 a3,
        _QWORD *a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  _QWORD *v7; // rsi
  unsigned __int64 v8; // r8
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r13
  _WORD *v18; // rax
  unsigned __int64 v19; // rax
  _QWORD *v20; // rdx
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // rdx
  _QWORD *v24; // rcx
  _QWORD *v25; // rdx
  _QWORD *v26; // rcx
  char *v27; // rdx
  char *v28; // rcx
  size_t v29; // r8
  _QWORD *v30; // rdx
  _QWORD *v31; // rcx
  _QWORD *v32; // rcx
  _QWORD *v33; // rax
  unsigned __int64 v34; // rsi
  _QWORD *v35; // rdx
  _QWORD *v36; // rcx
  _QWORD *v37; // rdx
  _QWORD *v38; // rcx
  _QWORD *v39; // rdx
  _QWORD *v40; // rcx
  __int64 v41; // rsi
  _QWORD *v42; // rdx
  _QWORD *v43; // rcx
  _QWORD *v44; // rax

  v7 = a4;
  v8 = Src[2];
  if ( v8 < a2 || (v11 = a4[2], v12 = a5, v11 < a5) )
    std::wstring::_Xran();
  v13 = a6;
  if ( v8 - a2 < a3 )
    a3 = v8 - a2;
  v14 = v11 - a5;
  if ( v14 < a6 )
    v13 = v14;
  v15 = v8 - a3;
  if ( ~v13 <= v8 - a3 )
    goto LABEL_114;
  v16 = v8 - a2 - a3;
  v17 = v15 + v13;
  if ( v8 >= v15 + v13 )
    goto LABEL_17;
  if ( v17 > 0x7FFFFFFFFFFFFFFELL )
LABEL_114:
    std::wstring::_Xlen();
  if ( Src[3] >= v17 )
  {
    if ( !v17 )
    {
      if ( Src[3] < 8uLL )
        v18 = Src;
      else
        v18 = (_WORD *)*Src;
      Src[2] = 0LL;
      *v18 = 0;
    }
  }
  else
  {
    std::wstring::_Copy((const void **)Src, v15 + v13, v8);
  }
LABEL_17:
  v19 = Src[3];
  if ( Src != v7 )
  {
    if ( v19 < 8 )
      v20 = Src;
    else
      v20 = (_QWORD *)*Src;
    if ( v19 < 8 )
      v21 = Src;
    else
      v21 = (_QWORD *)*Src;
    if ( v16 )
    {
      memmove_0((char *)v21 + 2 * a2 + 2 * v13, (char *)v20 + 2 * a2 + 2 * a3, 2 * v16);
      v19 = Src[3];
    }
    if ( v7[3] >= 8uLL )
      v7 = (_QWORD *)*v7;
    if ( v19 < 8 )
      v22 = Src;
    else
      v22 = (_QWORD *)*Src;
    if ( v13 )
      memcpy_0((char *)v22 + 2 * a2, (char *)v7 + 2 * a5, 2 * v13);
    goto LABEL_109;
  }
  if ( v13 > a3 )
  {
    if ( a5 > a2 )
    {
      v34 = a2 + a3;
      if ( a2 + a3 > a5 )
      {
        if ( v19 < 8 )
          v37 = Src;
        else
          v37 = (_QWORD *)*Src;
        if ( v19 < 8 )
          v38 = Src;
        else
          v38 = (_QWORD *)*Src;
        if ( a3 )
        {
          memmove_0((char *)v38 + 2 * a2, (char *)v37 + 2 * a5, 2 * a3);
          v19 = Src[3];
        }
        if ( v19 < 8 )
          v39 = Src;
        else
          v39 = (_QWORD *)*Src;
        if ( v19 < 8 )
          v40 = Src;
        else
          v40 = (_QWORD *)*Src;
        v41 = 2 * v34;
        if ( v16 )
        {
          memmove_0((char *)v40 + 2 * a2 + 2 * v13, (char *)v39 + v41, 2 * v16);
          v19 = Src[3];
        }
        if ( v19 < 8 )
          v42 = Src;
        else
          v42 = (_QWORD *)*Src;
        if ( v19 < 8 )
          v43 = Src;
        else
          v43 = (_QWORD *)*Src;
        if ( v13 != a3 )
        {
          v29 = 2 * (v13 - a3);
          v27 = (char *)v42 + 2 * a5 + 2 * v13;
          v28 = (char *)v43 + v41;
          goto LABEL_108;
        }
        goto LABEL_109;
      }
      if ( v19 < 8 )
        v35 = Src;
      else
        v35 = (_QWORD *)*Src;
      if ( v19 < 8 )
        v36 = Src;
      else
        v36 = (_QWORD *)*Src;
      if ( v16 )
      {
        memmove_0((char *)v36 + 2 * a2 + 2 * v13, (char *)v35 + 2 * v34, 2 * v16);
        v19 = Src[3];
      }
      if ( v19 < 8 )
        v32 = Src;
      else
        v32 = (_QWORD *)*Src;
      if ( v19 < 8 )
        v33 = Src;
      else
        v33 = (_QWORD *)*Src;
      if ( !v13 )
        goto LABEL_109;
      v12 = v13 + a5 - a3;
    }
    else
    {
      if ( v19 < 8 )
        v30 = Src;
      else
        v30 = (_QWORD *)*Src;
      if ( v19 < 8 )
        v31 = Src;
      else
        v31 = (_QWORD *)*Src;
      if ( v16 )
      {
        memmove_0((char *)v31 + 2 * a2 + 2 * v13, (char *)v30 + 2 * a2 + 2 * a3, 2 * v16);
        v19 = Src[3];
      }
      if ( v19 < 8 )
        v32 = Src;
      else
        v32 = (_QWORD *)*Src;
      if ( v19 < 8 )
        v33 = Src;
      else
        v33 = (_QWORD *)*Src;
      if ( !v13 )
        goto LABEL_109;
    }
    v27 = (char *)v32 + 2 * v12;
    v28 = (char *)v33 + 2 * a2;
    v29 = 2 * v13;
    goto LABEL_108;
  }
  if ( v19 < 8 )
    v23 = Src;
  else
    v23 = (_QWORD *)*Src;
  if ( v19 < 8 )
    v24 = Src;
  else
    v24 = (_QWORD *)*Src;
  if ( v13 )
  {
    memmove_0((char *)v24 + 2 * a2, (char *)v23 + 2 * a5, 2 * v13);
    v19 = Src[3];
  }
  if ( v19 < 8 )
    v25 = Src;
  else
    v25 = (_QWORD *)*Src;
  if ( v19 < 8 )
    v26 = Src;
  else
    v26 = (_QWORD *)*Src;
  if ( v16 )
  {
    v27 = (char *)v25 + 2 * a2 + 2 * a3;
    v28 = (char *)v26 + 2 * a2 + 2 * v13;
    v29 = 2 * v16;
LABEL_108:
    memmove_0(v28, v27, v29);
  }
LABEL_109:
  if ( Src[3] < 8uLL )
    v44 = Src;
  else
    v44 = (_QWORD *)*Src;
  Src[2] = v17;
  *((_WORD *)v44 + v17) = 0;
  return Src;
}
