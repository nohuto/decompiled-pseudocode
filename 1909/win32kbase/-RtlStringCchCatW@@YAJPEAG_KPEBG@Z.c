/*
 * XREFs of ?RtlStringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C00B63D8
 * Callers:
 *     ?GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z @ 0x1C00B616C (-GetRemoteScaleOverrideTestHook@@YAXPEBG_KPEAU_DPI_INFORMATION@@@Z.c)
 *     ?GetSpriteFillColor@@YAKXZ @ 0x1C00BA434 (-GetSpriteFillColor@@YAKXZ.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C00BA6E4 (RtlStringCopyWorkerW.c)
 */

__int64 __fastcall RtlStringCchCatW(unsigned __int16 *a1, __int64 a2, size_t *a3)
{
  signed int v3; // r9d
  __int64 v5; // rcx
  unsigned __int16 *i; // rax
  __int64 v7; // rax
  size_t v9; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
    goto LABEL_9;
  v5 = a2;
  for ( i = a1; v5; --v5 )
  {
    if ( !*i )
      break;
    ++i;
  }
  v3 = v5 == 0 ? 0xC000000D : 0;
  if ( v5 )
    v7 = a2 - v5;
  else
LABEL_9:
    v7 = 0LL;
  if ( v3 >= 0 )
    return (unsigned int)RtlStringCopyWorkerW(&a1[v7], a2 - v7, a3, (STRSAFE_PCNZWCH)a3, v9);
  return (unsigned int)v3;
}
