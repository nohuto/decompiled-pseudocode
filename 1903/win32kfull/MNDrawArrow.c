/*
 * XREFs of MNDrawArrow @ 0x1C024A2A8
 * Callers:
 *     xxxMNSetTop @ 0x1C0226E04 (xxxMNSetTop.c)
 *     xxxMNDrawFullNC @ 0x1C024A69C (xxxMNDrawFullNC.c)
 *     xxxMNInvertItem @ 0x1C024A9E4 (xxxMNInvertItem.c)
 * Callees:
 *     BitBltSysBmp @ 0x1C000B87C (BitBltSysBmp.c)
 *     GetOemBitmapInfoForDpi @ 0x1C000BAC8 (GetOemBitmapInfoForDpi.c)
 *     DrawFrameControl @ 0x1C008CAFC (DrawFrameControl.c)
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C00FBE48 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall MNDrawArrow(HDC a1, __int64 **a2, __int64 a3)
{
  int v3; // ebx
  __int64 v6; // r13
  __int64 result; // rax
  __int64 v8; // r9
  HDC DCEx; // rbp
  __int64 v10; // rcx
  unsigned int DpiForSystem; // eax
  unsigned int v12; // esi
  __int64 v13; // r8
  int v14; // edi
  __int64 v15; // r9
  int v16; // r10d
  __int64 v17; // rax
  int v18; // edi
  int v19; // ebx
  const struct tagDPIMETRICS *DPIMETRICS; // rax
  int v21; // ebx
  __int64 v22; // rcx
  unsigned int v23; // r12d
  __int64 v24; // rdx
  unsigned int v25; // eax
  char *OemBitmapInfoForDpi; // rax
  int v27; // ecx
  struct tagRECT v28; // [rsp+30h] [rbp-38h] BYREF

  v3 = a3;
  v6 = *(_QWORD *)(**a2 + 16);
  result = *(_QWORD *)(**a2 + 40);
  v8 = *(unsigned int *)(result + 124);
  if ( (v8 & 3) != 0 )
  {
    if ( a1 )
      DCEx = a1;
    else
      DCEx = (HDC)_GetDCEx(v6, 0LL, 66561LL);
    v10 = *(_QWORD *)(*(_QWORD *)(**a2 + 40) + 40LL);
    if ( *(int *)(v10 + 40) < 0 )
    {
      v12 = 7;
    }
    else
    {
      DpiForSystem = GetDpiForSystem(v10, (__int64)a2, a3, v8);
      v12 = *((__int16 *)GetOemBitmapInfoForDpi(63, DpiForSystem) + 2) + 3;
    }
    if ( v3 == -3 )
    {
      v13 = 65LL;
      v14 = 3;
      v15 = 2LL;
      v16 = 8;
    }
    else
    {
      v17 = *(_QWORD *)(v6 + 40);
      v18 = *(_DWORD *)(v17 + 100);
      v19 = *(_DWORD *)(v17 + 92);
      DPIMETRICS = GetDPIMETRICS((struct tagWND *)v6, (__int64)a2, a3, v8);
      v13 = 68LL;
      v15 = 3LL;
      v16 = 16;
      v14 = v18 - *((_DWORD *)DPIMETRICS + 7) - v19 - 3;
    }
    v21 = v16 | 0x100;
    v22 = **a2;
    v23 = v13 + 2;
    if ( (*(_DWORD *)(*(_QWORD *)(v22 + 40) + 124LL) & 3) != (_DWORD)v15 )
    {
      v21 = v16;
      v23 = v13;
    }
    v24 = *(_QWORD *)(*(_QWORD *)(**a2 + 40) + 40LL);
    if ( *(_QWORD *)(v24 + 24) )
    {
      v25 = GetDpiForSystem(v22, v24, v13, v15);
      OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(65, v25);
      v28.top = v14;
      v28.left = v12;
      v27 = *((__int16 *)OemBitmapInfoForDpi + 2);
      LODWORD(OemBitmapInfoForDpi) = *((__int16 *)OemBitmapInfoForDpi + 3);
      v28.right = v12 + v27;
      v28.bottom = v14 + (_DWORD)OemBitmapInfoForDpi;
      result = DrawFrameControl(DCEx, &v28, 2u, v21 | 0x800u);
    }
    else
    {
      BitBltSysBmp(DCEx, v12, v14, v23, 1);
      result = BitBltSysBmp(DCEx, v12, v14, v23, 1);
    }
    if ( !a1 )
      return _ReleaseDC(DCEx);
  }
  return result;
}
