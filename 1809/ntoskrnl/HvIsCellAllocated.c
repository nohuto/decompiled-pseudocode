/*
 * XREFs of HvIsCellAllocated @ 0x1405DCB00
 * Callers:
 *     CmpValidateHiveSecurityDescriptors @ 0x1405AC0AC (CmpValidateHiveSecurityDescriptors.c)
 *     CmpCheckValueList @ 0x1405DA450 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x1405DB210 (CmpCheckKey.c)
 * Callees:
 *     RtlClearBits @ 0x140017890 (RtlClearBits.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

char __fastcall HvIsCellAllocated(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // r9
  char v6; // al
  unsigned __int64 v7; // rbp
  unsigned int v8; // ecx
  unsigned __int64 v9; // rsi
  __int64 v10; // rax
  int *v11; // rax
  int v12; // r8d
  int v13; // eax
  unsigned int v14; // r8d
  unsigned int v15; // edx
  __int64 v16; // r9
  bool v17; // bl
  __int64 v19; // [rsp+30h] [rbp+8h] BYREF

  v19 = 0LL;
  v4 = a3;
  v6 = *(_BYTE *)(a1 + 140);
  LODWORD(v19) = -1;
  if ( (v6 & 1) != 0 )
    return 1;
  v7 = 632 * ((unsigned __int64)a2 >> 31);
  v8 = *(_DWORD *)(v7 + a1 + 272);
  if ( (a2 & 0x7FFFFFFF) >= v8 || (a2 & 7) != 0 )
    return 0;
  if ( a3 && (a2 & 0x80000000) == 0 )
  {
    if ( !_bittest64(*(const signed __int64 **)(a3 + 8), a2 >> 3) )
      return 0;
    RtlClearBits((PRTL_BITMAP)a3, a2 >> 3, 1u);
    v8 = *(_DWORD *)(v7 + a1 + 272);
  }
  if ( a2 + (a2 & 0x80000000) >= v8 )
    return 0;
  v9 = *(_QWORD *)(*(_QWORD *)(v7 + a1 + 280) + 8 * (((unsigned __int64)a2 >> 21) & 0x3FF))
     + 24 * (((unsigned __int64)a2 >> 12) & 0x1FF);
  if ( !v9 || (*(_BYTE *)(v9 + 8) & 2) != 0 )
    return 0;
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, __int64))(a1 + 8))(a1, a2, &v19, v4);
  if ( !v10 )
    return 1;
  v11 = (int *)(v10 - 4);
  if ( !v11 )
    return 1;
  v12 = (int)v11;
  v13 = *v11;
  v14 = v12 - (*(_DWORD *)(v9 + 8) & 0xFFFFFFF0);
  v15 = -v13;
  v17 = 0;
  if ( v13 < 0 && v15 - 8 <= 0xFFFF8 )
  {
    v16 = *(unsigned int *)((*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0uLL) + 8);
    if ( v15 <= (unsigned __int64)(v16 - 32) && v14 - v13 <= (unsigned int)v16 && v14 >= 0x20 )
      v17 = 1;
  }
  (*(void (__fastcall **)(__int64, __int64 *))(a1 + 16))(a1, &v19);
  return v17;
}
