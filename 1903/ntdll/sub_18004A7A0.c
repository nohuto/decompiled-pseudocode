/*
 * XREFs of sub_18004A7A0 @ 0x18004A7A0
 * Callers:
 *     sub_18003B6C0 @ 0x18003B6C0 (sub_18003B6C0.c)
 *     sub_18003C350 @ 0x18003C350 (sub_18003C350.c)
 *     sub_18003E150 @ 0x18003E150 (sub_18003E150.c)
 *     sub_180049EE0 @ 0x180049EE0 (sub_180049EE0.c)
 *     sub_18004A220 @ 0x18004A220 (sub_18004A220.c)
 *     sub_18004A5DC @ 0x18004A5DC (sub_18004A5DC.c)
 *     sub_18004D730 @ 0x18004D730 (sub_18004D730.c)
 *     sub_18010B340 @ 0x18010B340 (sub_18010B340.c)
 * Callees:
 *     RtlRunOnceComplete @ 0x18000B240 (RtlRunOnceComplete.c)
 *     RtlRunOnceBeginInitialize @ 0x18004A890 (RtlRunOnceBeginInitialize.c)
 *     ZwQueryInformationProcess @ 0x18009CA00 (ZwQueryInformationProcess.c)
 *     sub_1800F8F8C @ 0x1800F8F8C (sub_1800F8F8C.c)
 *     sub_1800FBDC0 @ 0x1800FBDC0 (sub_1800FBDC0.c)
 */

__int64 sub_18004A7A0()
{
  NTSTATUS v0; // eax
  __int32 v1; // r8d
  unsigned int v3; // r8d
  int v5; // eax
  char v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h]

  if ( !dword_180166418
    && ZwQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &dword_180166418, 4u, 0LL) < 0 )
  {
    dword_180166418 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
  }
  v0 = RtlRunOnceBeginInitialize(&stru_180166410, 0, 0LL);
  if ( v0 < 0 )
  {
    v7 = 0;
  }
  else
  {
    if ( v0 != 259 )
      goto LABEL_4;
    if ( sub_1800FBDC0(&stru_180166410, 0LL, 0LL) )
    {
      v0 = RtlRunOnceComplete(&stru_180166410, 0, 0LL);
      if ( v0 >= 0 )
        goto LABEL_4;
      v7 = 1;
    }
    else
    {
      v0 = RtlRunOnceComplete(&stru_180166410, 4u, 0LL);
      if ( v0 >= 0 )
        goto LABEL_4;
      v7 = 2;
    }
  }
  sub_1800F8F8C((unsigned int)v0, &v7, 1LL);
LABEL_4:
  dword_180166418 = (2147483629 * (unsigned __int64)(unsigned int)dword_180166418 + 2147483587) % 0x7FFFFFFF;
  v1 = _InterlockedExchange(&dword_180163920[dword_180163B20 & 0x7F], dword_180166418);
  if ( MEMORY[0x7FFE0290] )
  {
    v5 = 0;
    while ( 1 )
    {
      __asm { rdrand  rdx }
      v8 = _RDX;
      if ( _CF )
        break;
      if ( (unsigned int)++v5 >= 0xA )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    LODWORD(_RDX) = 0;
  }
  v3 = _RDX ^ v1;
  _InterlockedExchangeAdd(&dword_180163B20, v3);
  return v3;
}
