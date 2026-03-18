/*
 * XREFs of HvlDiscardSecurePagesFromHibernation @ 0x14028ABE8
 * Callers:
 *     PopSaveHiberContext @ 0x140599640 (PopSaveHiberContext.c)
 * Callees:
 *     PoSetHiberRange @ 0x14015F820 (PoSetHiberRange.c)
 *     HvlDiscardPagesFromHibernation @ 0x14028AB88 (HvlDiscardPagesFromHibernation.c)
 *     HvlpEndSecurePageListIteration @ 0x14028E614 (HvlpEndSecurePageListIteration.c)
 *     HvlpGetSecurePageList @ 0x14028E780 (HvlpGetSecurePageList.c)
 *     HvlpStartSecurePageListIteration @ 0x14028E998 (HvlpStartSecurePageListIteration.c)
 */

void __fastcall HvlDiscardSecurePagesFromHibernation(PVOID MemoryMap)
{
  int SecurePageList; // ebx
  __int64 v3; // rdi
  unsigned int i; // ebp
  unsigned __int64 v5; // r9
  char v6; // [rsp+58h] [rbp+10h] BYREF
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF

  if ( (int)HvlpStartSecurePageListIteration(0LL, 7LL) >= 0 )
  {
    do
    {
      SecurePageList = HvlpGetSecurePageList(0LL, 0LL, 0LL, &v7, 0LL, &v6);
      if ( SecurePageList >= 0 )
      {
        v3 = v7;
        for ( i = 0; i < *(unsigned __int16 *)(v3 + 8); ++i )
        {
          v5 = *(_QWORD *)(v3 + 8LL * i + 16);
          PoSetHiberRange(MemoryMap, 0xC000u, (PVOID)(v5 & 0xFFFFFFFFFFLL), (v5 >> 40) + 1, 0x686C7648u);
        }
      }
    }
    while ( !SecurePageList );
    HvlpEndSecurePageListIteration(0LL, 0LL, 0LL);
    HvlDiscardPagesFromHibernation(MemoryMap);
  }
}
