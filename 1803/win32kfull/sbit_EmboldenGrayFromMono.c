/*
 * XREFs of sbit_EmboldenGrayFromMono @ 0x1C02B95EC
 * Callers:
 *     fs_ContourScan @ 0x1C02B013C (fs_ContourScan.c)
 * Callees:
 *     CapCorrection @ 0x1C02B75F8 (CapCorrection.c)
 */

void __fastcall sbit_EmboldenGrayFromMono(__int64 a1, unsigned __int16 a2, unsigned __int16 a3)
{
  int v3; // edi
  __int64 v5; // r12
  unsigned int v6; // r14d
  unsigned __int16 v7; // bp
  unsigned __int16 v8; // bx
  unsigned __int16 v9; // si
  __int64 i; // r13
  __int16 v11; // r9
  _BYTE *v12; // r10
  __int16 v13; // r8
  unsigned __int16 v14; // ax
  __int16 v15; // r11
  int v16; // edx
  __int16 v17; // r12
  unsigned int v18; // eax
  unsigned int v19; // edi
  unsigned __int8 v20; // r9
  unsigned __int8 v21; // cl
  unsigned __int8 v22; // al
  _BYTE *v23; // rax
  __int64 v24; // rcx
  int v26; // [rsp+68h] [rbp+10h]
  int v27; // [rsp+78h] [rbp+20h]

  if ( a2 )
  {
    LOWORD(v3) = a3;
    v5 = a1;
    v6 = 0;
    v7 = 0;
    if ( a3 )
    {
      if ( a1 )
      {
        CapCorrection(a1, a2, a3);
        v27 = a2;
        v8 = a2 - 1;
        v9 = ((unsigned int)(8 * v27 + 24) >> 3) & 0xFFFC;
        if ( v8 )
        {
          v3 = (unsigned __int16)v3;
          v26 = (unsigned __int16)v3;
          for ( i = v8; ; --i )
          {
            v11 = -1;
            v12 = (_BYTE *)(v5 + i);
            v13 = -1;
            v14 = 0;
            v15 = 0;
            if ( v3 )
              break;
LABEL_45:
            if ( !--v8 )
              return;
          }
          v16 = 0;
          while ( !*(v12 - 1) )
          {
            if ( v11 >= 0 )
            {
              if ( v13 < 0 )
                v13 = v15 - 1;
              goto LABEL_34;
            }
LABEL_44:
            v12 += v9;
            v16 = ++v15;
            if ( v15 >= v3 )
              goto LABEL_45;
          }
          v17 = v15;
          if ( v11 >= 0 )
          {
            v17 = v11;
            v14 = v7;
          }
          v7 = v14;
          v18 = 0;
          if ( v11 >= 0 )
            v18 = v6;
          v6 = v18;
          v19 = v18;
          if ( v16 == v26 - 1 )
          {
            v14 = 0;
            if ( v17 >= 0 && v13 < 0 )
              v13 = v15;
          }
          else
          {
            v14 = 0;
          }
          if ( !*v12 )
          {
            ++v7;
            if ( v8 == v27 - 1 )
            {
LABEL_29:
              v14 = 0;
              goto LABEL_30;
            }
            v20 = v12[1];
            v14 = 0;
            if ( v20 )
            {
              if ( v15 )
                v21 = v12[-v9];
              else
                v21 = 0;
              if ( v16 == v26 - 1 )
                v22 = 0;
              else
                v22 = v12[v9];
              v6 = v19 + v21 + v22 + 2 * (v21 + v22) + 4 * v20;
              goto LABEL_29;
            }
          }
LABEL_30:
          v3 = v26;
          v11 = v17;
          v5 = a1;
LABEL_34:
          if ( v11 >= 0 && v13 >= 0 )
          {
            if ( v7 )
            {
              v23 = (_BYTE *)(v5 + i + (int)((unsigned __int16)v11 * (((unsigned int)(8 * v27 + 24) >> 3) & 0xFFFC)));
              if ( v11 <= v13 )
              {
                v24 = (unsigned __int16)(v13 - v11 + 1);
                do
                {
                  if ( !*v23 )
                    *v23 = 16 - (v6 >> 4) / v7;
                  v23 += v9;
                  --v24;
                }
                while ( v24 );
              }
              v14 = 0;
            }
            v11 = -1;
            v13 = -1;
          }
          goto LABEL_44;
        }
      }
    }
  }
}
