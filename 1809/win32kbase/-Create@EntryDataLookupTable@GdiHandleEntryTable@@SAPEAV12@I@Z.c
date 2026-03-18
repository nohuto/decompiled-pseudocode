/*
 * XREFs of ?Create@EntryDataLookupTable@GdiHandleEntryTable@@SAPEAV12@I@Z @ 0x1C007F1D4
 * Callers:
 *     ?_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z @ 0x1C007F13C (-_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

struct GdiHandleEntryTable::EntryDataLookupTable *__fastcall GdiHandleEntryTable::EntryDataLookupTable::Create(int a1)
{
  unsigned int v2; // edi
  __int64 v3; // rax
  __int64 v4; // rbx

  v2 = 8 * ((unsigned int)(a1 + 255) >> 8);
  if ( v2 >= 0xFFFFFFF0 )
    return 0LL;
  v3 = Win32AllocPool(v2 + 16, 0x746C6547u);
  v4 = v3;
  if ( v3 )
  {
    *(_QWORD *)v3 = v3 + 16;
    *(_DWORD *)(v3 + 8) = a1;
    memset((void *)(v3 + 16), 0, v2);
  }
  return (struct GdiHandleEntryTable::EntryDataLookupTable *)v4;
}
