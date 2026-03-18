/*
 * XREFs of xxxCreateWindowSmIcon @ 0x1C00B8310
 * Callers:
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00B3CA0 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxGetWindowSmIcon @ 0x1C00B72A4 (xxxGetWindowSmIcon.c)
 *     xxxRecreateSmallIcons @ 0x1C0227F50 (xxxRecreateSmallIcons.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     GetDpiDependentMetric @ 0x1C00209DC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 *     xxxClientCopyImage @ 0x1C00B468C (xxxClientCopyImage.c)
 *     HMValidateHandleNoRip @ 0x1C00B6440 (HMValidateHandleNoRip.c)
 */

__int64 __fastcall xxxCreateWindowSmIcon(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rcx
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 *v8; // r12
  __int16 v9; // di
  unsigned int DpiForSystem; // eax
  __int64 v11; // r8
  int DpiDependentMetric; // ebx
  unsigned int v13; // eax
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // rax

  v4 = a2;
  LOBYTE(a2) = 3;
  v6 = 0LL;
  v7 = HMValidateHandleNoRip(v4, a2);
  v8 = (__int64 *)v7;
  if ( v7 )
  {
    v9 = *(_WORD *)(v7 + 74);
    DpiForSystem = GetDpiForSystem();
    DpiDependentMetric = GetDpiDependentMetric(21LL, DpiForSystem, v11);
    v13 = GetDpiForSystem();
    v15 = GetDpiDependentMetric(20LL, v13, v14);
    v16 = xxxClientCopyImage(*v8, (unsigned int)(v9 != 3) + 1, v15, DpiDependentMetric, a3 != 0 ? 0x4000 : 0);
    if ( v16 )
    {
      v6 = *(_QWORD *)v16;
      if ( *(_QWORD *)v16 )
      {
        *(_DWORD *)(v16 + 80) |= 0x80u;
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 264LL) = v6;
        if ( !a3 )
          SetOrClrWF(1, a1, 0x720u, 1);
      }
    }
  }
  return v6;
}
