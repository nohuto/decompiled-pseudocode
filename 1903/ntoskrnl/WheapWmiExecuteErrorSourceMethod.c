/*
 * XREFs of WheapWmiExecuteErrorSourceMethod @ 0x140342894
 * Callers:
 *     WheapWmiExecuteMethod @ 0x140342CBC (WheapWmiExecuteMethod.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     WheapGetErrorSource @ 0x14034069C (WheapGetErrorSource.c)
 */

__int64 __fastcall WheapWmiExecuteErrorSourceMethod(
        int a1,
        unsigned int a2,
        int *a3,
        unsigned int a4,
        unsigned int *a5)
{
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  bool v13; // zf
  unsigned int v14; // edi
  unsigned int v15; // r10d
  __int64 *ErrorSource; // rax
  unsigned int v17; // eax
  __int64 *v18; // rax
  __int64 v19; // r8
  int *v20; // rcx
  _BYTE *v21; // rdx
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int64 v29; // rax
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int64 *v33; // rax
  __int64 *v34; // rcx
  __int64 v35; // r8
  int *v36; // rbx
  __int128 v37; // xmm1
  unsigned int *v38; // r14
  __int64 *v39; // rsi
  _DWORD *v40; // r15
  int *v41; // rbx
  int v42; // ebp
  unsigned int i; // r11d
  int *v44; // rcx
  __int64 *v45; // rdx
  __int64 v46; // rax
  __int128 v47; // xmm1
  _BYTE v49[976]; // [rsp+20h] [rbp-408h] BYREF

  memset(v49, 0, 0x3CCuLL);
  v9 = a1 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          v13 = v12 == 1;
          v14 = 0;
          if ( !v13 )
          {
            v15 = -1073741161;
            goto LABEL_44;
          }
          if ( a4 >= 4 )
          {
            v14 = 4;
            if ( a2 >= 4 )
            {
              ErrorSource = WheapGetErrorSource((__int64)&WheapErrorSourceTable, *a3);
              if ( ErrorSource )
              {
                if ( *((_DWORD *)ErrorSource + 27) != 1 )
                {
                  v17 = PshedDisableErrorSource(ErrorSource + 12);
LABEL_17:
                  v15 = v17;
                  goto LABEL_18;
                }
                goto LABEL_18;
              }
              goto LABEL_35;
            }
            goto LABEL_37;
          }
        }
        else
        {
          v14 = 0;
          if ( a4 >= 4 )
          {
            v14 = 4;
            if ( a2 >= 4 )
            {
              v18 = WheapGetErrorSource((__int64)&WheapErrorSourceTable, *a3);
              if ( v18 )
              {
                if ( *((_DWORD *)v18 + 27) != 2 )
                {
                  v17 = PshedEnableErrorSource(v18 + 12);
                  goto LABEL_17;
                }
LABEL_18:
                *a3 = v15;
                goto LABEL_44;
              }
LABEL_35:
              v15 = -1073741275;
              goto LABEL_44;
            }
LABEL_37:
            v15 = -1073741789;
            goto LABEL_44;
          }
        }
