/*
 * XREFs of ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C0204DDC
 * Callers:
 *     xxxMNCompute @ 0x1C0013858 (xxxMNCompute.c)
 * Callees:
 *     GetOemBitmapInfoForDpi @ 0x1C000D3C0 (GetOemBitmapInfoForDpi.c)
 *     MNGetpItemFromIndex @ 0x1C0013D3C (MNGetpItemFromIndex.c)
 *     MNIsOwnerDrawItem @ 0x1C0021310 (MNIsOwnerDrawItem.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     GetDpiForSystem @ 0x1C003BA94 (GetDpiForSystem.c)
 *     GetDPIMetrics @ 0x1C0065818 (GetDPIMetrics.c)
 *     GreGetTextExtentW @ 0x1C00FAEAC (GreGetTextExtentW.c)
 *     CALL_LPK @ 0x1C0132C50 (CALL_LPK.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0132F54 (xxxClientGetTextExtentPointW.c)
 *     FindCharPosition @ 0x1C022BA90 (FindCharPosition.c)
 */

__int64 __fastcall xxxMNRecalcTabStrings(HDC a1, __int64 a2, unsigned int a3, unsigned int a4, int a5, int a6)
{
  unsigned int v6; // edi
  unsigned int v8; // ebp
  __int64 v10; // rcx
  int v11; // r13d
  __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  int v16; // r8d
  int v17; // r11d
  int v18; // r9d
  __int64 v19; // rcx
  __int64 v20; // rdx
  int CharPosition; // r15d
  int v22; // r10d
  __int64 ThreadWin32Thread; // rax
  int v24; // eax
  int v25; // r8d
  __int64 v26; // r10
  WCHAR *v27; // rdx
  int v28; // r8d
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 DPIMetrics; // rax
  unsigned int v32; // eax
  __int64 v33; // rcx
  unsigned int v34; // r8d
  unsigned int DpiForSystem; // eax
  char *OemBitmapInfoForDpi; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rax
  int v41; // r8d
  unsigned int v43; // [rsp+30h] [rbp-48h]
  struct tagSIZE v44; // [rsp+38h] [rbp-40h] BYREF
  int v47; // [rsp+A0h] [rbp+28h]

  v6 = a3;
  v8 = 0;
  v47 = a6 + a5;
  if ( a3 < *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 44LL) && a3 <= a4 )
  {
    v10 = *(_QWORD *)(a2 + 16);
    v11 = 0;
    v43 = a3;
    if ( !v10 )
      v10 = **(_QWORD **)a2;
    v12 = MNGetpItemFromIndex(v10, a3);
    if ( v6 < a4 )
    {
      while ( 1 )
      {
        if ( !v12 )
        {
LABEL_22:
          v6 = a3;
          goto LABEL_23;
        }
        v15 = *(_QWORD *)(a2 + 16);
        if ( !v15 )
          v15 = **(_QWORD **)a2;
        v16 = MNIsOwnerDrawItem(v15, (_DWORD **)v12, v13, v14);
        v17 = 0;
        *(_DWORD *)(*(_QWORD *)v12 + 80LL) = v18;
        if ( *(_QWORD *)(v12 + 24) )
        {
          if ( *(_DWORD *)(*(_QWORD *)v12 + 48LL) )
            break;
        }
        if ( v16 )
          goto LABEL_28;
LABEL_17:
        v32 = v17 + v47;
        v33 = *(_QWORD *)(a2 + 16);
        if ( v17 + v47 <= (int)v8 )
          v32 = v8;
        v34 = ++v43;
        v8 = v32;
        if ( !v33 )
          v33 = **(_QWORD **)a2;
        v12 = MNGetpItemFromIndex(v33, v34);
        if ( (unsigned int)v13 >= a4 )
          goto LABEL_22;
      }
      if ( !v16 )
      {
        v19 = *(_QWORD *)(v12 + 24);
        v44 = 0LL;
        CharPosition = FindCharPosition(v19, 9LL);
        if ( CharPosition < v22 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20);
          v24 = CALL_LPK(ThreadWin32Thread);
          v27 = (WCHAR *)(v26 + 2);
          v28 = v25 - CharPosition - 1;
          if ( v24 )
            xxxClientGetTextExtentPointW(a1, v27, v28, &v44);
          else
            GreGetTextExtentW(a1, v27, v28, &v44, 1);
          DPIMetrics = GetDPIMetrics(v30, v29);
          v17 = *(_DWORD *)(DPIMetrics + 8) + v44.cx;
        }
        goto LABEL_17;
      }
LABEL_28:
      ++v11;
      goto LABEL_17;
    }
LABEL_23:
    if ( v11 != a4 - v6 )
    {
      DpiForSystem = GetDpiForSystem();
      OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(63LL, DpiForSystem);
      v8 += *(_DWORD *)(GetDPIMetrics(v38, v37) + 8) + *((__int16 *)OemBitmapInfoForDpi + 2);
    }
    v39 = *(_QWORD *)(a2 + 16);
    if ( !v39 )
      v39 = **(_QWORD **)a2;
    while ( 1 )
    {
      v40 = MNGetpItemFromIndex(v39, v6);
      if ( v6 >= a4 || !v40 )
        break;
      ++v6;
      *(_DWORD *)(*(_QWORD *)v40 + 72LL) = v41;
      v39 = *(_QWORD *)(a2 + 16);
      if ( !v39 )
        v39 = **(_QWORD **)a2;
    }
  }
  return v8;
}
