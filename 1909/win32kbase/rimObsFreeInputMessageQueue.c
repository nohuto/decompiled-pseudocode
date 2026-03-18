/*
 * XREFs of rimObsFreeInputMessageQueue @ 0x1C0157D40
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C00597C8 (RawInputManagerObjectDelete.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 */

void __fastcall rimObsFreeInputMessageQueue(__int64 a1)
{
  _QWORD *v1; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdx

  v1 = (_QWORD *)(a1 + 144);
  v3 = *(_QWORD **)(a1 + 144);
  while ( v3 != v1 )
  {
    v4 = (_QWORD *)*v3;
    v5 = (__int64)v3;
    v3 = v4;
    if ( v4[1] != v5 || (v6 = *(_QWORD **)(v5 + 8), *v6 != v5) )
      __fastfail(3u);
    *v6 = v4;
    v4[1] = v6;
    Win32FreePool(v5);
  }
  *(_DWORD *)(a1 + 160) = -1;
}
