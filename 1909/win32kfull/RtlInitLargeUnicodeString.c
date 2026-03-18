/*
 * XREFs of RtlInitLargeUnicodeString @ 0x1C001BF88
 * Callers:
 *     xxxSetInformationThread @ 0x1C000D040 (xxxSetInformationThread.c)
 *     NtUserfnINSTRINGNULL @ 0x1C001BCA0 (NtUserfnINSTRINGNULL.c)
 *     NtUserfnINLPCREATESTRUCT @ 0x1C001BD90 (NtUserfnINLPCREATESTRUCT.c)
 *     xxxCreateDefaultImeWindow @ 0x1C001C00C (xxxCreateDefaultImeWindow.c)
 *     xxxProcessEventMessage @ 0x1C00712F4 (xxxProcessEventMessage.c)
 *     NtUserfnINSTRING @ 0x1C010A4E0 (NtUserfnINSTRING.c)
 *     EditionxxxBroadcastSPIChange @ 0x1C01DA2A0 (EditionxxxBroadcastSPIChange.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01F38A0 (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     ?NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z @ 0x1C0228CF8 (-NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KPEAUtagCBT_CREATEWNDW@@H@Z.c)
 *     NtUserfnINLPMDICREATESTRUCT @ 0x1C0237D20 (NtUserfnINLPMDICREATESTRUCT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitLargeUnicodeString(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // r8d
  __int64 v4; // rax
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 4) & 0x7FFFFFFF;
  *(_QWORD *)(a1 + 8) = a2;
  v3 = 0;
  *(_DWORD *)(a1 + 4) = v2;
  if ( a2 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( *(_WORD *)(a2 + 2 * v4) );
    v3 = 2 * v4;
    result = (2 * (_DWORD)v4 + 2) & 0x7FFFFFFF;
  }
  else
  {
    result = v2 & 0x80000000;
  }
  *(_DWORD *)a1 = v3;
  *(_DWORD *)(a1 + 4) = result;
  return result;
}
