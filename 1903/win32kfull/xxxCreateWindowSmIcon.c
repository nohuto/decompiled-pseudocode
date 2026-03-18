/*
 * XREFs of xxxCreateWindowSmIcon @ 0x1C00B9750
 * Callers:
 *     xxxGetWindowSmIcon @ 0x1C00471A0 (xxxGetWindowSmIcon.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00B5D3C (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C02403E0 (xxxRecreateSmallIcons.c)
 * Callees:
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     GetDpiDependentMetric @ 0x1C00A9308 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 *     HMValidateHandleNoRip @ 0x1C00B4C50 (HMValidateHandleNoRip.c)
 *     xxxClientCopyImage @ 0x1C00B4D58 (xxxClientCopyImage.c)
 */

__int64 __fastcall xxxCreateWindowSmIcon(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  int v6; // r15d
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // r12
  __int16 v14; // di
  unsigned int DpiForSystem; // eax
  unsigned int DpiDependentMetric; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // eax
  int v22; // eax
  __int64 v23; // rax

  v5 = a2;
  LOBYTE(a2) = 3;
  v6 = a3;
  v7 = 0LL;
  v8 = HMValidateHandleNoRip(v5, a2, a3, a4);
  v13 = (__int64 *)v8;
  if ( v8 )
  {
    v14 = *(_WORD *)(v8 + 74);
    DpiForSystem = GetDpiForSystem(v10, v9, v11, v12);
    DpiDependentMetric = GetDpiDependentMetric(21LL, DpiForSystem);
    v21 = GetDpiForSystem(v18, v17, v19, v20);
    v22 = GetDpiDependentMetric(20LL, v21);
    v23 = xxxClientCopyImage(*v13, (unsigned int)(v14 != 3) + 1, v22, DpiDependentMetric, v6 != 0 ? 0x4000 : 0);
    if ( v23 )
    {
      v7 = *(_QWORD *)v23;
      if ( *(_QWORD *)v23 )
      {
        *(_DWORD *)(v23 + 80) |= 0x80u;
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 264LL) = v7;
        if ( !v6 )
          SetOrClrWF(1, a1, 0x720u, 1);
      }
    }
  }
  return v7;
}
