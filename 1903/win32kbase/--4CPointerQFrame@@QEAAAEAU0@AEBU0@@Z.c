/*
 * XREFs of ??4CPointerQFrame@@QEAAAEAU0@AEBU0@@Z @ 0x1C01606EC
 * Callers:
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C0164418 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 * Callees:
 *     ??4CInputDest@@QEAAAEAV0@AEBV0@@Z @ 0x1C0043954 (--4CInputDest@@QEAAAEAV0@AEBV0@@Z.c)
 */

__int64 __fastcall CPointerQFrame::operator=(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  int v8; // ecx

  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  CInputDest::operator=(a1 + 16, a2 + 16, a3);
  v5 = *(_DWORD *)(a1 + 148);
  *(_DWORD *)(a1 + 144) = *(_DWORD *)(a2 + 144);
  *(_DWORD *)(a1 + 148) ^= (*(_DWORD *)(a2 + 148) ^ v5) & 1;
  v6 = *(_DWORD *)(a1 + 148) ^ ((unsigned __int8)*(_DWORD *)(a1 + 148) ^ (unsigned __int8)*(_DWORD *)(a2 + 148)) & 2;
  *(_DWORD *)(a1 + 148) = v6;
  v7 = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)*(_DWORD *)(a2 + 148)) & 4;
  *(_DWORD *)(a1 + 148) = v7;
  v8 = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)*(_DWORD *)(a2 + 148)) & 8;
  *(_DWORD *)(a1 + 148) = v8;
  *(_DWORD *)(a1 + 148) = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)*(_DWORD *)(a2 + 148)) & 0x10;
  *(_DWORD *)(a1 + 152) = *(_DWORD *)(a2 + 152);
  *(_DWORD *)(a1 + 156) = *(_DWORD *)(a2 + 156);
  *(_QWORD *)(a1 + 160) = *(_QWORD *)(a2 + 160);
  return a1;
}
