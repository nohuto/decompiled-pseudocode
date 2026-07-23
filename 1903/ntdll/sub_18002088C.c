/*
 * XREFs of sub_18002088C @ 0x18002088C
 * Callers:
 *     sub_180020654 @ 0x180020654 (sub_180020654.c)
 *     sub_1800DA8F4 @ 0x1800DA8F4 (sub_1800DA8F4.c)
 * Callees:
 *     sub_18001AE58 @ 0x18001AE58 (sub_18001AE58.c)
 *     LdrControlFlowGuardEnforced @ 0x18001AE90 (LdrControlFlowGuardEnforced.c)
 *     sub_18001C4DC @ 0x18001C4DC (sub_18001C4DC.c)
 *     sub_18007234C @ 0x18007234C (sub_18007234C.c)
 *     sub_18007A324 @ 0x18007A324 (sub_18007A324.c)
 *     sub_180083BF4 @ 0x180083BF4 (sub_180083BF4.c)
 *     ZwProtectVirtualMemory @ 0x18009D0E0 (ZwProtectVirtualMemory.c)
 */

NTSTATUS __fastcall sub_18002088C(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  int v6; // r9d
  int v7; // edi
  NTSTATUS v8; // eax
  __int64 v9; // r8
  __int64 v10; // rdx
  unsigned int v11; // ecx
  int v12; // eax
  int v13; // eax
  _QWORD *v14; // r14
  unsigned __int64 v15; // rcx
  NTSTATUS result; // eax
  __int64 (__fastcall *v17)(_QWORD); // rax
  __int64 (__fastcall **v18)(); // rdi
  unsigned __int64 v19; // rcx
  __int64 (__fastcall *v20)(); // rax
  int v21; // edi
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-20h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-18h] BYREF
  __int64 v24; // [rsp+40h] [rbp-10h] BYREF
  ULONG NewProtect; // [rsp+A0h] [rbp+50h] BYREF
  DWORD v26; // [rsp+A8h] [rbp+58h] BYREF

  if ( !a3 || *(_DWORD *)a3 < 0x94u )
    return 0;
  v6 = (dword_180162714 & 4 | 0x7B) << 8;
  v7 = (v6 | 0x8000) & *(unsigned __int16 *)(a3 + 78);
  *(_DWORD *)(a1 + 280) = v7;
  if ( (v6 & v7) != 0 && (unsigned __int8)sub_18007A324() )
  {
    if ( a1 == qword_180164FC8 )
      v21 = v7 | 0x200;
    else
      v21 = v7 | 0x100;
    *(_DWORD *)(a1 + 280) = v21;
  }
  if ( (*(_DWORD *)(a3 + 144) & 0x1000) != 0 )
  {
    *(_DWORD *)(a1 + 104) |= 0x8000u;
    if ( (*(_DWORD *)(a3 + 144) & 0x2000) != 0 )
    {
      v8 = sub_18001C4DC(*(_QWORD *)(a1 + 48), 1, 0xDu, &v26, &v24);
      v9 = v24;
      if ( v8 < 0 )
        v9 = 0LL;
      if ( v9 )
      {
        v10 = (__int64)a2 + a2[10] + 24;
        v11 = 0;
        if ( a2[3] )
        {
          while ( (unsigned int)(*(_DWORD *)(v9 + 12) - *(_DWORD *)(v10 + 12)) >= *(_DWORD *)(v10 + 8) )
          {
            ++v11;
            v10 += 40LL;
            if ( v11 >= a2[3] )
              goto LABEL_14;
          }
          BaseAddress = (PVOID)(*(_QWORD *)(a1 + 48) + *(unsigned int *)(v10 + 12));
          RegionSize = *(unsigned int *)(v10 + 8);
          sub_18007234C();
          ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 2u, &NewProtect);
        }
      }
    }
  }
LABEL_14:
  LOBYTE(v12) = LdrControlFlowGuardEnforced();
  if ( v12 && ((a2[47] & 0x4000) == 0 || (*(_DWORD *)(a3 + 144) & 0x100) == 0) )
    sub_180083BF4(a1, a2);
  LOBYTE(v13) = LdrControlFlowGuardEnforced();
  if ( !v13 || (a2[47] & 0x4000) == 0 || (*(_DWORD *)(a3 + 144) & 0x100) == 0 )
    return 0;
  v14 = *(_QWORD **)(a3 + 112);
  if ( v14
    && (v15 = *(_QWORD *)(a1 + 48), (unsigned __int64)v14 >= v15)
    && (unsigned __int64)v14 < *(unsigned int *)(a1 + 64) + v15 - 8
    && *v14 )
  {
    BaseAddress = *(PVOID *)(a3 + 112);
    RegionSize = 8LL;
    result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 4u, &NewProtect);
    if ( result < 0 )
      return result;
    if ( !sub_18001AE58() || (v17 = sub_18008CB40, (*(_DWORD *)(a3 + 144) & 0x4000) == 0) )
      v17 = sub_18008CAF0;
    *v14 = v17;
    result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, NewProtect, &NewProtect);
    if ( result < 0 )
      return result;
  }
  else
  {
    v14 = 0LL;
  }
  v18 = *(__int64 (__fastcall ***)())(a3 + 120);
  if ( !v18
    || (v19 = *(_QWORD *)(a1 + 48), (unsigned __int64)v18 < v19)
    || (unsigned __int64)v18 >= *(unsigned int *)(a1 + 64) + v19 - 8
    || !*v18 )
  {
    v18 = 0LL;
    goto LABEL_35;
  }
  BaseAddress = *(PVOID *)(a3 + 120);
  RegionSize = 8LL;
  result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 4u, &NewProtect);
  if ( result >= 0 )
  {
    if ( !sub_18001AE58() || (v20 = sub_18008CBE0, (*(_DWORD *)(a3 + 144) & 0x4000) == 0) )
      v20 = sub_18008CB90;
    *v18 = v20;
    result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, NewProtect, &NewProtect);
    if ( result >= 0 )
    {
LABEL_35:
      if ( !v14
        || (__int64 (__fastcall *)(_QWORD))*v14 != sub_18008CAF0
        && (__int64 (__fastcall *)(_QWORD))*v14 != sub_18008CB40
        || v18 && *v18 != sub_18008CB90 && *v18 != sub_18008CBE0 )
      {
        return -1073741762;
      }
      return 0;
    }
  }
  return result;
}
