/*
 * XREFs of ndisMiniportPostAddWOLPattern @ 0x1C0034904
 * Callers:
 *     ndisOidPostPMAddWOLPattern @ 0x1C001C830 (ndisOidPostPMAddWOLPattern.c)
 *     ndisPostSetAddWakeUpPattern @ 0x1C00755A0 (ndisPostSetAddWakeUpPattern.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ndisInsertPatternListEntry @ 0x1C003528C (ndisInsertPatternListEntry.c)
 *     ndisGetPatternEffectivePriority @ 0x1C00731EC (ndisGetPatternEffectivePriority.c)
 */

__int64 __fastcall ndisMiniportPostAddWOLPattern(__int64 a1, int a2)
{
  __int64 v2; // rbx
  _QWORD *v4; // rcx
  _QWORD *v5; // r8
  __int64 result; // rax
  __int64 v7; // r8
  char v8; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 192);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      61,
      (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      a1,
      v8);
  }
  *(_QWORD *)(a1 + 192) = 0LL;
  v4 = (_QWORD *)(v2 + 8);
  v5 = *(_QWORD **)(v2 + 8);
  if ( v5 )
  {
    *v4 = 0LL;
    *v4 = *v5;
    *v5 = v4;
    result = ndisGetPatternEffectivePriority(v5 - 1);
    *(_DWORD *)(v7 + 28) = result;
  }
  else
  {
    result = ndisInsertPatternListEntry(a1 + 968, v2);
    *(_DWORD *)(v2 + 36) = *(_DWORD *)(v2 + 32);
  }
  return result;
}
