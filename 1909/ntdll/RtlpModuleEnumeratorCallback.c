/*
 * XREFs of RtlpModuleEnumeratorCallback @ 0x18007DA30
 * Callers:
 *     <none>
 * Callees:
 *     NtLockVirtualMemory @ 0x18009EF80 (NtLockVirtualMemory.c)
 */

void __fastcall RtlpModuleEnumeratorCallback(PLDR_DATA_TABLE_ENTRY a1, PVOID a2, BOOLEAN *a3)
{
  char *DllBase; // r9
  char *v6; // rax
  unsigned __int16 v7; // r8
  unsigned int *v8; // rcx
  unsigned int i; // edx
  char *v10; // r10
  __int64 v11; // rax
  unsigned __int64 v12; // r11

  DllBase = (char *)a1->DllBase;
  if ( *(_WORD *)DllBase == 23117 )
  {
    v6 = &DllBase[*((int *)DllBase + 15)];
    if ( *(_DWORD *)v6 == 17744 )
    {
      if ( *((_WORD *)v6 + 10) )
      {
        v7 = *((_WORD *)v6 + 3);
        if ( v7 )
        {
          if ( *((_WORD *)v6 + 10) == 240 )
          {
            v8 = (unsigned int *)(v6 + 264);
            for ( i = 0; i < v7; ++i )
            {
              v10 = &DllBase[v8[3]];
              v11 = v8[2];
              if ( !(_DWORD)v11 )
                v11 = v8[4];
              v12 = (unsigned __int64)&v10[v11 + 4095] & 0xFFFFFFFFFFFFF000uLL;
              if ( *(_QWORD *)a2 >= (unsigned __int64)v10 && *(_QWORD *)a2 < v12 )
              {
                *((_QWORD *)a2 + 2) = v10;
                *((_QWORD *)a2 + 3) = v12 - (_QWORD)v10;
                *((_DWORD *)a2 + 2) = NtLockVirtualMemory(
                                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                                        (PVOID *)a2 + 2,
                                        (PSIZE_T)a2 + 3,
                                        1u);
                *a3 = 1;
                return;
              }
              v8 += 10;
            }
          }
        }
      }
    }
  }
}
