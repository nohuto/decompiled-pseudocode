/*
 * XREFs of ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0058030
 * Callers:
 *     xxxCloseClipboard @ 0x1C0058D90 (xxxCloseClipboard.c)
 *     xxxDisownClipboard @ 0x1C00FF454 (xxxDisownClipboard.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C00559FC (HMValidateHandleNoRip.c)
 *     InternalSetClipboardData @ 0x1C0057E58 (InternalSetClipboardData.c)
 *     FindClipFormat @ 0x1C005829C (FindClipFormat.c)
 *     _ConvertMemHandle @ 0x1C0110270 (_ConvertMemHandle.c)
 *     ?PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C020D66C (-PasteScreenPalette@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 */

void __fastcall MungeClipData(struct tagWINDOWSTATION *a1)
{
  __int64 ClipFormat; // r14
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rax
  int Src; // [rsp+58h] [rbp+10h] BYREF

  ClipFormat = FindClipFormat(a1, 1LL, 1LL);
  v3 = FindClipFormat(a1, 7LL, 1LL);
  v4 = FindClipFormat(a1, 13LL, 1LL);
  v5 = v4;
  if ( ClipFormat || v3 || v4 )
  {
    if ( !FindClipFormat(a1, 16LL, 1LL) )
    {
      v11 = *(_QWORD *)(gptiCurrent + 432LL);
      if ( v11 )
      {
        Src = *(unsigned __int16 *)(v11 + 40);
        v12 = ConvertMemHandle(&Src, 4uLL);
        v13 = v12;
        if ( v12 )
        {
          if ( !(unsigned int)InternalSetClipboardData((__int64)a1, 16LL, v12, 0LL, 1) )
          {
            v15 = HMValidateHandleNoRip(v13, 6);
            if ( v15 )
              HMUnlockDestroyObject(v15);
          }
        }
      }
    }
    if ( !ClipFormat )
      InternalSetClipboardData((__int64)a1, 1LL, 1LL, 0LL, 1);
    if ( !v3 )
      InternalSetClipboardData((__int64)a1, 7LL, 1LL, 0LL, 1);
    if ( !v5 )
      InternalSetClipboardData((__int64)a1, 13LL, 1LL, 0LL, 1);
  }
  if ( !FindClipFormat(a1, 3LL, 1LL) )
  {
    v6 = FindClipFormat(a1, 14LL, 1LL);
    if ( v6 )
    {
      v14 = 3LL;
LABEL_30:
      InternalSetClipboardData((__int64)a1, v14, (*(_QWORD *)(v6 + 8) != 0LL) + 3LL, 0LL, 1);
      goto LABEL_8;
    }
  }
  if ( !FindClipFormat(a1, 14LL, 1LL) )
  {
    v6 = FindClipFormat(a1, 3LL, 1LL);
    if ( v6 )
    {
      v14 = 14LL;
      goto LABEL_30;
    }
  }
LABEL_8:
  v7 = FindClipFormat(a1, 2LL, 1LL);
  v8 = FindClipFormat(a1, 8LL, 1LL);
  v9 = FindClipFormat(a1, 17LL, 1LL);
  v10 = v9;
  if ( !v7 )
  {
    if ( !v8 && !v9 )
      return;
    InternalSetClipboardData((__int64)a1, 2LL, 2LL, 0LL, 1);
  }
  if ( !v8 )
    InternalSetClipboardData((__int64)a1, 8LL, 2LL, 0LL, 1);
  if ( !v10 )
    InternalSetClipboardData((__int64)a1, 17LL, 2LL, 0LL, 1);
  if ( (*(_DWORD *)(gpsi + 7004LL) & 1) != 0 && !FindClipFormat(a1, 9LL, 1LL) )
  {
    if ( v8 || v10 )
      InternalSetClipboardData((__int64)a1, 9LL, 2LL, 0LL, 1);
    else
      PasteScreenPalette(a1);
  }
}
