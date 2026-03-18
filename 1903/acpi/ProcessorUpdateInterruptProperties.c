/*
 * XREFs of ProcessorUpdateInterruptProperties @ 0x1C00B6604
 * Callers:
 *     AcpiUpdateInterruptProperties @ 0x1C00AEED0 (AcpiUpdateInterruptProperties.c)
 * Callees:
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall ProcessorUpdateInterruptProperties(int a1, int a2)
{
  char v4; // bl
  __int64 i; // rdi
  struct _RTL_RANGE_LIST *v6; // rcx
  _DWORD *UserData; // rax
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+20h] [rbp-28h] BYREF
  PRTL_RANGE Range; // [rsp+60h] [rbp+18h] BYREF

  memset(&Iterator, 0, sizeof(Iterator));
  v4 = 0;
  for ( i = 0LL; (unsigned int)i < ProcessorInstanceCount; i = (unsigned int)(i + 1) )
  {
    v6 = (struct _RTL_RANGE_LIST *)*((_QWORD *)ProcessorByNtNumber + i);
    if ( v6 )
    {
      RtlGetFirstRange(v6, &Iterator, &Range);
      while ( Range )
      {
        UserData = Range->UserData;
        if ( UserData && UserData[4] == a1 )
        {
          v4 = 1;
          Range->Attributes = (a2 == 1) + 1;
        }
        RtlGetNextRange(&Iterator, &Range, 1u);
      }
    }
  }
  return v4 == 0 ? 0xC0000225 : 0;
}
