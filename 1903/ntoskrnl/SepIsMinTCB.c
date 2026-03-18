/*
 * XREFs of SepIsMinTCB @ 0x1406185D0
 * Callers:
 *     SeQuerySigningPolicy @ 0x140618430 (SeQuerySigningPolicy.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1400064D0 (PsGetCurrentServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x14008D470 (PsGetServerSiloGlobals.c)
 *     SepIsImageInMinTcbList @ 0x140619B44 (SepIsImageInMinTcbList.c)
 *     RtlPrefixUnicodeString @ 0x140653340 (RtlPrefixUnicodeString.c)
 *     SepSetSystemPaths @ 0x140780E34 (SepSetSystemPaths.c)
 */

__int64 __fastcall SepIsMinTCB(
        PCUNICODE_STRING String2,
        unsigned int a2,
        char a3,
        char a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned __int64 CurrentServerSilo; // rax
  volatile signed __int64 *ServerSiloGlobals; // rax
  char *v13; // rsi
  const UNICODE_STRING *v14; // r14
  unsigned int v15; // eax
  unsigned __int16 Length; // si
  __int64 v17; // rbp
  wchar_t *Buffer; // r15
  int IsImageInMinTcbList; // ecx
  int v21; // [rsp+20h] [rbp-68h]
  int v22; // [rsp+28h] [rbp-60h]
  __int64 v23; // [rsp+50h] [rbp-38h] BYREF
  wchar_t *v24; // [rsp+58h] [rbp-30h]

  v23 = 0LL;
  v24 = 0LL;
  CurrentServerSilo = PsGetCurrentServerSilo();
  ServerSiloGlobals = (volatile signed __int64 *)PsGetServerSiloGlobals(CurrentServerSilo);
  v13 = (char *)(ServerSiloGlobals + 92);
  if ( !_InterlockedCompareExchange64(ServerSiloGlobals + 96, 0LL, 0LL) )
  {
    IsImageInMinTcbList = SepSetSystemPaths(v13);
    if ( IsImageInMinTcbList < 0 )
      return (unsigned int)IsImageInMinTcbList;
  }
  if ( !String2 )
    return (unsigned int)-1073741275;
  v14 = (const UNICODE_STRING *)*((_QWORD *)v13 + 4);
  v15 = 42;
  Length = v14->Length;
  if ( v14->Length < 0x2Au )
    v15 = Length;
  v17 = String2->Length;
  if ( (unsigned int)v17 <= v15 )
    return (unsigned int)-1073741275;
  Buffer = String2->Buffer;
  if ( Buffer[1] == 63 )
  {
    if ( !RtlPrefixUnicodeString(v14, String2, 1u) && !RtlPrefixUnicodeString(v14 + 1, String2, 1u) )
      return (unsigned int)-1073741275;
  }
  else
  {
    if ( !RtlPrefixUnicodeString(&stru_14036F098, String2, 1u) && !RtlPrefixUnicodeString(&stru_140375EE8, String2, 1u) )
      return (unsigned int)-1073741275;
    Length = 42;
  }
  LOWORD(v23) = v17 - Length;
  WORD1(v23) = v17 - Length;
  v24 = &Buffer[(v17 - (unsigned __int64)(unsigned __int16)(v17 - Length)) >> 1];
  IsImageInMinTcbList = SepIsImageInMinTcbList(&SeMsMinTCBList, 15LL, &v23, a2, a3, a4, a5, a6, a7);
  if ( IsImageInMinTcbList < 0
    && (SeCiDebugOptions & 1) == 0
    && (_BYTE)KdDebuggerEnabled
    && !(_BYTE)KdDebuggerNotPresent )
  {
    LOBYTE(v22) = a4;
    LOBYTE(v21) = a3;
    return (unsigned int)SepIsImageInMinTcbList(L" \"", 9LL, &v23, a2, v21, v22, a5, a6, a7);
  }
  return (unsigned int)IsImageInMinTcbList;
}
