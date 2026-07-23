/*
 * XREFs of MiApplyImageHotPatchDpc @ 0x14057D730
 * Callers:
 *     <none>
 * Callees:
 *     KeSignalCallDpcSynchronize @ 0x140294360 (KeSignalCallDpcSynchronize.c)
 *     RtlApplyHotPatch @ 0x14057F148 (RtlApplyHotPatch.c)
 */

__int64 __fastcall MiApplyImageHotPatchDpc(__int64 a1, _QWORD *a2, volatile signed __int32 *a3, __int64 a4)
{
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 result; // rax
  int v11; // [rsp+28h] [rbp-70h]
  __int64 v12; // [rsp+30h] [rbp-68h]

  v7 = KeSignalCallDpcSynchronize(a4, (__int64)a2, (__int64)a3);
  v9 = 0LL;
  if ( v7 )
    *((_DWORD *)a2 + 11) = RtlApplyHotPatch(
                             *(_QWORD *)(*a2 + 72LL),
                             *(_QWORD *)(*a2 + 8LL),
                             *(_QWORD *)(*a2 + 80LL),
                             *(_DWORD *)(*a2 + 36LL),
                             (__int64)(a2 + 5),
                             v11,
                             v12,
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
  result = KeSignalCallDpcSynchronize(a4, v9, v8);
  _InterlockedDecrement(a3);
  return result;
}
