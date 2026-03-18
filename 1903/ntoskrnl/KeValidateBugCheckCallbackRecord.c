/*
 * XREFs of KeValidateBugCheckCallbackRecord @ 0x1402A8B84
 * Callers:
 *     IopDumpCallAddPagesCallbacks @ 0x140296854 (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x1402969A0 (IopDumpCallRemovePagesCallbacks.c)
 *     KiInvokeBugCheckAddTriageDumpDataCallbacks @ 0x1402A951C (KiInvokeBugCheckAddTriageDumpDataCallbacks.c)
 *     KiInvokeBugCheckEntryCallbacks @ 0x1402A96CC (KiInvokeBugCheckEntryCallbacks.c)
 *     IopLiveDumpCallRemovePagesCallbacks @ 0x1405A7FD8 (IopLiveDumpCallRemovePagesCallbacks.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x14001F520 (MmIsAddressValidEx.c)
 */

bool __fastcall KeValidateBugCheckCallbackRecord(__int64 a1, int a2, _QWORD *a3)
{
  bool v3; // si
  __int64 v7; // r14
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // rcx
  bool result; // al

  v3 = 0;
  v7 = 0LL;
  if ( (a1 & 7) == 0 )
  {
    v8 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v9 = ((unsigned __int64)(a1 & 0xFFF) + 4143) >> 12;
    if ( v9 )
    {
      while ( MmIsAddressValidEx(v8) )
      {
        v8 += 4096LL;
        if ( !--v9 )
          goto LABEL_5;
      }
    }
    else
    {
LABEL_5:
      if ( *(_QWORD *)(a1 + 8) == *a3 )
      {
        v7 = a1;
        if ( *(_BYTE *)(a1 + 44) == 1 )
        {
          v10 = *(int *)(a1 + 40);
          v11 = *(_QWORD *)(a1 + 16);
          if ( *(_QWORD *)(a1 + 32) == v11 + v10 + *(_QWORD *)(a1 + 24) && (_DWORD)v10 == a2 )
            v3 = MmIsAddressValidEx(v11) != 0;
        }
      }
    }
  }
  result = v3;
  *a3 = v7;
  return result;
}
