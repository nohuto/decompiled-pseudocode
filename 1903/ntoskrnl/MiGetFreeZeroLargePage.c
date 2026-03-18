/*
 * XREFs of MiGetFreeZeroLargePage @ 0x1400A4498
 * Callers:
 *     MiGetLargePageDemoteAsNeeded @ 0x1400A3C88 (MiGetLargePageDemoteAsNeeded.c)
 *     MiGetLargePage @ 0x1400A3FF0 (MiGetLargePage.c)
 *     MiDemoteLargeFreeZeroPage @ 0x14015B960 (MiDemoteLargeFreeZeroPage.c)
 *     MiFindLargeNodePage @ 0x1402C08B8 (MiFindLargeNodePage.c)
 * Callees:
 *     MiUnlinkNodeLargePage @ 0x14002A3E0 (MiUnlinkNodeLargePage.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

__int64 __fastcall MiGetFreeZeroLargePage(__int64 a1, __int64 a2, char a3, unsigned int a4, int a5, unsigned int a6)
{
  char v7; // r8
  __int64 *v8; // rcx
  __int64 v10; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+48h] [rbp-20h]

  v7 = a3 | 2;
  v10 = 0LL;
  v11 = 0LL;
  if ( (_DWORD)a2 == 2 )
  {
    LODWORD(v11) = a5;
    v8 = &v10;
  }
  else
  {
    v8 = (__int64 *)(1984LL * a4 + *(_QWORD *)(a1 + 16) + 1960LL);
  }
  return MiUnlinkNodeLargePage(a1, a2, a4, a6, (__int64)v8, v7, 0LL);
}
