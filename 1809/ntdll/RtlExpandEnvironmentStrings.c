/*
 * XREFs of RtlExpandEnvironmentStrings @ 0x180056C00
 * Callers:
 *     RtlGetPersistedStateLocation @ 0x1800296A0 (RtlGetPersistedStateLocation.c)
 *     RtlExpandEnvironmentStrings_U @ 0x180056B80 (RtlExpandEnvironmentStrings_U.c)
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x180056D90 (RtlQueryEnvironmentVariable.c)
 */

NTSTATUS __cdecl RtlExpandEnvironmentStrings(
        PVOID Environment,
        PCWSTR Source,
        SIZE_T SourceLength,
        PWSTR Destination,
        SIZE_T DestinationLength,
        PSIZE_T ReturnLength)
{
  SIZE_T ValueLength; // rbx
  SIZE_T v7; // r15
  NTSTATUS v10; // edi
  __int64 v11; // rsi
  PCWSTR v12; // r13
  SIZE_T v14; // rax
  SIZE_T v15; // rbp
  NTSTATUS v16; // ecx
  PVOID v17; // [rsp+70h] [rbp+8h]
  ULONG_PTR v18; // [rsp+80h] [rbp+18h] BYREF

  v17 = Environment;
  ValueLength = DestinationLength;
  v7 = SourceLength;
  v10 = 0;
  v11 = 0LL;
  if ( !SourceLength )
    goto LABEL_9;
  do
  {
    if ( *Source != 37 )
      goto LABEL_3;
    v14 = v7 - 1;
    v15 = 0LL;
    v12 = Source + 1;
    if ( v7 == 1 )
      goto LABEL_3;
    do
    {
      if ( *v12 == 37 )
        break;
      ++v12;
      ++v15;
    }
    while ( v15 < v14 );
    if ( v15
      && v15 < v14
      && ((v16 = RtlQueryEnvironmentVariable(Environment, Source + 1, v15, Destination, ValueLength, &v18),
           (int)(v16 + 0x80000000) < 0)
       || v16 == -1073741789) )
    {
      v11 += v18;
      if ( v16 == -1073741789 )
        --v11;
      v7 += -2LL - v15;
      if ( v16 < 0 )
      {
        v10 = v16;
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
      if ( v10 >= 0 )
      {
        if ( ValueLength <= 1 )
        {
          v10 = -1073741789;
        }
        else
        {
          --ValueLength;
          *Destination++ = *Source;
        }
      }
      ++v11;
      v12 = Source;
      --v7;
    }
    Environment = v17;
    Source = v12 + 1;
  }
  while ( v7 );
  if ( v10 >= 0 )
  {
LABEL_9:
    if ( ValueLength )
      *Destination = 0;
    else
      v10 = -1073741789;
  }
  if ( ReturnLength )
    *ReturnLength = v11 + 1;
  return v10;
}
