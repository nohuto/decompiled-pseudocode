/*
 * XREFs of PopEmModuleAddressMatchCallback @ 0x140301810
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitString @ 0x140105320 (RtlInitString.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063FB50 (RtlAnsiStringToUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x140666E20 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall PopEmModuleAddressMatchCallback(__int64 *a1, int a2, PCSZ *a3, int a4, __int64 a5, int a6)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  const UNICODE_STRING *v8; // rdi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  ANSI_STRING SourceString; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v6 = 1;
  DestinationString.Buffer = 0LL;
  if ( a2 == 1 )
  {
    if ( a1 )
    {
      v7 = *a1;
      if ( *a1 )
      {
        if ( !a6 && a4 == 1 )
        {
          if ( a3 )
          {
            if ( *a3 )
            {
              if ( *(_DWORD *)(v7 + 8) )
              {
                v8 = *(const UNICODE_STRING **)v7;
                if ( *(_QWORD *)v7 )
                {
                  RtlInitString(&SourceString, *a3);
                  if ( RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 1u) >= 0 )
                    v6 = RtlEqualUnicodeString(&DestinationString, v8, 1u) != 0 ? 2 : 0;
                }
              }
            }
          }
        }
      }
    }
  }
  RtlFreeAnsiString(&DestinationString);
  return v6;
}
