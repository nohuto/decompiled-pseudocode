/*
 * XREFs of sub_180017DCC @ 0x180017DCC
 * Callers:
 *     sub_180014D28 @ 0x180014D28 (sub_180014D28.c)
 *     sub_18006D4E0 @ 0x18006D4E0 (sub_18006D4E0.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001007C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180016920 @ 0x180016920 (sub_180016920.c)
 */

__int64 __fastcall sub_180017DCC(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax

  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
  *(_BYTE *)(a1 + 24) = *(_BYTE *)(a2 + 24);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  v4 = *(_DWORD *)(a2 + 44);
  v5 = a2 + 48;
  *(_DWORD *)(a1 + 44) = v4;
  v6 = a1 + 48;
  if ( v6 != v5 )
    sub_180016920(v6, *(char **)v5, *(_QWORD *)(v5 + 8));
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 72), (_QWORD *)(a2 + 72));
  result = a1;
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 88);
  return result;
}
