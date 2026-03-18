/*
 * XREFs of EditionHandleRawInput @ 0x1C00D1AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1C00D1B74 (-HandleRawInput@@YA-AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall EditionHandleRawInput(
        int a1,
        int a2,
        unsigned __int8 a3,
        char a4,
        int a5,
        __int64 *a6,
        __int16 a7,
        __int16 a8,
        int a9,
        __int64 a10)
{
  __int64 *v10; // r10
  unsigned int v11; // ebx
  __int16 v13; // cx
  _DWORD v14[2]; // [rsp+20h] [rbp-30h] BYREF
  __int16 v15; // [rsp+28h] [rbp-28h]
  int v16; // [rsp+2Ch] [rbp-24h]
  BOOL v17; // [rsp+30h] [rbp-20h]
  int v18; // [rsp+34h] [rbp-1Ch]
  __int64 v19; // [rsp+38h] [rbp-18h] BYREF
  int v20; // [rsp+40h] [rbp-10h]

  v10 = a6;
  v11 = 0;
  v14[0] = a1;
  v16 = a2;
  v17 = a4 == 0;
  v14[1] = a5;
  v15 = a3;
  v19 = 0LL;
  v20 = 0;
  if ( a6 )
  {
    v18 = 0;
  }
  else
  {
    WORD1(v19) = a7;
    v18 = 1;
    if ( (a8 & 0x100) != 0 )
      v13 = 2;
    else
      v13 = 0;
    v10 = &v19;
    WORD2(v19) = (a9 != 0) | v13;
  }
  LOBYTE(v11) = (unsigned int)HandleRawInput(a10, v10, v14) == 1;
  return v11;
}
