/*
 * XREFs of RtlLoadStringOrError @ 0x1C0046CF0
 * Callers:
 *     InitScancodeMap @ 0x1C0045640 (InitScancodeMap.c)
 *     FastGetProfileIntsW @ 0x1C00459E0 (FastGetProfileIntsW.c)
 *     FastGetProfileValue @ 0x1C0046540 (FastGetProfileValue.c)
 *     CheckDesktopPolicy @ 0x1C0046710 (CheckDesktopPolicy.c)
 *     FastGetProfileIntFromID @ 0x1C0046AF0 (FastGetProfileIntFromID.c)
 *     FastGetProfileStringFromIDW @ 0x1C0046C50 (FastGetProfileStringFromIDW.c)
 *     FastUpdateWinIni @ 0x1C00E5040 (FastUpdateWinIni.c)
 *     FastWriteProfileValue @ 0x1C00E50B0 (FastWriteProfileValue.c)
 *     DriverEntry @ 0x1C021CE90 (DriverEntry.c)
 * Callees:
 *     memmove @ 0x1C00AF880 (memmove.c)
 */

__int64 __fastcall RtlLoadStringOrError(ULONG MessageId, _WORD *a2, int a3, unsigned __int16 a4)
{
  int v5; // esi
  int v6; // ebx
  BYTE *Text; // rdx
  __int64 v8; // rax
  __int64 result; // rax
  PMESSAGE_RESOURCE_ENTRY v10; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    v5 = a3 - 1;
    if ( a3 )
    {
      v6 = 0;
      if ( RtlFindMessage(hModuleWinKernel, 0xBu, a4, MessageId, &v10) < 0 )
      {
LABEL_10:
        result = (unsigned int)v6;
        a2[v6] = 0;
        return result;
      }
      Text = v10->Text;
      v8 = -1LL;
      do
        ++v8;
      while ( *(_WORD *)&Text[2 * v8] );
      if ( (int)v8 - 2 >= 0 )
      {
        v6 = v5;
        if ( (int)v8 - 2 <= v5 )
          v6 = v8 - 2;
        memmove(a2, Text, 2LL * v6);
        goto LABEL_10;
      }
    }
  }
  return 0LL;
}
