/*
 * XREFs of HvpViewMapExtendStorage @ 0x140662C30
 * Callers:
 *     HvpAddBin @ 0x14065F368 (HvpAddBin.c)
 *     HvpPerformLogFileRecovery @ 0x140830814 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     CmSiExtendSection @ 0x14013CE70 (CmSiExtendSection.c)
 *     HvpViewMapCreateViewsForRegion @ 0x140660140 (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapMakeViewRangeValid @ 0x1406603E4 (HvpViewMapMakeViewRangeValid.c)
 *     HvpViewMapGetLastView @ 0x140662CDC (HvpViewMapGetLastView.c)
 */

int __fastcall HvpViewMapExtendStorage(SIZE_T a1, int a2)
{
  __int64 v2; // rdi
  _QWORD *LastView; // rax
  __int64 v5; // r8
  __int64 v6; // rsi
  int result; // eax
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
  LastView = (_QWORD *)HvpViewMapGetLastView(a1);
  if ( !LastView || (v5 = LastView[6], v6 = LastView[4], v5 >= v6) )
  {
LABEL_9:
    v8 = *(_QWORD *)(a1 + 8);
    if ( v8 < v2 )
    {
      result = HvpViewMapCreateViewsForRegion(a1, v8, v2, 0);
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
