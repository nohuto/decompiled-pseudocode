/*
 * XREFs of xxxGetScrollBarInfo @ 0x1C003891C
 * Callers:
 *     NtUserGetScrollBarInfo @ 0x1C0038690 (NtUserGetScrollBarInfo.c)
 *     xxxSBWndProc @ 0x1C0201660 (xxxSBWndProc.c)
 * Callees:
 *     GetRect @ 0x1C0038BE0 (GetRect.c)
 *     CalcSBStuff @ 0x1C0038D48 (CalcSBStuff.c)
 *     CalcSBStuff2 @ 0x1C0038E5C (CalcSBStuff2.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall xxxGetScrollBarInfo(_QWORD *BugCheckParameter2, int a2, __int64 a3)
{
  int v6; // r15d
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rcx
  unsigned int v10; // r13d
  bool v11; // zf
  __int64 v12; // rcx
  int v13; // ecx
  int *v14; // rax
  int v15; // r10d
  int v16; // r8d
  int v17; // r11d
  int v18; // edx
  int v19; // r9d
  __int64 v20; // rcx
  char v21; // al
  __int64 v23; // rcx
  _DWORD *v24; // rax
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  int v28; // r8d
  int v29; // r8d
  _BYTE v30[16]; // [rsp+58h] [rbp-19h] BYREF
  _DWORD v31[16]; // [rsp+68h] [rbp-9h] BYREF

  memset(v31, 0, sizeof(v31));
  if ( *(_DWORD *)a3 == 60 )
  {
    LOBYTE(v6) = 0;
    if ( BugCheckParameter2
      && ((v7 = BugCheckParameter2[5], (*(_WORD *)(v7 + 42) & 0x3FFF) == 0x29A)
       || **(_WORD **)(BugCheckParameter2[14] + 8LL) == *(_WORD *)(gpsi + 876LL)) )
    {
      if ( *(_DWORD *)(v7 + 252) )
        v8 = BugCheckParameter2[34];
      else
        v8 = *(_QWORD *)(v7 + 296);
    }
    else
    {
      v8 = 0LL;
    }
    if ( a2 == -4 && !v8 )
    {
      _InterlockedAdd(&glSendMessage, 1u);
      return xxxSendTransformableMessageTimeout((ULONG_PTR)BugCheckParameter2, 0, 0, 0LL, 1, 1);
    }
    *(_QWORD *)(a3 + 36) = 0LL;
    *(_QWORD *)(a3 + 44) = 0LL;
    *(_QWORD *)(a3 + 52) = 0LL;
    switch ( a2 )
    {
      case -4:
        v6 = *(_DWORD *)(v8 + 12);
        v10 = *(_DWORD *)(v8 + 8);
        GetRect(BugCheckParameter2, v30, 17LL);
        CalcSBStuff2(v31, v30, v8 + 16, *(unsigned int *)(v8 + 8));
        goto LABEL_22;
      case -5:
        v9 = BugCheckParameter2[5];
        v10 = 1;
        if ( (*(_BYTE *)(v9 + 30) & 0x20) != 0 )
        {
          v11 = (*(_BYTE *)(v9 + 16) & 2) == 0;
          goto LABEL_11;
        }
        goto LABEL_15;
      case -6:
        v12 = BugCheckParameter2[5];
        v10 = 0;
        if ( (*(_BYTE *)(v12 + 30) & 0x10) != 0 )
        {
          v11 = (*(_BYTE *)(v12 + 16) & 4) == 0;
LABEL_11:
          if ( v11 )
            *(_DWORD *)(a3 + 36) |= 0x10000u;
LABEL_16:
          v13 = *(_DWORD *)(a3 + 36);
          if ( (v13 & 0x8000) != 0 )
            return 1LL;
          v14 = (int *)BugCheckParameter2[16];
          if ( v14 )
          {
            v6 = *v14;
            if ( v10 )
              v6 >>= 2;
            LOBYTE(v6) = v6 & 3;
          }
          else
          {
            UserSetLastError(1447LL);
            v13 = *(_DWORD *)(a3 + 36);
          }
          if ( (v13 & 0x10000) == 0 )
          {
            CalcSBStuff(BugCheckParameter2, v31, v10);
            v23 = BugCheckParameter2[5];
            if ( (*(_BYTE *)(v23 + 26) & 0x40) != 0 )
            {
              v29 = *(_DWORD *)(v23 + 96) - *(_DWORD *)(v23 + 88);
              if ( !v10 )
              {
                v15 = v31[6];
                v18 = v29 - v31[5];
                v17 = v29 - v31[4];
                v16 = v31[7];
                goto LABEL_24;
              }
              v15 = v29 - v31[7];
              v16 = v29 - v31[6];
LABEL_23:
              v17 = v31[5];
              v18 = v31[4];
LABEL_24:
              if ( (v6 & 1) != 0 )
              {
                *(_DWORD *)(a3 + 40) |= 1u;
                *(_DWORD *)(a3 + 44) |= 1u;
              }
              if ( (v6 & 2) != 0 )
              {
                *(_DWORD *)(a3 + 56) |= 1u;
                *(_DWORD *)(a3 + 52) |= 1u;
              }
              v19 = *(_DWORD *)(a3 + 36);
              if ( (v6 & 3) == 3 )
              {
                v19 |= 1u;
                *(_DWORD *)(a3 + 36) = v19;
              }
              v20 = BugCheckParameter2[5];
              v21 = *(_BYTE *)(v20 + 22);
              if ( (v21 & 0x10) != 0 && (a2 != -5 || (v21 & 0x20) != 0) )
              {
                if ( (v21 & 1) != 0 )
                {
                  *(_DWORD *)(a3 + 40) |= 8u;
                  v20 = BugCheckParameter2[5];
                }
                if ( (*(_BYTE *)(v20 + 22) & 2) != 0 )
                {
                  *(_DWORD *)(a3 + 44) |= 8u;
                  v20 = BugCheckParameter2[5];
                }
                if ( (*(_BYTE *)(v20 + 22) & 4) != 0 )
                {
                  *(_DWORD *)(a3 + 52) |= 8u;
                  v20 = BugCheckParameter2[5];
                }
                if ( (*(_BYTE *)(v20 + 22) & 8) != 0 )
                  *(_DWORD *)(a3 + 56) |= 8u;
              }
              if ( (v19 & 0x10000) == 0 )
              {
                if ( v10 )
                {
                  *(_DWORD *)(a3 + 4) = v15;
                  *(_DWORD *)(a3 + 8) = v18;
                  *(_DWORD *)(a3 + 12) = v16;
                  *(_DWORD *)(a3 + 16) = v17;
                }
                else
                {
                  *(_DWORD *)(a3 + 4) = v18;
                  *(_DWORD *)(a3 + 8) = v15;
                  *(_DWORD *)(a3 + 12) = v17;
                  *(_DWORD *)(a3 + 16) = v16;
                }
                v24 = (_DWORD *)BugCheckParameter2[5];
                if ( a2 == -4 )
                {
                  v25 = v24[27];
                  v26 = v24[26];
                }
                else
                {
                  v25 = v24[23];
                  v26 = v24[22];
                }
                *(_DWORD *)(a3 + 4) += v26;
                *(_DWORD *)(a3 + 12) += v26;
                *(_DWORD *)(a3 + 16) += v25;
                *(_DWORD *)(a3 + 8) += v25;
                v27 = v31[9];
                v28 = v31[12];
                *(_DWORD *)(a3 + 20) = v31[9] - v18;
                *(_DWORD *)(a3 + 24) = v31[13] - v18;
                *(_DWORD *)(a3 + 28) = v28 - v18;
                if ( v31[13] == v27 )
                  *(_DWORD *)(a3 + 44) |= 0x8000u;
                if ( v28 == v31[10] )
                  *(_DWORD *)(a3 + 52) |= 0x8000u;
              }
              return 1LL;
            }
          }
LABEL_22:
          v15 = v31[6];
          v16 = v31[7];
          goto LABEL_23;
        }
LABEL_15:
        *(_DWORD *)(a3 + 36) |= 0x8000u;
        goto LABEL_16;
    }
  }
  UserSetLastError(87LL);
  return 0LL;
}
