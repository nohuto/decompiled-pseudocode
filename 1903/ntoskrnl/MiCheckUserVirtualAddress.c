/*
 * XREFs of MiCheckUserVirtualAddress @ 0x14005DDB0
 * Callers:
 *     MiCheckVirtualAddress @ 0x14005DBF0 (MiCheckVirtualAddress.c)
 *     MiResolveDemandZeroFault @ 0x1400CCE70 (MiResolveDemandZeroFault.c)
 *     MiActOnPte @ 0x1400DE740 (MiActOnPte.c)
 * Callees:
 *     MiIsVadLargePrivate @ 0x140072F8C (MiIsVadLargePrivate.c)
 *     MiLocateLockedVadEvent @ 0x1400ACF18 (MiLocateLockedVadEvent.c)
 *     MiGetProtoPteAddress @ 0x1400C7FF0 (MiGetProtoPteAddress.c)
 */

__int64 __fastcall MiCheckUserVirtualAddress(unsigned __int64 a1, int *a2, __int64 a3)
{
  unsigned __int64 v6; // rax
  int v7; // eax
  int v8; // ecx
  unsigned __int64 v9; // rdi
  __int64 ProtoPteAddress; // r8
  char v11; // al
  int v12; // ecx
  _QWORD *v13; // rdx
  __int64 result; // rax
  int v15; // r9d
  __int64 LockedVadEvent; // rax
  char v17; // [rsp+48h] [rbp+20h] BYREF

  if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000LL) == 0 )
  {
    v6 = a1 & 0xFFFFFFFFFFFFF000uLL;
    if ( (a1 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
    {
      result = qword_140465A10;
      *a2 = 1;
      return result;
    }
    if ( v6 == qword_140465A20 && v6 )
    {
      result = qword_140465A18;
      *a2 = 1;
      return result;
    }
  }
  if ( (*(_DWORD *)(a3 + 48) & 0x70) == 0x20 && (*(_DWORD *)(a3 + 64) & 0x10000000) != 0 )
  {
    LockedVadEvent = MiLocateLockedVadEvent(a3, 32LL);
    if ( LockedVadEvent && *(struct _KTHREAD **)(LockedVadEvent + 8) != KeGetCurrentThread() )
      goto LABEL_24;
  }
  v7 = *(_DWORD *)(a3 + 48);
  if ( (v7 & 4) != 0 )
    goto LABEL_24;
  v8 = *(_DWORD *)(a3 + 48) & 0x70;
  if ( v8 == 16 )
    goto LABEL_24;
  if ( (v7 & 0x100000) != 0 )
  {
    if ( v8 != 48 && !(unsigned int)MiIsVadLargePrivate(a3) && *(int *)(a3 + 52) < 0 )
    {
      v15 = (*(_DWORD *)(a3 + 48) >> 7) & 0x1F;
LABEL_23:
      result = 0LL;
      *a2 = v15;
      return result;
    }
LABEL_24:
    v15 = 24;
    goto LABEL_23;
  }
  if ( (*(_DWORD *)(a3 + 64) & 0x1000000) != 0 && (*(_BYTE *)(a3 + 48) & 0x70) != 0x50 )
    goto LABEL_24;
  v9 = a1 >> 12;
  ProtoPteAddress = MiGetProtoPteAddress(a3, v9, 4LL, &v17);
  if ( ProtoPteAddress )
  {
    v11 = *(_DWORD *)(a3 + 48) & 0x70;
    v12 = (*(_DWORD *)(a3 + 48) >> 7) & 0x1F;
    *a2 = v12;
    if ( v11 == 32 && v12 == 7 )
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
