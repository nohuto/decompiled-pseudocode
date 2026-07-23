/*
 * XREFs of ViThunkFindAllExportAddresses @ 0x1409B87F0
 * Callers:
 *     VfThunkFindExportAddressAllTables @ 0x1409B8754 (VfThunkFindExportAddressAllTables.c)
 * Callees:
 *     ViThunkFindExportAddress @ 0x1409B888C (ViThunkFindExportAddress.c)
 */

__int64 __fastcall ViThunkFindAllExportAddresses(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v5; // edi
  __int64 *v9; // rbx
  __int64 ExportAddress; // rax
  __int64 *v11; // rdx
  int v12; // [rsp+48h] [rbp+10h] BYREF

  result = *a2;
  v5 = 0;
  if ( *a2 )
  {
    v9 = a2 + 2;
    do
    {
      ExportAddress = ViThunkFindExportAddress(a1, result, &v12);
      v11 = (__int64 *)v9[1];
      if ( v11 )
      {
        if ( *v11 )
        {
          if ( *v11 == 1 && ExportAddress != 1 )
            *v11 = 0LL;
        }
        else
        {
          *v11 = ExportAddress;
        }
      }
      if ( v12 )
      {
        _bittestandreset(*(signed __int32 **)(a4 + 8), v5);
        ExportAddress = 0LL;
      }
      *v9 = ExportAddress;
      ++v5;
      v9 = (__int64 *)((char *)v9 + a3);
      result = *(v9 - 2);
    }
    while ( result );
  }
  return result;
}
