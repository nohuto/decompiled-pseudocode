/*
 * XREFs of AMLIReadNamespaceOverrideObject @ 0x1C0062BCC
 * Callers:
 *     AsyncEvalObject @ 0x1C0005370 (AsyncEvalObject.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C00038B0 (DereferenceObjectEx.c)
 *     ReadObject @ 0x1C000B1A0 (ReadObject.c)
 *     AMLIGetNamespaceOverrideObject @ 0x1C0062A44 (AMLIGetNamespaceOverrideObject.c)
 */

__int64 __fastcall AMLIReadNamespaceOverrideObject(__int64 a1, __int64 a2, __int64 a3)
{
  int Object; // edi
  unsigned __int64 v6; // rbx
  unsigned __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  Object = AMLIGetNamespaceOverrideObject(a2, (__int64 *)&v8);
  if ( Object >= 0 )
  {
    v6 = v8;
    Object = ReadObject(a1, v8 + 64, a3);
    DereferenceObjectEx(v6);
  }
  return (unsigned int)Object;
}
