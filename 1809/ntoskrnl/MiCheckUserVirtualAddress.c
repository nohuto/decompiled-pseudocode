/*
 * XREFs of MiCheckUserVirtualAddress @ 0x140098DE0
 * Callers:
 *     MiResolveDemandZeroFault @ 0x140046D50 (MiResolveDemandZeroFault.c)
 *     MiActOnPte @ 0x14009404C (MiActOnPte.c)
 *     MiCheckVirtualAddress @ 0x140098C30 (MiCheckVirtualAddress.c)
 * Callees:
 *     MiLocateVadEvent @ 0x140027BCC (MiLocateVadEvent.c)
 *     MiGetProtoPteAddress @ 0x140042770 (MiGetProtoPteAddress.c)
 */

__int64 __fastcall MiCheckUserVirtualAddress(unsigned __int64 a1, int *a2, __int64 a3)
{
  unsigned __int64 v6; // rax
  int v7; // eax
  int v8; // ecx
  __int64 v9; // rdi
  __int64 ProtoPteAddress; // r8
  char v11; // al
  int v12; // ecx
  _QWORD *v13; // rdx
  __int64 result; // rax
  int v15; // r9d
  int v16; // eax
  __int64 **VadEvent; // rax
  __int64 v18; // [rsp+48h] [rbp+20h] BYREF

  if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) == 0 )
  {
    v6 = a1 & 0xFFFFFFFFFFFFF000uLL;
    if ( (a1 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
    {
      result = qword_14043B0B8;
      *a2 = 1;
      return result;
    }
    if ( v6 == qword_14043B0C8 && v6 )
    {
      result = qword_14043B0C0;
      *a2 = 1;
      return result;
    }
  }
  if ( (*(_DWORD *)(a3 + 48) & 7) == 2 && (*(_DWORD *)(a3 + 64) & 0x10000000) != 0 )
  {
    VadEvent = MiLocateVadEvent(a3, 32);
    if ( VadEvent && VadEvent[1] != (__int64 *)KeGetCurrentThread() )
      goto LABEL_24;
  }
  v7 = *(_DWORD *)(a3 + 48);
  if ( (v7 & 0x20000000) != 0 )
    goto LABEL_24;
  v8 = *(_DWORD *)(a3 + 48) & 7;
  if ( v8 == 1 )
    goto LABEL_24;
  if ( (v7 & 0x4000) != 0 )
  {
    v15 = 24;
    if ( v8 != 3 && v8 != 5 )
    {
      v16 = (unsigned __int8)v7 >> 3;
      if ( *(int *)(a3 + 52) < 0 )
        v15 = v16;
    }
    goto LABEL_23;
  }
  if ( (*(_DWORD *)(a3 + 64) & 0x1000000) != 0 && (*(_BYTE *)(a3 + 48) & 7) != 7 )
  {
LABEL_24:
    v15 = 24;
LABEL_23:
    result = 0LL;
    *a2 = v15;
    return result;
  }
  v9 = a1 >> 12;
  ProtoPteAddress = MiGetProtoPteAddress(a3, v9, 4, &v18);
  if ( ProtoPteAddress )
  {
    v11 = *(_DWORD *)(a3 + 48) & 7;
    v12 = (*(_DWORD *)(a3 + 48) >> 3) & 0x1F;
    *a2 = v12;
    if ( v11 == 2 && v12 == 7 )
      *a2 = 256;
  }
  else
  {
    *a2 = 24;
  }
  v13 = *(_QWORD **)(a3 + 120);
  if ( (__int64)v13 < 0
    && v9 - (*(unsigned int *)(a3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 32) << 32)) > (unsigned __int64)(*v13 - 1LL) >> 12 )
  {
    *a2 = 24;
  }
  return ProtoPteAddress;
}
