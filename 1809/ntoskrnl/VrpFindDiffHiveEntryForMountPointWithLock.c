/*
 * XREFs of VrpFindDiffHiveEntryForMountPointWithLock @ 0x14080E758
 * Callers:
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14080E908 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpUnloadDifferencingHive @ 0x14080EEBC (VrpUnloadDifferencingHive.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1405D6C10 (RtlUpcaseUnicodeChar.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall VrpFindDiffHiveEntryForMountPointWithLock(PCUNICODE_STRING String1)
{
  __int64 v1; // rdi
  wchar_t *Buffer; // rbx
  __int64 v4; // rsi
  wchar_t *v5; // rbp
  unsigned __int8 v6; // al
  __int64 v7; // rbp
  __int64 v8; // r9
  __int64 v9; // rbx
  UNICODE_STRING String2; // [rsp+20h] [rbp-38h] BYREF

  v1 = 0LL;
  Buffer = String1->Buffer;
  v4 = 314159LL;
  v5 = &Buffer[(unsigned __int64)String1->Length >> 1];
  while ( Buffer < v5 )
  {
    v6 = RtlUpcaseUnicodeChar(*Buffer++);
    v4 = 37 * (v6 + 37 * v4);
  }
  v7 = -1LL << (dword_1404389A4 & 0x1F);
  v8 = v4 & v7;
  if ( (unsigned int)dword_1404389A4 >> 5 )
  {
    v9 = qword_1404389A8
       + 8
       * ((((v4 & (unsigned __int64)v7) >> 56)
         + 37
         * ((unsigned __int8)((v4 & (unsigned __int64)v7) >> 48)
          + 37
          * ((unsigned __int8)((unsigned __int16)((v4 & (unsigned __int64)v7) >> 32) >> 8)
           + 37
           * ((unsigned __int8)((v4 & (unsigned __int64)v7) >> 32)
            + 37
            * ((((unsigned int)v4 & (unsigned int)v7) >> 24)
             + 37
             * ((unsigned __int8)(((unsigned int)v4 & (unsigned int)v7) >> 16)
              + 37 * ((unsigned __int8)((unsigned __int16)(v4 & v7) >> 8) + 37 * ((unsigned __int8)v8 + 11623883)))))))) & (((unsigned int)dword_1404389A4 >> 5) - 1));
    do
    {
      v9 = *(_QWORD *)v9;
      if ( (v9 & 1) != 0 )
        goto LABEL_13;
    }
    while ( v8 != (v7 & *(_QWORD *)(v9 + 8)) );
LABEL_14:
    while ( v9 )
    {
      String2.Buffer = (wchar_t *)(v9 + 68);
      String2.Length = *(_WORD *)(v9 + 64);
      String2.MaximumLength = String2.Length;
      if ( RtlEqualUnicodeString(String1, &String2, 1u) )
        return v9;
      while ( 1 )
      {
        v9 = *(_QWORD *)v9;
        if ( (v9 & 1) != 0 )
          break;
        if ( (v4 & v7) == (v7 & *(_QWORD *)(v9 + 8)) )
          goto LABEL_14;
      }
LABEL_13:
      v9 = 0LL;
    }
  }
  return v1;
}
