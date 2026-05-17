/*
 * XREFs of RtlStringCbCopyW @ 0x180016F74
 * Callers:
 *     RtlLCIDToCultureName @ 0x180016330 (RtlLCIDToCultureName.c)
 *     RtlGetVersion @ 0x18002D230 (RtlGetVersion.c)
 *     RtlInstallFunctionTableCallback @ 0x180065170 (RtlInstallFunctionTableCallback.c)
 *     SwitchedRtlGetVersion @ 0x18007332C (SwitchedRtlGetVersion.c)
 *     RtlCreateTagHeap @ 0x18007CBA0 (RtlCreateTagHeap.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1800820E0 (RtlpGetNameFromLangInfoNode.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D7550 (RtlQueryProcessHeapInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCbCopyW(_WORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdx
  signed int v4; // r9d
  unsigned __int64 v5; // r10
  __int64 v6; // r8
  __int16 v7; // ax
  _WORD *v8; // rax

  v3 = a2 >> 1;
  v4 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 < 0 )
  {
    if ( v3 )
      *a1 = 0;
  }
  else
  {
    if ( v3 )
    {
      v5 = 2147483646 - v3;
      v6 = a3 - (_QWORD)a1;
      do
      {
        if ( !(v5 + v3) )
          break;
        v7 = *(_WORD *)((char *)a1 + v6);
        if ( !v7 )
          break;
        *a1++ = v7;
        --v3;
      }
      while ( v3 );
    }
    v8 = a1 - 1;
    if ( v3 )
      v8 = a1;
    v4 = v3 == 0 ? 0x80000005 : 0;
    *v8 = 0;
  }
  return (unsigned int)v4;
}
