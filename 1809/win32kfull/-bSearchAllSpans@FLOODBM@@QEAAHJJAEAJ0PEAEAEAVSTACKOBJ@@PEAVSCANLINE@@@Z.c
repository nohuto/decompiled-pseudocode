/*
 * XREFs of ?bSearchAllSpans@FLOODBM@@QEAAHJJAEAJ0PEAEAEAVSTACKOBJ@@PEAVSCANLINE@@@Z @ 0x1C01428B0
 * Callers:
 *     ?bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z @ 0x1C01425F4 (-bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z.c)
 * Callees:
 *     ?vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z @ 0x1C01427C4 (-vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z.c)
 *     ?iColorGet@FLOODBM@@QEAAKJ@Z @ 0x1C0142AE8 (-iColorGet@FLOODBM@@QEAAKJ@Z.c)
 *     ?bExpandScanline@STACKOBJ@@QEAAHKK@Z @ 0x1C0142ED8 (-bExpandScanline@STACKOBJ@@QEAAHKK@Z.c)
 */

__int64 __fastcall FLOODBM::bSearchAllSpans(
        FLOODBM *this,
        int a2,
        int a3,
        int *a4,
        int *a5,
        unsigned __int8 *a6,
        struct STACKOBJ *a7,
        struct SCANLINE *a8)
{
  unsigned int v8; // ebx
  int v10; // edi
  unsigned int *v12; // rsi
  __int64 v13; // r13
  unsigned int v14; // r12d
  unsigned int v15; // eax
  int v16; // r10d
  STACKOBJ *v17; // r11
  bool v18; // zf
  unsigned int v19; // edx
  unsigned int v20; // ecx
  __int64 v21; // rax
  unsigned int v22; // r8d
  int *v24; // rax
  unsigned int v25; // edx
  unsigned int v26; // r11d
  unsigned int *v27; // r9
  signed int v28; // r10d
  int *v29; // rdi
  int v30; // ecx
  __int64 v31; // rax
  unsigned int v32; // edx
  unsigned int v33; // ecx
  int *v34; // rax
  __int64 v35; // rcx
  int *v36; // [rsp+68h] [rbp+20h]

  v36 = a4;
  v8 = 0;
  v10 = a2;
  v12 = (unsigned int *)*((_QWORD *)a7 + 2);
  v13 = v12[1];
  *((_QWORD *)this + 3) = a6;
  v14 = 8 * v13 + 24;
  if ( a2 < a3 )
  {
    while ( 1 )
    {
      v15 = FLOODBM::iColorGet(this, v10);
      if ( *((_DWORD *)this + 8) )
      {
        while ( v15 != v16 )
        {
          v18 = ++v10 == a3;
          if ( v10 >= a3 )
            goto LABEL_7;
          v15 = FLOODBM::iColorGet(this, v10);
        }
      }
      else
      {
        while ( v15 == v16 )
        {
          v18 = ++v10 == a3;
          if ( v10 >= a3 )
            goto LABEL_7;
          v15 = FLOODBM::iColorGet(this, v10);
        }
      }
      v18 = v10 == a3;
LABEL_7:
      if ( v18 )
      {
LABEL_13:
        a4 = v36;
        break;
      }
      if ( a8 )
      {
        v32 = *((_DWORD *)a8 + 1);
        v33 = 0;
        if ( v32 )
        {
          v34 = (int *)((char *)a8 + 28);
          while ( v10 >= *(v34 - 1) )
          {
            if ( v10 < *v34 )
            {
              v10 = *((_DWORD *)a8 + 2 * v33 + 7);
              goto LABEL_12;
            }
            ++v33;
            v34 += 2;
            if ( v33 >= v32 )
              break;
          }
        }
      }
      v19 = v12[1];
      v20 = 0;
      if ( v19 )
      {
        v24 = (int *)(v12 + 7);
        while ( v10 < *(v24 - 1) || v10 >= *v24 )
        {
          ++v20;
          v24 += 2;
          if ( v20 >= v19 )
            goto LABEL_10;
        }
        v10 = v12[2 * v20 + 7];
      }
      else
      {
LABEL_10:
        v14 += 8;
        if ( v14 > v12[2] )
        {
          if ( !(unsigned int)STACKOBJ::bExpandScanline(v17, v14, 0) )
            return 0LL;
          v12 = (unsigned int *)*((_QWORD *)a7 + 2);
        }
        FLOODBM::vFindExtent(this, v10, (int *)&v12[2 * v12[1] + 6], (int *)&v12[2 * v12[1] + 7]);
        v21 = v12[1];
        v10 = v12[2 * v21 + 7] + 1;
        v12[1] = v21 + 1;
      }
LABEL_12:
      if ( v10 >= a3 )
        goto LABEL_13;
    }
  }
  v22 = v12[1];
  if ( (_DWORD)v13 == v22 )
  {
    *a5 = 0;
    *a4 = 0;
  }
  else
  {
    *a4 = v12[2 * v13 + 6];
    *a5 = v12[2 * v22 + 5];
    if ( v22 != 1 )
    {
      do
      {
        v25 = v8;
        v26 = v8;
        v27 = &v12[2 * v8];
        v28 = v27[6];
        if ( v8 < v22 )
        {
          v29 = (int *)(v27 + 6);
          do
          {
            v30 = *v29;
            v31 = v26;
            v29 += 2;
            if ( v30 >= v28 )
              v31 = v25;
            ++v26;
            v25 = v31;
            if ( v30 >= v28 )
              v30 = v28;
            v28 = v30;
          }
          while ( v26 < v22 );
          if ( v8 != (_DWORD)v31 )
          {
            v35 = *((_QWORD *)v27 + 3);
            *((_QWORD *)v27 + 3) = *(_QWORD *)&v12[2 * v31 + 6];
            *(_QWORD *)&v12[2 * (unsigned int)v31 + 6] = v35;
          }
        }
        v22 = v12[1];
        ++v8;
      }
      while ( v8 < v22 - 1 );
    }
  }
  return 1LL;
}
