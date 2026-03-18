/*
 * XREFs of ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C0246684
 * Callers:
 *     xxxMNCompute @ 0x1C00218EC (xxxMNCompute.c)
 * Callees:
 *     GetOemBitmapInfoForDpi @ 0x1C000BAC8 (GetOemBitmapInfoForDpi.c)
 *     MNGetpItemFromIndex @ 0x1C0021DE0 (MNGetpItemFromIndex.c)
 *     MNIsOwnerDrawItem @ 0x1C0022540 (MNIsOwnerDrawItem.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     GetDPIMetrics @ 0x1C00912E8 (GetDPIMetrics.c)
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 *     GreGetTextExtentW @ 0x1C011DC04 (GreGetTextExtentW.c)
 *     CALL_LPK @ 0x1C0157754 (CALL_LPK.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0157AB4 (xxxClientGetTextExtentPointW.c)
 *     FindCharPosition @ 0x1C025A7FC (FindCharPosition.c)
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
  __int64 v18; // r9
  __int64 v19; // rcx
  int v20; // r8d
  int v21; // r11d
  int v22; // r9d
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // r10d
  __int64 ThreadWin32Thread; // rax
  int v29; // eax
  unsigned int v30; // r8d
  __int64 v31; // r10
  WCHAR *v32; // rdx
  __int64 v33; // rcx
  unsigned int v34; // eax
  unsigned int DpiForSystem; // eax
  char *OemBitmapInfoForDpi; // rbx
  __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // r8d
  struct _POINTL v41; // [rsp+30h] [rbp-48h] BYREF
  __int64 v42; // [rsp+38h] [rbp-40h]
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
        v19 = *(_QWORD *)(a2 + 16);
        if ( !v19 )
          v19 = **(_QWORD **)a2;
        v20 = MNIsOwnerDrawItem(v19, (_DWORD **)v16);
        v21 = 0;
        *(_DWORD *)(*(_QWORD *)v16 + 80LL) = v22;
        v23 = *(_QWORD *)(v16 + 24);
        v42 = v23;
        if ( v23 )
        {
          if ( *(_DWORD *)(*(_QWORD *)v16 + 48LL) )
            break;
        }
        if ( v20 )
          goto LABEL_28;
LABEL_17:
        v33 = *(_QWORD *)(a2 + 16);
        v34 = v21 + v8;
        if ( v21 + v8 <= (int)v9 )
          v34 = v9;
        ++v13;
        v9 = v34;
        if ( !v33 )
          v33 = **(_QWORD **)a2;
        v16 = MNGetpItemFromIndex(v33, v13);
        if ( v13 >= a4 )
          goto LABEL_22;
      }
      if ( !v20 )
      {
        v41 = 0LL;
        CharPosition = FindCharPosition(v23, 9LL);
        if ( CharPosition < v27 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25, v26);
          v29 = CALL_LPK(ThreadWin32Thread);
          v32 = (WCHAR *)(v31 + 2);
          if ( v29 )
            xxxClientGetTextExtentPointW(a1, v32, v30, &v41);
          else
            GreGetTextExtentW(a1, v32, v30, (struct tagSIZE *)&v41, 1);
          v21 = *(_DWORD *)(GetDPIMetrics() + 8) + v41.x;
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
      DpiForSystem = GetDpiForSystem(v15, v14, v17, v18);
      OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(63, DpiForSystem);
      v9 += *(_DWORD *)(GetDPIMetrics() + 8) + *((__int16 *)OemBitmapInfoForDpi + 2);
    }
    v37 = *(_QWORD *)(a2 + 16);
    if ( !v37 )
      v37 = **(_QWORD **)a2;
    while ( 1 )
    {
      v38 = MNGetpItemFromIndex(v37, v6);
      if ( v6 >= a4 || !v38 )
        break;
      ++v6;
      *(_DWORD *)(*(_QWORD *)v38 + 72LL) = v39;
      v37 = *(_QWORD *)(a2 + 16);
      if ( !v37 )
        v37 = **(_QWORD **)a2;
    }
  }
  return v9;
}
