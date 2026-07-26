/*
 * XREFs of ndisMiniportPostAddWakeUpPattern @ 0x1C0073B20
 * Callers:
 *     ndisOidPostPMAddWOLPattern @ 0x1C001C830 (ndisOidPostPMAddWOLPattern.c)
 *     ndisPostSetAddWakeUpPattern @ 0x1C00753D0 (ndisPostSetAddWakeUpPattern.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ndisInsertPatternListEntry @ 0x1C003529C (ndisInsertPatternListEntry.c)
 */

__int64 *__fastcall ndisMiniportPostAddWakeUpPattern(__int64 a1, int a2)
{
  __int64 v2; // rdi
  __int64 *v4; // rcx
  __int64 **v5; // r8
  __int64 *result; // rax
  char v7; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 192);
  *(_QWORD *)(a1 + 192) = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      20,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      a1,
      v7);
  }
  v4 = (__int64 *)(v2 + 8);
  v5 = *(__int64 ***)(v2 + 8);
  if ( !v5 )
    return ndisInsertPatternListEntry((__int64 **)(a1 + 960), v2);
  *v4 = 0LL;
  result = *v5;
  *v4 = (__int64)*v5;
  *v5 = v4;
  return result;
}
