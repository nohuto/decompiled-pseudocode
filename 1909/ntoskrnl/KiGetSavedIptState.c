/*
 * XREFs of KiGetSavedIptState @ 0x1402AAC80
 * Callers:
 *     <none>
 * Callees:
 *     KiGetSavedSupervisorState @ 0x1402AAD30 (KiGetSavedSupervisorState.c)
 *     KiXSavesManagesIpt @ 0x1402AB094 (KiXSavesManagesIpt.c)
 *     RtlLocateSupervisorFeature @ 0x140312840 (RtlLocateSupervisorFeature.c)
 */

__int64 __fastcall KiGetSavedIptState(__int64 a1, PVOID *a2, ULONG *a3)
{
  __int64 result; // rax
  ULONG v6; // eax
  PXSAVE_AREA_HEADER XStateHeader; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 || !a3 )
    return 3221225485LL;
  result = KiGetSavedSupervisorState(a1, &XStateHeader);
  if ( (int)result >= 0 )
  {
    if ( (unsigned __int8)KiXSavesManagesIpt() )
    {
      *a2 = RtlLocateSupervisorFeature(XStateHeader, 8u, a3);
    }
    else if ( (_DWORD)KiIptMsrMask )
    {
      v6 = KiIptSaveAreaLength;
      *a2 = (char *)&XStateHeader[1] + MEMORY[0xFFFFF78000000600] - (unsigned __int64)MEMORY[0xFFFFF780000003E8];
      *a3 = v6;
    }
    else
    {
      *a2 = 0LL;
      *a3 = 0;
    }
    return 0LL;
  }
  return result;
}
