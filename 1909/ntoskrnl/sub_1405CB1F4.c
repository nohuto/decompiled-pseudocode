/*
 * XREFs of sub_1405CB1F4 @ 0x1405CB1F4
 * Callers:
 *     sub_1405B3E54 @ 0x1405B3E54 (sub_1405B3E54.c)
 *     sub_1405CAAE8 @ 0x1405CAAE8 (sub_1405CAAE8.c)
 *     WbGetWarbirdThread @ 0x1405CAB98 (WbGetWarbirdThread.c)
 *     sub_1405CB190 @ 0x1405CB190 (sub_1405CB190.c)
 *     sub_1406B1270 @ 0x1406B1270 (sub_1406B1270.c)
 *     sub_1406D4D08 @ 0x1406D4D08 (sub_1406D4D08.c)
 *     sub_1406D57EC @ 0x1406D57EC (sub_1406D57EC.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1405CB1F4(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, int *a5)
{
  int v5; // ebp
  int v6; // edi
  int v11; // ebx
  int v12; // esi
  __int64 v13; // rax

  v5 = 0;
  v6 = *(_DWORD *)(a1 + 4) - 1;
  v11 = 0;
  v12 = -1073741198;
  if ( v6 >= 0 )
  {
    while ( 1 )
    {
      v11 = (v6 + v5) / 2;
      v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 32))(
              *(_QWORD *)((unsigned int)(v11 * *(_DWORD *)a1) + *(_QWORD *)(a1 + 16)),
              a2,
              a3);
      if ( !v13 )
        break;
      if ( v13 < 0 )
        v6 = v11 - 1;
      else
        v5 = ++v11;
      if ( v5 > v6 )
        goto LABEL_8;
    }
    v12 = 0;
  }
LABEL_8:
  if ( a5 )
    *a5 = v11;
  if ( a4 && v12 >= 0 )
    *a4 = *(_QWORD *)((unsigned int)(v11 * *(_DWORD *)a1) + *(_QWORD *)(a1 + 16));
  return (unsigned int)v12;
}
