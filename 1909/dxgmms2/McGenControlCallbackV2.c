/*
 * XREFs of McGenControlCallbackV2 @ 0x1C0014CC0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0018980 (memset.c)
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C00825D4 (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall McGenControlCallbackV2(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        PVOID CallbackContext)
{
  unsigned __int8 v7; // cl
  __int64 v8; // rdx
  bool v9; // r11
  int v10; // edx
  unsigned int Data1; // eax
  unsigned __int16 v12; // ax

  if ( CallbackContext )
  {
    if ( ControlCode )
    {
      if ( ControlCode == 1 )
      {
        *((_BYTE *)CallbackContext + 40) = Level;
        *(_QWORD *)&Level = 0LL;
        *((_QWORD *)CallbackContext + 3) = MatchAllKeyword;
        *((_QWORD *)CallbackContext + 2) = MatchAnyKeyword;
        *((_DWORD *)CallbackContext + 9) = 1;
        if ( *((_WORD *)CallbackContext + 21) )
        {
          do
          {
            v7 = *((_BYTE *)CallbackContext + 40);
            v9 = 0;
            if ( *(_BYTE *)(Level + *((_QWORD *)CallbackContext + 8)) <= v7 || !v7 )
            {
              v8 = *(_QWORD *)(*((_QWORD *)CallbackContext + 7) + 8LL * Level);
              if ( !v8
                || (v8 & *((_QWORD *)CallbackContext + 2)) != 0
                && (v8 & *((_QWORD *)CallbackContext + 3)) == *((_QWORD *)CallbackContext + 3) )
              {
                v9 = 1;
              }
            }
            v10 = 1 << (Level & 0x1F);
            SourceId = (LPCGUID)(*((_QWORD *)CallbackContext + 6) + 4 * ((unsigned __int64)Level >> 5));
            Data1 = SourceId->Data1;
            if ( v9 )
              ControlCode = Data1 | v10;
            else
              ControlCode = Data1 & ~v10;
            SourceId->Data1 = ControlCode;
            *(_QWORD *)&Level = (unsigned int)(Level + 1);
          }
          while ( Level < (unsigned int)*((unsigned __int16 *)CallbackContext + 21) );
        }
      }
    }
    else
    {
      v12 = *((_WORD *)CallbackContext + 21);
      *((_DWORD *)CallbackContext + 9) = 0;
      *((_BYTE *)CallbackContext + 40) = 0;
      *((_QWORD *)CallbackContext + 2) = 0LL;
      *((_QWORD *)CallbackContext + 3) = 0LL;
      if ( v12 )
        memset(*((void **)CallbackContext + 6), 0, 4LL * ((v12 - 1) / 32 + 1));
    }
    DxgkEtwEnableCallback((unsigned int)SourceId, ControlCode, Level);
  }
}
