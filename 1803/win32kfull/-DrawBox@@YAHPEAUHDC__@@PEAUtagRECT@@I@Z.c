/*
 * XREFs of ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0012940
 * Callers:
 *     DrawFrameControl @ 0x1C0011304 (DrawFrameControl.c)
 * Callees:
 *     ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x1C000C8A4 (-FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z.c)
 *     GreSetTextColor @ 0x1C00133D4 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0013448 (GreSetBkColor.c)
 *     GreExtTextOutWInternal @ 0x1C007793C (GreExtTextOutWInternal.c)
 *     GrePolyPatBlt @ 0x1C009F6B0 (GrePolyPatBlt.c)
 *     FillRect @ 0x1C009F914 (FillRect.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall DrawBox(HDC a1, struct tagRECT *a2, __int16 a3)
{
  const char *v3; // r14
  int v5; // r15d
  int v8; // eax
  int v9; // ebx
  const wchar_t *v10; // rax
  LONG top; // r9d
  int v12; // r10d
  int v13; // eax
  int v14; // ecx
  unsigned int v15; // r12d
  unsigned int v16; // r13d
  const unsigned __int16 *v17; // r14
  __int64 i; // rbx
  HBRUSH *v20; // r8
  int v21; // [rsp+50h] [rbp-19h]
  int v22; // [rsp+54h] [rbp-15h]
  _DWORD v23[4]; // [rsp+58h] [rbp-11h] BYREF
  __int64 v24; // [rsp+68h] [rbp-1h]
  int v25; // [rsp+70h] [rbp+7h]
  __int64 v26; // [rsp+74h] [rbp+Bh]
  __int64 v27; // [rsp+7Ch] [rbp+13h]

  v3 = L"nmlkji";
  v5 = a3 & 0x708;
  if ( (a3 & 2) != 0 )
  {
    v20 = (HBRUSH *)ghbrWhite;
    v27 = 0LL;
    v26 = 0LL;
    v25 = 0;
    goto LABEL_20;
  }
  if ( (a3 & 0xC000) != 0 )
  {
    v8 = *(_DWORD *)(gpsi + 4592LL);
    LODWORD(v27) = v8;
    HIDWORD(v26) = v8;
    LODWORD(v26) = v8;
  }
  else
  {
    LODWORD(v26) = *(_DWORD *)(gpsi + 4656LL);
    HIDWORD(v26) = *(_DWORD *)(gpsi + 4652LL);
    LODWORD(v27) = *(_DWORD *)(gpsi + 4648LL);
    v8 = *(_DWORD *)(gpsi + 4632LL);
  }
  HIDWORD(v27) = v8;
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
  v25 = v9;
  if ( (a3 & 1) != 0 )
  {
    v20 = (HBRUSH *)ghbrBlack;
LABEL_20:
    FillRect(a1, a2, *v20);
    goto LABEL_10;
  }
  v10 = L"gfedcb";
  if ( (a3 & 4) != 0 )
    v10 = (const wchar_t *)L"nmlkji";
  v3 = (const char *)v10;
LABEL_10:
  top = a2->top;
  v12 = a2->bottom - top;
  v13 = a2->right - a2->left;
  v22 = v12;
  v21 = v13;
  v14 = v13;
  if ( v13 >= v12 )
    v14 = a2->bottom - top;
  v15 = a2->left + (v13 - v14) / 2;
  v16 = top + (v12 - v14) / 2;
  if ( v5 == 1032 && (*(_WORD *)(gpsi + 6996LL) < 8u || *(_DWORD *)(gpsi + 4648LL) == 0xFFFFFF) )
  {
    GreSetBkColor(a1);
    GreSetTextColor(a1);
    v23[0] = v15;
    v23[2] = v21;
    v23[3] = v22;
    v23[1] = v16;
    v24 = *(_QWORD *)(gpsi + 4944LL);
    GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)v23, 1u);
    GreSetBkColor(a1);
  }
  else
  {
    GreSetTextColor(a1);
    GreExtTextOutWInternal(a1, 0LL, (__int64)v3, 1, 0LL, 0LL, 0);
  }
  v17 = (const unsigned __int16 *)(v3 + 2);
  for ( i = 1LL; i < 5; ++i )
  {
    GreSetTextColor(a1);
    GreExtTextOutWInternal(a1, 0LL, (__int64)v17++, 1, 0LL, 0LL, 0);
  }
  if ( (a3 & 0x400) != 0 )
  {
    GreSetTextColor(a1);
    FlipUserTextOutW(a1, v15, v16, v17);
  }
  GreSetTextColor(a1);
  return 1LL;
}
