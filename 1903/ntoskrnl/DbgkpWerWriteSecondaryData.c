/*
 * XREFs of DbgkpWerWriteSecondaryData @ 0x14084CA74
 * Callers:
 *     DbgkpWerWriteTriageDump @ 0x14084CBE8 (DbgkpWerWriteTriageDump.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwWriteFile @ 0x1401C01D0 (ZwWriteFile.c)
 */

NTSTATUS __fastcall DbgkpWerWriteSecondaryData(__int64 a1, void *a2)
{
  NTSTATUS result; // eax
  __int128 *v3; // rbx
  ULONG Length; // ecx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp+7h] BYREF
  _DWORD Buffer[4]; // [rsp+68h] [rbp+17h] BYREF
  int i; // [rsp+78h] [rbp+27h] BYREF
  __int128 v9; // [rsp+7Ch] [rbp+2Bh]
  int v10; // [rsp+8Ch] [rbp+3Bh]
  int v11; // [rsp+90h] [rbp+3Fh]
  int v12; // [rsp+94h] [rbp+43h]

  v10 = 0;
  result = 0;
  v3 = *(__int128 **)(a1 + 168);
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  v9 = 0LL;
  if ( v3 )
  {
    Buffer[0] = 1886221636;
    Buffer[2] = 16;
    Buffer[1] = 1651469378;
    Buffer[3] = -(KernelVersionBump != 1) - 268417093;
    result = ZwWriteFile(a2, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 0x10u, 0LL, 0LL);
    if ( result >= 0 )
    {
      v11 = 0;
      Length = 32;
      v12 = 0;
      for ( i = 32; ; Length = i )
      {
        v9 = *v3;
        v10 = *((_DWORD *)v3 + 6);
        result = ZwWriteFile(a2, 0LL, 0LL, 0LL, &IoStatusBlock, &i, Length, 0LL, 0LL);
        if ( result < 0 )
          break;
        result = ZwWriteFile(a2, 0LL, 0LL, 0LL, &IoStatusBlock, *((PVOID *)v3 + 2), *((_DWORD *)v3 + 6), 0LL, 0LL);
        if ( result < 0 )
          break;
        v3 = (__int128 *)*((_QWORD *)v3 + 4);
        if ( !v3 )
          break;
      }
    }
  }
  return result;
}
