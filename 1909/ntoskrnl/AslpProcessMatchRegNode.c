/*
 * XREFs of AslpProcessMatchRegNode @ 0x1409284C8
 * Callers:
 *     AslRegWildcardFindNext @ 0x140927DF0 (AslRegWildcardFindNext.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140002BC0 (RtlAppendUnicodeToString.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     AslAlloc @ 0x14070EABC (AslAlloc.c)
 *     AslStringPatternMatchW @ 0x14074C350 (AslStringPatternMatchW.c)
 *     AslRegistryGetKey @ 0x140775C00 (AslRegistryGetKey.c)
 *     AslRegistryEnumKey @ 0x140925E24 (AslRegistryEnumKey.c)
 *     AslRegistryOpenSubKey @ 0x140926044 (AslRegistryOpenSubKey.c)
 */

__int64 __fastcall AslpProcessMatchRegNode(__int64 a1, __int64 a2)
{
  wchar_t *Buffer; // rsi
  _QWORD *v4; // r14
  void *v5; // rcx
  int Key; // ebp
  __int64 v7; // rcx
  __int64 v8; // rax
  wchar_t *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  void *v12; // r15
  _WORD *v13; // rax
  int v14; // eax
  __int16 v15; // r11
  __int64 v16; // rax
  const WCHAR *v17; // rdx
  void *v18; // rcx
  UNICODE_STRING Destination; // [rsp+30h] [rbp-28h] BYREF

  Buffer = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  if ( *(_QWORD *)(a1 + 8) == a2 )
  {
    v4 = (_QWORD *)(a1 + 32);
    v5 = *(void **)(a1 + 32);
    if ( v5 )
    {
      ZwClose(v5);
      *v4 = 0LL;
      Key = -2147483622;
    }
    else
    {
      Key = AslRegistryGetKey(v4, *(const WCHAR **)(a1 + 24), 0x20019u, 1);
    }
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 24);
    v8 = -1LL;
    do
      ++v8;
    while ( *(_WORD *)(v7 + 2 * v8) );
    Destination.MaximumLength = 2 * (v8 + 261);
    v9 = (wchar_t *)AslAlloc(261LL, Destination.MaximumLength);
    v11 = *(_QWORD *)(a1 + 8);
    Buffer = v9;
    Destination.Buffer = v9;
    v12 = *(void **)(v11 + 32);
    while ( 1 )
    {
      *Buffer = 0;
      Key = AslRegistryEnumKey(Buffer, v10, v12, *(_DWORD *)(a1 + 40));
      if ( Key < 0 )
        break;
      v13 = *(_WORD **)(a1 + 24);
      ++*(_DWORD *)(a1 + 40);
      *v13 = 0;
      v14 = AslStringPatternMatchW(*(unsigned __int16 **)(a1 + 16), Buffer);
      **(_WORD **)(a1 + 24) = v15;
      if ( v14 )
      {
        v16 = -1LL;
        do
          ++v16;
        while ( Buffer[v16] );
        v17 = *(const WCHAR **)(a1 + 24);
        Destination.Length = 2 * v16;
        RtlAppendUnicodeToString(&Destination, v17);
        v18 = *(void **)(a1 + 32);
        if ( v18 )
        {
          ZwClose(v18);
          *(_QWORD *)(a1 + 32) = 0LL;
        }
        Buffer = Destination.Buffer;
        Key = AslRegistryOpenSubKey((PHANDLE)(a1 + 32), v12, Destination.Buffer);
        if ( Key >= 0 )
          goto LABEL_17;
      }
    }
    *(_DWORD *)(a1 + 40) = 0;
  }
LABEL_17:
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0x74705041u);
  return (unsigned int)Key;
}
