/*
 * XREFs of sub_1800DEBF0 @ 0x1800DEBF0
 * Callers:
 *     sub_1800E0A60 @ 0x1800E0A60 (sub_1800E0A60.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001002C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall sub_1800DEBF0(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v3; // rbp
  int v4; // eax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 result; // rax
  __int128 v10; // xmm0

  v1 = (_QWORD *)(a1 + 8);
  *(_BYTE *)(a1 + 1088) = 1;
  v3 = 15LL;
  do
  {
    std::shared_ptr<__ExceptionPtr>::operator=(v1, v1 + 60);
    v1 += 2;
    --v3;
  }
  while ( v3 );
  v4 = *(_DWORD *)(a1 + 904);
  v5 = *(_OWORD *)(a1 + 864);
  *(_OWORD *)(a1 + 728) = *(_OWORD *)(a1 + 848);
  v6 = *(_OWORD *)(a1 + 880);
  *(_OWORD *)(a1 + 744) = v5;
  *(_QWORD *)&v5 = *(_QWORD *)(a1 + 896);
  *(_OWORD *)(a1 + 760) = v6;
  v7 = *(_OWORD *)(a1 + 1028);
  *(_QWORD *)(a1 + 776) = v5;
  v8 = *(_OWORD *)(a1 + 1044);
  *(_DWORD *)(a1 + 784) = v4;
  result = *(unsigned int *)(a1 + 1084);
  *(_OWORD *)(a1 + 908) = v7;
  v10 = *(_OWORD *)(a1 + 1060);
  *(_OWORD *)(a1 + 924) = v8;
  *(_QWORD *)&v8 = *(_QWORD *)(a1 + 1076);
  *(_OWORD *)(a1 + 940) = v10;
  *(_QWORD *)(a1 + 956) = v8;
  *(_DWORD *)(a1 + 964) = result;
  return result;
}
