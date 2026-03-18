/*
 * XREFs of ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0249504
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x1C0111460 (xxxDrawMenuBarUnderlines.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C02496C8 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     NtGdiPatBlt @ 0x1C00BB170 (NtGdiPatBlt.c)
 *     GreGetTextExtentW @ 0x1C00F77A4 (GreGetTextExtentW.c)
 *     MNGetpItemIndex @ 0x1C012A92C (MNGetpItemIndex.c)
 *     GetDPIMetrics @ 0x1C012C10C (GetDPIMetrics.c)
 *     CALL_LPK @ 0x1C0158514 (CALL_LPK.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0158874 (xxxClientGetTextExtentPointW.c)
 */

__int64 __fastcall xxxDrawItemUnderline(
        __int64 **a1,
        __int64 a2,
        HDC a3,
        int a4,
        int a5,
        unsigned __int16 *a6,
        unsigned int a7)
{
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r12
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 DPIMetrics; // rax
  unsigned int v21; // r15d
  WCHAR *v22; // r10
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  bool v27; // zf
  __int64 v28; // rax
  __int64 v29; // rax
  struct _POINTL v30; // [rsp+30h] [rbp-28h] BYREF
  struct _POINTL v31; // [rsp+38h] [rbp-20h] BYREF

  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, (__int64)a3);
  v15 = result;
  if ( a7 == 0xFFFF )
    return result;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 84LL) == 0x7FFFFFFF
    || (v13 = *(unsigned int *)(PsGetCurrentProcessWin32Process(v13, v12) + 752), (v13 & 0xF) != 0) )
  {
    if ( a7 )
    {
      v30 = 0LL;
      if ( (unsigned int)CALL_LPK(v15) )
      {
        xxxClientGetTextExtentPointW(a3, a6, a7, &v30);
        v16 = (__int64)a1[2];
        if ( !v16 )
          v16 = **a1;
        result = MNGetpItemIndex(v16, a2);
        if ( (_DWORD)result == -1 )
          return result;
      }
      else
      {
        GreGetTextExtentW(a3, a6, a7, (struct tagSIZE *)&v30, 1);
      }
      DPIMetrics = GetDPIMetrics(v18, v17, v19);
      v13 = (unsigned int)(v30.x - *(_DWORD *)(DPIMetrics + 16));
      *(_DWORD *)(*(_QWORD *)a2 + 84LL) = v13;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)a2 + 84LL) = 0;
    }
  }
  v21 = *(_DWORD *)(*(_QWORD *)a2 + 84LL) + a4;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 88LL) )
  {
LABEL_21:
    v29 = GetDPIMetrics(v13, v12, v14);
    return NtGdiPatBlt(a3, v21, *(_DWORD *)(v29 + 24) + a5, *(_DWORD *)(*(_QWORD *)a2 + 88LL), 1, 15728673);
  }
  v31 = 0LL;
  if ( (unsigned int)CALL_LPK(v15) )
  {
    xxxClientGetTextExtentPointW(a3, v22, 1, &v31);
    v23 = (__int64)a1[2];
    if ( !v23 )
      v23 = **a1;
    result = MNGetpItemIndex(v23, a2);
    v27 = (_DWORD)result == -1;
  }
  else
  {
    result = GreGetTextExtentW(a3, v22, 1u, (struct tagSIZE *)&v31, 1);
    v27 = (_DWORD)result == 0;
  }
  if ( !v27 )
  {
    v28 = GetDPIMetrics(v25, v24, v26);
    v13 = (unsigned int)(v31.x - *(_DWORD *)(v28 + 16));
    *(_DWORD *)(*(_QWORD *)a2 + 88LL) = v13;
    goto LABEL_21;
  }
  return result;
}
