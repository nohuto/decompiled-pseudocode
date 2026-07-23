/*
 * XREFs of RtlRunEncodeUnicodeString @ 0x1800885D0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQuerySystemTime @ 0x1800A0E40 (ZwQuerySystemTime.c)
 */

void __cdecl RtlRunEncodeUnicodeString(PUCHAR Seed, PUNICODE_STRING String)
{
  UCHAR v2; // r8
  char v5; // al
  unsigned int v6; // r8d
  unsigned __int16 Length; // ax
  unsigned int v8; // r9d
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rax
  LARGE_INTEGER SystemTime; // [rsp+30h] [rbp+8h] BYREF

  v2 = *Seed;
  if ( !*Seed )
  {
    ZwQuerySystemTime(&SystemTime);
    v5 = BYTE1(SystemTime.LowPart);
    v6 = 1;
    *Seed = BYTE1(SystemTime.LowPart);
    if ( !v5 )
    {
      do
      {
        if ( v6 >= 8 )
          break;
        v11 = v6++;
        *Seed |= *((_BYTE *)&SystemTime.LowPart + v11);
      }
      while ( !*Seed );
    }
    v2 = *Seed;
    if ( !*Seed )
    {
      *Seed = 1;
      v2 = 1;
    }
  }
  Length = String->Length;
  if ( String->Length )
  {
    *(_BYTE *)String->Buffer ^= v2 | 0x43;
    Length = String->Length;
  }
  v8 = 1;
  if ( Length > 1u )
  {
    do
    {
      v9 = v8 - 1;
      v10 = v8++;
      *((_BYTE *)String->Buffer + v10) ^= *Seed ^ *((_BYTE *)String->Buffer + v9);
    }
    while ( v8 < String->Length );
  }
}
