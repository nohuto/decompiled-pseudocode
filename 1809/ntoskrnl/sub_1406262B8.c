/*
 * XREFs of sub_1406262B8 @ 0x1406262B8
 * Callers:
 *     sub_140585268 @ 0x140585268 (sub_140585268.c)
 *     sub_140625D8C @ 0x140625D8C (sub_140625D8C.c)
 *     WbGetWarbirdThread @ 0x14062604C (WbGetWarbirdThread.c)
 *     sub_140626254 @ 0x140626254 (sub_140626254.c)
 *     sub_14069290C @ 0x14069290C (sub_14069290C.c)
 *     sub_1406B20DC @ 0x1406B20DC (sub_1406B20DC.c)
 *     WbFreeUserMemory @ 0x1406B2E3C (WbFreeUserMemory.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1406262B8(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, int *a5)
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
        goto LABEL_4;
    }
    v12 = 0;
  }
LABEL_4:
  if ( a5 )
    *a5 = v11;
  if ( a4 && v12 >= 0 )
    *a4 = *(_QWORD *)((unsigned int)(v11 * *(_DWORD *)a1) + *(_QWORD *)(a1 + 16));
  return (unsigned int)v12;
}
