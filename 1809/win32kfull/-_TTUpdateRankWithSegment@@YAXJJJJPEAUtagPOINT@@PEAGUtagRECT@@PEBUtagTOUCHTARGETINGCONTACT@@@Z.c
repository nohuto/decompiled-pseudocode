/*
 * XREFs of ?_TTUpdateRankWithSegment@@YAXJJJJPEAUtagPOINT@@PEAGUtagRECT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1C0242C98
 * Callers:
 *     TouchTargetingRankForRect @ 0x1C0243640 (TouchTargetingRankForRect.c)
 * Callees:
 *     TouchTargetingIntersectSegment @ 0x1C0243424 (TouchTargetingIntersectSegment.c)
 *     TouchTargetingRank @ 0x1C02435C8 (TouchTargetingRank.c)
 *     TouchTargetingSnapToSegment @ 0x1C0243EE8 (TouchTargetingSnapToSegment.c)
 */

void __fastcall _TTUpdateRankWithSegment(
        signed int a1,
        signed int a2,
        signed int a3,
        signed int a4,
        struct tagPOINT *a5,
        unsigned __int16 *a6,
        struct tagRECT *a7,
        const struct tagTOUCHTARGETINGCONTACT *a8)
{
  const struct tagTOUCHTARGETINGCONTACT *v8; // rdi
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  int v15; // r8d
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  int v18; // edx
  int v19; // r8d
  int v20; // r8d
  int v21; // edx
  int v22; // edx
  int v23; // r8d
  __int64 v24; // rbx
  LONG v25; // r15d
  unsigned __int16 v26; // r14
  int v27; // eax
  __int64 v28; // rcx
  unsigned __int16 v29; // ax
  _QWORD v30[2]; // [rsp+30h] [rbp-20h] BYREF
  __int128 v31; // [rsp+40h] [rbp-10h] BYREF

  v8 = a8;
  v9 = a1;
  if ( a1 <= a3 )
    v9 = a3;
  if ( v9 >= *(_DWORD *)a8 )
  {
    v10 = a1;
    if ( a1 >= a3 )
      v10 = a3;
    if ( v10 < *((_DWORD *)a8 + 2) )
    {
      v11 = a2;
      if ( a2 <= a4 )
        v11 = a4;
      if ( v11 >= *((_DWORD *)a8 + 1) )
      {
        v12 = a2;
        if ( a2 >= a4 )
          v12 = a4;
        if ( v12 < *((_DWORD *)a8 + 3) )
        {
          v30[1] = __PAIR64__(a4, a3);
          *(_QWORD *)&v31 = __PAIR64__(a2, a1);
          if ( (unsigned int)TouchTargetingIntersectSegment(a1, a3, (_DWORD)a8, (unsigned int)v30, (__int64)&a8) )
          {
            v13 = (int)a8;
            v14 = v30[0];
            if ( LODWORD(v30[0]) == (_DWORD)a8 )
            {
              v15 = *((_DWORD *)v8 + 1);
              v16 = HIDWORD(v30[0]);
              v17 = (unsigned __int64)a8 >> 32;
              LODWORD(a8) = v30[0];
              v18 = v17;
              if ( SHIDWORD(v30[0]) < (int)v17 )
                v18 = HIDWORD(v30[0]);
              if ( v18 <= v15 )
              {
                HIDWORD(v30[0]) = v15;
              }
              else if ( SHIDWORD(v30[0]) >= (int)v17 )
              {
                HIDWORD(v30[0]) = v17;
              }
              v19 = v17;
              if ( (int)v16 > (int)v17 )
                v19 = v16;
              if ( v19 >= *((_DWORD *)v8 + 3) - 1 )
              {
                HIDWORD(a8) = *((_DWORD *)v8 + 3) - 1;
              }
              else
              {
                if ( (int)v16 > (int)v17 )
                  LODWORD(v17) = v16;
                HIDWORD(a8) = v17;
              }
            }
            else
            {
              v20 = *(_DWORD *)v8;
              HIDWORD(a8) = HIDWORD(v30[0]);
              v21 = (int)a8;
              if ( SLODWORD(v30[0]) < (int)a8 )
                v21 = v30[0];
              if ( v21 <= v20 )
              {
                LODWORD(v30[0]) = v20;
              }
              else
              {
                v22 = (int)a8;
                if ( SLODWORD(v30[0]) < (int)a8 )
                  v22 = v30[0];
                LODWORD(v30[0]) = v22;
              }
              v23 = (int)a8;
              if ( v14 > (int)a8 )
                v23 = v14;
              if ( v23 >= *((_DWORD *)v8 + 2) - 1 )
              {
                LODWORD(a8) = *((_DWORD *)v8 + 2) - 1;
              }
              else
              {
                if ( v14 > (int)a8 )
                  v13 = v14;
                LODWORD(a8) = v13;
              }
            }
            TouchTargetingSnapToSegment(v30[0], a8, *((_QWORD *)v8 + 4), &v31);
            v24 = v31;
            v25 = DWORD1(v31);
            v26 = *a6;
            if ( *a6 == 4094 || (_QWORD)v31 != *a5 )
            {
              v27 = (a7->left + a7->right) / 2;
              v31 = (__int128)*a7;
              LODWORD(a8) = v27;
              v28 = *((_QWORD *)v8 + 4);
              HIDWORD(a8) = (a7->top + a7->bottom) / 2;
              v29 = TouchTargetingRank(v28, v24, &v31, a8);
              if ( v26 == 4094 || v29 < v26 )
              {
                *a6 = v29;
                a5->x = v24;
                a5->y = v25;
              }
            }
          }
        }
      }
    }
  }
}
