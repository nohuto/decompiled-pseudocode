/*
 * XREFs of ?replace@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W0@Z @ 0x1800755A8
 * Callers:
 *     ?NormalizedString@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W00@Z @ 0x18006C8B8 (-NormalizedString@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_trait.c)
 *     ?GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x180097144 (-GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA-AV-$basic_string@_W.c)
 * Callees:
 *     ?_Xran@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAXXZ @ 0x180014228 (-_Xran@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAXXZ.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x180014568 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_K0@Z @ 0x180066314 (-_Copy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_K0@Z.c)
 *     ?replace@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0AEBV12@00@Z @ 0x1800757D4 (-replace@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K0AEBV12@00.c)
 *     memcpy_0 @ 0x1800C7147 (memcpy_0.c)
 *     memmove_0 @ 0x1800C7153 (memmove_0.c)
 */

_QWORD *__fastcall std::wstring::replace(
        _QWORD *Src,
        unsigned __int64 a2,
        unsigned __int64 a3,
        char *a4,
        unsigned __int64 a5)
{
  unsigned __int64 v6; // rsi
  _QWORD *v8; // rbx
  char *v9; // rax
  _BYTE *v10; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r14
  _QWORD *v14; // rdx
  _QWORD *v15; // rcx
  unsigned __int64 v16; // rdi
  bool v17; // cf
  _WORD *v18; // rax
  _QWORD *v19; // rdx
  _QWORD *v20; // rcx
  unsigned __int64 v21; // rax
  char *v22; // rcx
  _WORD *v23; // rax

  v6 = a3;
  v8 = Src;
  if ( !a4 )
    goto LABEL_13;
  v9 = Src[3] < 8uLL ? (char *)Src : (char *)*Src;
  if ( a4 < v9 )
    goto LABEL_13;
  if ( Src[3] >= 8uLL )
    Src = (_QWORD *)*Src;
  if ( (char *)Src + 2 * v8[2] <= a4 )
  {
LABEL_13:
    v12 = v8[2];
    if ( v12 < a2 )
      std::wstring::_Xran();
    if ( v12 - a2 < a3 )
      v6 = v12 - a2;
    if ( ~a5 <= v12 - v6 )
      goto LABEL_56;
    v13 = v12 - a2 - v6;
    if ( a5 < v6 )
    {
      v14 = v8[3] < 8uLL ? v8 : (_QWORD *)*v8;
      v15 = v8[3] < 8uLL ? v8 : (_QWORD *)*v8;
      if ( v13 )
        memmove_0((char *)v15 + 2 * a2 + 2 * a5, (char *)v14 + 2 * a2 + 2 * v6, 2 * v13);
    }
    if ( !a5 && !v6 )
      return v8;
    v16 = a5 + v8[2] - v6;
    if ( v16 > 0x7FFFFFFFFFFFFFFELL )
LABEL_56:
      std::wstring::_Xlen();
    if ( v8[3] >= v16 )
    {
      if ( v16 )
        goto LABEL_37;
      v17 = v8[3] < 8uLL;
      v8[2] = 0LL;
      if ( v17 )
        v18 = v8;
      else
        v18 = (_WORD *)*v8;
      *v18 = 0;
    }
    else
    {
      std::wstring::_Copy((const void **)v8, a5 + v8[2] - v6, (const void *)v8[2]);
    }
    if ( !v16 )
      return v8;
LABEL_37:
    if ( v6 < a5 )
    {
      v19 = v8[3] < 8uLL ? v8 : (_QWORD *)*v8;
      v20 = v8[3] < 8uLL ? v8 : (_QWORD *)*v8;
      if ( v13 )
        memmove_0((char *)v20 + 2 * a2 + 2 * a5, (char *)v19 + 2 * a2 + 2 * v6, 2 * v13);
    }
    v21 = v8[3];
    if ( v21 < 8 )
      v22 = (char *)v8;
    else
      v22 = (char *)*v8;
    if ( a5 )
    {
      memcpy_0(&v22[2 * a2], a4, 2 * a5);
      v21 = v8[3];
    }
    v8[2] = v16;
    if ( v21 < 8 )
      v23 = v8;
    else
      v23 = (_WORD *)*v8;
    v23[v16] = 0;
    return v8;
  }
  if ( v8[3] < 8uLL )
    v10 = v8;
  else
    v10 = (_BYTE *)*v8;
  return (_QWORD *)std::wstring::replace(v8, (a4 - v10) >> 1, a5);
}
