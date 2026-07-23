/*
 * XREFs of RtlGetExtendedContextLength2 @ 0x18001ECD0
 * Callers:
 *     RtlUnwind @ 0x18001AD60 (RtlUnwind.c)
 *     RtlUnwindEx @ 0x18001D490 (RtlUnwindEx.c)
 *     RtlGetExtendedContextLength @ 0x180020CE0 (RtlGetExtendedContextLength.c)
 *     RtlRaiseException @ 0x18006A4F0 (RtlRaiseException.c)
 *     sub_18006A670 @ 0x18006A670 (sub_18006A670.c)
 * Callees:
 *     sub_18001ED88 @ 0x18001ED88 (sub_18001ED88.c)
 *     sub_18007C438 @ 0x18007C438 (sub_18007C438.c)
 */

NTSTATUS __cdecl RtlGetExtendedContextLength2(
        ULONG ContextFlags,
        PULONG ContextLength,
        ULONG64 EnabledExtendedFeatures)
{
  NTSTATUS result; // eax
  int v6; // r10d
  int v7; // r9d
  int v8; // r11d
  int v9; // r9d
  int v10; // ebx
  int v11; // eax
  char v12; // [rsp+48h] [rbp+20h] BYREF

  result = sub_18001ED88(ContextFlags, &v12);
  v7 = 0;
  if ( result < 0 )
    return result;
  v8 = 0;
  if ( (v6 & 0x10000) != 0 )
  {
    v7 = 716;
    v8 = 4;
  }
  else
  {
    if ( (v6 & 0x100000) != 0 )
    {
      v7 = 1232;
    }
    else
    {
      if ( (v6 & 0x200000) != 0 )
      {
        v7 = 416;
        v8 = 8;
        goto LABEL_6;
      }
      if ( (v6 & 0x400000) == 0 )
        goto LABEL_6;
      v7 = 912;
    }
    v8 = 16;
  }
LABEL_6:
  v9 = v7 + 24;
  if ( (v12 & 2) != 0 )
  {
    v10 = -v8 & (v9 + v8 - 1);
    if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      EnabledExtendedFeatures &= MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8] | 0x8000000000000000uLL;
    v11 = sub_18007C438(EnabledExtendedFeatures);
    v9 = v11 + v10 - v8 - 448;
  }
  *ContextLength = v9 + v8 - 1;
  return 0;
}
