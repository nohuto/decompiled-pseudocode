/*
 * XREFs of ?_ReallocString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@G@Z @ 0x1C00CBF54
 * Callers:
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C00CBA90 (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C00CBBD4 (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ?_CopyString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@AEBU2@@Z @ 0x1C00CBF0C (-_CopyString@CCD_SET_STRING_ID@@CAJPEAU_STRING@@AEBU2@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 */

__int64 __fastcall CCD_SET_STRING_ID::_ReallocString(struct _STRING *a1, USHORT a2)
{
  __int64 v4; // rsi
  CHAR *v5; // rax
  __int64 v6; // rcx
  CHAR *v7; // rbp
  __int64 v9; // rax

  if ( a2 <= a1->MaximumLength )
    return 0LL;
  v4 = a2;
  v5 = (CHAR *)operator new(a2, 0x63644356u, PagedPool);
  v7 = v5;
  if ( v5 )
  {
    memmove(v5, a1->Buffer, a1->Length);
    operator delete[](a1->Buffer);
    a1->Buffer = v7;
    a1->MaximumLength = a2;
    return 0LL;
  }
  v9 = WdLogNewEntry5_WdLowResource(v6);
  *(_QWORD *)(v9 + 24) = v4;
  WdLogEvent5_WdLowResource(v9);
  return 3221225495LL;
}
