/*
 * XREFs of sub_180082D20 @ 0x180082D20
 * Callers:
 *     sub_18002D3B4 @ 0x18002D3B4 (sub_18002D3B4.c)
 * Callees:
 *     sub_18008BAD0 @ 0x18008BAD0 (sub_18008BAD0.c)
 *     ZwCompareSigningLevels @ 0x18009DA10 (ZwCompareSigningLevels.c)
 *     sub_1800CFE80 @ 0x1800CFE80 (sub_1800CFE80.c)
 */

__int64 __fastcall sub_180082D20(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  NTSTATUS v4; // esi
  __int64 v7; // rax
  int v9; // ebx
  bool v10; // cl
  int v11; // [rsp+40h] [rbp+8h] BYREF
  char v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = a3;
  v4 = 0;
  v11 = 0;
  if ( (*(_DWORD *)(a1 + 32) & 0x400000) != 0
    || (v7 = *(_QWORD *)(a1 + 48)) != 0
    && ((*(_DWORD *)(v7 + 280) & 0x8000) != 0 || ZwCompareSigningLevels(*(_BYTE *)(v7 + 284), 0xCu) >= 0) )
  {
    LOBYTE(a4) = 12;
    v9 = sub_18008BAD0(a2, *(_QWORD *)(a1 + 56), &v11, a4, &v12);
    if ( v9 < 0 )
    {
      v10 = 1;
      if ( v9 == -1073741701 || v9 == -1073740760 || v9 == -1073740285 || v9 == -1058471934 || byte_180165310 )
      {
        v4 = v9;
        *(_BYTE *)(*(_QWORD *)(a1 + 56) + 284LL) = 1;
      }
    }
    else
    {
      v4 = ZwCompareSigningLevels(*(_BYTE *)(*(_QWORD *)(a1 + 56) + 284LL), 0xCu);
      v10 = v4 < 0;
    }
    if ( v10 )
      sub_1800CFE80(a1, v9, v11, v4, v12);
  }
  return (unsigned int)v4;
}
