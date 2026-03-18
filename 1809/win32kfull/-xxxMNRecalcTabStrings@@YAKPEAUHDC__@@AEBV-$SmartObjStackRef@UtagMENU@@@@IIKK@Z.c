/*
 * XREFs of ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C022DECC
 * Callers:
 *     xxxMNCompute @ 0x1C00AB240 (xxxMNCompute.c)
 * Callees:
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     MNIsOwnerDrawItem @ 0x1C006BA64 (MNIsOwnerDrawItem.c)
 *     MNGetpItemFromIndex @ 0x1C00AB734 (MNGetpItemFromIndex.c)
 *     GetDPIMetrics @ 0x1C00AB99C (GetDPIMetrics.c)
 *     GetOemBitmapInfoForDpi @ 0x1C0106800 (GetOemBitmapInfoForDpi.c)
 *     GreGetTextExtentW @ 0x1C0111340 (GreGetTextExtentW.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0151B08 (xxxClientGetTextExtentPointW.c)
 *     CALL_LPK @ 0x1C0151E74 (CALL_LPK.c)
 *     FindCharPosition @ 0x1C0241A1C (FindCharPosition.c)
 */

__int64 __fastcall xxxMNRecalcTabStrings(HDC a1, __int64 a2, unsigned int a3, unsigned int a4, int a5, int a6)
{
  unsigned int v6; // edi
  unsigned int v8; // ebp
  __int64 v10; // rcx
  int v11; // r13d
  __int64 v12; // rbx
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // r11d
  int v16; // r9d
  __int64 v17; // rcx
  __int64 v18; // rdx
  int CharPosition; // r15d
  int v20; // r10d
  __int64 ThreadWin32Thread; // rax
  int v22; // eax
  int v23; // r8d
  __int64 v24; // r10
  WCHAR *v25; // rdx
  int v26; // r8d
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 DPIMetrics; // rax
  unsigned int v30; // eax
  __int64 v31; // rcx
  unsigned int v32; // r8d
  unsigned int v33; // r8d
  unsigned int DpiForSystem; // eax
  char *OemBitmapInfoForDpi; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rax
  int v40; // r8d
  unsigned int v42; // [rsp+30h] [rbp-48h]
  struct _POINTL v43; // [rsp+38h] [rbp-40h] BYREF
  int v46; // [rsp+A0h] [rbp+28h]

  v6 = a3;
  v8 = 0;
  v46 = a6 + a5;
  if ( a3 < *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 44LL) && a3 <= a4 )
  {
    v10 = *(_QWORD *)(a2 + 16);
    v11 = 0;
    v42 = a3;
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
        v13 = *(_QWORD *)(a2 + 16);
        if ( !v13 )
          v13 = **(_QWORD **)a2;
        v14 = MNIsOwnerDrawItem(v13, (_DWORD **)v12);
        v15 = 0;
        *(_DWORD *)(*(_QWORD *)v12 + 80LL) = v16;
        if ( *(_QWORD *)(v12 + 24) )
        {
          if ( *(_DWORD *)(*(_QWORD *)v12 + 48LL) )
            break;
        }
        if ( v14 )
          goto LABEL_28;
LABEL_17:
        v30 = v15 + v46;
        v31 = *(_QWORD *)(a2 + 16);
        if ( v15 + v46 <= (int)v8 )
          v30 = v8;
        v32 = ++v42;
        v8 = v30;
        if ( !v31 )
          v31 = **(_QWORD **)a2;
        v12 = MNGetpItemFromIndex(v31, v32);
        if ( v33 >= a4 )
          goto LABEL_22;
      }
      if ( !v14 )
      {
        v17 = *(_QWORD *)(v12 + 24);
        v43 = 0LL;
        CharPosition = FindCharPosition(v17, 9LL);
        if ( CharPosition < v20 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18);
          v22 = CALL_LPK(ThreadWin32Thread);
          v25 = (WCHAR *)(v24 + 2);
          v26 = v23 - CharPosition - 1;
          if ( v22 )
            xxxClientGetTextExtentPointW(a1, v25, v26, &v43);
          else
            GreGetTextExtentW(a1, v25, v26, (struct tagSIZE *)&v43, 1);
          DPIMetrics = GetDPIMetrics(v28, v27);
          v15 = *(_DWORD *)(DPIMetrics + 8) + v43.x;
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
      v8 += *(_DWORD *)(GetDPIMetrics(v37, v36) + 8) + *((__int16 *)OemBitmapInfoForDpi + 2);
    }
    v38 = *(_QWORD *)(a2 + 16);
    if ( !v38 )
      v38 = **(_QWORD **)a2;
    while ( 1 )
    {
      v39 = MNGetpItemFromIndex(v38, v6);
      if ( v6 >= a4 || !v39 )
        break;
      ++v6;
      *(_DWORD *)(*(_QWORD *)v39 + 72LL) = v40;
      v38 = *(_QWORD *)(a2 + 16);
      if ( !v38 )
        v38 = **(_QWORD **)a2;
    }
  }
  return v8;
}
