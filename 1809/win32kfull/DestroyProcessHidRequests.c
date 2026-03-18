/*
 * XREFs of DestroyProcessHidRequests @ 0x1C0133280
 * Callers:
 *     <none>
 * Callees:
 *     FreeProcessHidTable @ 0x1C01332A8 (FreeProcessHidTable.c)
 */

__int64 __fastcall DestroyProcessHidRequests(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 832);
  *(_QWORD *)(a1 + 832) = 0LL;
  return FreeProcessHidTable(v2);
}
