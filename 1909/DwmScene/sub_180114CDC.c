/*
 * XREFs of sub_180114CDC @ 0x180114CDC
 * Callers:
 *     sub_180114D68 @ 0x180114D68 (sub_180114D68.c)
 * Callees:
 *     sub_180114DE4 @ 0x180114DE4 (sub_180114DE4.c)
 */

__int64 __fastcall sub_180114CDC(__int64 a1, __int64 *a2, __int64 *a3, __int64 *a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD v12[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v13[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-10h] BYREF

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<Spectre::Utils::PerformanceLogger>::`vftable';
  v5 = *a4;
  *a4 = 0LL;
  v12[0] = v5;
  v6 = a4[1];
  a4[1] = 0LL;
  v12[1] = v6;
  v7 = *a3;
  *a3 = 0LL;
  v13[0] = v7;
  v8 = a3[1];
  a3[1] = 0LL;
  v13[1] = v8;
  v9 = *a2;
  *a2 = 0LL;
  v14[0] = v9;
  v10 = a2[1];
  a2[1] = 0LL;
  v14[1] = v10;
  ((void (__fastcall *)(__int64, _QWORD *, _QWORD *, _QWORD *))sub_180114DE4)(a1 + 16, v14, v13, v12);
  return a1;
}
