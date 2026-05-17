/*
 * XREFs of LdrInitializeEnclave @ 0x1800CED30
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     LdrpObtainLockedEnclave @ 0x1800142E8 (LdrpObtainLockedEnclave.c)
 *     ZwInitializeEnclave @ 0x1800A21D0 (ZwInitializeEnclave.c)
 *     NtTerminateEnclave @ 0x1800A39B0 (NtTerminateEnclave.c)
 *     RtlCallEnclave @ 0x1800A41B0 (RtlCallEnclave.c)
 *     LdrpDereferenceEnclave @ 0x1800CF33C (LdrpDereferenceEnclave.c)
 *     LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry @ 0x1800D1FFC (LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry.c)
 */

__int64 __fastcall LdrInitializeEnclave(__int64 a1, unsigned __int64 a2)
{
  int v2; // edi
  __int64 *v3; // rax
  __int64 *v4; // rbx

  v2 = 0;
  v3 = LdrpObtainLockedEnclave(a2, 1);
  v4 = v3;
  if ( v3 && *((_DWORD *)v3 + 15) )
  {
    if ( *((_DWORD *)v3 + 15) != 1 )
    {
      v2 = -1073741502;
      goto LABEL_10;
    }
  }
  else
  {
    v2 = ZwInitializeEnclave();
    if ( v2 < 0 )
      goto LABEL_10;
  }
  if ( !v4 )
    return (unsigned int)v2;
  *((_DWORD *)v4 + 15) = 1;
  v2 = RtlCallEnclave();
  if ( v2 < 0 )
    NtTerminateEnclave();
  else
    *((_DWORD *)v4 + 15) = 2;
LABEL_10:
  if ( v4 )
  {
    RtlLeaveCriticalSection((__int64)(v4 + 2));
    LdrpDereferenceEnclave(v4);
    LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry((unsigned int)v2);
  }
  return (unsigned int)v2;
}
