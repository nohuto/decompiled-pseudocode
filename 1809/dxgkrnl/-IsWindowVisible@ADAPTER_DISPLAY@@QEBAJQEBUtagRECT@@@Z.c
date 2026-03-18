/*
 * XREFs of ?IsWindowVisible@ADAPTER_DISPLAY@@QEBAJQEBUtagRECT@@@Z @ 0x1C011FA90
 * Callers:
 *     ?IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z @ 0x1C011F928 (-IsWindowVisible@DXGGLOBAL@@QEAAEQEBUtagRECT@@@Z.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00106CC (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z @ 0x1C00CE3BC (-DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::IsWindowVisible(DXGADAPTER **this, const struct tagRECT *const a2)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rax
  unsigned int v6; // eax
  unsigned int v7; // esi
  __int64 v9; // rax
  unsigned int v10; // ebp
  DXGADAPTER *v11; // r9
  LONG right; // ecx
  LONG left; // r8d
  __int64 v14; // rsi
  LONG bottom; // ecx
  LONG top; // r8d
  DXGADAPTER *v17; // rcx

  DXGADAPTER::IsCoreResourceSharedOwner(this[2]);
  if ( !a2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v9 + 24) = 2276LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( a2->left == a2->right )
    return 0LL;
  if ( a2->top == a2->bottom )
    return 0LL;
  Current = DXGPROCESS::GetCurrent();
  if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)Current + 13) + 224LL))(0LL, 0LL, 0LL) )
    return 0LL;
  v6 = *((_DWORD *)this + 20);
  v7 = 0;
  if ( v6 )
  {
    while ( *((_DWORD *)this[14] + 940 * v7 + 174) != 1
         || !ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)this, v7) )
    {
      v6 = *((_DWORD *)this + 20);
      if ( ++v7 >= v6 )
        goto LABEL_11;
    }
    return 0LL;
  }
LABEL_11:
  v10 = 0;
  if ( !v6 )
    return 261LL;
  while ( 1 )
  {
    if ( !ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)this, v10)
      || !DmmIsTargetNonStandard(this[2], *((unsigned int *)this[14] + 940 * v10 + 267)) )
    {
      v11 = this[14];
      right = a2->right;
      left = a2->left;
      v14 = 3760LL * v10;
      if ( right >= *(_DWORD *)((char *)v11 + v14 + 636) )
        right = *(_DWORD *)((char *)v11 + v14 + 636);
      if ( left <= *(_DWORD *)((char *)v11 + v14 + 628) )
        left = *(_DWORD *)((char *)v11 + v14 + 628);
      if ( left < right )
      {
        bottom = a2->bottom;
        top = a2->top;
        if ( bottom >= *(_DWORD *)((char *)v11 + v14 + 640) )
          bottom = *(_DWORD *)((char *)v11 + v14 + 640);
        if ( top <= *(_DWORD *)((char *)v11 + v14 + 632) )
          top = *(_DWORD *)((char *)v11 + v14 + 632);
        if ( top < bottom )
        {
          if ( !*(_DWORD *)((char *)v11 + v14 + 696)
            && ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)this, v10) )
          {
            return 0LL;
          }
          v17 = this[14];
          if ( a2->left >= *(_DWORD *)((char *)v17 + v14 + 628)
            && a2->right <= *(_DWORD *)((char *)v17 + v14 + 636)
            && a2->top >= *(_DWORD *)((char *)v17 + v14 + 632)
            && a2->bottom <= *(_DWORD *)((char *)v17 + v14 + 640) )
          {
            break;
          }
        }
      }
    }
    if ( ++v10 >= *((_DWORD *)this + 20) )
      return 261LL;
  }
  return 3221225473LL;
}
