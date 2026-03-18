/*
 * XREFs of HvpViewMapExtendStorage @ 0x14068C3D4
 * Callers:
 *     HvpAddBin @ 0x14068D388 (HvpAddBin.c)
 *     HvpPerformLogFileRecovery @ 0x140830684 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     CmSiExtendSection @ 0x1400EC9A8 (CmSiExtendSection.c)
 *     HvpViewMapGetLastView @ 0x14068C480 (HvpViewMapGetLastView.c)
 *     HvpViewMapCreateViewsForRegion @ 0x14068F09C (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapMakeViewRangeValid @ 0x14068F340 (HvpViewMapMakeViewRangeValid.c)
 */

NTSTATUS __fastcall HvpViewMapExtendStorage(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 LastView; // rax
  __int64 v5; // r8
  __int64 v6; // rsi
  NTSTATUS result; // eax
  __int64 v8; // rdx

  v2 = (unsigned int)(a2 + 4096);
  if ( *(_QWORD *)(a1 + 8) >= v2 )
    return 0;
  if ( v2 > *(_QWORD *)(a1 + 16) )
  {
    result = CmSiExtendSection(*(void **)a1, (LARGE_INTEGER)(unsigned int)(a2 + 4096));
    if ( result < 0 )
      return result;
  }
  LastView = HvpViewMapGetLastView(a1);
  if ( !LastView || (v5 = *(_QWORD *)(LastView + 48), v6 = *(_QWORD *)(LastView + 32), v5 >= v6) )
  {
LABEL_9:
    v8 = *(_QWORD *)(a1 + 8);
    if ( v8 < v2 )
    {
      result = HvpViewMapCreateViewsForRegion(a1, v8, v2, 0LL);
      if ( result < 0 )
        return result;
      *(_QWORD *)(a1 + 8) = v2;
    }
    return 0;
  }
  if ( v6 > v2 )
    v6 = v2;
  result = HvpViewMapMakeViewRangeValid(a1, LastView, v5, v6, 0);
  if ( result >= 0 )
  {
    *(_QWORD *)(a1 + 8) = v6;
    goto LABEL_9;
  }
  return result;
}