LABEL_28:
        v15 = -1073741811;
        goto LABEL_44;
      }
      v14 = 0;
      if ( a4 < 0x3D0 )
        goto LABEL_28;
      v14 = 4;
      if ( a2 < 4 )
        goto LABEL_37;
      if ( *a3 != 972 )
      {
        v14 = 0;
        goto LABEL_28;
      }
      v19 = 7LL;
      v20 = a3 + 1;
      v21 = v49;
      do
      {
        v22 = *((_OWORD *)v20 + 1);
        *(_OWORD *)v21 = *(_OWORD *)v20;
        v23 = *((_OWORD *)v20 + 2);
        *((_OWORD *)v21 + 1) = v22;
        v24 = *((_OWORD *)v20 + 3);
        *((_OWORD *)v21 + 2) = v23;
        v25 = *((_OWORD *)v20 + 4);
        *((_OWORD *)v21 + 3) = v24;
        v26 = *((_OWORD *)v20 + 5);
        *((_OWORD *)v21 + 4) = v25;
        v27 = *((_OWORD *)v20 + 6);
        *((_OWORD *)v21 + 5) = v26;
        v28 = *((_OWORD *)v20 + 7);
        v20 += 32;
        *((_OWORD *)v21 + 6) = v27;
        v21 += 128;
        *((_OWORD *)v21 - 1) = v28;
        --v19;
      }
      while ( v19 );
      v29 = *((_QWORD *)v20 + 8);
      v30 = *((_OWORD *)v20 + 1);
      *(_OWORD *)v21 = *(_OWORD *)v20;
      v31 = *((_OWORD *)v20 + 2);
      *((_OWORD *)v21 + 1) = v30;
      v32 = *((_OWORD *)v20 + 3);
      *((_OWORD *)v21 + 2) = v31;
      *((_OWORD *)v21 + 3) = v32;
      *((_QWORD *)v21 + 8) = v29;
      *((_DWORD *)v21 + 18) = v20[18];
      v15 = PshedSetErrorSourceInfo(v49, v21, 0LL, 128LL);
      *a3 = v15;
    }
    else
    {
      v14 = 0;
      if ( !dword_1404F2A9C )
        goto LABEL_35;
      if ( a4 < 4 )
        goto LABEL_28;
      v14 = 980;
      if ( a2 < 0x3D4 )
        goto LABEL_37;
      v33 = WheapGetErrorSource((__int64)&WheapErrorSourceTable, *a3);
      if ( !v33 )
        goto LABEL_35;
      *a3 = v15;
      v34 = v33 + 12;
      v35 = 7LL;
      a3[1] = 972;
      v36 = a3 + 2;
      do
      {
        *(_OWORD *)v36 = *(_OWORD *)v34;
        *((_OWORD *)v36 + 1) = *((_OWORD *)v34 + 1);
        *((_OWORD *)v36 + 2) = *((_OWORD *)v34 + 2);
        *((_OWORD *)v36 + 3) = *((_OWORD *)v34 + 3);
        *((_OWORD *)v36 + 4) = *((_OWORD *)v34 + 4);
        *((_OWORD *)v36 + 5) = *((_OWORD *)v34 + 5);
        *((_OWORD *)v36 + 6) = *((_OWORD *)v34 + 6);
        v36 += 32;
        v37 = *((_OWORD *)v34 + 7);
        v34 += 16;
        *((_OWORD *)v36 - 1) = v37;
        --v35;
      }
      while ( v35 );
      *(_OWORD *)v36 = *(_OWORD *)v34;
      *((_OWORD *)v36 + 1) = *((_OWORD *)v34 + 1);
      *((_OWORD *)v36 + 2) = *((_OWORD *)v34 + 2);
      *((_OWORD *)v36 + 3) = *((_OWORD *)v34 + 3);
      *((_QWORD *)v36 + 8) = v34[8];
      v36[18] = *((_DWORD *)v34 + 18);
    }
  }
  else
  {
    v15 = 0;
    v14 = 0;
    if ( !dword_1404F2A9C )
      goto LABEL_35;
    v14 = 972 * dword_1404F2A9C + 12;
    if ( v14 > a2 )
      goto LABEL_37;
    *a3 = 0;
    v38 = (unsigned int *)(a3 + 1);
    v39 = (__int64 *)qword_1404F2AA8;
    v40 = a3 + 2;
    v41 = a3 + 3;
    v42 = 0;
    for ( i = 0; v39 != &qword_1404F2AA8; v39 = (__int64 *)*v39 )
    {
      if ( i >= dword_1404F2A9C )
        break;
      v44 = v41;
      v45 = v39 + 12;
      v46 = 7LL;
      do
      {
        *(_OWORD *)v44 = *(_OWORD *)v45;
        *((_OWORD *)v44 + 1) = *((_OWORD *)v45 + 1);
        *((_OWORD *)v44 + 2) = *((_OWORD *)v45 + 2);
        *((_OWORD *)v44 + 3) = *((_OWORD *)v45 + 3);
        *((_OWORD *)v44 + 4) = *((_OWORD *)v45 + 4);
        *((_OWORD *)v44 + 5) = *((_OWORD *)v45 + 5);
        *((_OWORD *)v44 + 6) = *((_OWORD *)v45 + 6);
        v44 += 32;
        v47 = *((_OWORD *)v45 + 7);
        v45 += 16;
        *((_OWORD *)v44 - 1) = v47;
        --v46;
      }
      while ( v46 );
      v41 += 243;
      v42 += 972;
      ++i;
      *(_OWORD *)v44 = *(_OWORD *)v45;
      *((_OWORD *)v44 + 1) = *((_OWORD *)v45 + 1);
      *((_OWORD *)v44 + 2) = *((_OWORD *)v45 + 2);
      *((_OWORD *)v44 + 3) = *((_OWORD *)v45 + 3);
      *((_QWORD *)v44 + 8) = v45[8];
      v44[18] = *((_DWORD *)v45 + 18);
    }
    *v38 = i;
    *v40 = v42;
  }
LABEL_44:
  *a5 = v14;
  return v15;
}
