/*
 * XREFs of ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1C023BFD8
 * Callers:
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1C023C0B4 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 * Callees:
 *     IntersectRect @ 0x1C00C7044 (IntersectRect.c)
 *     GetScreenRect @ 0x1C012D034 (GetScreenRect.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     GreSaveScreenBits @ 0x1C0299198 (GreSaveScreenBits.c)
 */

__int64 __fastcall SaveScreen(struct tagWND *a1, unsigned int a2, __int64 a3, __int64 a4, int a5, int a6, int a7)
{
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // r8
  int v12; // eax
  __int128 v14; // [rsp+20h] [rbp-48h] BYREF
  int v15[4]; // [rsp+30h] [rbp-38h] BYREF

  v9 = *((_QWORD *)a1 + 5);
  if ( (*(_WORD *)(v9 + 42) & 0x3FFF) == 0x29D )
  {
    v10 = 0;
    v11 = 1LL;
  }
  else
  {
    v10 = *(_DWORD *)(v9 + 88);
    v11 = 0LL;
  }
  v15[0] = a4 + v10;
  v15[2] = a4 + a6;
  if ( (_DWORD)v11 )
    v12 = 0;
  else
    v12 = *(_DWORD *)(v9 + 92);
  v15[3] = a7 + a5;
  v15[1] = a5 + v12;
  v14 = *GetScreenRect(&v14, v9, v11, a4);
  if ( (unsigned int)IntersectRect(v15, v15, (int *)&v14) )
    return GreSaveScreenBits(*(_QWORD *)(gpDispInfo + 40LL), a2, a3, v15);
  else
    return 0LL;
}
