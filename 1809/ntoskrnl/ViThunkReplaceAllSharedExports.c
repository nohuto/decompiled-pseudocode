/*
 * XREFs of ViThunkReplaceAllSharedExports @ 0x1409380F4
 * Callers:
 *     ViThunkApplyThunksCurrentSession @ 0x140937D74 (ViThunkApplyThunksCurrentSession.c)
 * Callees:
 *     RtlNumberOfClearBits @ 0x14000F420 (RtlNumberOfClearBits.c)
 *     ViThunkReplaceSharedExports @ 0x1409383BC (ViThunkReplaceSharedExports.c)
 */

__int64 __fastcall ViThunkReplaceAllSharedExports(_QWORD *a1, int a2)
{
  ULONG v4; // eax
  __int64 result; // rax
  ULONG v6; // eax
  ULONG v7; // eax
  ULONG v8; // eax

  v4 = RtlNumberOfClearBits(&VfPoolThunksBitMapHeader);
  result = ViThunkReplaceSharedExports(a1[4], v4);
  if ( !KernelVerifier )
  {
    v6 = RtlNumberOfClearBits(&VfRegularThunksBitMapHeader);
    result = ViThunkReplaceSharedExports(a1[3], v6);
    if ( !a2 )
    {
      v7 = RtlNumberOfClearBits(&VfOrderDependentThunksBitMapHeader);
      ViThunkReplaceSharedExports(a1[5], v7);
      v8 = RtlNumberOfClearBits(&VfXdvThunksBitMapHeader);
      return ViThunkReplaceSharedExports(a1[6], v8);
    }
  }
  return result;
}
