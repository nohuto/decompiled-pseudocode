/*
 * XREFs of MiValidateBootDriverLargePagePfns @ 0x140A3D3AC
 * Callers:
 *     MiInitializeBootLoadedDriverPfns @ 0x140A14BE0 (MiInitializeBootLoadedDriverPfns.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14005EDB0 (RtlImageNtHeader.c)
 *     MiMarkPfnVerified @ 0x140098744 (MiMarkPfnVerified.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 */

PIMAGE_NT_HEADERS __fastcall MiValidateBootDriverLargePagePfns(__int64 a1)
{
  ULONG_PTR v2; // rsi
  PIMAGE_NT_HEADERS result; // rax
  PIMAGE_NT_HEADERS v4; // rbp
  unsigned int v5; // r15d
  unsigned int *v6; // rdi
  unsigned __int64 v7; // rbx
  int v8; // r14d
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  PIMAGE_NT_HEADERS v10; // [rsp+68h] [rbp+10h]

  v2 = 0LL;
  result = RtlImageNtHeader(*(PVOID *)(a1 + 48));
  v4 = result;
  v10 = result;
  v5 = 0;
  if ( result->FileHeader.NumberOfSections )
  {
    v6 = (unsigned int *)((char *)&result->OptionalHeader.SizeOfUninitializedData
                        + result->FileHeader.SizeOfOptionalHeader);
    do
    {
      if ( (v6[6] & 0x20000000) != 0 )
      {
        v7 = (((*(_QWORD *)(a1 + 48) + (unsigned __int64)*v6) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v8 = (*(v6 - 1) >> 12) + ((*(v6 - 1) & 0xFFF) != 0);
        if ( v8 )
        {
          do
          {
            if ( (v7 & 0xFFF) == 0 )
            {
              v9 = MI_READ_PTE_LOCK_FREE(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
              v2 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v9) >> 12) & 0xFFFFFFFFFLL)
                 - 0x58000000000LL;
            }
            MiMarkPfnVerified(v2, 0);
            v2 += 48LL;
            v7 += 8LL;
            --v8;
          }
          while ( v8 );
          v4 = v10;
        }
      }
      result = (PIMAGE_NT_HEADERS)v4->FileHeader.NumberOfSections;
      v6 += 10;
      ++v5;
    }
    while ( v5 < (unsigned int)result );
  }
  return result;
}
