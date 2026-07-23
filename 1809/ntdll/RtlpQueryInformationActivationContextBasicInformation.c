/*
 * XREFs of RtlpQueryInformationActivationContextBasicInformation @ 0x18002E478
 * Callers:
 *     RtlQueryInformationActivationContext @ 0x18002DE20 (RtlQueryInformationActivationContext.c)
 * Callees:
 *     RtlAddRefActivationContext @ 0x18002E500 (RtlAddRefActivationContext.c)
 */

__int64 __fastcall RtlpQueryInformationActivationContextBasicInformation(
        char a1,
        _ACTIVATION_CONTEXT *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        _QWORD *a7)
{
  unsigned int v7; // ebx
  int v9; // eax

  v7 = 0;
  if ( a7 )
    *a7 = 0LL;
  if ( a6 < 0x10 )
  {
    if ( a7 )
      *a7 = 16LL;
    return (unsigned int)-1073741789;
  }
  else
  {
    if ( a3 )
      v9 = *(_DWORD *)(a3 + 28);
    else
      v9 = 0;
    *(_DWORD *)(a5 + 8) = v9;
    if ( (a1 & 1) == 0 )
      RtlAddRefActivationContext(a2);
    *(_QWORD *)a5 = a2;
    if ( a7 )
      *a7 = 16LL;
  }
  return v7;
}
