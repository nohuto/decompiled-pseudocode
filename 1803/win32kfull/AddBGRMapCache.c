/*
 * XREFs of AddBGRMapCache @ 0x1C022EF94
 * Callers:
 *     CreateDyesColorMappingTable @ 0x1C00D1038 (CreateDyesColorMappingTable.c)
 * Callees:
 *     memmove @ 0x1C013D380 (memmove.c)
 *     TrimBGRMapCache @ 0x1C02301A0 (TrimBGRMapCache.c)
 */

__int64 __fastcall AddBGRMapCache(__int64 a1, int a2)
{
  unsigned int v4; // ebx
  int v5; // esi
  unsigned __int64 v6; // rax
  PVOID v7; // rax
  void *v8; // rbp
  PVOID v9; // rdi
  _DWORD *v10; // rdx
  __int64 v11; // rax

  v4 = 1;
  EngAcquireSemaphore(qword_1C0326FD8);
  if ( dword_1C0326FF8 > 5 && HIDWORD(qword_1C0326FFC) )
    TrimBGRMapCache();
  if ( dword_1C0326FF8 >= (int)qword_1C0326FFC && (int)qword_1C0326FFC + 10 >= (unsigned int)qword_1C0326FFC )
  {
    v5 = qword_1C0326FFC + 10;
    v6 = 16LL * (unsigned int)(qword_1C0326FFC + 10);
    if ( v6 <= 0xFFFFFFFF )
    {
      v7 = EngAllocMem(1u, v6, 0x30365448u);
      v8 = v7;
      if ( v7 )
      {
        v9 = Src;
        if ( Src )
        {
          memmove(v7, Src, 16LL * dword_1C0326FF8);
          EngFreeMem(v9);
        }
        Src = v8;
        LODWORD(qword_1C0326FFC) = v5;
      }
    }
  }
  v10 = Src;
  if ( Src && dword_1C0326FF8 < (int)qword_1C0326FFC )
  {
    v11 = 2LL * dword_1C0326FF8++;
    *((_QWORD *)Src + v11) = a1;
    v10[2 * v11 + 3] = a2;
    v10[2 * v11 + 2] = 1;
  }
  else
  {
    v4 = 0;
  }
  EngReleaseSemaphore(qword_1C0326FD8);
  return v4;
}
