/*
 * XREFs of AddBGRMapCache @ 0x1C0244F94
 * Callers:
 *     CreateDyesColorMappingTable @ 0x1C0013F18 (CreateDyesColorMappingTable.c)
 * Callees:
 *     memmove @ 0x1C0163300 (memmove.c)
 *     TrimBGRMapCache @ 0x1C02461DC (TrimBGRMapCache.c)
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
  EngAcquireSemaphore(qword_1C0317698);
  if ( dword_1C03176B8 > 5 && HIDWORD(qword_1C03176BC) )
    TrimBGRMapCache();
  if ( dword_1C03176B8 >= (int)qword_1C03176BC && (int)qword_1C03176BC + 10 >= (unsigned int)qword_1C03176BC )
  {
    v5 = qword_1C03176BC + 10;
    v6 = 16LL * (unsigned int)(qword_1C03176BC + 10);
    if ( v6 <= 0xFFFFFFFF )
    {
      v7 = EngAllocMem(1u, v6, 0x30365448u);
      v8 = v7;
      if ( v7 )
      {
        v9 = Src;
        if ( Src )
        {
          memmove(v7, Src, 16LL * dword_1C03176B8);
          EngFreeMem(v9);
        }
        Src = v8;
        LODWORD(qword_1C03176BC) = v5;
      }
    }
  }
  v10 = Src;
  if ( Src && dword_1C03176B8 < (int)qword_1C03176BC )
  {
    v11 = 2LL * dword_1C03176B8++;
    *((_QWORD *)Src + v11) = a1;
    v10[2 * v11 + 3] = a2;
    v10[2 * v11 + 2] = 1;
  }
  else
  {
    v4 = 0;
  }
  EngReleaseSemaphore(qword_1C0317698);
  return v4;
}
