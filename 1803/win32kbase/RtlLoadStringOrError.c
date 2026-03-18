/*
 * XREFs of RtlLoadStringOrError @ 0x1C0067F00
 * Callers:
 *     CheckDesktopPolicy @ 0x1C0067E40 (CheckDesktopPolicy.c)
 *     FastGetProfileIntFromID @ 0x1C00A8030 (FastGetProfileIntFromID.c)
 *     FastGetProfileIntsW @ 0x1C00A8180 (FastGetProfileIntsW.c)
 *     FastGetProfileStringFromIDW @ 0x1C00A8440 (FastGetProfileStringFromIDW.c)
 *     FastGetProfileValue @ 0x1C00A84E0 (FastGetProfileValue.c)
 *     FastUpdateWinIni @ 0x1C00A86D0 (FastUpdateWinIni.c)
 *     FastWriteProfileValue @ 0x1C00A87F0 (FastWriteProfileValue.c)
 *     InitScancodeMap @ 0x1C012F7F0 (InitScancodeMap.c)
 *     DriverEntry @ 0x1C01F1490 (DriverEntry.c)
 * Callees:
 *     memmove @ 0x1C0079B80 (memmove.c)
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
