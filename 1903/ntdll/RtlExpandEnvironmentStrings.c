/*
 * XREFs of RtlExpandEnvironmentStrings @ 0x1800171C0
 * Callers:
 *     RtlExpandEnvironmentStrings_U @ 0x1800028C0 (RtlExpandEnvironmentStrings_U.c)
 *     RtlGetPersistedStateLocation @ 0x18006FCC0 (RtlGetPersistedStateLocation.c)
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x18001A270 (RtlQueryEnvironmentVariable.c)
 */

NTSTATUS __cdecl RtlExpandEnvironmentStrings(
        PVOID Environment,
        PCWSTR Source,
        SIZE_T SourceLength,
        PWSTR Destination,
        SIZE_T DestinationLength,
        PSIZE_T ReturnLength)
{
  SIZE_T v6; // rsi
  SIZE_T ValueLength; // rdi
  NTSTATUS v9; // r12d
  __int64 v11; // r15
  PCWSTR v12; // rbp
  NTSTATUS result; // eax
  SIZE_T v14; // r13
  SIZE_T v15; // rax
  NTSTATUS v16; // edx
  PVOID v17; // [rsp+70h] [rbp+8h]
  ULONG_PTR v18; // [rsp+80h] [rbp+18h] BYREF

  v17 = Environment;
  v6 = SourceLength;
  ValueLength = DestinationLength;
  v9 = 0;
  v11 = 0LL;
  if ( !SourceLength )
    goto LABEL_9;
  do
  {
    if ( *Source != 37 )
      goto LABEL_3;
    v14 = 0LL;
    v12 = Source + 1;
    v15 = v6 - 1;
    if ( v6 == 1 )
      goto LABEL_3;
    do
    {
      if ( *v12 == 37 )
        break;
      ++v12;
      ++v14;
    }
    while ( v14 < v15 );
    if ( v14
      && v14 < v15
      && ((v16 = RtlQueryEnvironmentVariable(Environment, Source + 1, v14, Destination, ValueLength, &v18),
           (int)(v16 + 0x80000000) < 0)
       || v16 == -1073741789) )
    {
      v11 += v18;
      if ( v16 == -1073741789 )
        --v11;
      v6 += -2LL - v14;
      if ( v16 < 0 )
      {
        v9 = v16;
      }
      else
      {
        ValueLength -= v18;
        Destination += v18;
      }
    }
    else
    {
LABEL_3:
      if ( v9 >= 0 )
      {
        if ( ValueLength <= 1 )
        {
          v9 = -1073741789;
        }
        else
        {
          --ValueLength;
          *Destination++ = *Source;
        }
      }
      ++v11;
      v12 = Source;
      --v6;
    }
    Environment = v17;
    Source = v12 + 1;
  }
  while ( v6 );
  if ( v9 >= 0 )
  {
LABEL_9:
    if ( ValueLength )
      *Destination = 0;
    else
      v9 = -1073741789;
  }
  result = v9;
  if ( ReturnLength )
    *ReturnLength = v11 + 1;
  return result;
}
