/*
 * XREFs of NtGdiPolyTextOutW @ 0x1C00C0170
 * Callers:
 *     <none>
 * Callees:
 *     GrePolyTextOutW @ 0x1C00BFF88 (GrePolyTextOutW.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 */

__int64 __fastcall NtGdiPolyTextOutW(HDC a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v6; // edi
  unsigned int v7; // r14d
  char *v8; // r15
  ULONG64 v9; // rdx
  unsigned int i; // ecx
  __int64 v11; // rax
  unsigned __int64 v12; // r9
  unsigned int v13; // edx
  int v14; // edx
  unsigned int v15; // eax
  char *v16; // r12
  char *v17; // r10
  unsigned int j; // ebx
  unsigned int k; // ebx
  __int64 v20; // rax
  unsigned int v21; // ecx
  char *v22; // rdx
  __int64 v23; // rax
  char *v24; // r14
  __int64 v25; // rax
  unsigned int v26; // ecx
  char *v27; // r9
  __int64 v28; // rdx
  char *v29; // r14
  __int64 v31; // [rsp+38h] [rbp-60h]
  __int64 v32; // [rsp+38h] [rbp-60h]
  char *v33; // [rsp+48h] [rbp-50h]

  v6 = 1;
  v7 = 56 * a3;
  v8 = 0LL;
  if ( a3 > 0xB2924 )
  {
    v6 = 0;
  }
  else
  {
    if ( 56LL * a3 )
    {
      if ( ((unsigned __int8)a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v9 = (ULONG64)&a2[7 * a3];
      if ( v9 > MmUserProbeAddress || v9 < (unsigned __int64)a2 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    for ( i = 0; i < a3; ++i )
    {
      v11 = 7LL * i;
      v12 = SLODWORD(a2[v11 + 1]);
      v13 = v7;
      v7 += 2 * v12;
      if ( v12 > 0x1388000 || v7 < v13 )
        goto LABEL_24;
      if ( a2[v11 + 6] )
      {
        v14 = 4 * v12;
        if ( (a2[v11 + 3] & 0x2000) != 0 )
        {
          if ( (unsigned int)(2 * v12) > 0x9C4000 )
            v6 = 0;
          v14 = 8 * v12;
        }
        else if ( v12 > 0x9C4000 )
        {
          v6 = 0;
        }
        v15 = v7;
        v7 += v14;
        if ( !v6 || v7 < v15 )
          goto LABEL_24;
      }
      if ( (_DWORD)v12 && !a2[7 * i + 2] )
      {
LABEL_24:
        v6 = 0;
        break;
      }
    }
  }
  if ( v6 && v7 )
  {
    if ( v7 <= 0x2710000 )
      v8 = (char *)AllocFreeTmpBuffer(v7);
    if ( v8 )
    {
      memmove(v8, a2, 56LL * a3);
      v16 = &v8[56 * a3];
      v17 = &v8[v7];
      v33 = v17;
      for ( j = 0; j < a3; ++j )
      {
        v25 = 56LL * j;
        v32 = v25;
        v26 = *(_DWORD *)&v8[v25 + 8];
        if ( v26 )
        {
          v27 = *(char **)&v8[v25 + 48];
          if ( v27 )
          {
            v28 = 4 * v26;
            if ( (*(_DWORD *)&v8[v25 + 24] & 0x2000) != 0 )
            {
              if ( v26 > 0x4E2000 )
                v6 = 0;
              v28 = 8 * v26;
            }
            else if ( v26 > 0x9C4000 )
            {
              v6 = 0;
            }
            v29 = &v16[v28];
            if ( !v6 || v29 < v16 || v29 > v17 )
            {
LABEL_60:
              v6 = 0;
              goto LABEL_61;
            }
            if ( &v27[v28] < v27 || (unsigned __int64)&v27[v28] > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v16, v27, (unsigned int)v28);
            *(_QWORD *)&v8[v32 + 48] = v16;
            v16 = v29;
            v17 = v33;
          }
        }
      }
      for ( k = 0; k < a3; ++k )
      {
        v20 = 56LL * k;
        v31 = v20;
        v21 = *(_DWORD *)&v8[v20 + 8];
        if ( v21 )
        {
          v22 = *(char **)&v8[v20 + 16];
          if ( !v22 )
            goto LABEL_60;
          v23 = 2 * v21;
          v24 = &v16[v23];
          if ( v21 > 0x1388000 || v24 < v16 || v24 > v17 )
            goto LABEL_60;
          if ( &v22[v23] < v22 || (unsigned __int64)&v22[v23] > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v16, v22, 2 * v21);
          *(_QWORD *)&v8[v31 + 16] = v16;
          v16 = v24;
          v17 = v33;
        }
      }
LABEL_61:
      if ( v6 )
        v6 = GrePolyTextOutW(a1, (unsigned __int64)v8, a3, a4);
      FreeTmpBuffer(v8);
    }
    else
    {
      return 0;
    }
  }
  return v6;
}
