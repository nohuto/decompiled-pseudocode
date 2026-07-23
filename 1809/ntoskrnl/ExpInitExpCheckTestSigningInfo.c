/*
 * XREFs of ExpInitExpCheckTestSigningInfo @ 0x14016A070
 * Callers:
 *     <none>
 * Callees:
 *     ZwQuerySystemInformation @ 0x1401B89B0 (ZwQuerySystemInformation.c)
 */

__int64 __fastcall ExpInitExpCheckTestSigningInfo(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  NTSTATUS v3; // eax
  unsigned int v4; // ecx
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  ULONG v7; // [rsp+58h] [rbp+20h] BYREF

  v6 = 8LL;
  v3 = ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v6, 8u, &v7);
  v4 = 0;
  if ( v3 >= 0 )
  {
    v4 = 1;
    if ( (v6 & 0x200000000LL) != 0 )
      ExpTestSigningEnabled = 1;
  }
  return v4;
}
