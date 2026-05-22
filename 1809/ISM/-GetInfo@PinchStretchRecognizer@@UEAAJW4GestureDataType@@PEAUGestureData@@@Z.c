/*
 * XREFs of ?GetInfo@PinchStretchRecognizer@@UEAAJW4GestureDataType@@PEAUGestureData@@@Z @ 0x1800D6AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PinchStretchRecognizer::GetInfo(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r14
  _QWORD *v4; // rsi
  int v5; // r11d
  int v6; // ebx
  int v7; // r10d
  int v8; // edi
  __int64 v10; // [rsp+38h] [rbp+38h]

  if ( *(_DWORD *)a3 != 56 )
    return 2147942487LL;
  if ( a2 != 6 )
    return 2147942487LL;
  v3 = 2LL;
  if ( (*(_BYTE *)(a1 + 56) & 2) == 0 )
    return 2147942487LL;
  v4 = (_QWORD *)(a1 + 16);
  *(_QWORD *)(a3 + 4) = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a3 + 12) = *(_QWORD *)(a1 + 40);
  LODWORD(v10) = *(_DWORD *)(a1 + 32) - *(_DWORD *)(a1 + 16);
  HIDWORD(v10) = *(_DWORD *)(a1 + 36) - *(_DWORD *)(a1 + 20);
  *(_QWORD *)(a3 + 28) = v10;
  LODWORD(v10) = *(_DWORD *)(a1 + 40) - *(_DWORD *)(a1 + 24);
  HIDWORD(v10) = *(_DWORD *)(a1 + 44) - *(_DWORD *)(a1 + 28);
  *(_QWORD *)(a3 + 36) = v10;
  v5 = *(_DWORD *)(a1 + 24);
  v6 = *(_DWORD *)(a1 + 28);
  v7 = *(_DWORD *)(a1 + 16);
  v8 = *(_DWORD *)(a1 + 20);
  LODWORD(v10) = (*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 40)) / 2;
  HIDWORD(v10) = (*(_DWORD *)(a1 + 44) + *(_DWORD *)(a1 + 36)) / 2;
  *(_QWORD *)(a3 + 20) = v10;
  LODWORD(v10) = v10 - (v5 + v7) / 2;
  HIDWORD(v10) -= (v8 + v6) / 2;
  *(_QWORD *)(a3 + 44) = v10;
  *(_BYTE *)(a3 + 52) = (*(_BYTE *)(a1 + 56) & 1) == 0;
  *(_BYTE *)(a1 + 56) &= ~2u;
  do
  {
    *v4 = v4[2];
    ++v4;
    --v3;
  }
  while ( v3 );
  return 0LL;
}
