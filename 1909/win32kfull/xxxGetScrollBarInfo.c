/*
 * XREFs of xxxGetScrollBarInfo @ 0x1C004BAF8
 * Callers:
 *     NtUserGetScrollBarInfo @ 0x1C004B710 (NtUserGetScrollBarInfo.c)
 *     xxxSBWndProc @ 0x1C0242580 (xxxSBWndProc.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     CalcSBStuff2 @ 0x1C004B35C (CalcSBStuff2.c)
 *     CalcSBStuff @ 0x1C004B584 (CalcSBStuff.c)
 *     unsafe_cast_fnid_or_class_to_PSBWND @ 0x1C004BD28 (unsafe_cast_fnid_or_class_to_PSBWND.c)
 *     GetRect @ 0x1C006CABC (GetRect.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall xxxGetScrollBarInfo(__int64 *BugCheckParameter2, int a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  int v10; // esi
  __int64 v11; // r15
  __int64 v12; // rcx
  int v13; // r13d
  bool v14; // zf
  __int64 v15; // rcx
  int v16; // ecx
  int *v17; // rax
  int v18; // r9d
  int v19; // r8d
  int v20; // r10d
  int v21; // edx
  __int64 v22; // rcx
  char v23; // al
  __int64 v25; // rcx
  _DWORD *v26; // rax
  int v27; // ecx
  int v28; // eax
  int v29; // ecx
  int v30; // r8d
  int v31; // r8d
  _QWORD v32[2]; // [rsp+58h] [rbp-19h] BYREF
  int v33[16]; // [rsp+68h] [rbp-9h] BYREF

  memset(v33, 0, sizeof(v33));
  if ( *(_DWORD *)a3 == 60 )
  {
    v9 = unsafe_cast_fnid_or_class_to_PSBWND(BugCheckParameter2);
    LOBYTE(v10) = 0;
    v11 = v9;
    if ( a2 == -4 && !v9 )
    {
      _InterlockedAdd(&glSendMessage, 1u);
      return xxxSendTransformableMessageTimeout(
               BugCheckParameter2,
               0xEBu,
               0LL,
               (struct _LARGE_STRING *)a3,
               0,
               0,
               0LL,
               1u,
               1);
    }
    v6 = 0x8000LL;
    *(_QWORD *)(a3 + 36) = 0LL;
    v7 = 0x10000LL;
    *(_QWORD *)(a3 + 44) = 0LL;
    *(_QWORD *)(a3 + 52) = 0LL;
    switch ( a2 )
    {
      case -4:
        v10 = *(_DWORD *)(v9 + 12);
        v13 = *(_DWORD *)(v9 + 8);
        v32[0] = 0LL;
        v32[1] = 0LL;
        GetRect(BugCheckParameter2, v32, 17LL);
        CalcSBStuff2(v33, (int *)v32, (int *)(v11 + 16), *(_DWORD *)(v11 + 8));
        goto LABEL_18;
      case -5:
        v12 = BugCheckParameter2[5];
        v13 = 1;
        if ( (*(_BYTE *)(v12 + 30) & 0x20) != 0 )
        {
          v14 = (*(_BYTE *)(v12 + 16) & 2) == 0;
          goto LABEL_7;
        }
        goto LABEL_11;
      case -6:
        v15 = BugCheckParameter2[5];
        v13 = 0;
        if ( (*(_BYTE *)(v15 + 30) & 0x10) != 0 )
        {
          v14 = (*(_BYTE *)(v15 + 16) & 4) == 0;
LABEL_7:
          if ( v14 )
            *(_DWORD *)(a3 + 36) |= 0x10000u;
LABEL_12:
          v16 = *(_DWORD *)(a3 + 36);
          if ( (v16 & 0x8000) != 0 )
            return 1LL;
          v17 = (int *)BugCheckParameter2[19];
          if ( v17 )
          {
            v10 = *v17;
            if ( v13 )
              v10 >>= 2;
            LOBYTE(v10) = v10 & 3;
          }
          else
          {
            UserSetLastError(1447LL, 0x8000LL, 0x10000LL, v8);
            v16 = *(_DWORD *)(a3 + 36);
          }
          if ( (v16 & 0x10000) == 0 )
          {
            CalcSBStuff((__int64)BugCheckParameter2, v33, v13);
            v25 = BugCheckParameter2[5];
            if ( (*(_BYTE *)(v25 + 26) & 0x40) != 0 )
            {
              v31 = *(_DWORD *)(v25 + 96) - *(_DWORD *)(v25 + 88);
              if ( !v13 )
              {
                v18 = v33[6];
                v21 = v31 - v33[5];
                v20 = v31 - v33[4];
                v19 = v33[7];
                goto LABEL_20;
              }
              v18 = v31 - v33[7];
              v19 = v31 - v33[6];
LABEL_19:
              v20 = v33[5];
              v21 = v33[4];
LABEL_20:
              if ( (v10 & 1) != 0 )
              {
                *(_DWORD *)(a3 + 40) |= 1u;
                *(_DWORD *)(a3 + 44) |= 1u;
              }
              if ( (v10 & 2) != 0 )
              {
                *(_DWORD *)(a3 + 56) |= 1u;
                *(_DWORD *)(a3 + 52) |= 1u;
              }
              if ( (v10 & 3) == 3 )
                *(_DWORD *)(a3 + 36) |= 1u;
              v22 = BugCheckParameter2[5];
              v23 = *(_BYTE *)(v22 + 22);
              if ( (v23 & 0x10) != 0 && (a2 != -5 || (v23 & 0x20) != 0) )
              {
                if ( (v23 & 1) != 0 )
                {
                  *(_DWORD *)(a3 + 40) |= 8u;
                  v22 = BugCheckParameter2[5];
                }
                if ( (*(_BYTE *)(v22 + 22) & 2) != 0 )
                {
                  *(_DWORD *)(a3 + 44) |= 8u;
                  v22 = BugCheckParameter2[5];
                }
                if ( (*(_BYTE *)(v22 + 22) & 4) != 0 )
                {
                  *(_DWORD *)(a3 + 52) |= 8u;
                  v22 = BugCheckParameter2[5];
                }
                if ( (*(_BYTE *)(v22 + 22) & 8) != 0 )
                  *(_DWORD *)(a3 + 56) |= 8u;
              }
              if ( (*(_DWORD *)(a3 + 36) & 0x10000) == 0 )
              {
                if ( v13 )
                {
                  *(_DWORD *)(a3 + 4) = v18;
                  *(_DWORD *)(a3 + 8) = v21;
                  *(_DWORD *)(a3 + 12) = v19;
                  *(_DWORD *)(a3 + 16) = v20;
                }
                else
                {
                  *(_DWORD *)(a3 + 4) = v21;
                  *(_DWORD *)(a3 + 8) = v18;
                  *(_DWORD *)(a3 + 12) = v20;
                  *(_DWORD *)(a3 + 16) = v19;
                }
                v26 = (_DWORD *)BugCheckParameter2[5];
                if ( a2 == -4 )
                {
                  v27 = v26[27];
                  v28 = v26[26];
                }
                else
                {
                  v27 = v26[23];
                  v28 = v26[22];
                }
                *(_DWORD *)(a3 + 4) += v28;
                *(_DWORD *)(a3 + 12) += v28;
                *(_DWORD *)(a3 + 16) += v27;
                *(_DWORD *)(a3 + 8) += v27;
                v29 = v33[9];
                v30 = v33[12];
                *(_DWORD *)(a3 + 20) = v33[9] - v21;
                *(_DWORD *)(a3 + 24) = v33[13] - v21;
                *(_DWORD *)(a3 + 28) = v30 - v21;
                if ( v33[13] == v29 )
                  *(_DWORD *)(a3 + 44) |= 0x8000u;
                if ( v30 == v33[10] )
                  *(_DWORD *)(a3 + 52) |= 0x8000u;
              }
              return 1LL;
            }
          }
LABEL_18:
          v18 = v33[6];
          v19 = v33[7];
          goto LABEL_19;
        }
LABEL_11:
        *(_DWORD *)(a3 + 36) |= 0x8000u;
        goto LABEL_12;
    }
  }
  UserSetLastError(87LL, v6, v7, v8);
  return 0LL;
}
