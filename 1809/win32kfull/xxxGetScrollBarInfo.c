/*
 * XREFs of xxxGetScrollBarInfo @ 0x1C001FD30
 * Callers:
 *     NtUserGetScrollBarInfo @ 0x1C001FA60 (NtUserGetScrollBarInfo.c)
 *     xxxSBWndProc @ 0x1C022A0D0 (xxxSBWndProc.c)
 * Callees:
 *     unsafe_cast_fnid_or_class_to_PSBWND @ 0x1C001FFA0 (unsafe_cast_fnid_or_class_to_PSBWND.c)
 *     CalcSBStuff @ 0x1C0020010 (CalcSBStuff.c)
 *     CalcSBStuff2 @ 0x1C0020124 (CalcSBStuff2.c)
 *     GetRect @ 0x1C0021568 (GetRect.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall xxxGetScrollBarInfo(ULONG_PTR BugCheckParameter2, int a2, __int64 a3)
{
  __int64 v6; // rax
  int v7; // esi
  __int64 v8; // r15
  __int64 v9; // rcx
  unsigned int v10; // r13d
  bool v11; // zf
  __int64 v12; // rcx
  int v13; // ecx
  int *v14; // rax
  int v15; // r9d
  int v16; // r8d
  int v17; // r10d
  int v18; // edx
  __int64 v19; // rcx
  char v20; // al
  __int64 v22; // rcx
  _DWORD *v23; // rax
  int v24; // ecx
  int v25; // eax
  int v26; // ecx
  int v27; // r8d
  int v28; // r8d
  _BYTE v29[16]; // [rsp+58h] [rbp-19h] BYREF
  _DWORD v30[16]; // [rsp+68h] [rbp-9h] BYREF

  memset(v30, 0, sizeof(v30));
  if ( *(_DWORD *)a3 == 60 )
  {
    v6 = unsafe_cast_fnid_or_class_to_PSBWND(BugCheckParameter2);
    LOBYTE(v7) = 0;
    v8 = v6;
    if ( a2 == -4 && !v6 )
    {
      _InterlockedAdd(&glSendMessage, 1u);
      return xxxSendTransformableMessageTimeout(BugCheckParameter2, 0, 0, 0LL, 1, 1);
    }
    *(_QWORD *)(a3 + 36) = 0LL;
    *(_QWORD *)(a3 + 44) = 0LL;
    *(_QWORD *)(a3 + 52) = 0LL;
    switch ( a2 )
    {
      case -4:
        v7 = *(_DWORD *)(v6 + 12);
        v10 = *(_DWORD *)(v6 + 8);
        GetRect(BugCheckParameter2, v29, 17LL);
        CalcSBStuff2(v30, v29, v8 + 16, *(unsigned int *)(v8 + 8));
        goto LABEL_18;
      case -5:
        v9 = *(_QWORD *)(BugCheckParameter2 + 40);
        v10 = 1;
        if ( (*(_BYTE *)(v9 + 30) & 0x20) != 0 )
        {
          v11 = (*(_BYTE *)(v9 + 16) & 2) == 0;
          goto LABEL_7;
        }
        goto LABEL_11;
      case -6:
        v12 = *(_QWORD *)(BugCheckParameter2 + 40);
        v10 = 0;
        if ( (*(_BYTE *)(v12 + 30) & 0x10) != 0 )
        {
          v11 = (*(_BYTE *)(v12 + 16) & 4) == 0;
LABEL_7:
          if ( v11 )
            *(_DWORD *)(a3 + 36) |= 0x10000u;
LABEL_12:
          v13 = *(_DWORD *)(a3 + 36);
          if ( (v13 & 0x8000) != 0 )
            return 1LL;
          v14 = *(int **)(BugCheckParameter2 + 128);
          if ( v14 )
          {
            v7 = *v14;
            if ( v10 )
              v7 >>= 2;
            LOBYTE(v7) = v7 & 3;
          }
          else
          {
            UserSetLastError(1447LL);
            v13 = *(_DWORD *)(a3 + 36);
          }
          if ( (v13 & 0x10000) == 0 )
          {
            CalcSBStuff(BugCheckParameter2, v30, v10);
            v22 = *(_QWORD *)(BugCheckParameter2 + 40);
            if ( (*(_BYTE *)(v22 + 26) & 0x40) != 0 )
            {
              v28 = *(_DWORD *)(v22 + 96) - *(_DWORD *)(v22 + 88);
              if ( !v10 )
              {
                v15 = v30[6];
                v18 = v28 - v30[5];
                v17 = v28 - v30[4];
                v16 = v30[7];
                goto LABEL_20;
              }
              v15 = v28 - v30[7];
              v16 = v28 - v30[6];
LABEL_19:
              v17 = v30[5];
              v18 = v30[4];
LABEL_20:
              if ( (v7 & 1) != 0 )
              {
                *(_DWORD *)(a3 + 40) |= 1u;
                *(_DWORD *)(a3 + 44) |= 1u;
              }
              if ( (v7 & 2) != 0 )
              {
                *(_DWORD *)(a3 + 56) |= 1u;
                *(_DWORD *)(a3 + 52) |= 1u;
              }
              if ( (v7 & 3) == 3 )
                *(_DWORD *)(a3 + 36) |= 1u;
              v19 = *(_QWORD *)(BugCheckParameter2 + 40);
              v20 = *(_BYTE *)(v19 + 22);
              if ( (v20 & 0x10) != 0 && (a2 != -5 || (v20 & 0x20) != 0) )
              {
                if ( (v20 & 1) != 0 )
                {
                  *(_DWORD *)(a3 + 40) |= 8u;
                  v19 = *(_QWORD *)(BugCheckParameter2 + 40);
                }
                if ( (*(_BYTE *)(v19 + 22) & 2) != 0 )
                {
                  *(_DWORD *)(a3 + 44) |= 8u;
                  v19 = *(_QWORD *)(BugCheckParameter2 + 40);
                }
                if ( (*(_BYTE *)(v19 + 22) & 4) != 0 )
                {
                  *(_DWORD *)(a3 + 52) |= 8u;
                  v19 = *(_QWORD *)(BugCheckParameter2 + 40);
                }
                if ( (*(_BYTE *)(v19 + 22) & 8) != 0 )
                  *(_DWORD *)(a3 + 56) |= 8u;
              }
              if ( (*(_DWORD *)(a3 + 36) & 0x10000) == 0 )
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
                v23 = *(_DWORD **)(BugCheckParameter2 + 40);
                if ( a2 == -4 )
                {
                  v24 = v23[27];
                  v25 = v23[26];
                }
                else
                {
                  v24 = v23[23];
                  v25 = v23[22];
                }
                *(_DWORD *)(a3 + 4) += v25;
                *(_DWORD *)(a3 + 12) += v25;
                *(_DWORD *)(a3 + 16) += v24;
                *(_DWORD *)(a3 + 8) += v24;
                v26 = v30[9];
                v27 = v30[12];
                *(_DWORD *)(a3 + 20) = v30[9] - v18;
                *(_DWORD *)(a3 + 24) = v30[13] - v18;
                *(_DWORD *)(a3 + 28) = v27 - v18;
                if ( v30[13] == v26 )
                  *(_DWORD *)(a3 + 44) |= 0x8000u;
                if ( v27 == v30[10] )
                  *(_DWORD *)(a3 + 52) |= 0x8000u;
              }
              return 1LL;
            }
          }
LABEL_18:
          v15 = v30[6];
          v16 = v30[7];
          goto LABEL_19;
        }
LABEL_11:
        *(_DWORD *)(a3 + 36) |= 0x8000u;
        goto LABEL_12;
    }
  }
  UserSetLastError(87LL);
  return 0LL;
}
