/*
 * XREFs of MiApplyImageHotPatchDpc @ 0x1405AC5C0
 * Callers:
 *     <none>
 * Callees:
 *     KeSignalCallDpcSynchronize @ 0x1402AA8B0 (KeSignalCallDpcSynchronize.c)
 *     RtlApplyHotPatch @ 0x1405AE018 (RtlApplyHotPatch.c)
 */

__int64 __fastcall MiApplyImageHotPatchDpc(__int64 a1, _QWORD *a2, volatile signed __int32 *a3, __int64 a4)
{
  __int64 result; // rax
  int v8; // [rsp+28h] [rbp-70h]
  __int64 v9; // [rsp+30h] [rbp-68h]

  if ( (unsigned int)KeSignalCallDpcSynchronize(a4) )
    *((_DWORD *)a2 + 11) = RtlApplyHotPatch(
                             *(_QWORD *)(*a2 + 72LL),
                             *(_QWORD *)(*a2 + 8LL),
                             *(_QWORD *)(*a2 + 80LL),
                             *(_DWORD *)(*a2 + 36LL),
                             (__int64)(a2 + 5),
                             v8,
                             v9,
                             *(_QWORD *)(a2[1] + 72LL),
                             *(_QWORD *)(a2[1] + 8LL),
                             0LL,
                             0,
                             0LL,
                             a2[2],
                             a2[3],
                             1,
                             *(PRTL_BITMAP *)(*a2 + 40LL),
                             a2[4]);
  result = KeSignalCallDpcSynchronize(a4);
  _InterlockedDecrement(a3);
  return result;
}
