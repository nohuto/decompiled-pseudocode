/*
 * XREFs of ?bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z @ 0x1C02B1A4C
 * Callers:
 *     NtGdiExtFloodFill @ 0x1C02B25B0 (NtGdiExtFloodFill.c)
 * Callees:
 *     ?bPushMergeScrScan@STACKOBJ@@QEAAHXZ @ 0x1C02B1FC0 (-bPushMergeScrScan@STACKOBJ@@QEAAHXZ.c)
 *     ?bSearchAllSpans@FLOODBM@@QEAAHJJAEAJ0PEAEAEAVSTACKOBJ@@PEAVSCANLINE@@@Z @ 0x1C02B2120 (-bSearchAllSpans@FLOODBM@@QEAAHJJAEAJ0PEAEAEAVSTACKOBJ@@PEAVSCANLINE@@@Z.c)
 */

__int64 __fastcall FLOODBM::bExtendScanline(
        FLOODBM *this,
        struct STACKOBJ *a2,
        struct STACKOBJ *a3,
        int a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6)
{
  _DWORD *v6; // r10
  struct SCANLINE *v8; // rdx
  FLOODBM *v9; // rsi
  struct SCANLINE *v10; // r15
  _DWORD *v11; // r11
  _DWORD *v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // edi
  int v15; // r12d
  int v16; // r13d
  int v17; // esi
  int v18; // r14d
  __int64 v19; // rcx
  int v20; // ebx
  int v22; // [rsp+40h] [rbp-18h] BYREF
  int v23; // [rsp+44h] [rbp-14h]
  struct SCANLINE *v24; // [rsp+48h] [rbp-10h]
  int v26; // [rsp+A8h] [rbp+50h] BYREF
  STACKOBJ *v27; // [rsp+B0h] [rbp+58h]
  int v28; // [rsp+B8h] [rbp+60h] BYREF

  v27 = a3;
  v6 = (_DWORD *)*((_QWORD *)a3 + 2);
  v8 = (struct SCANLINE *)*((_QWORD *)a2 + 1);
  v9 = this;
  v10 = 0LL;
  v24 = v8;
  v11 = (_DWORD *)*((_QWORD *)a2 + 2);
  v6[1] = 0;
  v11[1] = 0;
  *v6 = *(_DWORD *)v8;
  *v11 = a4;
  v12 = *(_DWORD **)(*((_QWORD *)a2 + 1) + 16LL);
  if ( v12 && *v12 == a4 )
    v10 = *(struct SCANLINE **)(*((_QWORD *)a2 + 1) + 16LL);
  v13 = 0LL;
  v14 = 1;
  v23 = 0;
  if ( *((_DWORD *)v8 + 1) )
  {
    while ( 1 )
    {
      v15 = *((_DWORD *)v8 + 2 * v13 + 7);
      v16 = *((_DWORD *)v8 + 2 * v13 + 6);
      v14 = FLOODBM::bSearchAllSpans(v9, v16, v15, &v28, &v22, a6, a2, v10);
      if ( !v14 )
        break;
      v17 = v28;
      v18 = v22;
      if ( v28 != v22 )
      {
        while ( 1 )
        {
          if ( v17 >= v16 - 1 )
            goto LABEL_13;
          v26 = v16 - 1;
          v14 &= FLOODBM::bSearchAllSpans(this, v17, v16 - 1, &v28, &v26, a5, v27, v24);
          if ( !v14 )
            return v14;
          v16 = v28;
          if ( v28 == v26 || v28 >= v17 - 1 )
          {
            do
            {
LABEL_13:
              if ( v18 <= v15 + 1 )
                break;
              v14 &= FLOODBM::bSearchAllSpans(this, v15 + 1, v18, &v28, &v22, a5, v27, v24);
              if ( !v14 )
                return v14;
              v15 = v22;
              if ( v28 == v22 || v22 <= v18 + 1 )
                break;
              v14 &= FLOODBM::bSearchAllSpans(this, v18 + 1, v22, &v28, &v22, a6, a2, v10);
              if ( !v14 )
                return v14;
              v18 = v22;
            }
            while ( v28 != v22 );
            break;
          }
          v26 = v17 - 1;
          v14 &= FLOODBM::bSearchAllSpans(this, v28, v17 - 1, &v28, &v26, a6, a2, v10);
          if ( !v14 )
            return v14;
          v17 = v28;
          if ( v28 == v26 )
            goto LABEL_13;
        }
      }
      v8 = v24;
      v13 = (unsigned int)(v23 + 1);
      v9 = this;
      v23 = v13;
      if ( (unsigned int)v13 >= *((_DWORD *)v24 + 1) )
        goto LABEL_20;
    }
  }
  else
  {
LABEL_20:
    v19 = *((_QWORD *)a2 + 1);
    *((_DWORD *)a2 + 1) -= *(_DWORD *)(v19 + 8);
    *((_QWORD *)a2 + 1) = *(_QWORD *)(v19 + 16);
    v20 = STACKOBJ::bPushMergeScrScan(a2);
    v14 &= v20 & STACKOBJ::bPushMergeScrScan(v27);
  }
  return v14;
}
