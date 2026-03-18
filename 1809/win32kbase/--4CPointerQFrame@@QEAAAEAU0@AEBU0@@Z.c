/*
 * XREFs of ??4CPointerQFrame@@QEAAAEAU0@AEBU0@@Z @ 0x1C0133324
 * Callers:
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C01363BC (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C00701D8 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 */

__int64 __fastcall CPointerQFrame::operator=(__int64 a1, __int64 a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // eax
  int v7; // ecx

  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  CInputDest::operator=(a1 + 16, a2 + 16);
  v4 = *(_DWORD *)(a1 + 204);
  *(_DWORD *)(a1 + 200) = *(_DWORD *)(a2 + 200);
  *(_DWORD *)(a1 + 204) ^= (*(_DWORD *)(a2 + 204) ^ v4) & 1;
  v5 = *(_DWORD *)(a1 + 204) ^ ((unsigned __int8)*(_DWORD *)(a1 + 204) ^ (unsigned __int8)*(_DWORD *)(a2 + 204)) & 2;
  *(_DWORD *)(a1 + 204) = v5;
  v6 = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)*(_DWORD *)(a2 + 204)) & 4;
  *(_DWORD *)(a1 + 204) = v6;
  v7 = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)*(_DWORD *)(a2 + 204)) & 8;
  *(_DWORD *)(a1 + 204) = v7;
  *(_DWORD *)(a1 + 204) = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)*(_DWORD *)(a2 + 204)) & 0x10;
  *(_DWORD *)(a1 + 208) = *(_DWORD *)(a2 + 208);
  *(_DWORD *)(a1 + 212) = *(_DWORD *)(a2 + 212);
  *(_QWORD *)(a1 + 216) = *(_QWORD *)(a2 + 216);
  return a1;
}
