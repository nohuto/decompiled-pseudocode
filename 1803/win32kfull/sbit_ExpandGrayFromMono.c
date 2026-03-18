/*
 * XREFs of sbit_ExpandGrayFromMono @ 0x1C02B9C14
 * Callers:
 *     fs_ContourScan @ 0x1C02B013C (fs_ContourScan.c)
 * Callees:
 *     <none>
 */

void __fastcall sbit_ExpandGrayFromMono(__int64 a1, __int64 a2, unsigned __int16 a3, unsigned __int16 a4, __int16 a5)
{
  char v9; // r10
  int v10; // ebp
  unsigned __int16 v11; // dx
  unsigned __int16 v12; // r8
  int v13; // ecx
  unsigned __int64 v14; // r11
  __int64 v15; // rcx
  __int16 v16; // r14
  int v17; // ebp
  __int16 v18; // si
  __int64 v19; // r15
  __int64 v20; // rbx
  char v21; // r13
  unsigned __int64 v22; // rdi
  __int64 v23; // r12
  _BYTE *v24; // r8
  _BYTE *v25; // r10
  __int16 v26; // r9

  if ( a3 )
  {
    v9 = 0;
    if ( a4 )
    {
      if ( a1 && a2 )
      {
        v10 = a3;
        v11 = ((a3 + 31) >> 3) & 0xFFFC;
        v12 = ((8 * (unsigned int)a3 + 24) >> 3) & 0xFFFC;
        switch ( a5 )
        {
          case 1:
            v9 = 0;
            break;
          case 2:
            v9 = 2;
            break;
          case 4:
            v9 = 4;
            break;
          case 8:
            v9 = 6;
            break;
        }
        v13 = a4 - 1;
        v14 = a1 + v13 * v11;
        v15 = a2 + v13 * v12;
        v16 = ((_BYTE)a3 - 1) & 7;
        v17 = (v10 - 1) >> 3;
        v18 = a4 - 1;
        if ( v18 >= 0 )
        {
          v19 = v11;
          v20 = v12 + v15 - 1;
          v21 = v9;
          v22 = a3 - (unsigned __int64)v12;
          v23 = v12;
          do
          {
            v24 = (_BYTE *)v20;
            if ( v20 > v22 + v20 )
            {
              do
                *v24-- = 0;
              while ( (unsigned __int64)v24 > v22 + v20 );
            }
            v25 = (_BYTE *)(v14 + (unsigned __int16)v17);
            v26 = v16;
            if ( (unsigned __int64)v25 >= v14 )
            {
              do
              {
                do
                  *v24-- = ((*v25 >> (7 - v26--)) & 1) << v21;
                while ( v26 >= 0 );
                --v25;
                v26 = 7;
              }
              while ( (unsigned __int64)v25 >= v14 );
              v19 = v11;
            }
            v14 -= v19;
            v20 -= v23;
            --v18;
          }
          while ( v18 >= 0 );
        }
      }
    }
  }
}
