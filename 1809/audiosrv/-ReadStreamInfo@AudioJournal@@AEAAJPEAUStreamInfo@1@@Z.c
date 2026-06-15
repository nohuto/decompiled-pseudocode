/*
 * XREFs of ?ReadStreamInfo@AudioJournal@@AEAAJPEAUStreamInfo@1@@Z @ 0x180049898
 * Callers:
 *     ?Initialize@AudioJournal@@AEAAJXZ @ 0x180049700 (-Initialize@AudioJournal@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 */

__int64 __fastcall AudioJournal::ReadStreamInfo(AudioJournal *this, struct AudioJournal::StreamInfo *pvData)
{
  unsigned int v2; // edi
  const WCHAR *v3; // r8
  DWORD v4; // eax
  LSTATUS ValueW; // eax
  signed int v6; // ebx
  unsigned int v7; // r10d
  bool v8; // dl
  struct AudioJournal::StreamInfo *v9; // r9
  int v10; // eax
  __int64 v11; // r8
  struct AudioJournal::StreamInfo *v12; // rdx
  __int64 v14; // rdx
  int pdwType; // [rsp+20h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  DWORD Size; // [rsp+60h] [rbp+20h]
  DWORD pcbData; // [rsp+70h] [rbp+30h] BYREF

  v2 = 0;
  Size = 0;
  pcbData = 0;
  if ( pvData == (struct AudioJournal::StreamInfo *)&unk_1801B3CF8 )
  {
    v3 = L"Render";
    v4 = 600;
  }
  else if ( pvData == (struct AudioJournal::StreamInfo *)&unk_1801B3F50 )
  {
    v3 = L"Capture";
    v4 = 400;
  }
  else
  {
    if ( pvData != (struct AudioJournal::StreamInfo *)&unk_1801B40E0 )
    {
      v6 = -2147024809;
      v14 = 409LL;
      goto LABEL_25;
    }
    v3 = L"UnknownStream";
    v4 = 200;
  }
  Size = v4;
  pcbData = v4;
  ValueW = RegGetValueW(HKEY_LOCAL_MACHINE, &word_1801B41A8, v3, 8u, 0LL, pvData, &pcbData);
  v6 = ValueW;
  if ( (ValueW & 0xFFFFFFFD) != 0 )
  {
    if ( ValueW > 0 )
      v6 = (unsigned __int16)ValueW | 0x80070000;
    if ( v6 >= 0 )
      goto LABEL_26;
    v14 = 414LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
      (const char *)(unsigned int)v6,
      pdwType);
LABEL_26:
    v2 = v6;
    memset_0(pvData, 0, Size);
    return v2;
  }
  if ( pcbData != Size )
  {
    v6 = -2147418113;
    v14 = 420LL;
    goto LABEL_25;
  }
  v7 = 0;
  v8 = 0;
  if ( Size / 0xC8 )
  {
    v9 = pvData;
    while ( !v8 )
    {
      v10 = 0;
      v11 = 0LL;
      v12 = v9;
      do
      {
        if ( !*(_WORD *)v12 )
          break;
        ++v10;
        ++v11;
        v12 = (struct AudioJournal::StreamInfo *)((char *)v12 + 2);
      }
      while ( v11 <= 70 );
      ++v7;
      v9 = (struct AudioJournal::StreamInfo *)((char *)v9 + 200);
      v8 = v10 > 70;
      if ( v7 >= Size / 0xC8 )
      {
        if ( v10 <= 70 )
          return v2;
        break;
      }
    }
    v6 = -2147418113;
    v14 = 438LL;
    goto LABEL_25;
  }
  return v2;
}
