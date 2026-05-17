/*
 * XREFs of RtlImageNtHeaderEx_ExceptionFilter @ 0x1800F8C24
 * Callers:
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlImageNtHeaderEx_ExceptionFilter(char a1)
{
  return ((unsigned __int8)~a1 >> 1) & 1;
}
