/*
 * XREFs of LdrInitializeEnclave @ 0x1800CD5C0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpObtainLockedEnclave @ 0x18001B2F8 (LdrpObtainLockedEnclave.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     ZwInitializeEnclave @ 0x18009EDA0 (ZwInitializeEnclave.c)
 *     NtTerminateEnclave @ 0x1800A0580 (NtTerminateEnclave.c)
 *     RtlCallEnclave @ 0x1800A0D80 (RtlCallEnclave.c)
 *     LdrpDereferenceEnclave @ 0x1800CDC04 (LdrpDereferenceEnclave.c)
 *     LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry @ 0x1800D07CC (LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry.c)
 */

__int64 __fastcall LdrInitializeEnclave(__int64 a1, unsigned __int64 a2)
{
  int v2; // edi
  __int64 *v3; // rax
  __int64 *v4; // rbx
  bool v5; // zf

  v2 = 0;
  v3 = LdrpObtainLockedEnclave(a2, 1);
  v4 = v3;
  if ( v3 && *((_DWORD *)v3 + 14) == 16 && *((_DWORD *)v3 + 16) )
  {
    if ( *((_DWORD *)v3 + 16) != 1 )
    {
      v2 = -1073741502;
      goto LABEL_12;
    }
  }
  else
  {
    v2 = ZwInitializeEnclave();
    if ( v2 < 0 )
      goto LABEL_12;
  }
  if ( !v4 )
    return (unsigned int)v2;
  v5 = *((_DWORD *)v4 + 14) == 16;
  *((_DWORD *)v4 + 16) = 1;
  if ( v5 )
  {
    v2 = RtlCallEnclave();
    if ( v2 < 0 )
      NtTerminateEnclave();
    else
      *((_DWORD *)v4 + 16) = 2;
  }
LABEL_12:
  if ( v4 )
  {
    if ( *((_DWORD *)v4 + 14) == 16 )
      LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry((unsigned int)v2);
    RtlLeaveCriticalSection((__int64)(v4 + 2));
    LdrpDereferenceEnclave(v4);
  }
  return (unsigned int)v2;
}
