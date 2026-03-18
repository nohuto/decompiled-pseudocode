/*
 * XREFs of ?_Create@GdiHandleEntryTable@@CAPEAV1@I_N@Z @ 0x1C005EF40
 * Callers:
 *     ?AcquireEntryIndex@GdiHandleEntryDirectory@@QEAA_NPEAI@Z @ 0x1C0029A30 (-AcquireEntryIndex@GdiHandleEntryDirectory@@QEAA_NPEAI@Z.c)
 *     ?Create@GdiHandleEntryDirectory@@SAPEAV1@PEAU_ENTRY@@I@Z @ 0x1C005EEAC (-Create@GdiHandleEntryDirectory@@SAPEAV1@PEAU_ENTRY@@I@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0014930 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ?Create@EntryDataLookupTable@GdiHandleEntryTable@@SAPEAV12@I@Z @ 0x1C005EFD8 (-Create@EntryDataLookupTable@GdiHandleEntryTable@@SAPEAV12@I@Z.c)
 *     memset @ 0x1C00C1440 (memset.c)
 */

struct GdiHandleEntryTable *__fastcall GdiHandleEntryTable::_Create(unsigned int a1, char a2)
{
  unsigned int v2; // edi
  unsigned int v5; // eax
  __int64 v6; // rbx
  struct GdiHandleEntryTable::EntryDataLookupTable *v7; // rax

  v2 = 0;
  v5 = 32;
  if ( a2 )
  {
    v2 = 24 * a1;
    if ( 24 * (unsigned __int64)a1 > 0xFFFFFFFF )
      return 0LL;
    v5 = v2 + 32;
    if ( v2 + 32 < v2 )
      return 0LL;
  }
  v6 = Win32AllocPool(v5, 0x63746547u);
  if ( !v6 )
    return (struct GdiHandleEntryTable *)v6;
  v7 = GdiHandleEntryTable::EntryDataLookupTable::Create(a1);
  *(_QWORD *)(v6 + 24) = v7;
  if ( v7 )
  {
    if ( a2 )
    {
      *(_QWORD *)v6 = v6 + 32;
      memset((void *)(v6 + 32), 0, v2);
    }
    *(_DWORD *)(v6 + 20) = 0;
    *(_DWORD *)(v6 + 16) = 0;
    *(_DWORD *)(v6 + 8) = a1;
    *(_DWORD *)(v6 + 12) = -1;
    return (struct GdiHandleEntryTable *)v6;
  }
  Win32FreePool(v6);
  return 0LL;
}
