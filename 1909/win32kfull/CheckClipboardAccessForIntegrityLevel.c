/*
 * XREFs of CheckClipboardAccessForIntegrityLevel @ 0x1C0059110
 * Callers:
 *     FindClipFormat @ 0x1C005829C (FindClipFormat.c)
 *     CountNumClipFormatForIL @ 0x1C0059098 (CountNumClipFormatForIL.c)
 *     _GetPriorityClipboardFormat @ 0x1C020DF58 (_GetPriorityClipboardFormat.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x1C022EBF0 (NtUserGetUpdatedClipboardFormats.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckClipboardAccessForIntegrityLevel(unsigned int a1, __int64 a2)
{
  unsigned int *v2; // r9
  unsigned int i; // r8d
  __int64 v4; // rdx
  int v5; // eax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v7 = a2;
  v8 = 0LL;
  v2 = (unsigned int *)&unk_1C031F068;
  for ( i = 0; i < 5; ++i )
  {
    if ( a1 >= *v2 && a1 < *((_DWORD *)&gaClipILDef + 6 * i + 8) )
      break;
    v2 += 6;
  }
  if ( i > 4 )
  {
LABEL_10:
    LODWORD(v8) = dword_1C031F0E0;
    v5 = dword_1C031F0E4;
  }
  else
  {
    while ( 1 )
    {
      v4 = i + 1;
      if ( *((_DWORD *)&gaClipILDef + 6 * v4 + 5) )
        break;
      ++i;
      if ( (unsigned int)v4 >= 5 )
        goto LABEL_10;
    }
    LODWORD(v8) = *((_DWORD *)&gaClipILDef + 6 * i + 2);
    v5 = *((_DWORD *)&gaClipILDef + 6 * i + 3);
  }
  HIDWORD(v8) = v5;
  return (unsigned __int8)CheckAccess(&v8, &v7);
}
