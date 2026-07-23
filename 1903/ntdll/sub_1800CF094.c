/*
 * XREFs of sub_1800CF094 @ 0x1800CF094
 * Callers:
 *     LdrQueryOptionalDelayLoadedAPI @ 0x1800CEF90 (LdrQueryOptionalDelayLoadedAPI.c)
 * Callees:
 *     sub_18001C4DC @ 0x18001C4DC (sub_18001C4DC.c)
 *     sub_1800CF140 @ 0x1800CF140 (sub_1800CF140.c)
 */

__int64 __fastcall sub_1800CF094(unsigned __int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rsi
  NTSTATUS v7; // eax
  __int64 v8; // r15
  unsigned int v9; // edi
  DWORD v10; // ebx
  DWORD v12; // [rsp+80h] [rbp+18h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  *a3 = 0LL;
  v6 = 0LL;
  v7 = sub_18001C4DC(a1, 1, 0xDu, &v12, &v13);
  v8 = v13;
  if ( v7 < 0 )
    v8 = 0LL;
  if ( v8 )
  {
    v9 = 0;
    v10 = v12 >> 5;
    if ( v12 >> 5 )
    {
      while ( 1 )
      {
        v6 = sub_1800CF140(a1, v8 + 32LL * v9, a2);
        if ( v6 )
          break;
        if ( ++v9 >= v10 )
          return v6;
      }
      *a3 = v8 + 32LL * v9;
    }
  }
  return v6;
}
