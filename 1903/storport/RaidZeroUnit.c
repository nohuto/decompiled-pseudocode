/*
 * XREFs of RaidZeroUnit @ 0x1C00158A4
 * Callers:
 *     RaidCreateUnit @ 0x1C0015258 (RaidCreateUnit.c)
 * Callees:
 *     memset @ 0x1C0023840 (memset.c)
 *     RaCreateTagList @ 0x1C006A8E8 (RaCreateTagList.c)
 */

__int64 __fastcall RaidZeroUnit(_DWORD *a1)
{
  __int64 v2; // rdx
  __int64 result; // rax

  memset(a1, 0, 0xB00uLL);
  *a1 = 1;
  RaCreateTagList(a1 + 64);
  *((_QWORD *)a1 + 25) = v2;
  *((_BYTE *)a1 + 212) = 0;
  a1[24] = RaidNullAddress;
  result = 134684677LL;
  a1[264] = 134684677;
  a1[284] = 134684677;
  a1[304] = 134684677;
  a1[324] = 134684677;
  a1[344] = 134684677;
  *(_QWORD *)(a1 + 51) = v2;
  a1[258] = 10;
  return result;
}
