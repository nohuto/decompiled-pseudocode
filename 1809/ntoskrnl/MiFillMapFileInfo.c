/*
 * XREFs of MiFillMapFileInfo @ 0x14084D3B8
 * Callers:
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1405DE340 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiLogMapFileEvent @ 0x14084D58C (MiLogMapFileEvent.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x14001CA78 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x14001CBB0 (MiReferenceControlAreaFile.c)
 *     MiStartingOffset @ 0x140031170 (MiStartingOffset.c)
 *     MiGetProtoPteAddress @ 0x140042770 (MiGetProtoPteAddress.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 */

int __fastcall MiFillMapFileInfo(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rdi
  __int64 v3; // rsi
  int v6; // ebp
  __int64 v7; // r12
  unsigned __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rsi
  ULONG_PTR v11; // rax
  unsigned int SessionId; // eax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // r8
  __int64 v19; // rax
  __int64 *v21; // [rsp+50h] [rbp+8h] BYREF

  v2 = (unsigned __int64 *)(a2 + 16);
  v3 = *(unsigned __int8 *)(a1 + 32);
  v6 = *(_DWORD *)(a1 + 48) & 7;
  v7 = **(_QWORD **)(a1 + 72);
  v8 = *(_QWORD *)(a1 + 112) & 0xFFFFFFFFFFFFFFFEuLL;
  v9 = *(unsigned int *)(a1 + 24);
  *(_QWORD *)(a2 + 16) = 0LL;
  v10 = v9 | (v3 << 32);
  if ( *(_QWORD *)(v7 + 64) )
  {
    v11 = MiReferenceControlAreaFile(v7);
    *(_QWORD *)(a2 + 8) = *(_QWORD *)(v11 + 24);
    MiDereferenceControlAreaFile(v7, v11);
    MiGetProtoPteAddress(a1, v10, 0, &v21);
    SessionId = MmGetSessionIdEx(v8);
    v13 = *v2 ^ (MiStartingOffset(v21, *(_QWORD *)(a1 + 80), SessionId) ^ *v2) & 0xFFFFFFFFFFFFLL;
    *v2 = v13;
    if ( v6 == 2 )
    {
      if ( (*(_BYTE *)(a1 + 48) & 0xF8) == 0x38 )
      {
        v14 = v13 & 0xFF7FFFFFFFFFFFFFuLL;
        v15 = 0x40000000000000LL;
      }
      else
      {
        v14 = v13 & 0xFFBFFFFFFFFFFFFFuLL;
        v15 = 0x80000000000000LL;
      }
      v16 = v15 | v14;
    }
    else
    {
      v16 = v13 & 0xFF3FFFFFFFFFFFFFuLL;
    }
  }
  else
  {
    v17 = *(_QWORD *)(a1 + 80);
    v16 = 0xC0000000000000LL;
    *(_QWORD *)(a2 + 8) = v17;
  }
  *v2 = v16;
  v18 = ((unsigned __int64)(*(_DWORD *)(a1 + 64) & 0x1000000) << 29) | *v2 & 0xFFDFFFFFFFFFFFFFuLL;
  *v2 = v18;
  *(_DWORD *)(a2 + 40) = *(_DWORD *)(v8 + 736);
  *(_QWORD *)a2 = v10 << 12;
  *(_QWORD *)(a2 + 24) = ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32))
                        - (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))
                        + 1) << 12;
  *v2 = v18 ^ (v18 ^ ((unsigned __int64)*(unsigned int *)(a1 + 48) << 45)) & 0x1F000000000000LL;
  v19 = *(unsigned int *)(a1 + 52);
  LODWORD(v19) = v19 & 0x7FFFFFFF;
  *(_QWORD *)(a2 + 32) = (v19 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31)) << 12;
  return v19;
}
