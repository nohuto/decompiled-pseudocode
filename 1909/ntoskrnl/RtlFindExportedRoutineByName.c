/*
 * XREFs of RtlFindExportedRoutineByName @ 0x140680C80
 * Callers:
 *     MmGetSystemRoutineAddress @ 0x1406E4E60 (MmGetSystemRoutineAddress.c)
 *     MiCompactServiceTable @ 0x140742D58 (MiCompactServiceTable.c)
 *     MmCallDllInitialize @ 0x1407460F0 (MmCallDllInitialize.c)
 *     MiUnloadApproved @ 0x140747580 (MiUnloadApproved.c)
 *     KsepResolveShimHooks @ 0x140882C14 (KsepResolveShimHooks.c)
 *     PspInitializeSystemDlls @ 0x1409FEC94 (PspInitializeSystemDlls.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1400E8950 (RtlImageDirectoryEntryToData.c)
 */

char *__fastcall RtlFindExportedRoutineByName(char *a1, char *a2)
{
  char *v4; // rax
  char *v5; // r9
  char *v6; // r8
  int v7; // r10d
  char *v8; // rbp
  char *v9; // rsi
  int v10; // ecx
  char *v11; // rax
  int v12; // edx
  char *v13; // rdi
  char v14; // r11
  int v15; // eax
  unsigned int v16; // ecx
  ULONG Size; // [rsp+60h] [rbp+18h] BYREF

  v4 = (char *)RtlImageDirectoryEntryToData(a1, 1u, 0, &Size);
  v5 = v4;
  v6 = 0LL;
  if ( v4 )
  {
    v7 = 0;
    v8 = &a1[*((unsigned int *)v4 + 8)];
    v9 = &a1[*((unsigned int *)v4 + 9)];
    v10 = *((_DWORD *)v4 + 6) - 1;
    if ( v10 >= 0 )
    {
      do
      {
        v11 = a2;
        v12 = (v10 + v7) >> 1;
        v13 = (char *)(&a1[*(unsigned int *)&v8[4 * v12]] - a2);
        while ( 1 )
        {
          v14 = *v11;
          if ( *v11 != v13[(_QWORD)v11] )
            break;
          ++v11;
          if ( !v14 )
          {
            v15 = 0;
            goto LABEL_7;
          }
        }
        v15 = (unsigned __int8)*v11 < (unsigned int)v13[(_QWORD)v11] ? -1 : 1;
LABEL_7:
        if ( v15 < 0 )
        {
          if ( !v12 )
            return v6;
          v10 = v12 - 1;
        }
        else
        {
          if ( v15 <= 0 )
            break;
          v7 = v12 + 1;
        }
      }
      while ( v10 >= v7 );
      if ( v10 >= v7 )
      {
        v16 = *(unsigned __int16 *)&v9[2 * v12];
        if ( v16 < *((_DWORD *)v5 + 5) )
        {
          v6 = &a1[*(unsigned int *)&a1[4 * (unsigned __int16)v16 + *((unsigned int *)v5 + 7)]];
          if ( v6 > v5 && v6 < &v5[Size] )
            return 0LL;
        }
      }
    }
  }
  return v6;
}
