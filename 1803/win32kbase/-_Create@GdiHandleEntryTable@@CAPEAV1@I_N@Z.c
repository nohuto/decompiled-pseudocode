/*
 * XREFs of ?_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z @ 0x1C0168B0C
 * Callers:
 *     ?AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z @ 0x1C002BA30 (-AcquireEntryIndex@GdiHandleManager@@QEAA_NPEAI@Z.c)
 *     ?Create@GdiHandleEntryDirectory@@SAPEAV1@PEAU_ENTRY@@I@Z @ 0x1C016893C (-Create@GdiHandleEntryDirectory@@SAPEAV1@PEAU_ENTRY@@I@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ?Create@EntryDataLookupTable@GdiHandleEntryTable@@SAPEAV12@I@Z @ 0x1C0168A88 (-Create@EntryDataLookupTable@GdiHandleEntryTable@@SAPEAV12@I@Z.c)
 */

struct GdiHandleEntryTable *__fastcall GdiHandleEntryTable::_Create(unsigned int a1, char a2)
{
  unsigned int v2; // edi
  unsigned int v5; // r8d
  __int64 v7; // rbx
  struct GdiHandleEntryTable::EntryDataLookupTable *v8; // rax

  v2 = 0;
  v5 = 32;
  if ( a2 )
  {
    if ( 24 * (unsigned __int64)a1 > 0xFFFFFFFF )
      return 0LL;
    v2 = 24 * a1;
    if ( v2 + 32 < v2 )
      return 0LL;
    v5 = v2 + 32;
  }
  v7 = Win32AllocPool(v5, 0x63746547u);
  if ( v7 )
  {
    v8 = GdiHandleEntryTable::EntryDataLookupTable::Create(a1);
    *(_QWORD *)(v7 + 24) = v8;
    if ( !v8 )
    {
      Win32FreePool(v7);
      return 0LL;
    }
    if ( a2 )
    {
      *(_QWORD *)v7 = v7 + 32;
      memset((void *)(v7 + 32), 0, v2);
    }
    *(_DWORD *)(v7 + 20) = 0;
    *(_DWORD *)(v7 + 16) = 0;
    *(_DWORD *)(v7 + 8) = a1;
    *(_DWORD *)(v7 + 12) = -1;
  }
  return (struct GdiHandleEntryTable *)v7;
}
