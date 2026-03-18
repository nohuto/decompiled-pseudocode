/*
 * XREFs of ?Create@GdiHandleManager@@SAPEAV1@IPEAU_ENTRY@@I@Z @ 0x1C008FE4C
 * Callers:
 *     HmgCreate @ 0x1C008E07C (HmgCreate.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C0013080 (Win32AllocPool.c)
 *     ?Create@GdiHandleEntryDirectory@@SAPEAV1@PEAU_ENTRY@@I@Z @ 0x1C008FEDC (-Create@GdiHandleEntryDirectory@@SAPEAV1@PEAU_ENTRY@@I@Z.c)
 */

struct GdiHandleManager *__fastcall GdiHandleManager::Create(__int64 a1, struct _ENTRY *a2, unsigned int a3)
{
  struct _ENTRY *v3; // rbp
  unsigned int v5; // esi
  __int64 v6; // rax
  __int64 v7; // rbx
  struct GdiHandleEntryDirectory *v8; // rax

  v3 = (struct _ENTRY *)gpGdiSharedMemory;
  v5 = gMaxGdiHandleCount;
  if ( a3 < 0x10000 && a3 < gMaxGdiHandleCount )
    return 0LL;
  v6 = Win32AllocPool(32LL, 0x636D6847u);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  *(_DWORD *)v6 = 0;
  *(_DWORD *)(v6 + 4) = 0;
  *(_QWORD *)(v6 + 24) = 0LL;
  *(_DWORD *)(v6 + 8) = v5;
  v8 = GdiHandleEntryDirectory::Create(v3, a3);
  *(_QWORD *)(v7 + 16) = v8;
  if ( !v8 )
  {
    Win32FreePool(v7);
    return 0LL;
  }
  return (struct GdiHandleManager *)v7;
}
