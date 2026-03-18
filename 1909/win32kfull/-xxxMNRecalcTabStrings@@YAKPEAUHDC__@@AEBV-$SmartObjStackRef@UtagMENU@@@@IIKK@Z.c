/*
 * XREFs of ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C0245F44
 * Callers:
 *     xxxMNCompute @ 0x1C012A0B0 (xxxMNCompute.c)
 * Callees:
 *     MNIsOwnerDrawItem @ 0x1C00289B0 (MNIsOwnerDrawItem.c)
 *     GetDpiForSystem @ 0x1C004B4C4 (GetDpiForSystem.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00EAC28 (GetOemBitmapInfoForDpi.c)
 *     GreGetTextExtentW @ 0x1C00F77A4 (GreGetTextExtentW.c)
 *     MNGetpItemFromIndex @ 0x1C012A5A4 (MNGetpItemFromIndex.c)
 *     GetDPIMetrics @ 0x1C012C10C (GetDPIMetrics.c)
 *     CALL_LPK @ 0x1C0158514 (CALL_LPK.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0158874 (xxxClientGetTextExtentPointW.c)
 *     FindCharPosition @ 0x1C025A0BC (FindCharPosition.c)
 */

__int64 __fastcall xxxMNRecalcTabStrings(HDC a1, __int64 a2, unsigned int a3, unsigned int a4, int a5, int a6)
{
  unsigned int v6; // edi
  int v8; // r15d
  unsigned int v9; // ebp
  __int64 v11; // rcx
  int v12; // r13d
  unsigned int v13; // r12d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // rcx
  int v19; // r8d
  int v20; // r11d
  int v21; // r9d
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // r10d
  __int64 ThreadWin32Thread; // rax
  int v27; // eax
  unsigned int v28; // r8d
  __int64 v29; // r10
  WCHAR *v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 DPIMetrics; // rax
  __int64 v35; // rcx
  unsigned int v36; // eax
  unsigned int DpiForSystem; // eax
  char *OemBitmapInfoForDpi; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rcx
  __int64 v43; // rax
  int v44; // r8d
  struct _POINTL v46; // [rsp+30h] [rbp-48h] BYREF
  __int64 v47; // [rsp+38h] [rbp-40h]
  int CharPosition; // [rsp+88h] [rbp+10h]

  v6 = a3;
  v8 = a6 + a5;
  v9 = 0;
  if ( a3 < *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 44LL) && a3 <= a4 )
  {
    v11 = *(_QWORD *)(a2 + 16);
    v12 = 0;
    v13 = a3;
    if ( !v11 )
      v11 = **(_QWORD **)a2;
    v16 = MNGetpItemFromIndex(v11, a3);
    if ( v6 < a4 )
    {
      while ( 1 )
      {
        if ( !v16 )
        {
LABEL_22:
          v6 = a3;
          goto LABEL_23;
        }
        v18 = *(_QWORD *)(a2 + 16);
        if ( !v18 )
          v18 = **(_QWORD **)a2;
        v19 = MNIsOwnerDrawItem(v18, (_DWORD **)v16);
        v20 = 0;
        *(_DWORD *)(*(_QWORD *)v16 + 80LL) = v21;
        v22 = *(_QWORD *)(v16 + 24);
        v47 = v22;
        if ( v22 )
        {
          if ( *(_DWORD *)(*(_QWORD *)v16 + 48LL) )
            break;
        }
        if ( v19 )
          goto LABEL_28;
LABEL_17:
        v35 = *(_QWORD *)(a2 + 16);
        v36 = v20 + v8;
        if ( v20 + v8 <= (int)v9 )
          v36 = v9;
        ++v13;
        v9 = v36;
        if ( !v35 )
          v35 = **(_QWORD **)a2;
        v16 = MNGetpItemFromIndex(v35, v13);
        if ( v13 >= a4 )
          goto LABEL_22;
      }
      if ( !v19 )
      {
        v46 = 0LL;
        CharPosition = FindCharPosition(v22, 9LL);
        if ( CharPosition < v25 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24);
          v27 = CALL_LPK(ThreadWin32Thread);
          v30 = (WCHAR *)(v29 + 2);
          if ( v27 )
            xxxClientGetTextExtentPointW(a1, v30, v28, &v46);
          else
            GreGetTextExtentW(a1, v30, v28, (struct tagSIZE *)&v46, 1);
          DPIMetrics = GetDPIMetrics(v32, v31, v33);
          v20 = *(_DWORD *)(DPIMetrics + 8) + v46.x;
        }
        goto LABEL_17;
      }
LABEL_28:
      ++v12;
      goto LABEL_17;
    }
LABEL_23:
    if ( v12 != a4 - v6 )
    {
      DpiForSystem = GetDpiForSystem(v15, v14, v17);
      OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(63LL, DpiForSystem);
      v9 += *(_DWORD *)(GetDPIMetrics(v40, v39, v41) + 8) + *((__int16 *)OemBitmapInfoForDpi + 2);
    }
    v42 = *(_QWORD *)(a2 + 16);
    if ( !v42 )
      v42 = **(_QWORD **)a2;
    while ( 1 )
    {
      v43 = MNGetpItemFromIndex(v42, v6);
      if ( v6 >= a4 || !v43 )
        break;
      ++v6;
      *(_DWORD *)(*(_QWORD *)v43 + 72LL) = v44;
      v42 = *(_QWORD *)(a2 + 16);
      if ( !v42 )
        v42 = **(_QWORD **)a2;
    }
  }
  return v9;
}
