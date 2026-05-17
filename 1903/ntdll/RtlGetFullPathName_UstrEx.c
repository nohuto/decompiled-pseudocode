/*
 * XREFs of RtlGetFullPathName_UstrEx @ 0x180028E40
 * Callers:
 *     RtlDosSearchPath_Ustr @ 0x180025850 (RtlDosSearchPath_Ustr.c)
 *     sub_180027528 @ 0x180027528 (sub_180027528.c)
 * Callees:
 *     sub_180027B70 @ 0x180027B70 (sub_180027B70.c)
 *     sub_18006D6B8 @ 0x18006D6B8 (sub_18006D6B8.c)
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 */

__int64 __fastcall RtlGetFullPathName_UstrEx(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 *a5,
        _BYTE *a6,
        _DWORD *a7,
        _QWORD *a8)
{
  __int64 v11; // r12
  _QWORD *v12; // r13
  __int64 *v13; // r15
  _WORD *v14; // rsi
  unsigned __int16 v15; // bx
  _WORD *v16; // r8
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rbx
  unsigned int v20; // ebx
  unsigned __int16 v22; // bx
  __int64 v23; // r13
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v30; // [rsp+78h] [rbp+10h] BYREF
  __int64 v31; // [rsp+88h] [rbp+20h]

  v30 = 0LL;
  v11 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  v12 = a8;
  if ( a8 )
    *a8 = 0LL;
  v13 = a5;
  if ( a5 )
    *a5 = 0LL;
  v14 = 0LL;
  LODWORD(a5) = *a7;
  if ( a2 )
  {
    if ( a3 && !a4 )
    {
      v20 = -1073741811;
      goto LABEL_22;
    }
    v15 = *(_WORD *)(a2 + 2);
    v16 = *(_WORD **)(a2 + 8);
    v31 = v15;
LABEL_11:
    LODWORD(a8) = v15;
    v17 = sub_180027B70(a1, v15, v16, &v30, a6, (__int64)&a5);
    LOWORD(v19) = v17;
    if ( v17 )
    {
      if ( a2 && v17 < (unsigned int)a8 )
      {
        *(_WORD *)a2 = v17;
        if ( v13 )
        {
          if ( v30 )
            v25 = (v30 - *(_QWORD *)(a2 + 8)) >> 1;
          else
            v25 = 0LL;
          *v13 = v25;
        }
        if ( a4 )
          *a4 = a2;
        v20 = 0;
      }
      else if ( a3 )
      {
        if ( v11 && v17 < (unsigned int)a8 )
        {
          *(_WORD *)(a3 + 2) = v31;
          *(_WORD *)a3 = v17;
          *(_WORD *)(v11 + 2 * ((unsigned __int64)v17 >> 1)) = 0;
          if ( v13 )
          {
            if ( v30 )
              v27 = (v30 - v11) >> 1;
            else
              v27 = 0LL;
            *v13 = v27;
          }
          if ( a4 )
            *a4 = a3;
          *(_QWORD *)(a3 + 8) = v11;
          v20 = 0;
          goto LABEL_22;
        }
        if ( (unsigned __int64)v17 + 2 > 0xFFFE )
        {
LABEL_56:
          v20 = -1073741562;
        }
        else
        {
          while ( 1 )
          {
            v22 = v19 + 2;
            v23 = v22;
            v14 = (_WORD *)sub_18006D6B8(v22, v18);
            if ( !v14 )
            {
              v20 = -1073741801;
              goto LABEL_18;
            }
            v24 = sub_180027B70(a1, (unsigned int)v22 - 2, v14, &v30, a6, (__int64)&a5);
            v19 = v24;
            if ( !v24 )
              goto LABEL_47;
            if ( v24 <= (unsigned __int64)(v23 - 2) )
              break;
            RtlDeleteBoundaryDescriptor(v14);
            if ( (unsigned __int64)(v19 + 2) > 0xFFFE )
              goto LABEL_56;
          }
          if ( v13 )
          {
            if ( v30 )
              v28 = (v30 - (__int64)v14) >> 1;
            else
              v28 = 0LL;
            *v13 = v28;
          }
          v14[(unsigned __int64)(unsigned int)v19 >> 1] = 0;
          *(_QWORD *)(a3 + 8) = v14;
          *(_WORD *)a3 = v19;
          *(_WORD *)(a3 + 2) = v23;
          if ( a4 )
            *a4 = a3;
          v20 = 0;
        }
        v14 = 0LL;
      }
      else
      {
        if ( v12 )
          *v12 = v17;
        v20 = -1073741789;
      }
    }
    else
    {
LABEL_47:
      v20 = -1073741773;
    }
LABEL_18:
    if ( v11 )
      RtlDeleteBoundaryDescriptor(v11);
    if ( v14 )
      RtlDeleteBoundaryDescriptor(v14);
LABEL_22:
    *a7 = (_DWORD)a5;
    return v20;
  }
  v15 = 520;
  v31 = 520LL;
  v26 = sub_18006D6B8(520LL, 0LL);
  v11 = v26;
  if ( v26 )
  {
    v16 = (_WORD *)v26;
    goto LABEL_11;
  }
  return 3221225495LL;
}
