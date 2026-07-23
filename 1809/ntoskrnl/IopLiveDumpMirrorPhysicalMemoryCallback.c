/*
 * XREFs of IopLiveDumpMirrorPhysicalMemoryCallback @ 0x14057A230
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetBitsEx @ 0x14008AF10 (RtlSetBitsEx.c)
 *     MmTryIdentifyPage @ 0x1402AA834 (MmTryIdentifyPage.c)
 *     RtlFindNextForwardRunClearEx @ 0x1402EEC00 (RtlFindNextForwardRunClearEx.c)
 */

__int64 __fastcall IopLiveDumpMirrorPhysicalMemoryCallback(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  unsigned __int64 NextForwardRunClear; // rax
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // r12
  __int64 v13; // rcx
  _QWORD v15[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+40h] [rbp-38h]
  unsigned __int64 v18; // [rsp+80h] [rbp+8h] BYREF

  v2 = IopLiveDumpContext;
  v3 = a1 >> 12;
  v4 = *(_QWORD *)(IopLiveDumpContext + 400);
  v5 = (a2 >> 12) + ((a2 & 0xFFF) != 0);
  v6 = v5 + v3 - 1;
  if ( v3 < v4 )
  {
    if ( v6 >= v4 )
    {
      v6 = v4 - 1;
      v5 = v4 - v3;
    }
    if ( v5 )
    {
      v15[0] = v6 + 1;
      v15[1] = *(_QWORD *)(IopLiveDumpContext + 408);
      while ( 1 )
      {
        NextForwardRunClear = RtlFindNextForwardRunClearEx((__int64)v15, v3, &v18);
        v8 = v18;
        v9 = NextForwardRunClear;
        v10 = NextForwardRunClear ? v18 - v3 : v5;
        if ( v10 )
          break;
LABEL_20:
        if ( v5 <= v10 + v9 )
        {
          v5 = 0LL;
        }
        else
        {
          v5 -= v10 + v9;
          v3 = v9 + v8;
        }
        if ( !v5 )
          return 0LL;
      }
      v11 = v3;
      v12 = v10;
      while ( 1 )
      {
        v16[0] = 0LL;
        v16[1] = 0LL;
        v17 = 0LL;
        if ( !(unsigned int)MmTryIdentifyPage(v11, v16) || (v16[0] & 0x70) < 0x60 )
          goto LABEL_19;
        if ( v17 < 0xFFFF800000000000uLL )
        {
          if ( (*(_DWORD *)(v2 + 40) & 4) == 0 || v17 - 1 > 0x7FFFFFFEFFFELL )
            goto LABEL_19;
          v13 = v2 + 464;
        }
        else
        {
          v13 = v2 + 424;
        }
        RtlSetBitsEx(v13, v11, 1uLL);
LABEL_19:
        ++v11;
        if ( !--v12 )
          goto LABEL_20;
      }
    }
  }
  return 0LL;
}
