/*
 * XREFs of ViXdvBindXdvDriverEntryWrappers @ 0x140929410
 * Callers:
 *     ViXdvDriverLoadImage @ 0x140929510 (ViXdvDriverLoadImage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     VfUtilDbgPrint @ 0x140309C3C (VfUtilDbgPrint.c)
 */

char __fastcall ViXdvBindXdvDriverEntryWrappers(__int64 (*a1)(void))
{
  char v1; // bl
  _DWORD *v3; // rax
  _DWORD *v4; // rdx
  unsigned int i; // ecx
  unsigned int v6; // r9d
  char v7; // r8
  __int64 **j; // rax
  int v9; // r10d

  v1 = 0;
  ViXdvEPThunksNoXdvEntry = 0;
  ViXdvEPBound = 0;
  if ( !a1 )
    return 0;
  v3 = (_DWORD *)a1();
  v4 = v3;
  if ( v3 )
  {
    if ( *v3 == 5 )
    {
      for ( i = 0; i < v4[1]; ++i )
      {
        if ( *(_QWORD *)&v4[2 * i + 2] )
        {
          v6 = 0;
          v7 = 0;
          for ( j = &VfXdvIoCallbackThunks; ; j = &(&VfXdvIoCallbackThunks)[2 * v6] )
          {
            v9 = *((_DWORD *)j + 2);
            if ( v9 == 102 || v7 == 1 )
              break;
            if ( v9 == i )
            {
              v7 = 1;
              if ( *j )
              {
                **j = *(_QWORD *)&v4[2 * i + 2];
                ++ViXdvEPBound;
              }
            }
            ++v6;
          }
        }
        else
        {
          ++ViXdvEPThunksNoXdvEntry;
        }
      }
      return 1;
    }
    else
    {
      VfUtilDbgPrint("XDV entry point version mismatch: kernel version %d   driver version %d\n", 5, *v3);
    }
  }
  return v1;
}
