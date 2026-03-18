/*
 * XREFs of cjFillPolygon @ 0x1C021D6BC
 * Callers:
 *     lQueryTTOutline @ 0x1C021DB14 (lQueryTTOutline.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall cjFillPolygon(__int64 a1, int a2, _WORD *a3, unsigned int a4)
{
  unsigned __int16 v4; // r14
  int v5; // edi
  __int64 v6; // r15
  int v7; // r10d
  __int64 v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rsi
  _WORD *v11; // rbx
  unsigned __int64 v12; // rsi
  unsigned __int16 v13; // bp
  __int64 v14; // r12
  void *v16; // r10
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int16 v19; // di
  unsigned __int16 v20; // bp
  __int64 v21; // rcx
  _DWORD *v22; // r12
  unsigned int *v23; // r15
  _QWORD *v24; // r11
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rdx
  int v28; // eax
  _WORD *v29; // r14
  __int64 v30; // rcx
  bool v31; // si
  _WORD *v32; // r15
  int v33; // [rsp+30h] [rbp-88h]
  __int16 v34; // [rsp+34h] [rbp-84h]
  unsigned int v35; // [rsp+38h] [rbp-80h]
  unsigned __int16 v36; // [rsp+3Ch] [rbp-7Ch]
  unsigned int *v37; // [rsp+40h] [rbp-78h]
  __int64 v38; // [rsp+48h] [rbp-70h]
  void (__fastcall *v39)(_WORD *, _QWORD, _QWORD, _QWORD, int); // [rsp+50h] [rbp-68h]
  _QWORD *v40; // [rsp+58h] [rbp-60h]
  unsigned __int64 v41; // [rsp+60h] [rbp-58h]
  __int64 v42; // [rsp+68h] [rbp-50h]
  _DWORD *v43; // [rsp+70h] [rbp-48h]
  __int64 v44; // [rsp+78h] [rbp-40h]
  int v46; // [rsp+D0h] [rbp+18h]

  v46 = (int)a3;
  v4 = 0;
  v5 = (int)a3;
  v6 = a1;
  if ( a3 && a4 )
  {
    v7 = 0;
    v8 = 0LL;
  }
  else
  {
    v7 = 1;
    v8 = 1LL;
  }
  v9 = *(_QWORD *)(a1 + 184);
  v10 = 0xFFFFFFFFLL;
  v43 = 0LL;
  v11 = a3;
  v40 = 0LL;
  if ( !v7 )
    v10 = a4;
  v12 = (unsigned __int64)a3 + v10;
  v13 = *(_WORD *)(v9 + 118);
  v14 = *(_QWORD *)(v9 + 144);
  v38 = *(_QWORD *)(v9 + 152);
  v42 = *(_QWORD *)(v9 + 136);
  v36 = v13;
  v44 = v14;
  v41 = v12;
  if ( !*(_WORD *)(v9 + 116) )
    return 0LL;
  if ( v7 )
  {
    v16 = Scale_None;
  }
  else
  {
    v16 = Scale_16DOT16;
    if ( !a2 )
      v16 = Scale_28DOT4;
  }
  v39 = (void (__fastcall *)(_WORD *, _QWORD, _QWORD, _QWORD, int))v16;
  v34 = 0;
  v17 = (unsigned __int16)(*(_WORD *)(v14 + 2LL * v13 - 2) + 1);
  v35 = *(_DWORD *)(*(_QWORD *)(v9 + 120) + 4 * v17);
  v33 = *(_DWORD *)(*(_QWORD *)(v9 + 128) + 4 * v17);
  if ( v13 )
  {
    v18 = *(_QWORD *)(v9 + 136);
    while ( 1 )
    {
      v19 = *(_WORD *)(v18 + 2LL * v4);
      v20 = *(_WORD *)(v14 + 2LL * v4);
      if ( v19 != v20 )
      {
        v21 = *(_QWORD *)(v6 + 184);
        v22 = (_DWORD *)(*(_QWORD *)(v21 + 120) + 4LL * v19);
        v23 = (unsigned int *)(*(_QWORD *)(v21 + 128) + 4LL * v19);
        v37 = v23;
        if ( v8 )
        {
          v24 = v40;
        }
        else
        {
          if ( v12 < (unsigned __int64)(v11 + 8) )
            return 0xFFFFFFFFLL;
          v24 = v11 + 4;
          v43 = v11;
          v40 = v11 + 4;
          *((_DWORD *)v11 + 1) = 24;
        }
        v11 += 8;
        if ( (*(_BYTE *)(v19 + v38) & 1) != 0 )
        {
          ((void (__fastcall *)(_QWORD *, _QWORD, _QWORD))v16)(v24, (unsigned int)*v22++, *v23++);
          v37 = v23;
          ++v19;
        }
        else
        {
          v25 = v20 - v19;
          v26 = v23[v25];
          v27 = (unsigned int)v22[v25];
          if ( (*(_BYTE *)(v20 + v38) & 1) == 0 )
          {
            v26 = (unsigned int)((int)(*v23 + v26) >> 1);
            v27 = (unsigned int)((*v22 + (int)v27) >> 1);
          }
          ((void (__fastcall *)(_QWORD *, __int64, __int64))v16)(v24, v27, v26);
        }
        v28 = (int)v11;
        if ( v19 <= v20 )
        {
          v29 = v11;
          while ( v12 >= (unsigned __int64)(v29 + 6) )
          {
            v30 = v38;
            v11 = v29 + 2;
            v31 = (*(_BYTE *)(v19 + v38) & 1) == 0;
            if ( !v8 )
              *v29 = v31 + 1;
            if ( v19 <= v20 )
            {
              v32 = v29 + 6;
              do
              {
                if ( (*(_BYTE *)(v19 + v30) & 1) == v31 )
                  break;
                if ( v41 < (unsigned __int64)v32 )
                  return 0xFFFFFFFFLL;
                v39(v11, (unsigned int)*v22, *v37++, v35, v33);
                v30 = v38;
                ++v19;
                v11 += 4;
                v32 += 4;
                ++v22;
              }
              while ( v19 <= v20 );
              v23 = v37;
            }
            if ( v31 )
            {
              if ( v41 < (unsigned __int64)(v11 + 4) )
                return 0xFFFFFFFFLL;
              if ( v19 > v20 )
              {
                if ( !v8 )
                  *(_QWORD *)v11 = *v40;
              }
              else
              {
                v39(v11, (unsigned int)*v22, *v23++, v35, v33);
                ++v19;
                v37 = v23;
                ++v22;
              }
              v11 += 4;
            }
            if ( !v8 )
              v29[1] = ((char *)v11 - (char *)v29 - 4) >> 3;
            v12 = v41;
            v29 = v11;
            v28 = (int)v11;
            if ( v19 > v20 )
            {
              v4 = v34;
              goto LABEL_48;
            }
          }
          return 0xFFFFFFFFLL;
        }
LABEL_48:
        v14 = v44;
        v18 = v42;
        if ( !v8 )
          *v43 = v28 - (_DWORD)v43;
        v6 = a1;
      }
      v34 = ++v4;
      if ( v4 >= v36 )
        break;
      v16 = v39;
    }
    v5 = v46;
  }
  return (unsigned int)((_DWORD)v11 - v5);
}
