/*
 * XREFs of IopLiveDumpPopulateBitmapForDump @ 0x1405A9234
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x1405A8710 (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     RtlSetBitsEx @ 0x140073620 (RtlSetBitsEx.c)
 *     RtlFindSetBitsEx @ 0x140117C20 (RtlFindSetBitsEx.c)
 *     MmRemoveSystemCacheFromDump @ 0x1402C624C (MmRemoveSystemCacheFromDump.c)
 *     RtlFindNextForwardRunClearEx @ 0x14030CB70 (RtlFindNextForwardRunClearEx.c)
 */

void __fastcall IopLiveDumpPopulateBitmapForDump(__int64 a1)
{
  __int64 v1; // r15
  _RTL_BITMAP_EX *v2; // r13
  unsigned __int64 v4; // r14
  _RTL_BITMAP_EX *v5; // rsi
  ULONG64 SetBits; // rdi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+28h] [rbp-40h]
  ULONG_PTR BugCheckParameter2[5]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16; // [rsp+58h] [rbp-10h]
  ULONG64 v17; // [rsp+B0h] [rbp+48h] BYREF
  unsigned __int64 v18; // [rsp+B8h] [rbp+50h] BYREF
  unsigned __int64 NextForwardRunClear; // [rsp+C0h] [rbp+58h]
  ULONG64 v20; // [rsp+C8h] [rbp+60h]

  v1 = a1 + 368;
  v16 = 0LL;
  v2 = (_RTL_BITMAP_EX *)(a1 + 424);
  BugCheckParameter2[3] = 0LL;
  BugCheckParameter2[4] = 0LL;
  BugCheckParameter2[0] = 0LL;
  v4 = *(_QWORD *)(a1 + 368);
  v16 = 1LL;
  v13 = 0LL;
  v14 = 0LL;
  BugCheckParameter2[1] = (ULONG_PTR)IoFreeDumpRange;
  v20 = v4;
  BugCheckParameter2[2] = a1 + 424;
  MmRemoveSystemCacheFromDump((ULONG_PTR)BugCheckParameter2);
  v5 = v2;
  while ( v5 )
  {
    SetBits = RtlFindSetBitsEx(v5, 1uLL, 0LL);
    if ( SetBits != -1LL )
    {
      do
      {
        NextForwardRunClear = RtlFindNextForwardRunClearEx((__int64)v5, SetBits, &v18);
        if ( NextForwardRunClear )
          v4 = v18;
        v7 = v4 - SetBits;
        if ( (*(_DWORD *)(a1 + 80) & 1) != 0 )
        {
          RtlSetBitsEx(v1, SetBits, v7);
        }
        else
        {
          v17 = SetBits;
          v13 = v7 + SetBits;
          v8 = SetBits;
          v14 = *(_QWORD *)(a1 + 376);
          do
          {
            v9 = RtlFindNextForwardRunClearEx((__int64)&v13, v8, &v17);
            if ( !v9 )
              break;
            v10 = *(_QWORD *)(a1 + 496);
            if ( v9 > v10 )
            {
              *(_DWORD *)(a1 + 80) |= 2u;
              v9 = v10;
            }
            v11 = v17;
            if ( v9 )
            {
              RtlSetBitsEx((__int64)&v13, v17, v9);
              *(_QWORD *)(a1 + 496) -= v9;
            }
            if ( (*(_DWORD *)(a1 + 80) & 2) != 0 )
              return;
            v8 = v9 + v11;
            v17 = v8;
          }
          while ( v8 < v7 + SetBits );
          v1 = a1 + 368;
        }
        v12 = v7 + NextForwardRunClear;
        v4 = v20;
        SetBits += v12;
      }
      while ( SetBits < v20 );
    }
    if ( v5 == v2 && (*(_DWORD *)(a1 + 40) & 4) != 0 )
      v5 = (_RTL_BITMAP_EX *)(a1 + 464);
    else
      v5 = 0LL;
  }
}
