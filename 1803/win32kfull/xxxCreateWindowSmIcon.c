/*
 * XREFs of xxxCreateWindowSmIcon @ 0x1C006ADA8
 * Callers:
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C006C084 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxGetWindowSmIcon @ 0x1C00C4A6C (xxxGetWindowSmIcon.c)
 *     xxxRecreateSmallIcons @ 0x1C01FF6A4 (xxxRecreateSmallIcons.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C003BA94 (GetDpiForSystem.c)
 *     xxxClientCopyImage @ 0x1C006C42C (xxxClientCopyImage.c)
 *     HMValidateHandleNoRip @ 0x1C006CF60 (HMValidateHandleNoRip.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 */

__int64 __fastcall xxxCreateWindowSmIcon(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  int v5; // r15d
  __int64 v6; // rbp
  __int64 v7; // rax
  _QWORD *v8; // r12
  __int16 v9; // di
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // ebx
  unsigned int v12; // eax
  int v13; // eax
  __int64 v14; // rax

  v4 = a2;
  LOBYTE(a2) = 3;
  v5 = a3;
  v6 = 0LL;
  v7 = HMValidateHandleNoRip(v4, a2, a3);
  v8 = (_QWORD *)v7;
  if ( v7 )
  {
    v9 = *(_WORD *)(v7 + 74);
    DpiForSystem = GetDpiForSystem();
    DpiDependentMetric = GetDpiDependentMetric(21LL, DpiForSystem);
    v12 = GetDpiForSystem();
    v13 = GetDpiDependentMetric(20LL, v12);
    v14 = xxxClientCopyImage(*v8, (unsigned int)(v9 != 3) + 1, v13, DpiDependentMetric, v5 != 0 ? 0x4000 : 0);
    if ( v14 )
    {
      v6 = *(_QWORD *)v14;
      if ( *(_QWORD *)v14 )
      {
        *(_DWORD *)(v14 + 80) |= 0x80u;
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 264LL) = v6;
        if ( !v5 )
          SetOrClrWF(1LL, a1, 1824LL, 1LL);
      }
    }
  }
  return v6;
}
