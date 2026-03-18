/*
 * XREFs of ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C011BCFC
 * Callers:
 *     DrawFrameControl @ 0x1C008CAFC (DrawFrameControl.c)
 * Callees:
 *     GreSetTextColor @ 0x1C002D630 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C002D740 (GreSetBkColor.c)
 *     GreExtTextOutWInternal @ 0x1C007F108 (GreExtTextOutWInternal.c)
 *     FillRect @ 0x1C008DA04 (FillRect.c)
 *     GrePolyPatBlt @ 0x1C008DA64 (GrePolyPatBlt.c)
 *     ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x1C011C018 (-FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall DrawBox(HDC a1, struct tagRECT *a2, __int16 a3)
{
  unsigned __int16 *v3; // r14
  int v5; // r15d
  int v8; // eax
  int v9; // ebx
  const wchar_t *v10; // rax
  LONG top; // r9d
  int v12; // r10d
  int v13; // eax
  int v14; // ecx
  LONG v15; // r12d
  LONG v16; // r13d
  int v17; // r15d
  unsigned __int16 *v18; // r14
  __int64 i; // rbx
  int v20; // edx
  HBRUSH *v22; // r8
  int v23; // ebx
  int v24; // [rsp+20h] [rbp-49h]
  int v25; // [rsp+50h] [rbp-19h]
  int v26; // [rsp+54h] [rbp-15h]
  _DWORD v27[4]; // [rsp+58h] [rbp-11h] BYREF
  __int64 v28; // [rsp+68h] [rbp-1h]
  int v29; // [rsp+70h] [rbp+7h]
  __int64 v30; // [rsp+74h] [rbp+Bh]
  __int64 v31; // [rsp+7Ch] [rbp+13h]

  v3 = L"nmlkji";
  v5 = a3 & 0x708;
  if ( (a3 & 2) != 0 )
  {
    v22 = (HBRUSH *)ghbrWhite;
    v9 = 0;
    v31 = 0LL;
    v30 = 0LL;
    v29 = 0;
    goto LABEL_22;
  }
  if ( (a3 & 0xC000) != 0 )
  {
    v8 = *(_DWORD *)(gpsi + 4592LL);
    LODWORD(v31) = v8;
    HIDWORD(v30) = v8;
    LODWORD(v30) = v8;
  }
  else
  {
    LODWORD(v30) = *(_DWORD *)(gpsi + 4656LL);
    HIDWORD(v30) = *(_DWORD *)(gpsi + 4652LL);
    LODWORD(v31) = *(_DWORD *)(gpsi + 4648LL);
    v8 = *(_DWORD *)(gpsi + 4632LL);
  }
  HIDWORD(v31) = v8;
  if ( (a3 & 0x300) != 0 )
  {
    v9 = *(_DWORD *)(gpsi + 4628LL);
  }
  else if ( v5 == 1032 )
  {
    v9 = *(_DWORD *)(gpsi + 4648LL);
  }
  else
  {
    v9 = *(_DWORD *)(gpsi + 4588LL);
  }
  v29 = v9;
  if ( (a3 & 1) != 0 )
  {
    v22 = (HBRUSH *)ghbrBlack;
LABEL_22:
    FillRect(a1, a2, *v22);
    goto LABEL_10;
  }
  v10 = L"gfedcb";
  if ( (a3 & 4) != 0 )
    v10 = L"nmlkji";
  v3 = (unsigned __int16 *)v10;
LABEL_10:
  top = a2->top;
  v12 = a2->bottom - top;
  v13 = a2->right - a2->left;
  v26 = v12;
  v25 = v13;
  v14 = v13;
  if ( v13 >= v12 )
    v14 = a2->bottom - top;
  v15 = a2->left + (v13 - v14) / 2;
  v16 = top + (v12 - v14) / 2;
  if ( v5 == 1032 && (*(_WORD *)(gpsi + 6996LL) < 8u || *(_DWORD *)(gpsi + 4648LL) == 0xFFFFFF) )
  {
    v23 = GreSetBkColor(a1, *(_DWORD *)(gpsi + 4648LL));
    v17 = GreSetTextColor(a1, *(_DWORD *)(gpsi + 4628LL));
    v27[0] = v15;
    v27[2] = v25;
    v27[3] = v26;
    v27[1] = v16;
    v28 = *(_QWORD *)(gpsi + 4944LL);
    GrePolyPatBlt(a1, 15728673, (struct _POLYPATBLT *)v27, 1);
    GreSetBkColor(a1, v23);
  }
  else
  {
    v17 = GreSetTextColor(a1, v9);
    GreExtTextOutWInternal(a1, v15, v16, 0, 0LL, v3, 1u, 0LL, 0LL, 0);
  }
  v18 = v3 + 1;
  for ( i = 1LL; i < 5; ++i )
  {
    GreSetTextColor(a1, *(&v29 + i));
    GreExtTextOutWInternal(a1, v15, v16, 0, 0LL, v18++, 1u, 0LL, 0LL, 0);
  }
  if ( (a3 & 0x400) != 0 )
  {
    if ( (a3 & 0x108) != 0 )
    {
      v20 = *(_DWORD *)(gpsi + 4632LL);
    }
    else if ( (a3 & 0x1000) != 0 )
    {
      v20 = *(_DWORD *)(gpsi + 4672LL);
    }
    else
    {
      v20 = *(_DWORD *)(gpsi + 4600LL);
    }
    GreSetTextColor(a1, v20);
    FlipUserTextOutW(a1, v15, v16, v18, v24);
  }
  GreSetTextColor(a1, v17);
  return 1LL;
}
