/*
 * XREFs of ?GrePatBltLockedDC@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVERECTL@@KPEAVSURFACE@@KKKK@Z @ 0x1C009E760
 * Callers:
 *     ?NtGdiFlushUserBatchInternal@@YAXPEAX@Z @ 0x1C008C4A0 (-NtGdiFlushUserBatchInternal@@YAXPEAX@Z.c)
 *     NtGdiPatBlt @ 0x1C009DAD0 (NtGdiPatBlt.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C009E3A0 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 * Callees:
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C008F930 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C008FDD0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GrePatBltLockedDC(
        __int64 this,
        struct EXFORMOBJ *a2,
        struct ERECTL *a3,
        int a4,
        struct SURFACE *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9)
{
  int v9; // esi
  struct _RECTL **v11; // r12
  unsigned int v12; // ebx
  int v13; // eax
  struct _RECTL *v14; // rcx
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r10
  __int64 v19; // r8
  __int64 v20; // rdi
  __int64 v21; // r11
  LONG v22; // r9d
  LONG v23; // r10d
  LONG v24; // r8d
  LONG v25; // ecx
  struct _RECTL *v26; // rax
  unsigned int *v27; // rcx
  __int64 p_right; // r13
  unsigned int v29; // ebx
  unsigned int v30; // edi
  unsigned int v31; // esi
  unsigned int v32; // ebp
  __int64 v33; // r9
  __int64 v34; // rcx
  int v37; // eax
  ULONG v38; // ecx
  LONG left; // eax
  struct _RECTL *v40; // rdi
  struct REGION *v41; // rax
  __int64 v42; // [rsp+20h] [rbp-88h]
  __m128i v43[4]; // [rsp+60h] [rbp-48h] BYREF
  struct _RECTL *v44; // [rsp+B8h] [rbp+10h]

  v9 = a4;
  v44 = 0LL;
  v11 = (struct _RECTL **)this;
  v12 = 1;
  if ( (*((_DWORD *)a5 + 29) & 8) != 0 || *((_QWORD *)a5 + 28) )
  {
    this = 512LL;
    if ( (*((_WORD *)a5 + 51) & 0x200) != 0 )
      goto LABEL_26;
  }
  v13 = *((_DWORD *)a5 + 28);
  if ( (v13 & 0x800) != 0 )
  {
    v37 = UserSurfaceAccessCheck(*((_QWORD *)a5 + 81));
  }
  else
  {
    if ( (v13 & 0x10000000) == 0 )
      goto LABEL_5;
    v37 = UserScreenAccessCheck(this);
  }
  if ( !v37 )
  {
LABEL_26:
    v38 = 5;
LABEL_27:
    EngSetLastError(v38);
    return 0LL;
  }
LABEL_5:
  v14 = *v11;
  if ( ((*v11)[2].top & 0x10000) != 0 )
  {
    v38 = 87;
    goto LABEL_27;
  }
  v15 = *(int *)a3;
  v16 = v14[2].right & 1LL;
  v17 = *(&v14[89].left + 2 * v16);
  if ( (unsigned __int64)(v17 + v15 + 0x80000000LL) <= 0xFFFFFFFF )
  {
    v18 = *((int *)a3 + 2);
    if ( (unsigned __int64)(v17 + v18 + 0x80000000LL) <= 0xFFFFFFFF )
    {
      v19 = *(&v14[89].top + 2 * v16);
      v20 = *((int *)a3 + 1);
      if ( (unsigned __int64)(v19 + v20 + 0x80000000LL) <= 0xFFFFFFFF )
      {
        v21 = *((int *)a3 + 3);
        if ( (unsigned __int64)(v19 + v21 + 0x80000000LL) <= 0xFFFFFFFF )
        {
          v22 = v15 + v17;
          *(_DWORD *)a3 = v22;
          v23 = *(&v14[89].left + 2 * v16) + v18;
          *((_DWORD *)a3 + 2) = v23;
          v24 = v20 + *(&v14[89].top + 2 * v16);
          *((_DWORD *)a3 + 1) = v24;
          v25 = v21 + *(&v14[89].top + 2 * v16);
          *((_DWORD *)a3 + 3) = v25;
          if ( v22 < v23 && v24 < v25 )
          {
            if ( (v26 = *v11, v22 >= (*v11)[88].left)
              && v23 <= v26[88].right
              && v24 >= v26[88].top
              && v25 <= v26[88].bottom
              || (v40 = v26 + 135,
                  v44 = v26 + 135,
                  v41 = XDCOBJ::prgnEffRao((DC **)v11),
                  XCLIPOBJ::vSetup((XCLIPOBJ *)v40, v41, a3, 2),
                  *(struct _RECTL *)a3 = *(struct _RECTL *)&v40->top,
                  !(unsigned int)ERECTL::bEmpty(a3)) )
            {
              if ( (((unsigned __int8)v9 ^ (unsigned __int8)(16 * v9)) & 0xF0) != 0 )
              {
                v27 = *(unsigned int **)&(*v11)[5].left;
                p_right = (__int64)&(*v11)[99].right;
                v16 = v27[2];
                if ( (v16 & 1) != 0
                  || ((*v11)[20].top & 1) != 0
                  || (left = (*v11)[107].left, (left & 1) != 0) && (*v11)[102].right != a6
                  || (left & 2) != 0 && (*v11)[102].bottom != a7 )
                {
                  v29 = v27[10];
                  v30 = v27[8];
                  v31 = v27[11];
                  v32 = v27[9];
                  v27[2] = v16 & 0xFFFFFFFE;
                  (*v11)[20].top &= ~1u;
                  v42 = *((_QWORD *)a5 + 16);
                  v33 = *(_QWORD *)&(*v11)[6].left;
                  *(_DWORD *)(*(_QWORD *)&(*v11)[5].left + 40LL) = a6;
                  *(_DWORD *)(*(_QWORD *)&(*v11)[5].left + 32LL) = a7;
                  *(_DWORD *)(*(_QWORD *)&(*v11)[5].left + 44LL) = a8;
                  *(_DWORD *)(*(_QWORD *)&(*v11)[5].left + 36LL) = a9;
                  EBRUSHOBJ::vInitBrush(p_right, *v11, *(_QWORD *)&(*v11)[9].left, v33, v42, a5, 1);
                  *(_DWORD *)(*(_QWORD *)&(*v11)[5].left + 40LL) = v29;
                  *(_DWORD *)(*(_QWORD *)&(*v11)[5].left + 32LL) = v30;
                  *(_DWORD *)(*(_QWORD *)&(*v11)[5].left + 44LL) = v31;
                  v9 = a4;
                  *(_DWORD *)(*(_QWORD *)&(*v11)[5].left + 36LL) = v32;
                }
              }
              else
              {
                p_right = 0LL;
              }
              if ( ((*v11)[2].top & 0xE0) != 0 && (!p_right || (*(_DWORD *)(p_right + 120) & 0x100) == 0) )
              {
                v43[0] = *(__m128i *)a3;
                XDCOBJ::vAccumulateTight(v11, (struct ECLIPOBJ *)v16, v43);
              }
              ++*((_DWORD *)a5 + 23);
              v34 = (__int64)&(*v11)[99];
              if ( (*((_DWORD *)a5 + 28) & 1) != 0 )
                return (unsigned int)(*(__int64 (__fastcall **)(char *, _QWORD, _QWORD, struct _RECTL *, _QWORD, struct ERECTL *, _QWORD, _QWORD, __int64, __int64, int))(*((_QWORD *)a5 + 6) + 2824LL))(
                                       (char *)a5 + 24,
                                       0LL,
                                       0LL,
                                       v44,
                                       0LL,
                                       a3,
                                       0LL,
                                       0LL,
                                       p_right,
                                       v34,
                                       v9);
              else
                return (unsigned int)((__int64 (__fastcall *)(char *, _QWORD, _QWORD, struct _RECTL *, _QWORD, struct ERECTL *, _QWORD, _QWORD, __int64, __int64, int))EngBitBlt)(
                                       (char *)a5 + 24,
                                       0LL,
                                       0LL,
                                       v44,
                                       0LL,
                                       a3,
                                       0LL,
                                       0LL,
                                       p_right,
                                       v34,
                                       v9);
            }
          }
        }
      }
    }
  }
  return v12;
}
