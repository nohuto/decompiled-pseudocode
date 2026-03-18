/*
 * XREFs of strncpycch @ 0x1C025A824
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C00A0510 (xxxInterSendMsgEx.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C00E39A0 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     SfnOUTSTRING @ 0x1C00F1120 (SfnOUTSTRING.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall strncpycch(_BYTE *a1, __int64 a2, int a3)
{
  int v3; // r9d
  __int64 v4; // rdx
  char v5; // al

  v3 = (int)a1;
  if ( a3 )
  {
    v4 = a2 - (_QWORD)a1;
    do
    {
      v5 = a1[v4];
      *a1++ = v5;
      if ( !v5 )
        break;
      --a3;
    }
    while ( a3 );
  }
  return (unsigned int)((_DWORD)a1 - v3);
}
