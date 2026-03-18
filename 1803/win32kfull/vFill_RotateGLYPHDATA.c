/*
 * XREFs of vFill_RotateGLYPHDATA @ 0x1C02256EC
 * Callers:
 *     BmfdQueryFontData @ 0x1C0224E6C (BmfdQueryFontData.c)
 * Callees:
 *     memset @ 0x1C013D6C0 (memset.c)
 */

unsigned __int64 __fastcall vFill_RotateGLYPHDATA(__int64 a1, _DWORD *a2, _DWORD *a3, int a4)
{
  unsigned __int64 result; // rax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  unsigned int v11; // ebx
  _DWORD *v12; // r11
  unsigned int v13; // r9d
  unsigned int v14; // ecx
  unsigned __int64 v15; // r10
  char *v16; // r8
  unsigned int v17; // r11d
  unsigned __int8 v18; // bl
  char v19; // r12
  __int64 v20; // rdi
  char v21; // al
  unsigned int v22; // r10d
  _DWORD *v23; // r13
  unsigned int v24; // r11d
  unsigned int v25; // r9d
  unsigned int j; // edi
  unsigned int v27; // ebx
  char *k; // r8
  char v29; // r15
  __int64 v30; // r14
  char v31; // al
  unsigned int v32; // r10d
  _DWORD *v33; // rcx
  unsigned int v34; // r14d
  unsigned int v35; // r9d
  unsigned int i; // edi
  unsigned int v37; // r11d
  char *v38; // r8
  unsigned __int8 v39; // di
  char v40; // r13
  __int64 v41; // rbx
  char v42; // al
  _OWORD v43[4]; // [rsp+20h] [rbp-40h] BYREF
  unsigned int v44; // [rsp+A0h] [rbp+40h]
  _DWORD *v45; // [rsp+A8h] [rbp+48h]
  _DWORD *v46; // [rsp+A8h] [rbp+48h]

  result = (unsigned __int64)memset(v43, 0, sizeof(v43));
  if ( a1 )
  {
    v9 = *(_OWORD *)(a1 + 32);
    v10 = *(_OWORD *)(a1 + 48);
    *(_QWORD *)a1 = a3;
    v43[2] = v9;
    v43[3] = v10;
  }
  switch ( a4 )
  {
    case 900:
      if ( a1 )
      {
        *(_QWORD *)(a1 + 48) = *((_QWORD *)&v43[3] + 1);
        *(_DWORD *)(a1 + 60) = -DWORD1(v43[3]);
        *(_DWORD *)(a1 + 56) = v43[3];
        *(_DWORD *)(a1 + 36) = -DWORD2(v43[2]);
        *(_DWORD *)(a1 + 44) = -LODWORD(v43[2]);
        *(_DWORD *)(a1 + 40) = HIDWORD(v43[2]);
        result = DWORD1(v43[2]);
        *(_DWORD *)(a1 + 32) = DWORD1(v43[2]);
      }
      if ( a2 )
      {
        if ( a3 )
        {
          v32 = a2[2];
          v33 = a3 + 4;
          v34 = a2[3];
          v35 = 0;
          *a3 = a2[1];
          v46 = a3 + 4;
          a3[1] = -v32;
          a3[2] = a2[3];
          result = (unsigned int)a2[2];
          a3[3] = result;
          for ( i = (v34 + 7) >> 3; v35 < v32; ++v35 )
          {
            v37 = 0;
            v38 = (char *)v33 + i * v35;
            if ( v34 )
            {
              v39 = *((_BYTE *)&glyphBits + (((_BYTE)v32 - (_BYTE)v35 - 1) & 7));
              do
              {
                v40 = *v38;
                v41 = v37 & 7;
                if ( (*((_BYTE *)a2 + ((unsigned __int64)(v32 - v35 - 1) >> 3) + ((v32 + 7) >> 3) * v37 + 16) & v39) != 0 )
                  v42 = v40 | *((_BYTE *)&glyphBits + v41);
                else
                  v42 = v40 & BitOFF[v41];
                *v38 = v42;
                ++v37;
                result = (unsigned __int64)(v38 + 1);
                if ( (_DWORD)v41 != 7 )
                  result = (unsigned __int64)v38;
                v38 = (char *)result;
              }
              while ( v37 < v34 );
              i = (v34 + 7) >> 3;
              v33 = v46;
            }
          }
        }
      }
      break;
    case 1800:
      if ( a1 )
      {
        *(_DWORD *)(a1 + 52) = -DWORD1(v43[3]);
        *(_DWORD *)(a1 + 48) = v43[3];
        *(_DWORD *)(a1 + 60) = -HIDWORD(v43[3]);
        *(_DWORD *)(a1 + 56) = DWORD2(v43[3]);
        *(_DWORD *)(a1 + 36) = -HIDWORD(v43[2]);
        *(_DWORD *)(a1 + 44) = -DWORD1(v43[2]);
        *(_DWORD *)(a1 + 40) = -LODWORD(v43[2]);
        result = (unsigned int)-DWORD2(v43[2]);
        *(_DWORD *)(a1 + 32) = result;
      }
      if ( a2 )
      {
        if ( a3 )
        {
          v22 = a2[2];
          v23 = a3 + 4;
          v24 = a2[3];
          v25 = 0;
          *a3 = -v22;
          a3[1] = -(v24 + a2[1]);
          a3[2] = a2[2];
          result = (unsigned int)a2[3];
          a3[3] = result;
          for ( j = (v22 + 7) >> 3; v25 < v24; ++v25 )
          {
            v27 = 0;
            for ( k = (char *)v23 + j * v25; v27 < v22; k = (char *)result )
            {
              v29 = *k;
              v30 = v27 & 7;
              if ( (*((_BYTE *)a2 + j * (v24 - v25 - 1) + ((unsigned __int64)(v22 - v27 - 1) >> 3) + 16) & *((_BYTE *)&glyphBits + (((_BYTE)v22 - (_BYTE)v27 - 1) & 7))) != 0 )
                v31 = v29 | *((_BYTE *)&glyphBits + v30);
              else
                v31 = v29 & BitOFF[v30];
              *k = v31;
              ++v27;
              result = (unsigned __int64)(k + 1);
              if ( (_DWORD)v30 != 7 )
                result = (unsigned __int64)k;
            }
          }
        }
      }
      break;
    case 2700:
      if ( a1 )
      {
        *(_DWORD *)(a1 + 52) = -HIDWORD(v43[3]);
        *(_DWORD *)(a1 + 48) = DWORD2(v43[3]);
        *(_QWORD *)(a1 + 56) = *(_QWORD *)&v43[3];
        *(_DWORD *)(a1 + 36) = v43[2];
        *(_DWORD *)(a1 + 44) = DWORD2(v43[2]);
        *(_DWORD *)(a1 + 40) = -HIDWORD(v43[2]);
        result = (unsigned int)-DWORD1(v43[2]);
        *(_DWORD *)(a1 + 32) = result;
      }
      if ( a2 )
      {
        if ( a3 )
        {
          v12 = a3 + 4;
          v13 = a2[3];
          v14 = 0;
          v44 = a2[2];
          v11 = v44;
          v45 = a3 + 4;
          *a3 = -(v13 + a2[1]);
          a3[1] = *a2;
          a3[2] = a2[3];
          result = (unsigned int)a2[2];
          a3[3] = result;
          if ( v44 )
          {
            v15 = 0LL;
            do
            {
              v16 = (char *)v12 + ((v13 + 7) >> 3) * v14;
              v17 = 0;
              if ( v13 )
              {
                v18 = *((_BYTE *)&glyphBits + (v14 & 7));
                do
                {
                  v19 = *v16;
                  v20 = v17 & 7;
                  if ( (*((_BYTE *)a2 + (v15 >> 3) + ((v44 + 7) >> 3) * (v13 - v17 - 1) + 16) & v18) != 0 )
                    v21 = v19 | *((_BYTE *)&glyphBits + v20);
                  else
                    v21 = v19 & BitOFF[v20];
                  *v16 = v21;
                  ++v17;
                  result = (unsigned __int64)(v16 + 1);
                  if ( (_DWORD)v20 != 7 )
                    result = (unsigned __int64)v16;
                  v16 = (char *)result;
                }
                while ( v17 < v13 );
                v11 = v44;
              }
              v12 = v45;
              ++v14;
              ++v15;
            }
            while ( v14 < v11 );
          }
        }
      }
      break;
  }
  return result;
}
