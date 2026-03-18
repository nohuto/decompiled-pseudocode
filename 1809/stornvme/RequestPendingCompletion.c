/*
 * XREFs of RequestPendingCompletion @ 0x1C00060D0
 * Callers:
 *     NVMeHwMSIInterrupt @ 0x1C0005FB0 (NVMeHwMSIInterrupt.c)
 *     NVMeHwInterrupt @ 0x1C000B220 (NVMeHwInterrupt.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00180C4 (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     GetSrbExtension @ 0x1C0005118 (GetSrbExtension.c)
 *     IsInternalSrb @ 0x1C000ABFC (IsInternalSrb.c)
 */

_BOOL8 __fastcall RequestPendingCompletion(__int64 a1, unsigned __int16 a2)
{
  __int64 v3; // rbx
  _WORD *v4; // rax
  bool v5; // di
  __int16 v7; // dx
  __int64 v8; // r10
  unsigned int v9; // r8d
  __int16 v10; // dx
  unsigned __int16 v11; // bp
  __int16 v12; // r15
  unsigned __int16 v13; // cx
  unsigned __int16 v14; // dx
  unsigned __int16 v15; // r12
  __int64 *v16; // rax
  __int64 v17; // rax
  __int64 v18; // r11
  __int64 SrbExtension; // r14
  __int64 v20; // [rsp+60h] [rbp+18h] BYREF

  if ( a2 == 0xFFFF )
  {
    v3 = a1 + 408;
    v4 = (_WORD *)(*(_QWORD *)(a1 + 408) + 16LL * *(unsigned __int16 *)(a1 + 578));
    v7 = v4[7] & 1;
    v5 = v7 != *(_WORD *)(a1 + 580);
    if ( v7 == *(_WORD *)(a1 + 580) )
    {
      v8 = *(_QWORD *)(a1 + 760);
      v9 = 0;
      if ( v8 )
      {
        while ( v9 < *(unsigned __int16 *)(a1 + 266) )
        {
          v3 = v8 + 344LL * v9;
          v4 = (_WORD *)(*(_QWORD *)v3 + 16LL * *(unsigned __int16 *)(v3 + 170));
          v10 = v4[7] & 1;
          v5 = v10 != *(_WORD *)(v3 + 172);
          if ( v10 != *(_WORD *)(v3 + 172) )
            break;
          ++v9;
        }
      }
    }
  }
  else
  {
    if ( a2 )
      v3 = 344LL * a2 + *(_QWORD *)(a1 + 760) - 344LL;
    else
      v3 = a1 + 408;
    v4 = (_WORD *)(*(_QWORD *)v3 + 16LL * *(unsigned __int16 *)(v3 + 170));
    v5 = (v4[7] & 1) != *(_WORD *)(v3 + 172);
  }
  if ( !v5 || (*(_DWORD *)(a1 + 104) & 2) == 0 )
    return v5;
  v11 = *(_WORD *)(v3 + 170);
  v12 = *(_WORD *)(v3 + 172);
  if ( (v4[7] & 1) == v12 )
    return v5;
  do
  {
    v13 = v4[5];
    v14 = v4[6];
    if ( *(_WORD *)(v3 + 168) && (*(_DWORD *)(a1 + 20) & 1) == 0 )
      break;
    if ( v13 )
    {
      v15 = *(_WORD *)(a1 + 262);
      v16 = (__int64 *)(136LL * v13 + *(_QWORD *)(a1 + 752) - 104LL);
    }
    else
    {
      v15 = *(_WORD *)(a1 + 260);
      v16 = (__int64 *)(a1 + 304);
    }
    v17 = *v16;
    if ( !*(_QWORD *)(v17 + 16LL * v14) || (unsigned __int8)IsInternalSrb(a1, *(_QWORD *)(v17 + 16LL * v14)) )
      break;
    SrbExtension = GetSrbExtension(v18);
    if ( *(_QWORD *)(SrbExtension + 4160) )
    {
      v20 = 0LL;
      StorPortExtendedFunction(47LL, a1, 0LL, &v20);
      *(_QWORD *)(SrbExtension + 4176) = v20;
    }
    if ( v11 >= v15 - 1 )
    {
      v11 = 0;
      v12 = v12 != 1;
    }
    else
    {
      ++v11;
    }
    v4 = (_WORD *)(*(_QWORD *)v3 + 16LL * v11);
  }
  while ( (v4[7] & 1) != v12 );
  return v5;
}
