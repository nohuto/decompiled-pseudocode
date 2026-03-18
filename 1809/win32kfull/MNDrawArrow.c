/*
 * XREFs of MNDrawArrow @ 0x1C0231664
 * Callers:
 *     xxxMNSetTop @ 0x1C020F0B8 (xxxMNSetTop.c)
 *     xxxMNDrawFullNC @ 0x1C0231A54 (xxxMNDrawFullNC.c)
 *     xxxMNInvertItem @ 0x1C0231D7C (xxxMNInvertItem.c)
 * Callees:
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 *     DrawFrameControl @ 0x1C007BB1C (DrawFrameControl.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C00A707C (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     BitBltSysBmp @ 0x1C01066B8 (BitBltSysBmp.c)
 *     GetOemBitmapInfoForDpi @ 0x1C0106800 (GetOemBitmapInfoForDpi.c)
 */

__int64 __fastcall MNDrawArrow(HDC a1, __int64 a2, int a3)
{
  int v3; // r12d
  __int64 v7; // r13
  __int64 result; // rax
  HDC DCEx; // rbp
  unsigned int DpiForSystem; // eax
  LONG v11; // esi
  int v12; // edx
  LONG v13; // edi
  int v14; // r13d
  __int64 v15; // rax
  int v16; // edi
  int v17; // ebx
  const struct tagDPIMETRICS *DPIMETRICS; // rax
  unsigned int v19; // ebx
  unsigned int v20; // eax
  char *OemBitmapInfoForDpi; // rax
  int v22; // r9d
  int v23; // ecx
  struct tagRECT v24; // [rsp+30h] [rbp-38h] BYREF
  int v25; // [rsp+78h] [rbp+10h]

  v3 = 3;
  v7 = *(_QWORD *)(**(_QWORD **)a2 + 16LL);
  result = *(_QWORD *)(**(_QWORD **)a2 + 40LL);
  if ( (*(_DWORD *)(result + 124) & 3) != 0 )
  {
    if ( a1 )
      DCEx = a1;
    else
      DCEx = (HDC)_GetDCEx(v7, 0LL, 66561LL);
    if ( *(int *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 40LL) + 40LL) < 0 )
    {
      v11 = 7;
    }
    else
    {
      DpiForSystem = GetDpiForSystem();
      v11 = *((__int16 *)GetOemBitmapInfoForDpi(63LL, DpiForSystem) + 2) + 3;
    }
    if ( a3 == -3 )
    {
      v12 = 65;
      v13 = 3;
      v3 = 2;
      v14 = 8;
    }
    else
    {
      v15 = *(_QWORD *)(v7 + 40);
      v16 = *(_DWORD *)(v15 + 100);
      v17 = *(_DWORD *)(v15 + 92);
      DPIMETRICS = GetDPIMETRICS((struct tagWND *)v7);
      v12 = 68;
      v14 = 16;
      v13 = v16 - *((_DWORD *)DPIMETRICS + 7) - v17 - 3;
    }
    v19 = v12 + 2;
    v25 = *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 124LL) & 3;
    if ( v25 != v3 )
      v19 = v12;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 40LL) + 24LL) )
    {
      v20 = GetDpiForSystem();
      OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(65LL, v20);
      v24.top = v13;
      v22 = v14 | 0x100;
      v24.left = v11;
      v23 = *((__int16 *)OemBitmapInfoForDpi + 2);
      LODWORD(OemBitmapInfoForDpi) = v13 + *((__int16 *)OemBitmapInfoForDpi + 3);
      v24.right = v11 + v23;
      v24.bottom = (int)OemBitmapInfoForDpi;
      if ( v25 != v3 )
        v22 = v14;
      result = DrawFrameControl(DCEx, &v24, 2u, v22 | 0x800u);
    }
    else
    {
      BitBltSysBmp(DCEx, v11, v13, v19, 1);
      result = BitBltSysBmp(DCEx, v11, v13, v19, 1);
    }
    if ( !a1 )
      return _ReleaseDC(DCEx);
  }
  return result;
}
