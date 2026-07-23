/*
 * XREFs of SbpDetermineDllContext @ 0x18002C750
 * Callers:
 *     SbUpdateSwitchContextBasedOnDll @ 0x18002CB3C (SbUpdateSwitchContextBasedOnDll.c)
 * Callees:
 *     RtlImageNtHeader @ 0x18001B960 (RtlImageNtHeader.c)
 *     SbGetContextDetailsById @ 0x18002CD98 (SbGetContextDetailsById.c)
 *     SbGetContextDetailsByGuid @ 0x18002CDC0 (SbGetContextDetailsByGuid.c)
 *     SbGetContextDetailsByVersion @ 0x18002DDE0 (SbGetContextDetailsByVersion.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     SbpRetrieveCompatibilityManifest @ 0x18007ACA4 (SbpRetrieveCompatibilityManifest.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 */

__int64 __fastcall SbpDetermineDllContext(PACTIVATION_CONTEXT ActivationContext, _QWORD *a2)
{
  unsigned int v2; // ebx
  PIMAGE_NT_HEADERS v5; // rax
  unsigned int v6; // edi
  unsigned int v7; // esi
  __int64 v9; // r15
  __int64 *v10; // rdi
  __int64 v11; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v12; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v13[3]; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v14; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+58h] [rbp-A8h] BYREF

  v2 = 0;
  v13[1] = 512LL;
  v11 = 0LL;
  v13[0] = 0LL;
  v12 = 0LL;
  if ( a2 && ActivationContext )
  {
    v5 = RtlImageNtHeader(ActivationContext);
    LOWORD(v6) = v5->OptionalHeader.MajorSubsystemVersion;
    LOWORD(v7) = v5->OptionalHeader.MinorSubsystemVersion;
    SbGetContextDetailsById(4LL, &v11);
    if ( (unsigned __int16)v6 > *(_WORD *)(v11 + 20)
      || (_WORD)v6 == *(_WORD *)(v11 + 20) && (unsigned __int16)v7 >= *(_WORD *)(v11 + 22) )
    {
      *a2 = v11;
    }
    else
    {
      if ( (unsigned int)SbpRetrieveCompatibilityManifest(ActivationContext) && &v14 )
      {
        v7 = ((unsigned __int16)v6 << 16) + (unsigned __int16)v7;
        if ( v14 )
        {
          v9 = v14;
          v10 = &v15;
          do
          {
            if ( *((_DWORD *)v10 + 4) == 1
              && (unsigned int)SbGetContextDetailsByGuid(v10, &v12)
              && *(unsigned __int16 *)(v12 + 22) + (*(unsigned __int16 *)(v12 + 20) << 16) >= v7 )
            {
              v7 = *(unsigned __int16 *)(v12 + 22) + (*(unsigned __int16 *)(v12 + 20) << 16);
            }
            v10 += 4;
            --v9;
          }
          while ( v9 );
        }
        v6 = HIWORD(v7);
      }
      SbGetContextDetailsByVersion((unsigned __int16)v6, (unsigned __int16)v7, v13);
      *a2 = v13[0];
    }
    return 1;
  }
  return v2;
}
