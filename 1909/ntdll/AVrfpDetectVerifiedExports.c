/*
 * XREFs of AVrfpDetectVerifiedExports @ 0x1800D9A64
 * Callers:
 *     AVrfpDllLoadNotificationInternal @ 0x1800D9B4C (AVrfpDllLoadNotificationInternal.c)
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x18001AEC0 (LdrGetProcedureAddressForCaller.c)
 *     RtlInitAnsiString @ 0x180021100 (RtlInitAnsiString.c)
 *     DbgPrint @ 0x180053E40 (DbgPrint.c)
 */

char __fastcall AVrfpDetectVerifiedExports(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  char v3; // si
  __int64 v4; // rbp
  _QWORD *v6; // rbx
  _STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  PVOID *Callback; // [rsp+58h] [rbp+0h]
  PVOID ProcedureAddress; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD **)(a1 + 24);
  v3 = 0;
  LODWORD(v4) = 0;
  if ( *v2 )
  {
    v6 = *(_QWORD **)(a1 + 24);
    do
    {
      if ( !v6[1] )
      {
        RtlInitAnsiString(&DestinationString, (PCSZ)*v6);
        if ( LdrGetProcedureAddressForCaller(
               *(PVOID *)(a2 + 48),
               &DestinationString,
               0,
               &ProcedureAddress,
               1u,
               Callback) >= 0 )
        {
          v6[1] = ProcedureAddress;
          if ( (AVrfpDebug & 2) != 0 )
            DbgPrint("AVRF: (%ws) %s export found. \n", *(_QWORD *)(a2 + 96), *v6);
          v3 = 1;
        }
        else if ( (AVrfpDebug & 2) != 0 )
        {
          DbgPrint("AVRF: warning: did not find `%s' export in %ws . \n", *v6, *(_QWORD *)(a2 + 96));
        }
      }
      v4 = (unsigned int)(v4 + 1);
      v6 = &v2[3 * v4];
    }
    while ( *v6 );
  }
  return v3;
}
