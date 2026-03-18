/*
 * XREFs of fsg_Embold @ 0x1C02BCCE8
 * Callers:
 *     fsg_GridFit @ 0x1C02BD8F4 (fsg_GridFit.c)
 * Callees:
 *     EmboldPoint @ 0x1C02BB384 (EmboldPoint.c)
 */

__int64 __fastcall fsg_Embold(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  unsigned __int16 v5; // ax
  int v6; // r15d
  __int64 v7; // r12
  __int16 v10; // dx
  __int64 v11; // r9
  int v12; // r10d
  __int16 v13; // dx
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 result; // rax
  int v17; // r10d
  unsigned __int16 v18; // ax
  unsigned int v19; // r13d
  int v20; // eax
  int v21; // r9d
  int v22; // r14d
  int v23; // r13d
  __int64 v24; // rbx
  __int64 v25; // r10
  unsigned int v26; // r11d
  __int64 v27; // rdx
  __int64 v28; // rdi
  __int64 v29; // rax
  int v30; // r8d
  __int64 v31; // rax
  unsigned int v32; // ecx
  unsigned int v33; // r9d
  int v34; // r8d
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // [rsp+70h] [rbp-21h]
  BOOL v38; // [rsp+78h] [rbp-19h]
  int v39; // [rsp+7Ch] [rbp-15h]
  unsigned int v40; // [rsp+80h] [rbp-11h]
  __int64 v41; // [rsp+88h] [rbp-9h]
  __int64 v42; // [rsp+90h] [rbp-1h]
  int v43; // [rsp+9Ch] [rbp+Bh]
  int v44; // [rsp+A0h] [rbp+Fh]
  __int64 v45; // [rsp+A8h] [rbp+17h]
  int v46; // [rsp+F0h] [rbp+5Fh]
  int v48; // [rsp+108h] [rbp+77h]
  unsigned int v49; // [rsp+110h] [rbp+7Fh]

  v5 = *(_WORD *)(a2 + 446);
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 16);
  v44 = 0;
  v38 = v5 == 1;
  if ( a5 )
    v38 = v5 <= 1u;
  v10 = *(_WORD *)(*(_QWORD *)(v7 + 64) + 2LL * (*(__int16 *)(v7 + 80) - 1));
  v11 = (unsigned __int16)(v10 + 2);
  v12 = *(_DWORD *)(*(_QWORD *)v7 + 4 * v11);
  if ( v12 != *(_DWORD *)(*(_QWORD *)v7 + 4LL * (unsigned __int16)(v10 + 1)) )
    *(_DWORD *)(*(_QWORD *)v7 + 4 * v11) = v12 + 64;
  v13 = *(_WORD *)(*(_QWORD *)(v7 + 64) + 2LL * (*(__int16 *)(v7 + 80) - 1));
  v14 = *(_QWORD *)(v7 + 8);
  v15 = (unsigned __int16)(v13 + 4);
  result = (unsigned __int16)(v13 + 3);
  v17 = *(_DWORD *)(v14 + 4 * v15);
  if ( v17 != *(_DWORD *)(v14 + 4 * result) )
  {
    result = (unsigned int)(v17 - 64);
    *(_DWORD *)(v14 + 4 * v15) = result;
  }
  if ( !a4 )
  {
    v18 = *(_WORD *)(a2 + 446);
    if ( a3 )
    {
      v19 = v18;
      v20 = *(unsigned __int16 *)(a2 + 444) >> 1;
      v21 = (*(unsigned __int16 *)(a2 + 444) - v20) << 6;
      v22 = v19 >> 1 << 6;
      result = (unsigned int)(v20 << 6);
      v23 = (v19 - (v19 >> 1)) << 6;
    }
    else
    {
      v22 = 32 * v18;
      result = 32 * (unsigned int)*(unsigned __int16 *)(a2 + 444);
      v23 = v22;
      v21 = 32 * *(unsigned __int16 *)(a2 + 444);
    }
    v48 = v21;
    v46 = result;
    if ( *(__int16 *)(v7 + 80) > 0 )
    {
      v24 = 0LL;
      v45 = 0LL;
      do
      {
        v25 = (unsigned int)*(__int16 *)(*(_QWORD *)(v7 + 56) + 2 * v24);
        v40 = *(__int16 *)(*(_QWORD *)(v7 + 64) + 2 * v24);
        v26 = v40;
        if ( v40 - (unsigned int)v25 >= 2 )
        {
          v27 = *(_QWORD *)(v7 + 8);
          v39 = *(_BYTE *)(*(_QWORD *)(v7 + 88) + v24) & 1;
          LODWORD(v42) = *(_DWORD *)(*(_QWORD *)v7 + 4 * v25);
          HIDWORD(v42) = *(_DWORD *)(v27 + 4 * v25);
          v28 = v42;
          v29 = (unsigned int)(v25 + 1);
          v43 = HIDWORD(v42);
          v30 = *(_DWORD *)(*(_QWORD *)v7 + 4 * v29);
          HIDWORD(v37) = *(_DWORD *)(v27 + 4 * v29);
          LODWORD(v37) = v30;
          if ( (unsigned int)v25 <= v40 )
          {
            HIDWORD(v41) = *(_DWORD *)(v27 + 4LL * v40);
            LODWORD(v41) = *(_DWORD *)(*(_QWORD *)v7 + 4LL * v40);
            v31 = v41;
            do
            {
              v32 = v25;
              v49 = v25;
              if ( v30 == (_DWORD)v28 )
              {
                v33 = v25;
                do
                {
                  if ( HIDWORD(v37) != v43 || v33 >= v26 )
                    break;
                  if ( ++v33 < v26 )
                  {
                    v35 = v33 + 1;
                    v34 = *(_DWORD *)(*(_QWORD *)v7 + 4 * v35);
                    LODWORD(v37) = v34;
                    HIDWORD(v37) = *(_DWORD *)(*(_QWORD *)(v7 + 8) + 4 * v35);
                  }
                  else
                  {
                    v37 = v42;
                    v34 = v42;
                  }
                }
                while ( v34 == (_DWORD)v28 );
                v49 = v33;
                v32 = v33;
                v21 = v48;
              }
              EmboldPoint(v25, v32, v38, v39, v31, v28, v37, v23, v22, v46, v21, *(_DWORD *)(a2 + 448), (_QWORD *)v7);
              v31 = v28;
              v26 = v40;
              LODWORD(v25) = v49 + 1;
              v43 = HIDWORD(v37);
              v28 = v37;
              if ( v49 + 1 < v40 )
              {
                v36 = v49 + 2;
                v30 = *(_DWORD *)(*(_QWORD *)v7 + 4 * v36);
                LODWORD(v37) = v30;
                HIDWORD(v37) = *(_DWORD *)(*(_QWORD *)(v7 + 8) + 4 * v36);
              }
              else
              {
                v37 = v42;
                v30 = v42;
              }
              v21 = v48;
            }
            while ( (unsigned int)v25 <= v40 );
            v6 = v44;
            v24 = v45;
          }
        }
        result = (unsigned int)*(__int16 *)(v7 + 80);
        ++v6;
        v21 = v48;
        ++v24;
        v44 = v6;
        v45 = v24;
      }
      while ( v6 < (int)result );
    }
  }
  return result;
}
