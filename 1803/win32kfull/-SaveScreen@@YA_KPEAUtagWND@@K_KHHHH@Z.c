/*
 * XREFs of ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C01FB23C
 * Callers:
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C01FB318 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 * Callees:
 *     IntersectRect @ 0x1C002D204 (IntersectRect.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     GetScreenRect @ 0x1C022B0B4 (GetScreenRect.c)
 *     GreSaveScreenBits @ 0x1C026E4A4 (GreSaveScreenBits.c)
 */

__int64 __fastcall SaveScreen(struct tagWND *a1, unsigned int a2, __int64 a3, int a4, int a5, int a6, int a7)
{
  __int64 v9; // rdx
  int v10; // r8d
  int v11; // eax
  int v12; // eax
  __int128 v14; // [rsp+20h] [rbp-48h] BYREF
  int v15[4]; // [rsp+30h] [rbp-38h] BYREF

  v9 = *((_QWORD *)a1 + 5);
  v10 = *(_WORD *)(v9 + 42) & 0x3FFF;
  if ( v10 == 669 )
    v11 = 0;
  else
    v11 = *(_DWORD *)(v9 + 88);
  v15[0] = a4 + v11;
  v15[2] = a4 + a6;
  if ( v10 == 669 )
    v12 = 0;
  else
    v12 = *(_DWORD *)(v9 + 92);
  v15[3] = a7 + a5;
  v15[1] = a5 + v12;
  v14 = *(_OWORD *)GetScreenRect(&v14);
  if ( (unsigned int)IntersectRect(v15, v15, (int *)&v14) )
    return GreSaveScreenBits(*(_QWORD *)(gpDispInfo + 40LL), a2, a3, v15);
  else
    return 0LL;
}
