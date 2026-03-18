/*
 * XREFs of ParkIcon @ 0x1C00B8DA8
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C00B7604 (xxxMinMaximizeEx.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C0123F50 (NtUserGetWindowMinimizeRect.c)
 * Callees:
 *     GetRect @ 0x1C0021568 (GetRect.c)
 *     IsTrayWindow @ 0x1C002CD08 (IsTrayWindow.c)
 *     IntersectRect @ 0x1C003D900 (IntersectRect.c)
 *     _GetProp @ 0x1C0072450 (_GetProp.c)
 *     InternalGetRealClientRect @ 0x1C010EABC (InternalGetRealClientRect.c)
 */

__int64 __fastcall ParkIcon(_QWORD *a1, int *a2)
{
  int v4; // r14d
  int v5; // r13d
  int v6; // edx
  int v7; // esi
  int v8; // ebx
  int v9; // r12d
  int v10; // edi
  int v11; // eax
  int v12; // r13d
  __int64 result; // rax
  __int64 v14; // r14
  int v15; // r15d
  int v16; // esi
  int v17; // r13d
  char v18; // cl
  int v19; // ecx
  int v20; // eax
  int v21; // [rsp+30h] [rbp-39h]
  int v22; // [rsp+34h] [rbp-35h]
  int v23; // [rsp+38h] [rbp-31h] BYREF
  int v24; // [rsp+3Ch] [rbp-2Dh]
  int v25; // [rsp+40h] [rbp-29h]
  int v26; // [rsp+44h] [rbp-25h]
  int v27; // [rsp+48h] [rbp-21h] BYREF
  int v28; // [rsp+4Ch] [rbp-1Dh]
  int v29; // [rsp+50h] [rbp-19h]
  int v30; // [rsp+54h] [rbp-15h]
  int v31; // [rsp+58h] [rbp-11h]
  int v32; // [rsp+5Ch] [rbp-Dh]
  int v33; // [rsp+60h] [rbp-9h]
  int v34; // [rsp+64h] [rbp-5h]
  int v35; // [rsp+68h] [rbp-1h]
  int v36; // [rsp+6Ch] [rbp+3h]
  __int64 v37; // [rsp+70h] [rbp+7h]
  int v40; // [rsp+E0h] [rbp+77h]
  int v41; // [rsp+E8h] [rbp+7Fh]

  v4 = *(_DWORD *)(gpsi + 2084LL);
  v5 = *(_DWORD *)(gpsi + 2088LL);
  v36 = v4;
  v31 = v5;
  if ( !(unsigned int)IsTrayWindow(a1) )
  {
    v37 = a1[10];
    InternalGetRealClientRect(v37, (unsigned int)&v23, 1, 0, 1);
    v6 = *(_DWORD *)(gpsi + 2120LL);
    if ( (v6 & 1) != 0 )
    {
      v7 = v25 - v4;
      v41 = -v4;
    }
    else
    {
      v7 = v23 + *(_DWORD *)(gpsi + 2084LL) - *(_DWORD *)(gpsi + 2124LL);
      v41 = v4;
    }
    v32 = v7;
    v8 = v7;
    v27 = v7;
    if ( (v6 & 2) != 0 )
    {
      v9 = v24 + *(_DWORD *)(gpsi + 2088LL) - *(_DWORD *)(gpsi + 2128LL);
      v21 = v5;
    }
    else
    {
      v9 = v26 - v5;
      v21 = -v5;
    }
    v28 = v9;
    v34 = v6 & 4;
    v10 = v9;
    v33 = v9;
    if ( (v6 & 4) != 0 )
      v11 = v26 / v5;
    else
      v11 = v25 / v4;
    v12 = v11;
    if ( v11 < 1 )
      v12 = 1;
    v22 = 0;
    v35 = v12;
    v40 = v12;
    while ( 1 )
    {
      v29 = v8 + v4;
      v30 = v10 + v31;
      result = v37;
      v14 = *(_QWORD *)(v37 + 88);
      if ( !v14 )
        goto LABEL_16;
      v15 = v36;
      v16 = v31;
      v17 = v22;
      do
      {
        result = *(_QWORD *)(v14 + 40);
        v18 = *(_BYTE *)(result + 31);
        if ( (v18 & 0x10) == 0 || (_QWORD *)v14 == a1 )
          goto LABEL_14;
        if ( (v18 & 0x20) != 0 )
        {
          GetRect(v14, (__int64)&v23, 66);
        }
        else
        {
          result = GetProp(v14, (unsigned __int16)atomCheckpointProp, 1LL);
          if ( !result || (*(_BYTE *)(result + 48) & 0x21) != 0x21 )
            goto LABEL_14;
          v19 = *(_DWORD *)(result + 32);
          v20 = *(_DWORD *)(result + 36);
          v23 = v19;
          v24 = v20;
          v26 = v16 + v20;
          v25 = v15 + v19;
        }
        ++v17;
        result = IntersectRect(&v23, &v23, &v27);
        if ( (_DWORD)result )
          break;
LABEL_14:
        v14 = *(_QWORD *)(v14 + 64);
      }
      while ( v14 );
      v22 = v17;
      if ( !v14 )
        goto LABEL_16;
      if ( --v40 )
      {
        if ( v34 )
        {
LABEL_32:
          v10 += v21;
          v28 = v10;
        }
        else
        {
          v8 += v41;
          v27 = v8;
        }
      }
      else
      {
        v40 = v35;
        if ( !v34 )
        {
          v8 = v32;
          v27 = v32;
          goto LABEL_32;
        }
        v8 += v41;
        v10 = v33;
        v27 = v8;
        v28 = v33;
      }
      v4 = v36;
      if ( v17 >= 5000 )
      {
LABEL_16:
        *a2 = v8;
        a2[1] = v10;
        return result;
      }
    }
  }
  result = 4294935296LL;
  *a2 = -32000;
  a2[1] = -32000;
  return result;
}
