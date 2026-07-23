/*
 * XREFs of RtlpGetNameFromLangInfoNode @ 0x14018E078
 * Callers:
 *     _RtlpMuiRegValidateInstalled @ 0x140765F14 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyW @ 0x140099C00 (RtlStringCbCopyW.c)
 *     RtlLCIDToCultureName @ 0x1408D4D20 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall RtlpGetNameFromLangInfoNode(__int64 a1, __int64 a2, UNICODE_STRING *a3)
{
  unsigned int v3; // ebx
  __int16 v5; // ax
  __int64 v6; // r8
  unsigned __int16 MaximumLength; // ax
  unsigned __int16 Length; // si
  unsigned __int16 v10; // cx
  UNICODE_STRING v11; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  if ( a1 && a2 && a3 )
  {
    v5 = *(_WORD *)(a2 + 6);
    if ( v5 <= 0 )
    {
      v10 = *(_WORD *)(a2 + 4);
      if ( ((v10 - 4096) & 0xFBFF) != 0 && RtlLCIDToCultureName(v10, a3) )
        return v3;
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 32);
      *(_QWORD *)&v11.Length = 0LL;
      v11.Buffer = 0LL;
      RtlInitUnicodeString(&v11, (PCWSTR)(*(_QWORD *)(v6 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v6 + 16) + 2LL * v5)));
      MaximumLength = a3->MaximumLength;
      Length = v11.Length;
      if ( v11.Length <= MaximumLength && RtlStringCbCopyW(a3->Buffer, MaximumLength, v11.Buffer) >= 0 )
      {
        a3->Length = Length;
        return v3;
      }
    }
    return (unsigned int)-1073741595;
  }
  return 3221225485LL;
}
