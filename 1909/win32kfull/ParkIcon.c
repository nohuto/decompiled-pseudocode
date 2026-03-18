/*
 * XREFs of ParkIcon @ 0x1C0014E34
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C00132A4 (xxxMinMaximizeEx.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C01098E0 (NtUserGetWindowMinimizeRect.c)
 * Callees:
 *     IsTrayWindow @ 0x1C003C7A4 (IsTrayWindow.c)
 *     IntersectRect @ 0x1C0068714 (IntersectRect.c)
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 *     GetRect @ 0x1C006CABC (GetRect.c)
 *     InternalGetRealClientRect @ 0x1C00EC190 (InternalGetRealClientRect.c)
 */

__int64 __fastcall ParkIcon(__int64 a1, _DWORD *a2)
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
  int v17; // r12d
  char v18; // cl
  unsigned int v19; // ecx
  unsigned int v20; // eax
  int v21; // [rsp+30h] [rbp-39h]
  int v22; // [rsp+34h] [rbp-35h]
  unsigned __int64 v23; // [rsp+38h] [rbp-31h] BYREF
  __int64 v24; // [rsp+40h] [rbp-29h]
  int v25; // [rsp+48h] [rbp-21h] BYREF
  int v26; // [rsp+4Ch] [rbp-1Dh]
  int v27; // [rsp+50h] [rbp-19h]
  int v28; // [rsp+54h] [rbp-15h]
  int v29; // [rsp+58h] [rbp-11h]
  int v30; // [rsp+5Ch] [rbp-Dh]
  int v31; // [rsp+60h] [rbp-9h]
  int v32; // [rsp+64h] [rbp-5h]
  int v33; // [rsp+68h] [rbp-1h]
  __int64 v34; // [rsp+70h] [rbp+7h]
  __int64 v35; // [rsp+78h] [rbp+Fh]
  int v38; // [rsp+E0h] [rbp+77h]
  int v39; // [rsp+E8h] [rbp+7Fh]

  v23 = 0LL;
  v24 = 0LL;
  v4 = *(_DWORD *)(gpsi + 2084LL);
  v5 = *(_DWORD *)(gpsi + 2088LL);
  v33 = v4;
  v29 = v5;
  if ( !(unsigned int)IsTrayWindow(a1) )
  {
    v35 = *(_QWORD *)(a1 + 104);
    InternalGetRealClientRect(v35, (unsigned int)&v23, 1, 0, 1);
    v6 = *(_DWORD *)(gpsi + 2120LL);
    if ( (v6 & 1) != 0 )
    {
      v7 = v24 - v4;
      v39 = -v4;
    }
    else
    {
      v7 = v23 + *(_DWORD *)(gpsi + 2084LL) - *(_DWORD *)(gpsi + 2124LL);
      v39 = v4;
    }
    v30 = v7;
    v8 = v7;
    v25 = v7;
    if ( (v6 & 2) != 0 )
    {
      v9 = HIDWORD(v23) + *(_DWORD *)(gpsi + 2088LL) - *(_DWORD *)(gpsi + 2128LL);
      v21 = v5;
    }
    else
    {
      v9 = HIDWORD(v24) - v5;
      v21 = -v5;
    }
    v26 = v9;
    v10 = v9;
    v31 = v9;
    if ( (v6 & 4) != 0 )
    {
      v34 = 0LL;
      v11 = SHIDWORD(v24) / v5;
    }
    else
    {
      v34 = 1LL;
      v11 = (int)v24 / v4;
    }
    v12 = v11;
    if ( v11 < 1 )
      v12 = 1;
    v22 = 0;
    v32 = v12;
    v38 = v12;
    while ( 1 )
    {
      v27 = v8 + v4;
      v28 = v10 + v29;
      result = v35;
      v14 = *(_QWORD *)(v35 + 112);
      if ( !v14 )
        goto LABEL_16;
      v15 = v33;
      v16 = v29;
      v17 = v22;
      do
      {
        result = *(_QWORD *)(v14 + 40);
        v18 = *(_BYTE *)(result + 31);
        if ( (v18 & 0x10) == 0 || v14 == a1 )
          goto LABEL_14;
        if ( (v18 & 0x20) != 0 )
        {
          GetRect(v14, &v23, 66LL);
        }
        else
        {
          result = GetProp(v14, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
          if ( !result || (*(_BYTE *)(result + 48) & 0x21) != 0x21 )
            goto LABEL_14;
          v19 = *(_DWORD *)(result + 32);
          v20 = *(_DWORD *)(result + 36);
          v23 = __PAIR64__(v20, v19);
          HIDWORD(v24) = v16 + v20;
          LODWORD(v24) = v15 + v19;
        }
        ++v17;
        result = IntersectRect(&v23, &v23, &v25);
        if ( (_DWORD)result )
          break;
LABEL_14:
        v14 = *(_QWORD *)(v14 + 88);
      }
      while ( v14 );
      v22 = v17;
      if ( !v14 )
        goto LABEL_16;
      if ( --v38 )
      {
        if ( v34 )
        {
          v8 += v39;
          v25 = v8;
        }
        else
        {
LABEL_33:
          v10 += v21;
          v26 = v10;
        }
      }
      else
      {
        v38 = v32;
        if ( v34 )
        {
          v8 = v30;
          v25 = v30;
          goto LABEL_33;
        }
        v8 += v39;
        v26 = v31;
        v25 = v8;
        v10 = v31;
      }
      v4 = v33;
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
