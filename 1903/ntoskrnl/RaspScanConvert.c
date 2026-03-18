/*
 * XREFs of RaspScanConvert @ 0x140183810
 * Callers:
 *     RaspRasterize @ 0x140183550 (RaspRasterize.c)
 * Callees:
 *     BgpFmRoundUp @ 0x140178FC0 (BgpFmRoundUp.c)
 *     RaspRectangleDestroy @ 0x14018353C (RaspRectangleDestroy.c)
 *     RaspDestroySegmentList @ 0x14018364C (RaspDestroySegmentList.c)
 *     RaspFreeMemory @ 0x140183714 (RaspFreeMemory.c)
 *     RaspTestIntersection @ 0x140183C70 (RaspTestIntersection.c)
 *     RaspRectangleCreate @ 0x14018407C (RaspRectangleCreate.c)
 *     BgpGxInitializeRectangle @ 0x1401840F0 (BgpGxInitializeRectangle.c)
 *     RaspCreateSegmentList @ 0x140184834 (RaspCreateSegmentList.c)
 *     RaspAllocateMemory @ 0x140184C04 (RaspAllocateMemory.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall RaspScanConvert(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        __int64 **a6,
        int *a7,
        _QWORD *a8)
{
  bool v10; // bp
  _QWORD *v11; // r13
  int SegmentList; // eax
  __int64 v13; // r15
  int v14; // ebx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // r9d
  int v19; // r11d
  int v20; // r8d
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // r10d
  int v24; // r9d
  int v25; // eax
  int v26; // ecx
  int v27; // esi
  int v28; // r12d
  int v29; // esi
  int v30; // r14d
  int v31; // eax
  __int64 *v32; // rdi
  __int64 *Memory; // rbp
  unsigned int v34; // edi
  __int64 v35; // rbx
  int v36; // r13d
  size_t v37; // rcx
  unsigned int v38; // r12d
  _BYTE *v39; // rsi
  signed int v40; // r10d
  __int64 v41; // rdx
  _BYTE *v42; // r9
  int i; // r8d
  _BYTE *v44; // rax
  char v45; // cl
  __int64 v47; // rax
  int v48; // r8d
  int v49; // edx
  int v50; // r9d
  int v51; // r8d
  __int64 v52; // rdx
  signed int v53; // r11d
  signed int v54; // eax
  int v55; // ecx
  int v56; // eax
  int v57; // ecx
  signed int v58; // [rsp+30h] [rbp-68h] BYREF
  signed int v59; // [rsp+34h] [rbp-64h] BYREF
  int v60; // [rsp+38h] [rbp-60h]
  int v61; // [rsp+3Ch] [rbp-5Ch]
  __int64 v62; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v63; // [rsp+48h] [rbp-50h]
  _DWORD v64[4]; // [rsp+50h] [rbp-48h] BYREF
  __int64 *v65; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v66; // [rsp+B0h] [rbp+18h] BYREF
  int v67; // [rsp+B8h] [rbp+20h]

  v67 = a4;
  v66 = a3;
  v65 = 0LL;
  v62 = 0LL;
  v10 = (a5 & 1) != 0;
  v11 = a8;
  SegmentList = RaspCreateSegmentList(
                  a1,
                  a2,
                  *(unsigned __int16 *)(a1 + 24),
                  (unsigned int)&v62,
                  (__int64)&v66,
                  (__int64)a8);
  v13 = v66;
  v14 = SegmentList;
  if ( SegmentList >= 0 )
  {
    v15 = BgpFmRoundUp(*(_DWORD *)(a1 + 14));
    v16 = *(_DWORD *)(a1 + 6);
    v67 = v15;
    v17 = BgpFmRoundUp(v16);
    v20 = v19 - v17 + 1;
    if ( v19 == v17 )
    {
      v55 = *(_DWORD *)(17LL * (v18 + 1) + a2 + 4);
      v56 = v55 >> 6;
      if ( v55 < 0 )
        v56 |= 0xFC000000;
      v20 = v56 + 1;
      if ( (v55 & 0x20) == 0 )
        v20 = v56;
      v67 = v20;
    }
    v21 = 17LL * (v18 + 1);
    v22 = 17LL * v18;
    v23 = *(_DWORD *)(v22 + a2);
    v24 = *(_DWORD *)(v22 + a2 + 8);
    v25 = *(_DWORD *)(v21 + a2) + *(_DWORD *)(v21 + a2 + 8) - v23 - v24;
    v26 = v25 >> 6;
    if ( v25 < 0 )
      v26 |= 0xFC000000;
    v27 = v26 + 1;
    v28 = 4 * v20;
    if ( (v25 & 0x20) == 0 )
      v27 = v26;
    v61 = 4 * v20;
    v29 = 4 * v27;
    v30 = v23 + v24;
    v60 = v29;
    v64[1] = 4 * v20;
    v64[0] = v29;
    v64[2] = v29;
    if ( v10 )
    {
      v32 = qword_140A66880;
      v63 = qword_140A66880;
      v14 = BgpGxInitializeRectangle(v64, 1LL, qword_140A66880, 3140LL);
      if ( v14 < 0 )
        goto LABEL_31;
    }
    else
    {
      v31 = RaspRectangleCreate(v64, 1LL, &v65, v11);
      v32 = v65;
      v14 = v31;
      v63 = v65;
    }
    if ( v14 >= 0 )
    {
      memset((void *)v32[3], 0, *((unsigned int *)v32 + 3));
      if ( !v62 )
      {
        v57 = v67;
        *a6 = v32;
        *a7 = v57;
        return 0LL;
      }
      if ( v10 )
      {
        if ( v29 <= 104 )
        {
          Memory = qword_140A666E0;
          goto LABEL_13;
        }
      }
      else
      {
        Memory = (__int64 *)RaspAllocateMemory(4LL * v29);
        if ( Memory )
        {
LABEL_13:
          v34 = 0;
          v35 = v29;
          v36 = 0;
          a5 = 0;
          if ( v28 > 0 )
          {
            v37 = 4LL * v29;
            LODWORD(v65) = v67 << 6;
            while ( 1 )
            {
              memset(Memory, 0, v37);
              v38 = (_DWORD)v65 + -16 * (v36 & 3) - ((unsigned int)v36 >> 2 << 6);
              if ( (_DWORD)v13 )
                break;
LABEL_20:
              v41 = 0LL;
              v42 = (_BYTE *)(v63[3] + ((unsigned __int64)v34 >> 3));
              for ( i = 128 >> (v34 & 7); v41 < v35; v42 = v44 )
              {
                if ( *((_DWORD *)Memory + v41) )
                  *v42 |= i;
                LOBYTE(i) = (unsigned __int8)i >> 1;
                v44 = v42 + 1;
                v45 = i;
                if ( !(_BYTE)i )
                  LOBYTE(i) = 0x80;
                ++v41;
                if ( v45 )
                  v44 = v42;
              }
              v34 += v29;
              v37 = 4 * v35;
              ++v36;
              a5 = v34;
              if ( v36 >= v61 )
                goto LABEL_29;
            }
            v39 = (_BYTE *)(v62 + 24);
            while ( 1 )
            {
              RaspTestIntersection(v39 - 24, v38, &v58, &v59);
              v40 = v58;
              if ( v58 != 0x7FFFFFFF )
                break;
LABEL_18:
              v39 += 25;
              if ( !--v13 )
              {
                v34 = a5;
                v13 = v66;
                v29 = v60;
                goto LABEL_20;
              }
            }
            v47 = *((_QWORD *)v39 - 1);
            v48 = *(_DWORD *)(v47 + 12);
            v49 = v48
                + *(_DWORD *)(v47 + 4)
                - *(_DWORD *)(*((_QWORD *)v39 - 3) + 12LL)
                - *(_DWORD *)(*((_QWORD *)v39 - 3) + 4LL);
            if ( !v49 )
            {
              if ( *v39 == 1 )
                goto LABEL_58;
              v49 = v48
                  + *(_DWORD *)(v47 + 4)
                  - *(_DWORD *)(*((_QWORD *)v39 - 2) + 12LL)
                  - *(_DWORD *)(*((_QWORD *)v39 - 2) + 4LL);
            }
            if ( v49 > 0 )
            {
              v50 = 1;
LABEL_37:
              v51 = 0;
              v52 = 0LL;
              if ( v35 <= 0 )
                goto LABEL_18;
              v53 = v59;
              while ( 1 )
              {
                v54 = v30 + ((16 * v51) & 0xFFFFFFC0) + 16 * (v51 & 3);
                if ( *v39 == 1 )
                  break;
                if ( v53 != 0x7FFFFFFF )
                {
                  if ( v54 < v40 || v54 > v53 )
                    goto LABEL_43;
LABEL_42:
                  *((_DWORD *)Memory + v52) += v50;
                  goto LABEL_43;
                }
                if ( v54 <= v40 )
                  goto LABEL_42;
LABEL_43:
                ++v51;
                if ( ++v52 >= v35 )
                  goto LABEL_18;
              }
              if ( v54 > v40 )
                goto LABEL_43;
              goto LABEL_42;
            }
            if ( v49 < 0 )
            {
              v50 = -1;
              goto LABEL_37;
            }
LABEL_58:
            v50 = 0;
            goto LABEL_37;
          }
LABEL_29:
          v14 = 0;
          *a6 = v63;
          *a7 = v67;
          v11 = a8;
          if ( Memory != qword_140A666E0 )
            RaspFreeMemory((__int64)Memory, a8);
          goto LABEL_31;
        }
      }
      v14 = -1073741670;
    }
    if ( v32 )
      RaspRectangleDestroy((__int64)v32, (__int64)v11);
  }
LABEL_31:
  if ( v62 )
    RaspDestroySegmentList(v62, v13, (__int64)v11);
  return (unsigned int)v14;
}
