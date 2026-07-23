/*
 * XREFs of SmHpBufferProtectEx @ 0x14014A370
 * Callers:
 *     SmHpChunkHeapProtect @ 0x14011E06C (SmHpChunkHeapProtect.c)
 *     SmHpChunkUnprotect @ 0x14014A334 (SmHpChunkUnprotect.c)
 *     SmHpBufferUpdateFullness @ 0x14014A5FC (SmHpBufferUpdateFullness.c)
 *     SmHpUnprotectListNeighbors @ 0x14014B160 (SmHpUnprotectListNeighbors.c)
 * Callees:
 *     ExProtectPoolEx @ 0x14000DED8 (ExProtectPoolEx.c)
 *     ?Hash@MetroHash64@@SAXPEBE_KQEAE1@Z @ 0x140153680 (-Hash@MetroHash64@@SAXPEBE_KQEAE1@Z.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     SmPrepareForFatalHeapCorruption @ 0x1403093BC (SmPrepareForFatalHeapCorruption.c)
 */

__int64 __fastcall SmHpBufferProtectEx(ULONG_PTR a1, __int64 a2, char a3, unsigned __int64 a4)
{
  int v4; // r15d
  ULONG_PTR v5; // r12
  unsigned int v8; // ebx
  unsigned __int8 *v10; // r14
  int v11; // r9d
  unsigned __int64 v12; // r9
  int v13; // eax
  ULONG_PTR BugCheckParameter4; // [rsp+60h] [rbp+8h] BYREF

  BugCheckParameter4 = a1;
  v4 = *(_DWORD *)(a2 + 12);
  v5 = (unsigned int)a4;
  v8 = 1;
  if ( v4 )
  {
    if ( (a3 & 3) != 0 )
    {
      v10 = *(unsigned __int8 **)a2;
      MetroHash64::Hash(*(const unsigned __int8 **)a2, 0x1000uLL, (unsigned __int8 *const)&BugCheckParameter4, a4);
      v11 = BugCheckParameter4;
      if ( !(_DWORD)BugCheckParameter4 )
        v11 = 1;
      if ( v11 == v4 )
      {
        if ( (a3 & 1) != 0 )
        {
          ExProtectPoolEx((unsigned __int64)v10, (unsigned __int64)v10, 4096LL, 4u);
          *(_DWORD *)(a2 + 12) = 0;
        }
      }
      else
      {
        if ( (a3 & 4) == 0 )
        {
          SmPrepareForFatalHeapCorruption(v10, (__int64)&BugCheckParameter4);
          KeBugCheckEx(0x1C7u, v5, *(_QWORD *)a2, *(unsigned int *)(a2 + 12), BugCheckParameter4);
        }
        return 0;
      }
    }
  }
  else if ( (a3 & 3) == 0 )
  {
    ExProtectPoolEx(*(_QWORD *)a2, *(_QWORD *)a2, 4096LL, 2u);
    MetroHash64::Hash(*(const unsigned __int8 **)a2, 0x1000uLL, (unsigned __int8 *const)&BugCheckParameter4, v12);
    v13 = BugCheckParameter4;
    *(_DWORD *)(a2 + 12) = BugCheckParameter4;
    if ( !v13 )
      *(_DWORD *)(a2 + 12) = 1;
  }
  return v8;
}
