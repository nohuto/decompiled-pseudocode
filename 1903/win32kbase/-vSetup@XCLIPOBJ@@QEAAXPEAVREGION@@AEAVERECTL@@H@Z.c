/*
 * XREFs of ?vSetup@XCLIPOBJ@@QEAAXPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0011A20
 * Callers:
 *     EngUpdateDeviceSurface @ 0x1C00A2620 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0011D3C (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bEqual@ERECTL@@QEBAHAEBV1@@Z @ 0x1C0015FE8 (-bEqual@ERECTL@@QEBAHAEBV1@@Z.c)
 */

void __fastcall XCLIPOBJ::vSetup(XCLIPOBJ *this, struct REGION *a2, struct ERECTL *a3, int a4)
{
  int v6; // r11d
  const struct ERECTL *v7; // r12
  int v9; // ecx
  signed int *v10; // rsi
  int v11; // edx
  char v12; // di
  int v13; // r8d
  unsigned int v14; // eax
  int v15; // r8d
  int *v16; // rdx
  int v17; // r14d
  int v18; // r11d
  signed int v19; // r13d
  signed int v20; // r12d
  int v21; // ecx
  int v22; // r10d
  __int64 v23; // r9
  bool v24; // cc
  signed int v25; // ecx
  int v26; // eax
  ERECTL *v27; // rcx
  signed int v28; // [rsp+20h] [rbp-30h]
  int v29; // [rsp+24h] [rbp-2Ch]
  __int128 v30; // [rsp+30h] [rbp-20h] BYREF
  __int128 v31; // [rsp+40h] [rbp-10h]
  int v32; // [rsp+90h] [rbp+40h]
  signed int v33; // [rsp+98h] [rbp+48h]

  *((_DWORD *)this + 5) = 0;
  *((_QWORD *)this + 7) = a2;
  v6 = *((_DWORD *)a3 + 3);
  v7 = a3;
  *((_DWORD *)this + 4) = v6;
  v9 = *((_DWORD *)a3 + 2);
  v10 = (signed int *)((char *)this + 4);
  *((_DWORD *)this + 3) = v9;
  v11 = *((_DWORD *)a3 + 1);
  v12 = 1;
  *((_DWORD *)this + 2) = v11;
  v13 = *(_DWORD *)a3;
  *((_DWORD *)this + 1) = v13;
  *(_DWORD *)this = *((_DWORD *)a2 + 7);
  if ( *((_DWORD *)a2 + 20) > 0xA0u
    || v13 < *((_DWORD *)a2 + 22)
    || v11 < *((_DWORD *)a2 + 23)
    || v9 > *((_DWORD *)a2 + 24)
    || a4 == 1
    || v6 > *((_DWORD *)a2 + 25)
    || v11 >= v6
    || v13 >= v9 )
  {
    if ( v13 <= *((_DWORD *)a2 + 22) )
      v13 = *((_DWORD *)a2 + 22);
    *v10 = v13;
    if ( v11 <= *((_DWORD *)a2 + 23) )
      v11 = *((_DWORD *)a2 + 23);
    *((_DWORD *)this + 2) = v11;
    if ( v9 >= *((_DWORD *)a2 + 24) )
      v9 = *((_DWORD *)a2 + 24);
    *((_DWORD *)this + 3) = v9;
    if ( v6 >= *((_DWORD *)a2 + 25) )
      v6 = *((_DWORD *)a2 + 25);
    *((_DWORD *)this + 4) = v6;
    if ( v13 >= v9 || v11 >= v6 )
    {
      *v10 = v9;
      return;
    }
    if ( a4 == 1 || *((_DWORD *)a2 + 20) > 0xA0u )
    {
      *((_DWORD *)this + 34) = 0;
      v14 = *((_DWORD *)a2 + 20);
      if ( v14 > 0xD8 )
      {
        *((_BYTE *)this + 21) = 3;
      }
      else if ( v14 > 0xA0 )
      {
        *((_BYTE *)this + 21) = 2;
      }
      v15 = *((_DWORD *)a2 + 21);
      v16 = (int *)((char *)a2 + 104);
      v30 = 0LL;
      v17 = a4 != 1;
      if ( v15 )
      {
        do
        {
          if ( *((_DWORD *)this + 2) < v16[2] )
            break;
          v16 = (int *)((char *)v16 + (unsigned int)(4 * *v16 + 16));
          --v15;
        }
        while ( v15 );
        if ( v15 )
        {
          v18 = HIDWORD(v30);
          v19 = DWORD2(v30);
          v20 = DWORD1(v30);
          v32 = v30;
          do
          {
            --v15;
            if ( v16[1] >= v10[3] )
              break;
            v21 = *v16;
            v22 = 0;
            v23 = 0LL;
            if ( *v16 )
            {
              do
              {
                v24 = v16[(unsigned int)(v23 + 1) + 3] <= *v10;
                v10 = (signed int *)((char *)this + 4);
                if ( !v24 )
                {
                  v10 = (signed int *)((char *)this + 4);
                  if ( v16[v23 + 3] >= *((_DWORD *)this + 3) )
                    break;
                  if ( ++*((_DWORD *)this + 34) >= 0xAu )
                  {
                    *((_DWORD *)this + 34) = -1;
                    *((_BYTE *)this + 20) = 3;
                    return;
                  }
                  v25 = v16[v23 + 3];
                  v31 = (unsigned int)v25;
                  v33 = v16[(unsigned int)(v23 + 1) + 3];
                  v28 = v16[1];
                  *(_QWORD *)((char *)&v31 + 4) = __PAIR64__(v33, v28);
                  v29 = v16[2];
                  HIDWORD(v31) = v29;
                  v26 = v32;
                  if ( v32 == v19 || v20 == v18 )
                  {
                    v30 = v31;
                    v18 = HIDWORD(v31);
                    v19 = DWORD2(v31);
                    v20 = DWORD1(v31);
                    v32 = v31;
                  }
                  else
                  {
                    if ( v25 < v32 )
                      v26 = v25;
                    v32 = v26;
                    if ( v28 < v20 )
                      v20 = v28;
                    LODWORD(v30) = v26;
                    if ( v33 > v19 )
                      v19 = v33;
                    *(_QWORD *)((char *)&v30 + 4) = __PAIR64__(v19, v20);
                    if ( v29 > v18 )
                    {
                      v18 = v29;
                      HIDWORD(v30) = v29;
                    }
                  }
                  if ( *v10 >= v25 && *((_DWORD *)this + 3) <= v33 )
                    v22 = 1;
                }
                v21 = *v16;
                v23 = (unsigned int)(v23 + 2);
              }
              while ( (_DWORD)v23 != *v16 );
            }
            v17 &= v22;
            v16 = (int *)((char *)v16 + (unsigned int)(4 * v21 + 16));
          }
          while ( v15 );
          v7 = a3;
        }
      }
      ERECTL::operator*=(v10, &v30);
      if ( v17 )
      {
        if ( a4 || (unsigned int)ERECTL::bEqual(v27, v7) )
          return;
      }
      else if ( *((_DWORD *)this + 34) != 1 )
      {
        v12 = 3;
      }
    }
    else if ( a4 == 2 )
    {
      return;
    }
    *((_BYTE *)this + 20) = v12;
  }
}
