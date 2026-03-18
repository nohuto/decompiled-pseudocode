/*
 * XREFs of ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0249C44
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x1C01373E0 (xxxDrawMenuBarUnderlines.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0249E08 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 * Callees:
 *     MNGetpItemIndex @ 0x1C0022308 (MNGetpItemIndex.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     NtGdiPatBlt @ 0x1C00711E0 (NtGdiPatBlt.c)
 *     GetDPIMetrics @ 0x1C00912E8 (GetDPIMetrics.c)
 *     GreGetTextExtentW @ 0x1C011DC04 (GreGetTextExtentW.c)
 *     CALL_LPK @ 0x1C0157754 (CALL_LPK.c)
 *     xxxClientGetTextExtentPointW @ 0x1C0157AB4 (xxxClientGetTextExtentPointW.c)
 */

__int64 __fastcall xxxDrawItemUnderline(
        __int64 **a1,
        __int64 a2,
        HDC a3,
        __int64 a4,
        int a5,
        unsigned __int16 *a6,
        unsigned int a7)
{
  int v8; // r15d
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r12
  __int64 v15; // rcx
  unsigned int v16; // r15d
  WCHAR *v17; // r10
  __int64 v18; // rcx
  bool v19; // zf
  __int64 DPIMetrics; // rax
  struct _POINTL v21; // [rsp+30h] [rbp-28h] BYREF
  struct _POINTL v22; // [rsp+38h] [rbp-20h] BYREF

  v8 = a4;
  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, (__int64)a3, a4);
  v14 = result;
  if ( a7 == 0xFFFF )
    return result;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 84LL) == 0x7FFFFFFF
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13, v12) + 752) & 0xF) != 0 )
  {
    if ( a7 )
    {
      v21 = 0LL;
      if ( (unsigned int)CALL_LPK(v14) )
      {
        xxxClientGetTextExtentPointW(a3, a6, a7, &v21);
        v15 = (__int64)a1[2];
        if ( !v15 )
          v15 = **a1;
        result = MNGetpItemIndex(v15, a2);
        if ( (_DWORD)result == -1 )
          return result;
      }
      else
      {
        GreGetTextExtentW(a3, a6, a7, (struct tagSIZE *)&v21, 1);
      }
      *(_DWORD *)(*(_QWORD *)a2 + 84LL) = v21.x - *(_DWORD *)(GetDPIMetrics() + 16);
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)a2 + 84LL) = 0;
    }
  }
  v16 = *(_DWORD *)(*(_QWORD *)a2 + 84LL) + v8;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 88LL) )
  {
LABEL_21:
    DPIMetrics = GetDPIMetrics();
    return NtGdiPatBlt(a3, v16, *(_DWORD *)(DPIMetrics + 24) + a5, *(_DWORD *)(*(_QWORD *)a2 + 88LL), 1, 15728673);
  }
  v22 = 0LL;
  if ( (unsigned int)CALL_LPK(v14) )
  {
    xxxClientGetTextExtentPointW(a3, v17, 1, &v22);
    v18 = (__int64)a1[2];
    if ( !v18 )
      v18 = **a1;
    result = MNGetpItemIndex(v18, a2);
    v19 = (_DWORD)result == -1;
  }
  else
  {
    result = GreGetTextExtentW(a3, v17, 1u, (struct tagSIZE *)&v22, 1);
    v19 = (_DWORD)result == 0;
  }
  if ( !v19 )
  {
    *(_DWORD *)(*(_QWORD *)a2 + 88LL) = v22.x - *(_DWORD *)(GetDPIMetrics() + 16);
    goto LABEL_21;
  }
  return result;
}
