/*
 * XREFs of xxxCreateWindowSmIcon @ 0x1C0109E88
 * Callers:
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C0056AEC (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxGetWindowSmIcon @ 0x1C008BB70 (xxxGetWindowSmIcon.c)
 *     xxxRecreateSmallIcons @ 0x1C023FDC0 (xxxRecreateSmallIcons.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C004A0E8 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C004B4C4 (GetDpiForSystem.c)
 *     HMValidateHandleNoRip @ 0x1C00559FC (HMValidateHandleNoRip.c)
 *     xxxClientCopyImage @ 0x1C0055B04 (xxxClientCopyImage.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 */

__int64 __fastcall xxxCreateWindowSmIcon(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 *v10; // r12
  __int16 v11; // di
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // eax
  int v18; // eax
  __int64 v19; // rax

  v5 = 0LL;
  v6 = HMValidateHandleNoRip(a2, 3);
  v10 = (__int64 *)v6;
  if ( v6 )
  {
    v11 = *(_WORD *)(v6 + 74);
    DpiForSystem = GetDpiForSystem(v8, v7, v9);
    DpiDependentMetric = GetDpiDependentMetric(21LL, DpiForSystem);
    v17 = GetDpiForSystem(v15, v14, v16);
    v18 = GetDpiDependentMetric(20LL, v17);
    v19 = xxxClientCopyImage(*v10, (unsigned int)(v11 != 3) + 1, v18, DpiDependentMetric, a3 != 0 ? 0x4000 : 0);
    if ( v19 )
    {
      v5 = *(_QWORD *)v19;
      if ( *(_QWORD *)v19 )
      {
        *(_DWORD *)(v19 + 80) |= 0x80u;
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 264LL) = v5;
        if ( !a3 )
          SetOrClrWF(1, a1, 0x720u, 1);
      }
    }
  }
  return v5;
}
